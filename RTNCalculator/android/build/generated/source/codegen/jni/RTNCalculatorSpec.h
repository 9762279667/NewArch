
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleJniH.js
 */

#pragma once

#include <ReactCommon/JavaTurboModule.h>
#include <ReactCommon/TurboModule.h>
#include <jsi/jsi.h>

namespace facebook {
namespace react {

/**
 * JNI C++ class for module 'NativeCalculator'
 */
class JSI_EXPORT NativeCalculatorSpecJSI : public JavaTurboModule {
public:
  NativeCalculatorSpecJSI(const JavaTurboModule::InitParams &params);
};


JSI_EXPORT
std::shared_ptr<TurboModule> RTNCalculatorSpec_ModuleProvider(const std::string &moduleName, const JavaTurboModule::InitParams &params);

} // namespace react
} // namespace facebook
