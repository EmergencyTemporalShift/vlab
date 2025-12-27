QMAKEOPTS=()
function qmake_os() {
  qmake "${QMAKEOPTS[@]}" "$@"
  return $?
}

function configureBase() {
  if ! qmake_os; then
    exit -1
  fi
}

function installScript() {
  cd Distribution
   
}
