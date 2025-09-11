

#include "huaweicloud/functiongraph/v2/model/UpdateFunctionConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateFunctionConfigResponse::UpdateFunctionConfigResponse()
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
    domainNames_ = "";
    domainNamesIsSet_ = false;
    enableAuthInHeader_ = false;
    enableAuthInHeaderIsSet_ = false;
    customImageIsSet_ = false;
    isReturnStream_ = false;
    isReturnStreamIsSet_ = false;
    enableLtsLog_ = false;
    enableLtsLogIsSet_ = false;
    ltsCustomTagIsSet_ = false;
    userDataEncryptKmsKeyId_ = "";
    userDataEncryptKmsKeyIdIsSet_ = false;
}

UpdateFunctionConfigResponse::~UpdateFunctionConfigResponse() = default;

void UpdateFunctionConfigResponse::validate()
{
}

web::json::value UpdateFunctionConfigResponse::toJson() const
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
    if(domainNamesIsSet_) {
        val[utility::conversions::to_string_t("domain_names")] = ModelBase::toJson(domainNames_);
    }
    if(enableAuthInHeaderIsSet_) {
        val[utility::conversions::to_string_t("enable_auth_in_header")] = ModelBase::toJson(enableAuthInHeader_);
    }
    if(customImageIsSet_) {
        val[utility::conversions::to_string_t("custom_image")] = ModelBase::toJson(customImage_);
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

    return val;
}
bool UpdateFunctionConfigResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("domain_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_names"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainNames(refVal);
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
    return ok;
}


std::string UpdateFunctionConfigResponse::getFuncId() const
{
    return funcId_;
}

void UpdateFunctionConfigResponse::setFuncId(const std::string& value)
{
    funcId_ = value;
    funcIdIsSet_ = true;
}

bool UpdateFunctionConfigResponse::funcIdIsSet() const
{
    return funcIdIsSet_;
}

