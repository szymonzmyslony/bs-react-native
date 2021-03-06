type t;

external t : t = "AppRegistry" [@@bs.module "react-native"];

external _registerComponent : t => string => (unit => ReasonReact.reactClass) => unit =
  "registerComponent" [@@bs.send];

let registerComponent name comp => _registerComponent t name comp;