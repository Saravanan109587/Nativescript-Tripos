import { Observable } from 'tns-core-modules/data/observable';
import { Tripos } from 'nativescript-Tripos';

export class HelloWorldModel extends Observable {
  public message: string;
  private tripos: Tripos;

  constructor() {
    super();

    this.tripos = new Tripos();
    this.message = this.tripos.message;
  }
}