void UpdateFunctionConfigResponse::unsetfuncId()
{
    funcIdIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getResourceId() const
{
    return resourceId_;
}

void UpdateFunctionConfigResponse::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool UpdateFunctionConfigResponse::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void UpdateFunctionConfigResponse::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getFuncUrn() const
{
    return funcUrn_;
}

void UpdateFunctionConfigResponse::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool UpdateFunctionConfigResponse::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void UpdateFunctionConfigResponse::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getFuncName() const
{
    return funcName_;
}

void UpdateFunctionConfigResponse::setFuncName(const std::string& value)
{
    funcName_ = value;
    funcNameIsSet_ = true;
}

bool UpdateFunctionConfigResponse::funcNameIsSet() const
{
    return funcNameIsSet_;
}

void UpdateFunctionConfigResponse::unsetfuncName()
{
    funcNameIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getDomainId() const
{
    return domainId_;
}

void UpdateFunctionConfigResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateFunctionConfigResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateFunctionConfigResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getNamespace() const
{
    return namespace_;
}

void UpdateFunctionConfigResponse::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool UpdateFunctionConfigResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void UpdateFunctionConfigResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getProjectName() const
{
    return projectName_;
}

void UpdateFunctionConfigResponse::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool UpdateFunctionConfigResponse::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void UpdateFunctionConfigResponse::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getPackage() const
{
    return package_;
}

void UpdateFunctionConfigResponse::setPackage(const std::string& value)
{
    package_ = value;
    packageIsSet_ = true;
}

bool UpdateFunctionConfigResponse::packageIsSet() const
{
    return packageIsSet_;
}

void UpdateFunctionConfigResponse::unsetpackage()
{
    packageIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getRuntime() const
{
    return runtime_;
}

void UpdateFunctionConfigResponse::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool UpdateFunctionConfigResponse::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void UpdateFunctionConfigResponse::unsetruntime()
{
    runtimeIsSet_ = false;
}

int32_t UpdateFunctionConfigResponse::getTimeout() const
{
    return timeout_;
}

void UpdateFunctionConfigResponse::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool UpdateFunctionConfigResponse::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void UpdateFunctionConfigResponse::unsettimeout()
{
    timeoutIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getHandler() const
{
    return handler_;
}

void UpdateFunctionConfigResponse::setHandler(const std::string& value)
{
    handler_ = value;
    handlerIsSet_ = true;
}

bool UpdateFunctionConfigResponse::handlerIsSet() const
{
    return handlerIsSet_;
}

void UpdateFunctionConfigResponse::unsethandler()
{
    handlerIsSet_ = false;
}

int32_t UpdateFunctionConfigResponse::getMemorySize() const
{
    return memorySize_;
}

void UpdateFunctionConfigResponse::setMemorySize(int32_t value)
{
    memorySize_ = value;
    memorySizeIsSet_ = true;
}

bool UpdateFunctionConfigResponse::memorySizeIsSet() const
{
    return memorySizeIsSet_;
}

void UpdateFunctionConfigResponse::unsetmemorySize()
{
    memorySizeIsSet_ = false;
}

int32_t UpdateFunctionConfigResponse::getGpuMemory() const
{
    return gpuMemory_;
}

void UpdateFunctionConfigResponse::setGpuMemory(int32_t value)
{
    gpuMemory_ = value;
    gpuMemoryIsSet_ = true;
}

bool UpdateFunctionConfigResponse::gpuMemoryIsSet() const
{
    return gpuMemoryIsSet_;
}

void UpdateFunctionConfigResponse::unsetgpuMemory()
{
    gpuMemoryIsSet_ = false;
}

int32_t UpdateFunctionConfigResponse::getCpu() const
{
    return cpu_;
}

void UpdateFunctionConfigResponse::setCpu(int32_t value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool UpdateFunctionConfigResponse::cpuIsSet() const
{
    return cpuIsSet_;
}

void UpdateFunctionConfigResponse::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getCodeType() const
{
    return codeType_;
}

void UpdateFunctionConfigResponse::setCodeType(const std::string& value)
{
    codeType_ = value;
    codeTypeIsSet_ = true;
}

bool UpdateFunctionConfigResponse::codeTypeIsSet() const
{
    return codeTypeIsSet_;
}

void UpdateFunctionConfigResponse::unsetcodeType()
{
    codeTypeIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getCodeUrl() const
{
    return codeUrl_;
}

void UpdateFunctionConfigResponse::setCodeUrl(const std::string& value)
{
    codeUrl_ = value;
    codeUrlIsSet_ = true;
}

bool UpdateFunctionConfigResponse::codeUrlIsSet() const
{
    return codeUrlIsSet_;
}

void UpdateFunctionConfigResponse::unsetcodeUrl()
{
    codeUrlIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getCodeFilename() const
{
    return codeFilename_;
}

void UpdateFunctionConfigResponse::setCodeFilename(const std::string& value)
{
    codeFilename_ = value;
    codeFilenameIsSet_ = true;
}

bool UpdateFunctionConfigResponse::codeFilenameIsSet() const
{
    return codeFilenameIsSet_;
}

void UpdateFunctionConfigResponse::unsetcodeFilename()
{
    codeFilenameIsSet_ = false;
}

int64_t UpdateFunctionConfigResponse::getCodeSize() const
{
    return codeSize_;
}

void UpdateFunctionConfigResponse::setCodeSize(int64_t value)
{
    codeSize_ = value;
    codeSizeIsSet_ = true;
}

bool UpdateFunctionConfigResponse::codeSizeIsSet() const
{
    return codeSizeIsSet_;
}

void UpdateFunctionConfigResponse::unsetcodeSize()
{
    codeSizeIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getUserData() const
{
    return userData_;
}

void UpdateFunctionConfigResponse::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool UpdateFunctionConfigResponse::userDataIsSet() const
{
    return userDataIsSet_;
}

void UpdateFunctionConfigResponse::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getEncryptedUserData() const
{
    return encryptedUserData_;
}

void UpdateFunctionConfigResponse::setEncryptedUserData(const std::string& value)
{
    encryptedUserData_ = value;
    encryptedUserDataIsSet_ = true;
}

bool UpdateFunctionConfigResponse::encryptedUserDataIsSet() const
{
    return encryptedUserDataIsSet_;
}

void UpdateFunctionConfigResponse::unsetencryptedUserData()
{
    encryptedUserDataIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getDigest() const
{
    return digest_;
}

void UpdateFunctionConfigResponse::setDigest(const std::string& value)
{
    digest_ = value;
    digestIsSet_ = true;
}

bool UpdateFunctionConfigResponse::digestIsSet() const
{
    return digestIsSet_;
}

void UpdateFunctionConfigResponse::unsetdigest()
{
    digestIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getVersion() const
{
    return version_;
}

void UpdateFunctionConfigResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool UpdateFunctionConfigResponse::versionIsSet() const
{
    return versionIsSet_;
}

void UpdateFunctionConfigResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getImageName() const
{
    return imageName_;
}

void UpdateFunctionConfigResponse::setImageName(const std::string& value)
{
    imageName_ = value;
    imageNameIsSet_ = true;
}

bool UpdateFunctionConfigResponse::imageNameIsSet() const
{
    return imageNameIsSet_;
}

void UpdateFunctionConfigResponse::unsetimageName()
{
    imageNameIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getXrole() const
{
    return xrole_;
}

void UpdateFunctionConfigResponse::setXrole(const std::string& value)
{
    xrole_ = value;
    xroleIsSet_ = true;
}

bool UpdateFunctionConfigResponse::xroleIsSet() const
{
    return xroleIsSet_;
}

void UpdateFunctionConfigResponse::unsetxrole()
{
    xroleIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getAppXrole() const
{
    return appXrole_;
}

void UpdateFunctionConfigResponse::setAppXrole(const std::string& value)
{
    appXrole_ = value;
    appXroleIsSet_ = true;
}

bool UpdateFunctionConfigResponse::appXroleIsSet() const
{
    return appXroleIsSet_;
}

void UpdateFunctionConfigResponse::unsetappXrole()
{
    appXroleIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getDescription() const
{
    return description_;
}

void UpdateFunctionConfigResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateFunctionConfigResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateFunctionConfigResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

utility::datetime UpdateFunctionConfigResponse::getLastModified() const
{
    return lastModified_;
}

void UpdateFunctionConfigResponse::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool UpdateFunctionConfigResponse::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void UpdateFunctionConfigResponse::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

int32_t UpdateFunctionConfigResponse::getEphemeralStorage() const
{
    return ephemeralStorage_;
}

void UpdateFunctionConfigResponse::setEphemeralStorage(int32_t value)
{
    ephemeralStorage_ = value;
    ephemeralStorageIsSet_ = true;
}

bool UpdateFunctionConfigResponse::ephemeralStorageIsSet() const
{
    return ephemeralStorageIsSet_;
}

void UpdateFunctionConfigResponse::unsetephemeralStorage()
{
    ephemeralStorageIsSet_ = false;
}

FuncVpc UpdateFunctionConfigResponse::getFuncVpc() const
{
    return funcVpc_;
}

void UpdateFunctionConfigResponse::setFuncVpc(const FuncVpc& value)
{
    funcVpc_ = value;
    funcVpcIsSet_ = true;
}

bool UpdateFunctionConfigResponse::funcVpcIsSet() const
{
    return funcVpcIsSet_;
}

void UpdateFunctionConfigResponse::unsetfuncVpc()
{
    funcVpcIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getPeeringCidr() const
{
    return peeringCidr_;
}

void UpdateFunctionConfigResponse::setPeeringCidr(const std::string& value)
{
    peeringCidr_ = value;
    peeringCidrIsSet_ = true;
}

bool UpdateFunctionConfigResponse::peeringCidrIsSet() const
{
    return peeringCidrIsSet_;
}

void UpdateFunctionConfigResponse::unsetpeeringCidr()
{
    peeringCidrIsSet_ = false;
}

MountConfig UpdateFunctionConfigResponse::getMountConfig() const
{
    return mountConfig_;
}

void UpdateFunctionConfigResponse::setMountConfig(const MountConfig& value)
{
    mountConfig_ = value;
    mountConfigIsSet_ = true;
}

bool UpdateFunctionConfigResponse::mountConfigIsSet() const
{
    return mountConfigIsSet_;
}

void UpdateFunctionConfigResponse::unsetmountConfig()
{
    mountConfigIsSet_ = false;
}

StrategyConfig UpdateFunctionConfigResponse::getStrategyConfig() const
{
    return strategyConfig_;
}

void UpdateFunctionConfigResponse::setStrategyConfig(const StrategyConfig& value)
{
    strategyConfig_ = value;
    strategyConfigIsSet_ = true;
}

bool UpdateFunctionConfigResponse::strategyConfigIsSet() const
{
    return strategyConfigIsSet_;
}

void UpdateFunctionConfigResponse::unsetstrategyConfig()
{
    strategyConfigIsSet_ = false;
}

std::vector<Dependency>& UpdateFunctionConfigResponse::getDependencies()
{
    return dependencies_;
}

void UpdateFunctionConfigResponse::setDependencies(const std::vector<Dependency>& value)
{
    dependencies_ = value;
    dependenciesIsSet_ = true;
}

bool UpdateFunctionConfigResponse::dependenciesIsSet() const
{
    return dependenciesIsSet_;
}

void UpdateFunctionConfigResponse::unsetdependencies()
{
    dependenciesIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getInitializerHandler() const
{
    return initializerHandler_;
}

void UpdateFunctionConfigResponse::setInitializerHandler(const std::string& value)
{
    initializerHandler_ = value;
    initializerHandlerIsSet_ = true;
}

bool UpdateFunctionConfigResponse::initializerHandlerIsSet() const
{
    return initializerHandlerIsSet_;
}

void UpdateFunctionConfigResponse::unsetinitializerHandler()
{
    initializerHandlerIsSet_ = false;
}

int32_t UpdateFunctionConfigResponse::getInitializerTimeout() const
{
    return initializerTimeout_;
}

void UpdateFunctionConfigResponse::setInitializerTimeout(int32_t value)
{
    initializerTimeout_ = value;
    initializerTimeoutIsSet_ = true;
}

bool UpdateFunctionConfigResponse::initializerTimeoutIsSet() const
{
    return initializerTimeoutIsSet_;
}

void UpdateFunctionConfigResponse::unsetinitializerTimeout()
{
    initializerTimeoutIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getPreStopHandler() const
{
    return preStopHandler_;
}

void UpdateFunctionConfigResponse::setPreStopHandler(const std::string& value)
{
    preStopHandler_ = value;
    preStopHandlerIsSet_ = true;
}

bool UpdateFunctionConfigResponse::preStopHandlerIsSet() const
{
    return preStopHandlerIsSet_;
}

void UpdateFunctionConfigResponse::unsetpreStopHandler()
{
    preStopHandlerIsSet_ = false;
}

int32_t UpdateFunctionConfigResponse::getPreStopTimeout() const
{
    return preStopTimeout_;
}

void UpdateFunctionConfigResponse::setPreStopTimeout(int32_t value)
{
    preStopTimeout_ = value;
    preStopTimeoutIsSet_ = true;
}

bool UpdateFunctionConfigResponse::preStopTimeoutIsSet() const
{
    return preStopTimeoutIsSet_;
}

void UpdateFunctionConfigResponse::unsetpreStopTimeout()
{
    preStopTimeoutIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateFunctionConfigResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateFunctionConfigResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateFunctionConfigResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool UpdateFunctionConfigResponse::isLongTime() const
{
    return longTime_;
}

void UpdateFunctionConfigResponse::setLongTime(bool value)
{
    longTime_ = value;
    longTimeIsSet_ = true;
}

bool UpdateFunctionConfigResponse::longTimeIsSet() const
{
    return longTimeIsSet_;
}

void UpdateFunctionConfigResponse::unsetlongTime()
{
    longTimeIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getLogGroupId() const
{
    return logGroupId_;
}

void UpdateFunctionConfigResponse::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool UpdateFunctionConfigResponse::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void UpdateFunctionConfigResponse::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getLogStreamId() const
{
    return logStreamId_;
}

void UpdateFunctionConfigResponse::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool UpdateFunctionConfigResponse::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void UpdateFunctionConfigResponse::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getType() const
{
    return type_;
}

void UpdateFunctionConfigResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpdateFunctionConfigResponse::typeIsSet() const
{
    return typeIsSet_;
}

void UpdateFunctionConfigResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getEnableCloudDebug() const
{
    return enableCloudDebug_;
}

void UpdateFunctionConfigResponse::setEnableCloudDebug(const std::string& value)
{
    enableCloudDebug_ = value;
    enableCloudDebugIsSet_ = true;
}

bool UpdateFunctionConfigResponse::enableCloudDebugIsSet() const
{
    return enableCloudDebugIsSet_;
}

void UpdateFunctionConfigResponse::unsetenableCloudDebug()
{
    enableCloudDebugIsSet_ = false;
}

bool UpdateFunctionConfigResponse::isEnableDynamicMemory() const
{
    return enableDynamicMemory_;
}

void UpdateFunctionConfigResponse::setEnableDynamicMemory(bool value)
{
    enableDynamicMemory_ = value;
    enableDynamicMemoryIsSet_ = true;
}

bool UpdateFunctionConfigResponse::enableDynamicMemoryIsSet() const
{
    return enableDynamicMemoryIsSet_;
}

void UpdateFunctionConfigResponse::unsetenableDynamicMemory()
{
    enableDynamicMemoryIsSet_ = false;
}

bool UpdateFunctionConfigResponse::isIsStatefulFunction() const
{
    return isStatefulFunction_;
}

void UpdateFunctionConfigResponse::setIsStatefulFunction(bool value)
{
    isStatefulFunction_ = value;
    isStatefulFunctionIsSet_ = true;
}

bool UpdateFunctionConfigResponse::isStatefulFunctionIsSet() const
{
    return isStatefulFunctionIsSet_;
}

void UpdateFunctionConfigResponse::unsetisStatefulFunction()
{
    isStatefulFunctionIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getDomainNames() const
{
    return domainNames_;
}

void UpdateFunctionConfigResponse::setDomainNames(const std::string& value)
{
    domainNames_ = value;
    domainNamesIsSet_ = true;
}

bool UpdateFunctionConfigResponse::domainNamesIsSet() const
{
    return domainNamesIsSet_;
}

void UpdateFunctionConfigResponse::unsetdomainNames()
{
    domainNamesIsSet_ = false;
}

bool UpdateFunctionConfigResponse::isEnableAuthInHeader() const
{
    return enableAuthInHeader_;
}

void UpdateFunctionConfigResponse::setEnableAuthInHeader(bool value)
{
    enableAuthInHeader_ = value;
    enableAuthInHeaderIsSet_ = true;
}

bool UpdateFunctionConfigResponse::enableAuthInHeaderIsSet() const
{
    return enableAuthInHeaderIsSet_;
}

void UpdateFunctionConfigResponse::unsetenableAuthInHeader()
{
    enableAuthInHeaderIsSet_ = false;
}

CustomImage UpdateFunctionConfigResponse::getCustomImage() const
{
    return customImage_;
}

void UpdateFunctionConfigResponse::setCustomImage(const CustomImage& value)
{
    customImage_ = value;
    customImageIsSet_ = true;
}

bool UpdateFunctionConfigResponse::customImageIsSet() const
{
    return customImageIsSet_;
}

void UpdateFunctionConfigResponse::unsetcustomImage()
{
    customImageIsSet_ = false;
}

bool UpdateFunctionConfigResponse::isIsReturnStream() const
{
    return isReturnStream_;
}

void UpdateFunctionConfigResponse::setIsReturnStream(bool value)
{
    isReturnStream_ = value;
    isReturnStreamIsSet_ = true;
}

bool UpdateFunctionConfigResponse::isReturnStreamIsSet() const
{
    return isReturnStreamIsSet_;
}

void UpdateFunctionConfigResponse::unsetisReturnStream()
{
    isReturnStreamIsSet_ = false;
}

bool UpdateFunctionConfigResponse::isEnableLtsLog() const
{
    return enableLtsLog_;
}

void UpdateFunctionConfigResponse::setEnableLtsLog(bool value)
{
    enableLtsLog_ = value;
    enableLtsLogIsSet_ = true;
}

bool UpdateFunctionConfigResponse::enableLtsLogIsSet() const
{
    return enableLtsLogIsSet_;
}

void UpdateFunctionConfigResponse::unsetenableLtsLog()
{
    enableLtsLogIsSet_ = false;
}

std::map<std::string, std::string>& UpdateFunctionConfigResponse::getLtsCustomTag()
{
    return ltsCustomTag_;
}

void UpdateFunctionConfigResponse::setLtsCustomTag(const std::map<std::string, std::string>& value)
{
    ltsCustomTag_ = value;
    ltsCustomTagIsSet_ = true;
}

bool UpdateFunctionConfigResponse::ltsCustomTagIsSet() const
{
    return ltsCustomTagIsSet_;
}

void UpdateFunctionConfigResponse::unsetltsCustomTag()
{
    ltsCustomTagIsSet_ = false;
}

std::string UpdateFunctionConfigResponse::getUserDataEncryptKmsKeyId() const
{
    return userDataEncryptKmsKeyId_;
}

void UpdateFunctionConfigResponse::setUserDataEncryptKmsKeyId(const std::string& value)
{
    userDataEncryptKmsKeyId_ = value;
    userDataEncryptKmsKeyIdIsSet_ = true;
}

bool UpdateFunctionConfigResponse::userDataEncryptKmsKeyIdIsSet() const
{
    return userDataEncryptKmsKeyIdIsSet_;
}

void UpdateFunctionConfigResponse::unsetuserDataEncryptKmsKeyId()
{
    userDataEncryptKmsKeyIdIsSet_ = false;
}

}
}
}
}
}


