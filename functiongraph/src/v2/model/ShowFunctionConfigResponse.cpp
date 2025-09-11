

#include "huaweicloud/functiongraph/v2/model/ShowFunctionConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowFunctionConfigResponse::ShowFunctionConfigResponse()
{
    funcId_ = "";
    funcIdIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
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
    gpuType_ = "";
    gpuTypeIsSet_ = false;
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
    ephemeralStorage_ = 0;
    ephemeralStorageIsSet_ = false;
    funcVpcIsSet_ = false;
    peeringCidr_ = "";
    peeringCidrIsSet_ = false;
    mountConfigIsSet_ = false;
    dependListIsSet_ = false;
    dependVersionListIsSet_ = false;
    strategyConfigIsSet_ = false;
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
    isBridgeFunction_ = false;
    isBridgeFunctionIsSet_ = false;
    enableAuthInHeader_ = false;
    enableAuthInHeaderIsSet_ = false;
    customImageIsSet_ = false;
    reservedInstanceIdleMode_ = false;
    reservedInstanceIdleModeIsSet_ = false;
    apigRouteEnable_ = false;
    apigRouteEnableIsSet_ = false;
    heartbeatHandler_ = "";
    heartbeatHandlerIsSet_ = false;
    enableClassIsolation_ = false;
    enableClassIsolationIsSet_ = false;
    allowEphemeralStorage_ = false;
    allowEphemeralStorageIsSet_ = false;
    networkControllerIsSet_ = false;
    isReturnStream_ = false;
    isReturnStreamIsSet_ = false;
    enableLtsLog_ = false;
    enableLtsLogIsSet_ = false;
    ltsCustomTagIsSet_ = false;
    userDataEncryptKmsKeyId_ = "";
    userDataEncryptKmsKeyIdIsSet_ = false;
    codeEncryptKmsKeyId_ = "";
    codeEncryptKmsKeyIdIsSet_ = false;
}

ShowFunctionConfigResponse::~ShowFunctionConfigResponse() = default;

void ShowFunctionConfigResponse::validate()
{
}

