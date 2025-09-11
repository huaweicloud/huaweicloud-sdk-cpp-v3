

#include "huaweicloud/functiongraph/v2/model/CreateFunctionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateFunctionResponse::CreateFunctionResponse()
{
    funcId_ = "";
    funcIdIsSet_ = false;
    funcUrn_ = "";
    funcUrnIsSet_ = false;
    funcName_ = "";
    funcNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    package_ = "";
    packageIsSet_ = false;
    runtime_ = "";
    runtimeIsSet_ = false;
    timeout_ = 0;
    timeoutIsSet_ = false;
    handler_ = "";
    handlerIsSet_ = false;
    memorySize_ = 0;
    memorySizeIsSet_ = false;
    gpuMemory_ = 0;
    gpuMemoryIsSet_ = false;
    cpu_ = 0;
    cpuIsSet_ = false;
    codeType_ = "";
    codeTypeIsSet_ = false;
    codeUrl_ = "";
    codeUrlIsSet_ = false;
    codeFilename_ = "";
    codeFilenameIsSet_ = false;
    codeSize_ = 0L;
    codeSizeIsSet_ = false;
    domainNames_ = "";
    domainNamesIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    encryptedUserData_ = "";
    encryptedUserDataIsSet_ = false;
    digest_ = "";
    digestIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    imageName_ = "";
    imageNameIsSet_ = false;
    xrole_ = "";
    xroleIsSet_ = false;
    appXrole_ = "";
    appXroleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    lastModified_ = utility::datetime();
    lastModifiedIsSet_ = false;
    funcVpcIsSet_ = false;
    mountConfigIsSet_ = false;
    reservedInstanceCount_ = 0;
    reservedInstanceCountIsSet_ = false;
    dependListIsSet_ = false;
    dependVersionListIsSet_ = false;
    strategyConfigIsSet_ = false;
    extendConfig_ = "";
    extendConfigIsSet_ = false;
    dependenciesIsSet_ = false;
    initializerHandler_ = "";
    initializerHandlerIsSet_ = false;
    initializerTimeout_ = 0;
    initializerTimeoutIsSet_ = false;
    preStopHandler_ = "";
    preStopHandlerIsSet_ = false;
    preStopTimeout_ = 0;
    preStopTimeoutIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    longTime_ = false;
    longTimeIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    enableCloudDebug_ = "";
    enableCloudDebugIsSet_ = false;
    enableDynamicMemory_ = false;
    enableDynamicMemoryIsSet_ = false;
    isStatefulFunction_ = false;
    isStatefulFunctionIsSet_ = false;
    customImageIsSet_ = false;
    isBridgeFunction_ = false;
    isBridgeFunctionIsSet_ = false;
    apigRouteEnable_ = false;
    apigRouteEnableIsSet_ = false;
    heartbeatHandler_ = "";
    heartbeatHandlerIsSet_ = false;
    enableClassIsolation_ = false;
    enableClassIsolationIsSet_ = false;
    gpuType_ = "";
    gpuTypeIsSet_ = false;
    allowEphemeralStorage_ = false;
    allowEphemeralStorageIsSet_ = false;
    ephemeralStorage_ = 0;
    ephemeralStorageIsSet_ = false;
    networkControllerIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    isReturnStream_ = false;
    isReturnStreamIsSet_ = false;
    enableAuthInHeader_ = false;
    enableAuthInHeaderIsSet_ = false;
    enableLtsLog_ = false;
    enableLtsLogIsSet_ = false;
    ltsCustomTagIsSet_ = false;
    userDataEncryptKmsKeyId_ = "";
    userDataEncryptKmsKeyIdIsSet_ = false;
    codeEncryptKmsKeyId_ = "";
    codeEncryptKmsKeyIdIsSet_ = false;
}

CreateFunctionResponse::~CreateFunctionResponse() = default;

void CreateFunctionResponse::validate()
{
}

