/*
 * Since ther is not a wrapper for some global interfaces for methods like HTML5 API methods,
 * there should be added some "native" JS functionalities into the incubator project
 * in this link, https://github.com/BuckleTypes/bs-webapi-incubator
  let geolocation = Js.Global.navigator.geolocation (fun (geoposition) => Js.log geoposition);
 * 
 */

module Geolocation = {
  include ReactRe.Component;
  type props = {message: string};
  let name = "Geolocation";
  let someMessage = "asdasda";
  let render {props, state, updater, handler} => {
    <div>(ReactRe.stringToElement props.message)</div>;
  }
};

include ReactRe.CreateComponent Geolocation;

let createElement ::message => wrapProps {message: message};

/*
module Geolocation = {
  include ReactRe.Component.Stateful;
  type state = {
    lat: float, lng: float
  };
  type props = {
    message: string
  };
  let getInitialState _ /* props */ => {
    lat: 0.0,
    lng: 0.0
  };
  let name = "Geolocation";

  let componentDidMount {setState} => {
      let stateSetter {state} => {
        let now = Js.Date.now ();
      };
    setState stateSetter;
    None
  };

  let render {props, state, updater} => {
    <div> (ReactRe.stringToElement props.message) </div>;
  }
}

include ReactRe.CreateComponent Geolocation;

let createElement ::message => wrapProps {message: message};
*/