web::json::value ShowFunctionConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(funcIdIsSet_) {
        val[utility::conversions::to_string_t("func_id")] = ModelBase::toJson(funcId_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
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
    if(gpuTypeIsSet_) {
        val[utility::conversions::to_string_t("gpu_type")] = ModelBase::toJson(gpuType_);
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
    if(ephemeralStorageIsSet_) {
        val[utility::conversions::to_string_t("ephemeral_storage")] = ModelBase::toJson(ephemeralStorage_);
    }
    if(funcVpcIsSet_) {
        val[utility::conversions::to_string_t("func_vpc")] = ModelBase::toJson(funcVpc_);
    }
    if(peeringCidrIsSet_) {
        val[utility::conversions::to_string_t("peering_cidr")] = ModelBase::toJson(peeringCidr_);
    }
    if(mountConfigIsSet_) {
        val[utility::conversions::to_string_t("mount_config")] = ModelBase::toJson(mountConfig_);
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
    if(isBridgeFunctionIsSet_) {
        val[utility::conversions::to_string_t("is_bridge_function")] = ModelBase::toJson(isBridgeFunction_);
    }
    if(enableAuthInHeaderIsSet_) {
        val[utility::conversions::to_string_t("enable_auth_in_header")] = ModelBase::toJson(enableAuthInHeader_);
    }
    if(customImageIsSet_) {
        val[utility::conversions::to_string_t("custom_image")] = ModelBase::toJson(customImage_);
    }
    if(reservedInstanceIdleModeIsSet_) {
        val[utility::conversions::to_string_t("reserved_instance_idle_mode")] = ModelBase::toJson(reservedInstanceIdleMode_);
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
    if(allowEphemeralStorageIsSet_) {
        val[utility::conversions::to_string_t("allow_ephemeral_storage")] = ModelBase::toJson(allowEphemeralStorage_);
    }
    if(networkControllerIsSet_) {
        val[utility::conversions::to_string_t("network_controller")] = ModelBase::toJson(networkController_);
    }
    if(isReturnStreamIsSet_) {
        val[utility::conversions::to_string_t("is_return_stream")] = ModelBase::toJson(isReturnStream_);
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
bool ShowFunctionConfigResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("gpu_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpuType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ephemeral_storage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ephemeral_storage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEphemeralStorage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("peering_cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("peering_cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeeringCidr(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_bridge_function"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_bridge_function"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBridgeFunction(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("custom_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_image"));
        if(!fieldValue.is_null())
        {
            CustomImage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserved_instance_idle_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserved_instance_idle_mode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReservedInstanceIdleMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("allow_ephemeral_storage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_ephemeral_storage"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowEphemeralStorage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_return_stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_return_stream"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsReturnStream(refVal);
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


std::string ShowFunctionConfigResponse::getFuncId() const
{
    return funcId_;
}

void ShowFunctionConfigResponse::setFuncId(const std::string& value)
{
    funcId_ = value;
    funcIdIsSet_ = true;
}

bool ShowFunctionConfigResponse::funcIdIsSet() const
{
    return funcIdIsSet_;
}

void ShowFunctionConfigResponse::unsetfuncId()
{
    funcIdIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getResourceId() const
{
    return resourceId_;
}

void ShowFunctionConfigResponse::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ShowFunctionConfigResponse::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ShowFunctionConfigResponse::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getFuncUrn() const
{
    return funcUrn_;
}

void ShowFunctionConfigResponse::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool ShowFunctionConfigResponse::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void ShowFunctionConfigResponse::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getFuncName() const
{
    return funcName_;
}

void ShowFunctionConfigResponse::setFuncName(const std::string& value)
{
    funcName_ = value;
    funcNameIsSet_ = true;
}

bool ShowFunctionConfigResponse::funcNameIsSet() const
{
    return funcNameIsSet_;
}

void ShowFunctionConfigResponse::unsetfuncName()
{
    funcNameIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getDomainId() const
{
    return domainId_;
}

void ShowFunctionConfigResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowFunctionConfigResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowFunctionConfigResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getNamespace() const
{
    return namespace_;
}

void ShowFunctionConfigResponse::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ShowFunctionConfigResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ShowFunctionConfigResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getProjectName() const
{
    return projectName_;
}

void ShowFunctionConfigResponse::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ShowFunctionConfigResponse::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ShowFunctionConfigResponse::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getPackage() const
{
    return package_;
}

void ShowFunctionConfigResponse::setPackage(const std::string& value)
{
    package_ = value;
    packageIsSet_ = true;
}

bool ShowFunctionConfigResponse::packageIsSet() const
{
    return packageIsSet_;
}

void ShowFunctionConfigResponse::unsetpackage()
{
    packageIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getRuntime() const
{
    return runtime_;
}

void ShowFunctionConfigResponse::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool ShowFunctionConfigResponse::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void ShowFunctionConfigResponse::unsetruntime()
{
    runtimeIsSet_ = false;
}

int32_t ShowFunctionConfigResponse::getTimeout() const
{
    return timeout_;
}

void ShowFunctionConfigResponse::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool ShowFunctionConfigResponse::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void ShowFunctionConfigResponse::unsettimeout()
{
    timeoutIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getHandler() const
{
    return handler_;
}

void ShowFunctionConfigResponse::setHandler(const std::string& value)
{
    handler_ = value;
    handlerIsSet_ = true;
}

bool ShowFunctionConfigResponse::handlerIsSet() const
{
    return handlerIsSet_;
}

void ShowFunctionConfigResponse::unsethandler()
{
    handlerIsSet_ = false;
}

int32_t ShowFunctionConfigResponse::getMemorySize() const
{
    return memorySize_;
}

void ShowFunctionConfigResponse::setMemorySize(int32_t value)
{
    memorySize_ = value;
    memorySizeIsSet_ = true;
}

bool ShowFunctionConfigResponse::memorySizeIsSet() const
{
    return memorySizeIsSet_;
}

void ShowFunctionConfigResponse::unsetmemorySize()
{
    memorySizeIsSet_ = false;
}

int32_t ShowFunctionConfigResponse::getGpuMemory() const
{
    return gpuMemory_;
}

void ShowFunctionConfigResponse::setGpuMemory(int32_t value)
{
    gpuMemory_ = value;
    gpuMemoryIsSet_ = true;
}

bool ShowFunctionConfigResponse::gpuMemoryIsSet() const
{
    return gpuMemoryIsSet_;
}

void ShowFunctionConfigResponse::unsetgpuMemory()
{
    gpuMemoryIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getGpuType() const
{
    return gpuType_;
}

void ShowFunctionConfigResponse::setGpuType(const std::string& value)
{
    gpuType_ = value;
    gpuTypeIsSet_ = true;
}

bool ShowFunctionConfigResponse::gpuTypeIsSet() const
{
    return gpuTypeIsSet_;
}

void ShowFunctionConfigResponse::unsetgpuType()
{
    gpuTypeIsSet_ = false;
}

int32_t ShowFunctionConfigResponse::getCpu() const
{
    return cpu_;
}

void ShowFunctionConfigResponse::setCpu(int32_t value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool ShowFunctionConfigResponse::cpuIsSet() const
{
    return cpuIsSet_;
}

void ShowFunctionConfigResponse::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getCodeType() const
{
    return codeType_;
}

void ShowFunctionConfigResponse::setCodeType(const std::string& value)
{
    codeType_ = value;
    codeTypeIsSet_ = true;
}

bool ShowFunctionConfigResponse::codeTypeIsSet() const
{
    return codeTypeIsSet_;
}

void ShowFunctionConfigResponse::unsetcodeType()
{
    codeTypeIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getCodeUrl() const
{
    return codeUrl_;
}

void ShowFunctionConfigResponse::setCodeUrl(const std::string& value)
{
    codeUrl_ = value;
    codeUrlIsSet_ = true;
}

bool ShowFunctionConfigResponse::codeUrlIsSet() const
{
    return codeUrlIsSet_;
}

void ShowFunctionConfigResponse::unsetcodeUrl()
{
    codeUrlIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getCodeFilename() const
{
    return codeFilename_;
}

void ShowFunctionConfigResponse::setCodeFilename(const std::string& value)
{
    codeFilename_ = value;
    codeFilenameIsSet_ = true;
}

bool ShowFunctionConfigResponse::codeFilenameIsSet() const
{
    return codeFilenameIsSet_;
}

void ShowFunctionConfigResponse::unsetcodeFilename()
{
    codeFilenameIsSet_ = false;
}

int64_t ShowFunctionConfigResponse::getCodeSize() const
{
    return codeSize_;
}

void ShowFunctionConfigResponse::setCodeSize(int64_t value)
{
    codeSize_ = value;
    codeSizeIsSet_ = true;
}

bool ShowFunctionConfigResponse::codeSizeIsSet() const
{
    return codeSizeIsSet_;
}

void ShowFunctionConfigResponse::unsetcodeSize()
{
    codeSizeIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getUserData() const
{
    return userData_;
}

void ShowFunctionConfigResponse::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool ShowFunctionConfigResponse::userDataIsSet() const
{
    return userDataIsSet_;
}

void ShowFunctionConfigResponse::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getEncryptedUserData() const
{
    return encryptedUserData_;
}

void ShowFunctionConfigResponse::setEncryptedUserData(const std::string& value)
{
    encryptedUserData_ = value;
    encryptedUserDataIsSet_ = true;
}

bool ShowFunctionConfigResponse::encryptedUserDataIsSet() const
{
    return encryptedUserDataIsSet_;
}

void ShowFunctionConfigResponse::unsetencryptedUserData()
{
    encryptedUserDataIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getDigest() const
{
    return digest_;
}

void ShowFunctionConfigResponse::setDigest(const std::string& value)
{
    digest_ = value;
    digestIsSet_ = true;
}

bool ShowFunctionConfigResponse::digestIsSet() const
{
    return digestIsSet_;
}

void ShowFunctionConfigResponse::unsetdigest()
{
    digestIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getVersion() const
{
    return version_;
}

void ShowFunctionConfigResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowFunctionConfigResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowFunctionConfigResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getImageName() const
{
    return imageName_;
}

void ShowFunctionConfigResponse::setImageName(const std::string& value)
{
    imageName_ = value;
    imageNameIsSet_ = true;
}

bool ShowFunctionConfigResponse::imageNameIsSet() const
{
    return imageNameIsSet_;
}

void ShowFunctionConfigResponse::unsetimageName()
{
    imageNameIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getXrole() const
{
    return xrole_;
}

void ShowFunctionConfigResponse::setXrole(const std::string& value)
{
    xrole_ = value;
    xroleIsSet_ = true;
}

bool ShowFunctionConfigResponse::xroleIsSet() const
{
    return xroleIsSet_;
}

void ShowFunctionConfigResponse::unsetxrole()
{
    xroleIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getAppXrole() const
{
    return appXrole_;
}

void ShowFunctionConfigResponse::setAppXrole(const std::string& value)
{
    appXrole_ = value;
    appXroleIsSet_ = true;
}

bool ShowFunctionConfigResponse::appXroleIsSet() const
{
    return appXroleIsSet_;
}

void ShowFunctionConfigResponse::unsetappXrole()
{
    appXroleIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getDescription() const
{
    return description_;
}

void ShowFunctionConfigResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowFunctionConfigResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowFunctionConfigResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

utility::datetime ShowFunctionConfigResponse::getLastModified() const
{
    return lastModified_;
}

void ShowFunctionConfigResponse::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool ShowFunctionConfigResponse::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void ShowFunctionConfigResponse::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

int32_t ShowFunctionConfigResponse::getEphemeralStorage() const
{
    return ephemeralStorage_;
}

void ShowFunctionConfigResponse::setEphemeralStorage(int32_t value)
{
    ephemeralStorage_ = value;
    ephemeralStorageIsSet_ = true;
}

bool ShowFunctionConfigResponse::ephemeralStorageIsSet() const
{
    return ephemeralStorageIsSet_;
}

void ShowFunctionConfigResponse::unsetephemeralStorage()
{
    ephemeralStorageIsSet_ = false;
}

FuncVpc ShowFunctionConfigResponse::getFuncVpc() const
{
    return funcVpc_;
}

void ShowFunctionConfigResponse::setFuncVpc(const FuncVpc& value)
{
    funcVpc_ = value;
    funcVpcIsSet_ = true;
}

bool ShowFunctionConfigResponse::funcVpcIsSet() const
{
    return funcVpcIsSet_;
}

void ShowFunctionConfigResponse::unsetfuncVpc()
{
    funcVpcIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getPeeringCidr() const
{
    return peeringCidr_;
}

void ShowFunctionConfigResponse::setPeeringCidr(const std::string& value)
{
    peeringCidr_ = value;
    peeringCidrIsSet_ = true;
}

bool ShowFunctionConfigResponse::peeringCidrIsSet() const
{
    return peeringCidrIsSet_;
}

void ShowFunctionConfigResponse::unsetpeeringCidr()
{
    peeringCidrIsSet_ = false;
}

MountConfig ShowFunctionConfigResponse::getMountConfig() const
{
    return mountConfig_;
}

void ShowFunctionConfigResponse::setMountConfig(const MountConfig& value)
{
    mountConfig_ = value;
    mountConfigIsSet_ = true;
}

bool ShowFunctionConfigResponse::mountConfigIsSet() const
{
    return mountConfigIsSet_;
}

void ShowFunctionConfigResponse::unsetmountConfig()
{
    mountConfigIsSet_ = false;
}

std::vector<std::string>& ShowFunctionConfigResponse::getDependList()
{
    return dependList_;
}

void ShowFunctionConfigResponse::setDependList(const std::vector<std::string>& value)
{
    dependList_ = value;
    dependListIsSet_ = true;
}

bool ShowFunctionConfigResponse::dependListIsSet() const
{
    return dependListIsSet_;
}

void ShowFunctionConfigResponse::unsetdependList()
{
    dependListIsSet_ = false;
}

std::vector<std::string>& ShowFunctionConfigResponse::getDependVersionList()
{
    return dependVersionList_;
}

void ShowFunctionConfigResponse::setDependVersionList(const std::vector<std::string>& value)
{
    dependVersionList_ = value;
    dependVersionListIsSet_ = true;
}

bool ShowFunctionConfigResponse::dependVersionListIsSet() const
{
    return dependVersionListIsSet_;
}

void ShowFunctionConfigResponse::unsetdependVersionList()
{
    dependVersionListIsSet_ = false;
}

StrategyConfig ShowFunctionConfigResponse::getStrategyConfig() const
{
    return strategyConfig_;
}

void ShowFunctionConfigResponse::setStrategyConfig(const StrategyConfig& value)
{
    strategyConfig_ = value;
    strategyConfigIsSet_ = true;
}

bool ShowFunctionConfigResponse::strategyConfigIsSet() const
{
    return strategyConfigIsSet_;
}

void ShowFunctionConfigResponse::unsetstrategyConfig()
{
    strategyConfigIsSet_ = false;
}

std::vector<Dependency>& ShowFunctionConfigResponse::getDependencies()
{
    return dependencies_;
}

void ShowFunctionConfigResponse::setDependencies(const std::vector<Dependency>& value)
{
    dependencies_ = value;
    dependenciesIsSet_ = true;
}

bool ShowFunctionConfigResponse::dependenciesIsSet() const
{
    return dependenciesIsSet_;
}

void ShowFunctionConfigResponse::unsetdependencies()
{
    dependenciesIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getInitializerHandler() const
{
    return initializerHandler_;
}

void ShowFunctionConfigResponse::setInitializerHandler(const std::string& value)
{
    initializerHandler_ = value;
    initializerHandlerIsSet_ = true;
}

bool ShowFunctionConfigResponse::initializerHandlerIsSet() const
{
    return initializerHandlerIsSet_;
}

void ShowFunctionConfigResponse::unsetinitializerHandler()
{
    initializerHandlerIsSet_ = false;
}

int32_t ShowFunctionConfigResponse::getInitializerTimeout() const
{
    return initializerTimeout_;
}

void ShowFunctionConfigResponse::setInitializerTimeout(int32_t value)
{
    initializerTimeout_ = value;
    initializerTimeoutIsSet_ = true;
}

bool ShowFunctionConfigResponse::initializerTimeoutIsSet() const
{
    return initializerTimeoutIsSet_;
}

void ShowFunctionConfigResponse::unsetinitializerTimeout()
{
    initializerTimeoutIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getPreStopHandler() const
{
    return preStopHandler_;
}

void ShowFunctionConfigResponse::setPreStopHandler(const std::string& value)
{
    preStopHandler_ = value;
    preStopHandlerIsSet_ = true;
}

bool ShowFunctionConfigResponse::preStopHandlerIsSet() const
{
    return preStopHandlerIsSet_;
}

void ShowFunctionConfigResponse::unsetpreStopHandler()
{
    preStopHandlerIsSet_ = false;
}

int32_t ShowFunctionConfigResponse::getPreStopTimeout() const
{
    return preStopTimeout_;
}

void ShowFunctionConfigResponse::setPreStopTimeout(int32_t value)
{
    preStopTimeout_ = value;
    preStopTimeoutIsSet_ = true;
}

bool ShowFunctionConfigResponse::preStopTimeoutIsSet() const
{
    return preStopTimeoutIsSet_;
}

void ShowFunctionConfigResponse::unsetpreStopTimeout()
{
    preStopTimeoutIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowFunctionConfigResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowFunctionConfigResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowFunctionConfigResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool ShowFunctionConfigResponse::isLongTime() const
{
    return longTime_;
}

void ShowFunctionConfigResponse::setLongTime(bool value)
{
    longTime_ = value;
    longTimeIsSet_ = true;
}

bool ShowFunctionConfigResponse::longTimeIsSet() const
{
    return longTimeIsSet_;
}

void ShowFunctionConfigResponse::unsetlongTime()
{
    longTimeIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getLogGroupId() const
{
    return logGroupId_;
}

void ShowFunctionConfigResponse::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool ShowFunctionConfigResponse::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void ShowFunctionConfigResponse::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getLogStreamId() const
{
    return logStreamId_;
}

void ShowFunctionConfigResponse::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool ShowFunctionConfigResponse::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void ShowFunctionConfigResponse::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getType() const
{
    return type_;
}

void ShowFunctionConfigResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowFunctionConfigResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowFunctionConfigResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getEnableCloudDebug() const
{
    return enableCloudDebug_;
}

void ShowFunctionConfigResponse::setEnableCloudDebug(const std::string& value)
{
    enableCloudDebug_ = value;
    enableCloudDebugIsSet_ = true;
}

bool ShowFunctionConfigResponse::enableCloudDebugIsSet() const
{
    return enableCloudDebugIsSet_;
}

void ShowFunctionConfigResponse::unsetenableCloudDebug()
{
    enableCloudDebugIsSet_ = false;
}

bool ShowFunctionConfigResponse::isEnableDynamicMemory() const
{
    return enableDynamicMemory_;
}

void ShowFunctionConfigResponse::setEnableDynamicMemory(bool value)
{
    enableDynamicMemory_ = value;
    enableDynamicMemoryIsSet_ = true;
}

bool ShowFunctionConfigResponse::enableDynamicMemoryIsSet() const
{
    return enableDynamicMemoryIsSet_;
}

void ShowFunctionConfigResponse::unsetenableDynamicMemory()
{
    enableDynamicMemoryIsSet_ = false;
}

bool ShowFunctionConfigResponse::isIsStatefulFunction() const
{
    return isStatefulFunction_;
}

void ShowFunctionConfigResponse::setIsStatefulFunction(bool value)
{
    isStatefulFunction_ = value;
    isStatefulFunctionIsSet_ = true;
}

bool ShowFunctionConfigResponse::isStatefulFunctionIsSet() const
{
    return isStatefulFunctionIsSet_;
}

void ShowFunctionConfigResponse::unsetisStatefulFunction()
{
    isStatefulFunctionIsSet_ = false;
}

bool ShowFunctionConfigResponse::isIsBridgeFunction() const
{
    return isBridgeFunction_;
}

void ShowFunctionConfigResponse::setIsBridgeFunction(bool value)
{
    isBridgeFunction_ = value;
    isBridgeFunctionIsSet_ = true;
}

bool ShowFunctionConfigResponse::isBridgeFunctionIsSet() const
{
    return isBridgeFunctionIsSet_;
}

void ShowFunctionConfigResponse::unsetisBridgeFunction()
{
    isBridgeFunctionIsSet_ = false;
}

bool ShowFunctionConfigResponse::isEnableAuthInHeader() const
{
    return enableAuthInHeader_;
}

void ShowFunctionConfigResponse::setEnableAuthInHeader(bool value)
{
    enableAuthInHeader_ = value;
    enableAuthInHeaderIsSet_ = true;
}

bool ShowFunctionConfigResponse::enableAuthInHeaderIsSet() const
{
    return enableAuthInHeaderIsSet_;
}

void ShowFunctionConfigResponse::unsetenableAuthInHeader()
{
    enableAuthInHeaderIsSet_ = false;
}

CustomImage ShowFunctionConfigResponse::getCustomImage() const
{
    return customImage_;
}

void ShowFunctionConfigResponse::setCustomImage(const CustomImage& value)
{
    customImage_ = value;
    customImageIsSet_ = true;
}

bool ShowFunctionConfigResponse::customImageIsSet() const
{
    return customImageIsSet_;
}

void ShowFunctionConfigResponse::unsetcustomImage()
{
    customImageIsSet_ = false;
}

bool ShowFunctionConfigResponse::isReservedInstanceIdleMode() const
{
    return reservedInstanceIdleMode_;
}

void ShowFunctionConfigResponse::setReservedInstanceIdleMode(bool value)
{
    reservedInstanceIdleMode_ = value;
    reservedInstanceIdleModeIsSet_ = true;
}

bool ShowFunctionConfigResponse::reservedInstanceIdleModeIsSet() const
{
    return reservedInstanceIdleModeIsSet_;
}

void ShowFunctionConfigResponse::unsetreservedInstanceIdleMode()
{
    reservedInstanceIdleModeIsSet_ = false;
}

bool ShowFunctionConfigResponse::isApigRouteEnable() const
{
    return apigRouteEnable_;
}

void ShowFunctionConfigResponse::setApigRouteEnable(bool value)
{
    apigRouteEnable_ = value;
    apigRouteEnableIsSet_ = true;
}

bool ShowFunctionConfigResponse::apigRouteEnableIsSet() const
{
    return apigRouteEnableIsSet_;
}

void ShowFunctionConfigResponse::unsetapigRouteEnable()
{
    apigRouteEnableIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getHeartbeatHandler() const
{
    return heartbeatHandler_;
}

void ShowFunctionConfigResponse::setHeartbeatHandler(const std::string& value)
{
    heartbeatHandler_ = value;
    heartbeatHandlerIsSet_ = true;
}

bool ShowFunctionConfigResponse::heartbeatHandlerIsSet() const
{
    return heartbeatHandlerIsSet_;
}

void ShowFunctionConfigResponse::unsetheartbeatHandler()
{
    heartbeatHandlerIsSet_ = false;
}

bool ShowFunctionConfigResponse::isEnableClassIsolation() const
{
    return enableClassIsolation_;
}

void ShowFunctionConfigResponse::setEnableClassIsolation(bool value)
{
    enableClassIsolation_ = value;
    enableClassIsolationIsSet_ = true;
}

bool ShowFunctionConfigResponse::enableClassIsolationIsSet() const
{
    return enableClassIsolationIsSet_;
}

void ShowFunctionConfigResponse::unsetenableClassIsolation()
{
    enableClassIsolationIsSet_ = false;
}

bool ShowFunctionConfigResponse::isAllowEphemeralStorage() const
{
    return allowEphemeralStorage_;
}

void ShowFunctionConfigResponse::setAllowEphemeralStorage(bool value)
{
    allowEphemeralStorage_ = value;
    allowEphemeralStorageIsSet_ = true;
}

bool ShowFunctionConfigResponse::allowEphemeralStorageIsSet() const
{
    return allowEphemeralStorageIsSet_;
}

void ShowFunctionConfigResponse::unsetallowEphemeralStorage()
{
    allowEphemeralStorageIsSet_ = false;
}

NetworkControlConfig ShowFunctionConfigResponse::getNetworkController() const
{
    return networkController_;
}

void ShowFunctionConfigResponse::setNetworkController(const NetworkControlConfig& value)
{
    networkController_ = value;
    networkControllerIsSet_ = true;
}

bool ShowFunctionConfigResponse::networkControllerIsSet() const
{
    return networkControllerIsSet_;
}

void ShowFunctionConfigResponse::unsetnetworkController()
{
    networkControllerIsSet_ = false;
}

bool ShowFunctionConfigResponse::isIsReturnStream() const
{
    return isReturnStream_;
}

void ShowFunctionConfigResponse::setIsReturnStream(bool value)
{
    isReturnStream_ = value;
    isReturnStreamIsSet_ = true;
}

bool ShowFunctionConfigResponse::isReturnStreamIsSet() const
{
    return isReturnStreamIsSet_;
}

void ShowFunctionConfigResponse::unsetisReturnStream()
{
    isReturnStreamIsSet_ = false;
}

bool ShowFunctionConfigResponse::isEnableLtsLog() const
{
    return enableLtsLog_;
}

void ShowFunctionConfigResponse::setEnableLtsLog(bool value)
{
    enableLtsLog_ = value;
    enableLtsLogIsSet_ = true;
}

bool ShowFunctionConfigResponse::enableLtsLogIsSet() const
{
    return enableLtsLogIsSet_;
}

void ShowFunctionConfigResponse::unsetenableLtsLog()
{
    enableLtsLogIsSet_ = false;
}

std::map<std::string, std::string>& ShowFunctionConfigResponse::getLtsCustomTag()
{
    return ltsCustomTag_;
}

void ShowFunctionConfigResponse::setLtsCustomTag(const std::map<std::string, std::string>& value)
{
    ltsCustomTag_ = value;
    ltsCustomTagIsSet_ = true;
}

bool ShowFunctionConfigResponse::ltsCustomTagIsSet() const
{
    return ltsCustomTagIsSet_;
}

void ShowFunctionConfigResponse::unsetltsCustomTag()
{
    ltsCustomTagIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getUserDataEncryptKmsKeyId() const
{
    return userDataEncryptKmsKeyId_;
}

void ShowFunctionConfigResponse::setUserDataEncryptKmsKeyId(const std::string& value)
{
    userDataEncryptKmsKeyId_ = value;
    userDataEncryptKmsKeyIdIsSet_ = true;
}

bool ShowFunctionConfigResponse::userDataEncryptKmsKeyIdIsSet() const
{
    return userDataEncryptKmsKeyIdIsSet_;
}

void ShowFunctionConfigResponse::unsetuserDataEncryptKmsKeyId()
{
    userDataEncryptKmsKeyIdIsSet_ = false;
}

std::string ShowFunctionConfigResponse::getCodeEncryptKmsKeyId() const
{
    return codeEncryptKmsKeyId_;
}

void ShowFunctionConfigResponse::setCodeEncryptKmsKeyId(const std::string& value)
{
    codeEncryptKmsKeyId_ = value;
    codeEncryptKmsKeyIdIsSet_ = true;
}

bool ShowFunctionConfigResponse::codeEncryptKmsKeyIdIsSet() const
{
    return codeEncryptKmsKeyIdIsSet_;
}

void ShowFunctionConfigResponse::unsetcodeEncryptKmsKeyId()
{
    codeEncryptKmsKeyIdIsSet_ = false;
}

}
}
}
}
}