web::json::value CreateFunctionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(funcIdIsSet_) {
        val[utility::conversions::to_string_t("func_id")] = ModelBase::toJson(funcId_);
    }
    if(funcUrnIsSet_) {
        val[utility::conversions::to_string_t("func_urn")] = ModelBase::toJson(funcUrn_);
    }
    if(funcNameIsSet_) {
        val[utility::conversions::to_string_t("func_name")] = ModelBase::toJson(funcName_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(packageIsSet_) {
        val[utility::conversions::to_string_t("package")] = ModelBase::toJson(package_);
    }
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
    }
    if(timeoutIsSet_) {
        val[utility::conversions::to_string_t("timeout")] = ModelBase::toJson(timeout_);
    }
    if(handlerIsSet_) {
        val[utility::conversions::to_string_t("handler")] = ModelBase::toJson(handler_);
    }
    if(memorySizeIsSet_) {
        val[utility::conversions::to_string_t("memory_size")] = ModelBase::toJson(memorySize_);
    }
    if(gpuMemoryIsSet_) {
        val[utility::conversions::to_string_t("gpu_memory")] = ModelBase::toJson(gpuMemory_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(codeTypeIsSet_) {
        val[utility::conversions::to_string_t("code_type")] = ModelBase::toJson(codeType_);
    }
    if(codeUrlIsSet_) {
        val[utility::conversions::to_string_t("code_url")] = ModelBase::toJson(codeUrl_);
    }
    if(codeFilenameIsSet_) {
        val[utility::conversions::to_string_t("code_filename")] = ModelBase::toJson(codeFilename_);
    }
    if(codeSizeIsSet_) {
        val[utility::conversions::to_string_t("code_size")] = ModelBase::toJson(codeSize_);
    }
    if(domainNamesIsSet_) {
        val[utility::conversions::to_string_t("domain_names")] = ModelBase::toJson(domainNames_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(encryptedUserDataIsSet_) {
        val[utility::conversions::to_string_t("encrypted_user_data")] = ModelBase::toJson(encryptedUserData_);
    }
    if(digestIsSet_) {
        val[utility::conversions::to_string_t("digest")] = ModelBase::toJson(digest_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(imageNameIsSet_) {
        val[utility::conversions::to_string_t("image_name")] = ModelBase::toJson(imageName_);
    }
    if(xroleIsSet_) {
        val[utility::conversions::to_string_t("xrole")] = ModelBase::toJson(xrole_);
    }
    if(appXroleIsSet_) {
        val[utility::conversions::to_string_t("app_xrole")] = ModelBase::toJson(appXrole_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }
    if(funcVpcIsSet_) {
        val[utility::conversions::to_string_t("func_vpc")] = ModelBase::toJson(funcVpc_);
    }
    if(mountConfigIsSet_) {
        val[utility::conversions::to_string_t("mount_config")] = ModelBase::toJson(mountConfig_);
    }
    if(reservedInstanceCountIsSet_) {
        val[utility::conversions::to_string_t("reserved_instance_count")] = ModelBase::toJson(reservedInstanceCount_);
    }
    if(dependListIsSet_) {
        val[utility::conversions::to_string_t("depend_list")] = ModelBase::toJson(dependList_);
    }
    if(dependVersionListIsSet_) {
        val[utility::conversions::to_string_t("depend_version_list")] = ModelBase::toJson(dependVersionList_);
    }
    if(strategyConfigIsSet_) {
        val[utility::conversions::to_string_t("strategy_config")] = ModelBase::toJson(strategyConfig_);
    }
    if(extendConfigIsSet_) {
        val[utility::conversions::to_string_t("extend_config")] = ModelBase::toJson(extendConfig_);
    }
    if(dependenciesIsSet_) {
        val[utility::conversions::to_string_t("dependencies")] = ModelBase::toJson(dependencies_);
    }
    if(initializerHandlerIsSet_) {
        val[utility::conversions::to_string_t("initializer_handler")] = ModelBase::toJson(initializerHandler_);
    }
    if(initializerTimeoutIsSet_) {
        val[utility::conversions::to_string_t("initializer_timeout")] = ModelBase::toJson(initializerTimeout_);
    }
    if(preStopHandlerIsSet_) {
        val[utility::conversions::to_string_t("pre_stop_handler")] = ModelBase::toJson(preStopHandler_);
    }
    if(preStopTimeoutIsSet_) {
        val[utility::conversions::to_string_t("pre_stop_timeout")] = ModelBase::toJson(preStopTimeout_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(longTimeIsSet_) {
        val[utility::conversions::to_string_t("long_time")] = ModelBase::toJson(longTime_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(enableCloudDebugIsSet_) {
        val[utility::conversions::to_string_t("enable_cloud_debug")] = ModelBase::toJson(enableCloudDebug_);
    }
    if(enableDynamicMemoryIsSet_) {
        val[utility::conversions::to_string_t("enable_dynamic_memory")] = ModelBase::toJson(enableDynamicMemory_);
    }
    if(isStatefulFunctionIsSet_) {
        val[utility::conversions::to_string_t("is_stateful_function")] = ModelBase::toJson(isStatefulFunction_);
    }
    if(customImageIsSet_) {
        val[utility::conversions::to_string_t("custom_image")] = ModelBase::toJson(customImage_);
    }
    if(isBridgeFunctionIsSet_) {
        val[utility::conversions::to_string_t("is_bridge_function")] = ModelBase::toJson(isBridgeFunction_);
    }
    if(apigRouteEnableIsSet_) {
        val[utility::conversions::to_string_t("apig_route_enable")] = ModelBase::toJson(apigRouteEnable_);
    }
    if(heartbeatHandlerIsSet_) {
        val[utility::conversions::to_string_t("heartbeat_handler")] = ModelBase::toJson(heartbeatHandler_);
    }
    if(enableClassIsolationIsSet_) {
        val[utility::conversions::to_string_t("enable_class_isolation")] = ModelBase::toJson(enableClassIsolation_);
    }
    if(gpuTypeIsSet_) {
        val[utility::conversions::to_string_t("gpu_type")] = ModelBase::toJson(gpuType_);
    }
    if(allowEphemeralStorageIsSet_) {
        val[utility::conversions::to_string_t("allow_ephemeral_storage")] = ModelBase::toJson(allowEphemeralStorage_);
    }
    if(ephemeralStorageIsSet_) {
        val[utility::conversions::to_string_t("ephemeral_storage")] = ModelBase::toJson(ephemeralStorage_);
    }
    if(networkControllerIsSet_) {
        val[utility::conversions::to_string_t("network_controller")] = ModelBase::toJson(networkController_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(isReturnStreamIsSet_) {
        val[utility::conversions::to_string_t("is_return_stream")] = ModelBase::toJson(isReturnStream_);
    }
    if(enableAuthInHeaderIsSet_) {
        val[utility::conversions::to_string_t("enable_auth_in_header")] = ModelBase::toJson(enableAuthInHeader_);
    }
    if(enableLtsLogIsSet_) {
        val[utility::conversions::to_string_t("enable_lts_log")] = ModelBase::toJson(enableLtsLog_);
    }
    if(ltsCustomTagIsSet_) {
        val[utility::conversions::to_string_t("lts_custom_tag")] = ModelBase::toJson(ltsCustomTag_);
    }
    if(userDataEncryptKmsKeyIdIsSet_) {
        val[utility::conversions::to_string_t("user_data_encrypt_kms_key_id")] = ModelBase::toJson(userDataEncryptKmsKeyId_);
    }
    if(codeEncryptKmsKeyIdIsSet_) {
        val[utility::conversions::to_string_t("code_encrypt_kms_key_id")] = ModelBase::toJson(codeEncryptKmsKeyId_);
    }

    return val;
}
bool CreateFunctionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("func_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("func_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("func_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("handler"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("handler"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHandler(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemorySize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpu_memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu_memory"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpuMemory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_filename"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_filename"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeFilename(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_names"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encrypted_user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encrypted_user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptedUserData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("digest"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("digest"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDigest(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xrole"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xrole"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXrole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_xrole"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_xrole"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppXrole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("func_vpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_vpc"));
        if(!fieldValue.is_null())
        {
            FuncVpc refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncVpc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mount_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mount_config"));
        if(!fieldValue.is_null())
        {
            MountConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMountConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserved_instance_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserved_instance_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReservedInstanceCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("depend_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("depend_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("depend_version_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("depend_version_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependVersionList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("strategy_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("strategy_config"));
        if(!fieldValue.is_null())
        {
            StrategyConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStrategyConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extend_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend_config"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dependencies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dependencies"));
        if(!fieldValue.is_null())
        {
            std::vector<Dependency> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependencies(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("initializer_handler"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("initializer_handler"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitializerHandler(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("initializer_timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("initializer_timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitializerTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pre_stop_handler"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pre_stop_handler"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreStopHandler(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pre_stop_timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pre_stop_timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreStopTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("long_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("long_time"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLongTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_cloud_debug"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_cloud_debug"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableCloudDebug(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_dynamic_memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_dynamic_memory"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableDynamicMemory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_stateful_function"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_stateful_function"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsStatefulFunction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_image"));
        if(!fieldValue.is_null())
        {
            CustomImage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_bridge_function"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_bridge_function"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBridgeFunction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apig_route_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apig_route_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApigRouteEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("heartbeat_handler"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("heartbeat_handler"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeartbeatHandler(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_class_isolation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_class_isolation"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableClassIsolation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpu_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpuType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allow_ephemeral_storage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_ephemeral_storage"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowEphemeralStorage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ephemeral_storage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ephemeral_storage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEphemeralStorage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_controller"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_controller"));
        if(!fieldValue.is_null())
        {
            NetworkControlConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkController(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_return_stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_return_stream"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsReturnStream(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_auth_in_header"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_auth_in_header"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableAuthInHeader(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_lts_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_lts_log"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableLtsLog(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_custom_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_custom_tag"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsCustomTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data_encrypt_kms_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data_encrypt_kms_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserDataEncryptKmsKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_encrypt_kms_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_encrypt_kms_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeEncryptKmsKeyId(refVal);
        }
    }
    return ok;
}


std::string CreateFunctionResponse::getFuncId() const
{
    return funcId_;
}

void CreateFunctionResponse::setFuncId(const std::string& value)
{
    funcId_ = value;
    funcIdIsSet_ = true;
}

bool CreateFunctionResponse::funcIdIsSet() const
{
    return funcIdIsSet_;
}

void CreateFunctionResponse::unsetfuncId()
{
    funcIdIsSet_ = false;
}

std::string CreateFunctionResponse::getFuncUrn() const
{
    return funcUrn_;
}

void CreateFunctionResponse::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool CreateFunctionResponse::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void CreateFunctionResponse::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

std::string CreateFunctionResponse::getFuncName() const
{
    return funcName_;
}

void CreateFunctionResponse::setFuncName(const std::string& value)
{
    funcName_ = value;
    funcNameIsSet_ = true;
}

bool CreateFunctionResponse::funcNameIsSet() const
{
    return funcNameIsSet_;
}

void CreateFunctionResponse::unsetfuncName()
{
    funcNameIsSet_ = false;
}

std::string CreateFunctionResponse::getDomainId() const
{
    return domainId_;
}

void CreateFunctionResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateFunctionResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateFunctionResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string CreateFunctionResponse::getNamespace() const
{
    return namespace_;
}

void CreateFunctionResponse::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool CreateFunctionResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void CreateFunctionResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string CreateFunctionResponse::getProjectName() const
{
    return projectName_;
}

void CreateFunctionResponse::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool CreateFunctionResponse::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void CreateFunctionResponse::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string CreateFunctionResponse::getPackage() const
{
    return package_;
}

void CreateFunctionResponse::setPackage(const std::string& value)
{
    package_ = value;
    packageIsSet_ = true;
}

bool CreateFunctionResponse::packageIsSet() const
{
    return packageIsSet_;
}

void CreateFunctionResponse::unsetpackage()
{
    packageIsSet_ = false;
}

std::string CreateFunctionResponse::getRuntime() const
{
    return runtime_;
}

void CreateFunctionResponse::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool CreateFunctionResponse::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void CreateFunctionResponse::unsetruntime()
{
    runtimeIsSet_ = false;
}

int32_t CreateFunctionResponse::getTimeout() const
{
    return timeout_;
}

void CreateFunctionResponse::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool CreateFunctionResponse::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void CreateFunctionResponse::unsettimeout()
{
    timeoutIsSet_ = false;
}

std::string CreateFunctionResponse::getHandler() const
{
    return handler_;
}

void CreateFunctionResponse::setHandler(const std::string& value)
{
    handler_ = value;
    handlerIsSet_ = true;
}

bool CreateFunctionResponse::handlerIsSet() const
{
    return handlerIsSet_;
}

void CreateFunctionResponse::unsethandler()
{
    handlerIsSet_ = false;
}

int32_t CreateFunctionResponse::getMemorySize() const
{
    return memorySize_;
}

void CreateFunctionResponse::setMemorySize(int32_t value)
{
    memorySize_ = value;
    memorySizeIsSet_ = true;
}

bool CreateFunctionResponse::memorySizeIsSet() const
{
    return memorySizeIsSet_;
}

void CreateFunctionResponse::unsetmemorySize()
{
    memorySizeIsSet_ = false;
}

int32_t CreateFunctionResponse::getGpuMemory() const
{
    return gpuMemory_;
}

void CreateFunctionResponse::setGpuMemory(int32_t value)
{
    gpuMemory_ = value;
    gpuMemoryIsSet_ = true;
}

bool CreateFunctionResponse::gpuMemoryIsSet() const
{
    return gpuMemoryIsSet_;
}

void CreateFunctionResponse::unsetgpuMemory()
{
    gpuMemoryIsSet_ = false;
}

int32_t CreateFunctionResponse::getCpu() const
{
    return cpu_;
}

void CreateFunctionResponse::setCpu(int32_t value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool CreateFunctionResponse::cpuIsSet() const
{
    return cpuIsSet_;
}

void CreateFunctionResponse::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string CreateFunctionResponse::getCodeType() const
{
    return codeType_;
}

void CreateFunctionResponse::setCodeType(const std::string& value)
{
    codeType_ = value;
    codeTypeIsSet_ = true;
}

bool CreateFunctionResponse::codeTypeIsSet() const
{
    return codeTypeIsSet_;
}

void CreateFunctionResponse::unsetcodeType()
{
    codeTypeIsSet_ = false;
}

std::string CreateFunctionResponse::getCodeUrl() const
{
    return codeUrl_;
}

void CreateFunctionResponse::setCodeUrl(const std::string& value)
{
    codeUrl_ = value;
    codeUrlIsSet_ = true;
}

bool CreateFunctionResponse::codeUrlIsSet() const
{
    return codeUrlIsSet_;
}

void CreateFunctionResponse::unsetcodeUrl()
{
    codeUrlIsSet_ = false;
}

std::string CreateFunctionResponse::getCodeFilename() const
{
    return codeFilename_;
}

void CreateFunctionResponse::setCodeFilename(const std::string& value)
{
    codeFilename_ = value;
    codeFilenameIsSet_ = true;
}

bool CreateFunctionResponse::codeFilenameIsSet() const
{
    return codeFilenameIsSet_;
}

void CreateFunctionResponse::unsetcodeFilename()
{
    codeFilenameIsSet_ = false;
}

int64_t CreateFunctionResponse::getCodeSize() const
{
    return codeSize_;
}

void CreateFunctionResponse::setCodeSize(int64_t value)
{
    codeSize_ = value;
    codeSizeIsSet_ = true;
}

bool CreateFunctionResponse::codeSizeIsSet() const
{
    return codeSizeIsSet_;
}

void CreateFunctionResponse::unsetcodeSize()
{
    codeSizeIsSet_ = false;
}

std::string CreateFunctionResponse::getDomainNames() const
{
    return domainNames_;
}

void CreateFunctionResponse::setDomainNames(const std::string& value)
{
    domainNames_ = value;
    domainNamesIsSet_ = true;
}

bool CreateFunctionResponse::domainNamesIsSet() const
{
    return domainNamesIsSet_;
}

void CreateFunctionResponse::unsetdomainNames()
{
    domainNamesIsSet_ = false;
}

std::string CreateFunctionResponse::getUserData() const
{
    return userData_;
}

void CreateFunctionResponse::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool CreateFunctionResponse::userDataIsSet() const
{
    return userDataIsSet_;
}

void CreateFunctionResponse::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string CreateFunctionResponse::getEncryptedUserData() const
{
    return encryptedUserData_;
}

void CreateFunctionResponse::setEncryptedUserData(const std::string& value)
{
    encryptedUserData_ = value;
    encryptedUserDataIsSet_ = true;
}

bool CreateFunctionResponse::encryptedUserDataIsSet() const
{
    return encryptedUserDataIsSet_;
}

void CreateFunctionResponse::unsetencryptedUserData()
{
    encryptedUserDataIsSet_ = false;
}

std::string CreateFunctionResponse::getDigest() const
{
    return digest_;
}

void CreateFunctionResponse::setDigest(const std::string& value)
{
    digest_ = value;
    digestIsSet_ = true;
}

bool CreateFunctionResponse::digestIsSet() const
{
    return digestIsSet_;
}

void CreateFunctionResponse::unsetdigest()
{
    digestIsSet_ = false;
}

std::string CreateFunctionResponse::getVersion() const
{
    return version_;
}

void CreateFunctionResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CreateFunctionResponse::versionIsSet() const
{
    return versionIsSet_;
}

void CreateFunctionResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string CreateFunctionResponse::getImageName() const
{
    return imageName_;
}

void CreateFunctionResponse::setImageName(const std::string& value)
{
    imageName_ = value;
    imageNameIsSet_ = true;
}

bool CreateFunctionResponse::imageNameIsSet() const
{
    return imageNameIsSet_;
}

void CreateFunctionResponse::unsetimageName()
{
    imageNameIsSet_ = false;
}

std::string CreateFunctionResponse::getXrole() const
{
    return xrole_;
}

void CreateFunctionResponse::setXrole(const std::string& value)
{
    xrole_ = value;
    xroleIsSet_ = true;
}

bool CreateFunctionResponse::xroleIsSet() const
{
    return xroleIsSet_;
}

void CreateFunctionResponse::unsetxrole()
{
    xroleIsSet_ = false;
}

std::string CreateFunctionResponse::getAppXrole() const
{
    return appXrole_;
}

void CreateFunctionResponse::setAppXrole(const std::string& value)
{
    appXrole_ = value;
    appXroleIsSet_ = true;
}

bool CreateFunctionResponse::appXroleIsSet() const
{
    return appXroleIsSet_;
}

void CreateFunctionResponse::unsetappXrole()
{
    appXroleIsSet_ = false;
}

std::string CreateFunctionResponse::getDescription() const
{
    return description_;
}

void CreateFunctionResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateFunctionResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateFunctionResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

utility::datetime CreateFunctionResponse::getLastModified() const
{
    return lastModified_;
}

void CreateFunctionResponse::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool CreateFunctionResponse::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void CreateFunctionResponse::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

FuncVpc CreateFunctionResponse::getFuncVpc() const
{
    return funcVpc_;
}

void CreateFunctionResponse::setFuncVpc(const FuncVpc& value)
{
    funcVpc_ = value;
    funcVpcIsSet_ = true;
}

bool CreateFunctionResponse::funcVpcIsSet() const
{
    return funcVpcIsSet_;
}

void CreateFunctionResponse::unsetfuncVpc()
{
    funcVpcIsSet_ = false;
}

MountConfig CreateFunctionResponse::getMountConfig() const
{
    return mountConfig_;
}

void CreateFunctionResponse::setMountConfig(const MountConfig& value)
{
    mountConfig_ = value;
    mountConfigIsSet_ = true;
}

bool CreateFunctionResponse::mountConfigIsSet() const
{
    return mountConfigIsSet_;
}

void CreateFunctionResponse::unsetmountConfig()
{
    mountConfigIsSet_ = false;
}

int32_t CreateFunctionResponse::getReservedInstanceCount() const
{
    return reservedInstanceCount_;
}

void CreateFunctionResponse::setReservedInstanceCount(int32_t value)
{
    reservedInstanceCount_ = value;
    reservedInstanceCountIsSet_ = true;
}

bool CreateFunctionResponse::reservedInstanceCountIsSet() const
{
    return reservedInstanceCountIsSet_;
}

void CreateFunctionResponse::unsetreservedInstanceCount()
{
    reservedInstanceCountIsSet_ = false;
}

std::vector<std::string>& CreateFunctionResponse::getDependList()
{
    return dependList_;
}

void CreateFunctionResponse::setDependList(const std::vector<std::string>& value)
{
    dependList_ = value;
    dependListIsSet_ = true;
}

bool CreateFunctionResponse::dependListIsSet() const
{
    return dependListIsSet_;
}

void CreateFunctionResponse::unsetdependList()
{
    dependListIsSet_ = false;
}

std::vector<std::string>& CreateFunctionResponse::getDependVersionList()
{
    return dependVersionList_;
}

void CreateFunctionResponse::setDependVersionList(const std::vector<std::string>& value)
{
    dependVersionList_ = value;
    dependVersionListIsSet_ = true;
}

bool CreateFunctionResponse::dependVersionListIsSet() const
{
    return dependVersionListIsSet_;
}

void CreateFunctionResponse::unsetdependVersionList()
{
    dependVersionListIsSet_ = false;
}

StrategyConfig CreateFunctionResponse::getStrategyConfig() const
{
    return strategyConfig_;
}

void CreateFunctionResponse::setStrategyConfig(const StrategyConfig& value)
{
    strategyConfig_ = value;
    strategyConfigIsSet_ = true;
}

bool CreateFunctionResponse::strategyConfigIsSet() const
{
    return strategyConfigIsSet_;
}

void CreateFunctionResponse::unsetstrategyConfig()
{
    strategyConfigIsSet_ = false;
}

std::string CreateFunctionResponse::getExtendConfig() const
{
    return extendConfig_;
}

void CreateFunctionResponse::setExtendConfig(const std::string& value)
{
    extendConfig_ = value;
    extendConfigIsSet_ = true;
}

bool CreateFunctionResponse::extendConfigIsSet() const
{
    return extendConfigIsSet_;
}

void CreateFunctionResponse::unsetextendConfig()
{
    extendConfigIsSet_ = false;
}

std::vector<Dependency>& CreateFunctionResponse::getDependencies()
{
    return dependencies_;
}

void CreateFunctionResponse::setDependencies(const std::vector<Dependency>& value)
{
    dependencies_ = value;
    dependenciesIsSet_ = true;
}

bool CreateFunctionResponse::dependenciesIsSet() const
{
    return dependenciesIsSet_;
}

void CreateFunctionResponse::unsetdependencies()
{
    dependenciesIsSet_ = false;
}

std::string CreateFunctionResponse::getInitializerHandler() const
{
    return initializerHandler_;
}

void CreateFunctionResponse::setInitializerHandler(const std::string& value)
{
    initializerHandler_ = value;
    initializerHandlerIsSet_ = true;
}

bool CreateFunctionResponse::initializerHandlerIsSet() const
{
    return initializerHandlerIsSet_;
}

void CreateFunctionResponse::unsetinitializerHandler()
{
    initializerHandlerIsSet_ = false;
}

int32_t CreateFunctionResponse::getInitializerTimeout() const
{
    return initializerTimeout_;
}

void CreateFunctionResponse::setInitializerTimeout(int32_t value)
{
    initializerTimeout_ = value;
    initializerTimeoutIsSet_ = true;
}

bool CreateFunctionResponse::initializerTimeoutIsSet() const
{
    return initializerTimeoutIsSet_;
}

void CreateFunctionResponse::unsetinitializerTimeout()
{
    initializerTimeoutIsSet_ = false;
}

std::string CreateFunctionResponse::getPreStopHandler() const
{
    return preStopHandler_;
}

void CreateFunctionResponse::setPreStopHandler(const std::string& value)
{
    preStopHandler_ = value;
    preStopHandlerIsSet_ = true;
}

bool CreateFunctionResponse::preStopHandlerIsSet() const
{
    return preStopHandlerIsSet_;
}

void CreateFunctionResponse::unsetpreStopHandler()
{
    preStopHandlerIsSet_ = false;
}

int32_t CreateFunctionResponse::getPreStopTimeout() const
{
    return preStopTimeout_;
}

void CreateFunctionResponse::setPreStopTimeout(int32_t value)
{
    preStopTimeout_ = value;
    preStopTimeoutIsSet_ = true;
}

bool CreateFunctionResponse::preStopTimeoutIsSet() const
{
    return preStopTimeoutIsSet_;
}

void CreateFunctionResponse::unsetpreStopTimeout()
{
    preStopTimeoutIsSet_ = false;
}

std::string CreateFunctionResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateFunctionResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateFunctionResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateFunctionResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool CreateFunctionResponse::isLongTime() const
{
    return longTime_;
}

void CreateFunctionResponse::setLongTime(bool value)
{
    longTime_ = value;
    longTimeIsSet_ = true;
}

bool CreateFunctionResponse::longTimeIsSet() const
{
    return longTimeIsSet_;
}

void CreateFunctionResponse::unsetlongTime()
{
    longTimeIsSet_ = false;
}

std::string CreateFunctionResponse::getLogGroupId() const
{
    return logGroupId_;
}

void CreateFunctionResponse::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool CreateFunctionResponse::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void CreateFunctionResponse::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string CreateFunctionResponse::getLogStreamId() const
{
    return logStreamId_;
}

void CreateFunctionResponse::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool CreateFunctionResponse::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void CreateFunctionResponse::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string CreateFunctionResponse::getType() const
{
    return type_;
}

void CreateFunctionResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateFunctionResponse::typeIsSet() const
{
    return typeIsSet_;
}

void CreateFunctionResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateFunctionResponse::getEnableCloudDebug() const
{
    return enableCloudDebug_;
}

void CreateFunctionResponse::setEnableCloudDebug(const std::string& value)
{
    enableCloudDebug_ = value;
    enableCloudDebugIsSet_ = true;
}

bool CreateFunctionResponse::enableCloudDebugIsSet() const
{
    return enableCloudDebugIsSet_;
}

void CreateFunctionResponse::unsetenableCloudDebug()
{
    enableCloudDebugIsSet_ = false;
}

bool CreateFunctionResponse::isEnableDynamicMemory() const
{
    return enableDynamicMemory_;
}

void CreateFunctionResponse::setEnableDynamicMemory(bool value)
{
    enableDynamicMemory_ = value;
    enableDynamicMemoryIsSet_ = true;
}

bool CreateFunctionResponse::enableDynamicMemoryIsSet() const
{
    return enableDynamicMemoryIsSet_;
}

void CreateFunctionResponse::unsetenableDynamicMemory()
{
    enableDynamicMemoryIsSet_ = false;
}

bool CreateFunctionResponse::isIsStatefulFunction() const
{
    return isStatefulFunction_;
}

void CreateFunctionResponse::setIsStatefulFunction(bool value)
{
    isStatefulFunction_ = value;
    isStatefulFunctionIsSet_ = true;
}

bool CreateFunctionResponse::isStatefulFunctionIsSet() const
{
    return isStatefulFunctionIsSet_;
}

void CreateFunctionResponse::unsetisStatefulFunction()
{
    isStatefulFunctionIsSet_ = false;
}

CustomImage CreateFunctionResponse::getCustomImage() const
{
    return customImage_;
}

void CreateFunctionResponse::setCustomImage(const CustomImage& value)
{
    customImage_ = value;
    customImageIsSet_ = true;
}

bool CreateFunctionResponse::customImageIsSet() const
{
    return customImageIsSet_;
}

void CreateFunctionResponse::unsetcustomImage()
{
    customImageIsSet_ = false;
}

bool CreateFunctionResponse::isIsBridgeFunction() const
{
    return isBridgeFunction_;
}

void CreateFunctionResponse::setIsBridgeFunction(bool value)
{
    isBridgeFunction_ = value;
    isBridgeFunctionIsSet_ = true;
}

bool CreateFunctionResponse::isBridgeFunctionIsSet() const
{
    return isBridgeFunctionIsSet_;
}

void CreateFunctionResponse::unsetisBridgeFunction()
{
    isBridgeFunctionIsSet_ = false;
}

bool CreateFunctionResponse::isApigRouteEnable() const
{
    return apigRouteEnable_;
}

void CreateFunctionResponse::setApigRouteEnable(bool value)
{
    apigRouteEnable_ = value;
    apigRouteEnableIsSet_ = true;
}

bool CreateFunctionResponse::apigRouteEnableIsSet() const
{
    return apigRouteEnableIsSet_;
}

void CreateFunctionResponse::unsetapigRouteEnable()
{
    apigRouteEnableIsSet_ = false;
}

std::string CreateFunctionResponse::getHeartbeatHandler() const
{
    return heartbeatHandler_;
}

void CreateFunctionResponse::setHeartbeatHandler(const std::string& value)
{
    heartbeatHandler_ = value;
    heartbeatHandlerIsSet_ = true;
}

bool CreateFunctionResponse::heartbeatHandlerIsSet() const
{
    return heartbeatHandlerIsSet_;
}

void CreateFunctionResponse::unsetheartbeatHandler()
{
    heartbeatHandlerIsSet_ = false;
}

bool CreateFunctionResponse::isEnableClassIsolation() const
{
    return enableClassIsolation_;
}

void CreateFunctionResponse::setEnableClassIsolation(bool value)
{
    enableClassIsolation_ = value;
    enableClassIsolationIsSet_ = true;
}

bool CreateFunctionResponse::enableClassIsolationIsSet() const
{
    return enableClassIsolationIsSet_;
}

void CreateFunctionResponse::unsetenableClassIsolation()
{
    enableClassIsolationIsSet_ = false;
}

std::string CreateFunctionResponse::getGpuType() const
{
    return gpuType_;
}

void CreateFunctionResponse::setGpuType(const std::string& value)
{
    gpuType_ = value;
    gpuTypeIsSet_ = true;
}

bool CreateFunctionResponse::gpuTypeIsSet() const
{
    return gpuTypeIsSet_;
}

void CreateFunctionResponse::unsetgpuType()
{
    gpuTypeIsSet_ = false;
}

bool CreateFunctionResponse::isAllowEphemeralStorage() const
{
    return allowEphemeralStorage_;
}

void CreateFunctionResponse::setAllowEphemeralStorage(bool value)
{
    allowEphemeralStorage_ = value;
    allowEphemeralStorageIsSet_ = true;
}

bool CreateFunctionResponse::allowEphemeralStorageIsSet() const
{
    return allowEphemeralStorageIsSet_;
}

void CreateFunctionResponse::unsetallowEphemeralStorage()
{
    allowEphemeralStorageIsSet_ = false;
}

int32_t CreateFunctionResponse::getEphemeralStorage() const
{
    return ephemeralStorage_;
}

void CreateFunctionResponse::setEphemeralStorage(int32_t value)
{
    ephemeralStorage_ = value;
    ephemeralStorageIsSet_ = true;
}

bool CreateFunctionResponse::ephemeralStorageIsSet() const
{
    return ephemeralStorageIsSet_;
}

void CreateFunctionResponse::unsetephemeralStorage()
{
    ephemeralStorageIsSet_ = false;
}

NetworkControlConfig CreateFunctionResponse::getNetworkController() const
{
    return networkController_;
}

void CreateFunctionResponse::setNetworkController(const NetworkControlConfig& value)
{
    networkController_ = value;
    networkControllerIsSet_ = true;
}

bool CreateFunctionResponse::networkControllerIsSet() const
{
    return networkControllerIsSet_;
}

void CreateFunctionResponse::unsetnetworkController()
{
    networkControllerIsSet_ = false;
}

std::string CreateFunctionResponse::getResourceId() const
{
    return resourceId_;
}

void CreateFunctionResponse::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool CreateFunctionResponse::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void CreateFunctionResponse::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

bool CreateFunctionResponse::isIsReturnStream() const
{
    return isReturnStream_;
}

void CreateFunctionResponse::setIsReturnStream(bool value)
{
    isReturnStream_ = value;
    isReturnStreamIsSet_ = true;
}

bool CreateFunctionResponse::isReturnStreamIsSet() const
{
    return isReturnStreamIsSet_;
}

void CreateFunctionResponse::unsetisReturnStream()
{
    isReturnStreamIsSet_ = false;
}

bool CreateFunctionResponse::isEnableAuthInHeader() const
{
    return enableAuthInHeader_;
}

void CreateFunctionResponse::setEnableAuthInHeader(bool value)
{
    enableAuthInHeader_ = value;
    enableAuthInHeaderIsSet_ = true;
}

bool CreateFunctionResponse::enableAuthInHeaderIsSet() const
{
    return enableAuthInHeaderIsSet_;
}

void CreateFunctionResponse::unsetenableAuthInHeader()
{
    enableAuthInHeaderIsSet_ = false;
}

bool CreateFunctionResponse::isEnableLtsLog() const
{
    return enableLtsLog_;
}

void CreateFunctionResponse::setEnableLtsLog(bool value)
{
    enableLtsLog_ = value;
    enableLtsLogIsSet_ = true;
}

bool CreateFunctionResponse::enableLtsLogIsSet() const
{
    return enableLtsLogIsSet_;
}

void CreateFunctionResponse::unsetenableLtsLog()
{
    enableLtsLogIsSet_ = false;
}

std::map<std::string, std::string>& CreateFunctionResponse::getLtsCustomTag()
{
    return ltsCustomTag_;
}

void CreateFunctionResponse::setLtsCustomTag(const std::map<std::string, std::string>& value)
{
    ltsCustomTag_ = value;
    ltsCustomTagIsSet_ = true;
}

bool CreateFunctionResponse::ltsCustomTagIsSet() const
{
    return ltsCustomTagIsSet_;
}

void CreateFunctionResponse::unsetltsCustomTag()
{
    ltsCustomTagIsSet_ = false;
}

std::string CreateFunctionResponse::getUserDataEncryptKmsKeyId() const
{
    return userDataEncryptKmsKeyId_;
}

void CreateFunctionResponse::setUserDataEncryptKmsKeyId(const std::string& value)
{
    userDataEncryptKmsKeyId_ = value;
    userDataEncryptKmsKeyIdIsSet_ = true;
}

bool CreateFunctionResponse::userDataEncryptKmsKeyIdIsSet() const
{
    return userDataEncryptKmsKeyIdIsSet_;
}

void CreateFunctionResponse::unsetuserDataEncryptKmsKeyId()
{
    userDataEncryptKmsKeyIdIsSet_ = false;
}

std::string CreateFunctionResponse::getCodeEncryptKmsKeyId() const
{
    return codeEncryptKmsKeyId_;
}

void CreateFunctionResponse::setCodeEncryptKmsKeyId(const std::string& value)
{
    codeEncryptKmsKeyId_ = value;
    codeEncryptKmsKeyIdIsSet_ = true;
}

bool CreateFunctionResponse::codeEncryptKmsKeyIdIsSet() const
{
    return codeEncryptKmsKeyIdIsSet_;
}

void CreateFunctionResponse::unsetcodeEncryptKmsKeyId()
{
    codeEncryptKmsKeyIdIsSet_ = false;
}

}
}
}
}
}


