var Tripos = require("nativescript-Tripos").Tripos;
var tripos = new Tripos();

describe("greet function", function() {
    it("exists", function() {
        expect(tripos.greet).toBeDefined();
    });

    it("returns a string", function() {
        expect(tripos.greet()).toEqual("Hello, NS");
    });
});