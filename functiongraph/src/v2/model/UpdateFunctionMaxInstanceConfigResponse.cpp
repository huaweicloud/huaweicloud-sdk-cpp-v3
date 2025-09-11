

#include "huaweicloud/functiongraph/v2/model/UpdateFunctionMaxInstanceConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateFunctionMaxInstanceConfigResponse::UpdateFunctionMaxInstanceConfigResponse()
{
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
    funcVpcIsSet_ = false;
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
    isReturnStream_ = false;
    isReturnStreamIsSet_ = false;
    enableAuthInHeader_ = false;
    enableAuthInHeaderIsSet_ = false;
}

UpdateFunctionMaxInstanceConfigResponse::~UpdateFunctionMaxInstanceConfigResponse() = default;

void UpdateFunctionMaxInstanceConfigResponse::validate()
{
}

web::json::value UpdateFunctionMaxInstanceConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(funcVpcIsSet_) {
        val[utility::conversions::to_string_t("func_vpc")] = ModelBase::toJson(funcVpc_);
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
    if(isReturnStreamIsSet_) {
        val[utility::conversions::to_string_t("is_return_stream")] = ModelBase::toJson(isReturnStream_);
    }
    if(enableAuthInHeaderIsSet_) {
        val[utility::conversions::to_string_t("enable_auth_in_header")] = ModelBase::toJson(enableAuthInHeader_);
    }

    return val;
}
bool UpdateFunctionMaxInstanceConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string UpdateFunctionMaxInstanceConfigResponse::getFuncUrn() const
{
    return funcUrn_;
}

void UpdateFunctionMaxInstanceConfigResponse::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getFuncName() const
{
    return funcName_;
}

void UpdateFunctionMaxInstanceConfigResponse::setFuncName(const std::string& value)
{
    funcName_ = value;
    funcNameIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::funcNameIsSet() const
{
    return funcNameIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetfuncName()
{
    funcNameIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getDomainId() const
{
    return domainId_;
}

void UpdateFunctionMaxInstanceConfigResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getNamespace() const
{
    return namespace_;
}

void UpdateFunctionMaxInstanceConfigResponse::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getProjectName() const
{
    return projectName_;
}

void UpdateFunctionMaxInstanceConfigResponse::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getPackage() const
{
    return package_;
}

void UpdateFunctionMaxInstanceConfigResponse::setPackage(const std::string& value)
{
    package_ = value;
    packageIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::packageIsSet() const
{
    return packageIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetpackage()
{
    packageIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getRuntime() const
{
    return runtime_;
}

void UpdateFunctionMaxInstanceConfigResponse::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetruntime()
{
    runtimeIsSet_ = false;
}

int32_t UpdateFunctionMaxInstanceConfigResponse::getTimeout() const
{
    return timeout_;
}

void UpdateFunctionMaxInstanceConfigResponse::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsettimeout()
{
    timeoutIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getHandler() const
{
    return handler_;
}

void UpdateFunctionMaxInstanceConfigResponse::setHandler(const std::string& value)
{
    handler_ = value;
    handlerIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::handlerIsSet() const
{
    return handlerIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsethandler()
{
    handlerIsSet_ = false;
}

int32_t UpdateFunctionMaxInstanceConfigResponse::getMemorySize() const
{
    return memorySize_;
}

void UpdateFunctionMaxInstanceConfigResponse::setMemorySize(int32_t value)
{
    memorySize_ = value;
    memorySizeIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::memorySizeIsSet() const
{
    return memorySizeIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetmemorySize()
{
    memorySizeIsSet_ = false;
}

int32_t UpdateFunctionMaxInstanceConfigResponse::getCpu() const
{
    return cpu_;
}

void UpdateFunctionMaxInstanceConfigResponse::setCpu(int32_t value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::cpuIsSet() const
{
    return cpuIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getCodeType() const
{
    return codeType_;
}

void UpdateFunctionMaxInstanceConfigResponse::setCodeType(const std::string& value)
{
    codeType_ = value;
    codeTypeIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::codeTypeIsSet() const
{
    return codeTypeIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetcodeType()
{
    codeTypeIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getCodeUrl() const
{
    return codeUrl_;
}

void UpdateFunctionMaxInstanceConfigResponse::setCodeUrl(const std::string& value)
{
    codeUrl_ = value;
    codeUrlIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::codeUrlIsSet() const
{
    return codeUrlIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetcodeUrl()
{
    codeUrlIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getCodeFilename() const
{
    return codeFilename_;
}

void UpdateFunctionMaxInstanceConfigResponse::setCodeFilename(const std::string& value)
{
    codeFilename_ = value;
    codeFilenameIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::codeFilenameIsSet() const
{
    return codeFilenameIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetcodeFilename()
{
    codeFilenameIsSet_ = false;
}

int64_t UpdateFunctionMaxInstanceConfigResponse::getCodeSize() const
{
    return codeSize_;
}

void UpdateFunctionMaxInstanceConfigResponse::setCodeSize(int64_t value)
{
    codeSize_ = value;
    codeSizeIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::codeSizeIsSet() const
{
    return codeSizeIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetcodeSize()
{
    codeSizeIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getUserData() const
{
    return userData_;
}

void UpdateFunctionMaxInstanceConfigResponse::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::userDataIsSet() const
{
    return userDataIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getEncryptedUserData() const
{
    return encryptedUserData_;
}

void UpdateFunctionMaxInstanceConfigResponse::setEncryptedUserData(const std::string& value)
{
    encryptedUserData_ = value;
    encryptedUserDataIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::encryptedUserDataIsSet() const
{
    return encryptedUserDataIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetencryptedUserData()
{
    encryptedUserDataIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getDigest() const
{
    return digest_;
}

void UpdateFunctionMaxInstanceConfigResponse::setDigest(const std::string& value)
{
    digest_ = value;
    digestIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::digestIsSet() const
{
    return digestIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetdigest()
{
    digestIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getVersion() const
{
    return version_;
}

void UpdateFunctionMaxInstanceConfigResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::versionIsSet() const
{
    return versionIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getImageName() const
{
    return imageName_;
}

void UpdateFunctionMaxInstanceConfigResponse::setImageName(const std::string& value)
{
    imageName_ = value;
    imageNameIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::imageNameIsSet() const
{
    return imageNameIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetimageName()
{
    imageNameIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getXrole() const
{
    return xrole_;
}

void UpdateFunctionMaxInstanceConfigResponse::setXrole(const std::string& value)
{
    xrole_ = value;
    xroleIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::xroleIsSet() const
{
    return xroleIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetxrole()
{
    xroleIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getAppXrole() const
{
    return appXrole_;
}

void UpdateFunctionMaxInstanceConfigResponse::setAppXrole(const std::string& value)
{
    appXrole_ = value;
    appXroleIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::appXroleIsSet() const
{
    return appXroleIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetappXrole()
{
    appXroleIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getDescription() const
{
    return description_;
}

void UpdateFunctionMaxInstanceConfigResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

utility::datetime UpdateFunctionMaxInstanceConfigResponse::getLastModified() const
{
    return lastModified_;
}

void UpdateFunctionMaxInstanceConfigResponse::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

FuncVpc UpdateFunctionMaxInstanceConfigResponse::getFuncVpc() const
{
    return funcVpc_;
}

void UpdateFunctionMaxInstanceConfigResponse::setFuncVpc(const FuncVpc& value)
{
    funcVpc_ = value;
    funcVpcIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::funcVpcIsSet() const
{
    return funcVpcIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetfuncVpc()
{
    funcVpcIsSet_ = false;
}

MountConfig UpdateFunctionMaxInstanceConfigResponse::getMountConfig() const
{
    return mountConfig_;
}

void UpdateFunctionMaxInstanceConfigResponse::setMountConfig(const MountConfig& value)
{
    mountConfig_ = value;
    mountConfigIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::mountConfigIsSet() const
{
    return mountConfigIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetmountConfig()
{
    mountConfigIsSet_ = false;
}

StrategyConfig UpdateFunctionMaxInstanceConfigResponse::getStrategyConfig() const
{
    return strategyConfig_;
}

void UpdateFunctionMaxInstanceConfigResponse::setStrategyConfig(const StrategyConfig& value)
{
    strategyConfig_ = value;
    strategyConfigIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::strategyConfigIsSet() const
{
    return strategyConfigIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetstrategyConfig()
{
    strategyConfigIsSet_ = false;
}

std::vector<Dependency>& UpdateFunctionMaxInstanceConfigResponse::getDependencies()
{
    return dependencies_;
}

void UpdateFunctionMaxInstanceConfigResponse::setDependencies(const std::vector<Dependency>& value)
{
    dependencies_ = value;
    dependenciesIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::dependenciesIsSet() const
{
    return dependenciesIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetdependencies()
{
    dependenciesIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getInitializerHandler() const
{
    return initializerHandler_;
}

void UpdateFunctionMaxInstanceConfigResponse::setInitializerHandler(const std::string& value)
{
    initializerHandler_ = value;
    initializerHandlerIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::initializerHandlerIsSet() const
{
    return initializerHandlerIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetinitializerHandler()
{
    initializerHandlerIsSet_ = false;
}

int32_t UpdateFunctionMaxInstanceConfigResponse::getInitializerTimeout() const
{
    return initializerTimeout_;
}

void UpdateFunctionMaxInstanceConfigResponse::setInitializerTimeout(int32_t value)
{
    initializerTimeout_ = value;
    initializerTimeoutIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::initializerTimeoutIsSet() const
{
    return initializerTimeoutIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetinitializerTimeout()
{
    initializerTimeoutIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getPreStopHandler() const
{
    return preStopHandler_;
}

void UpdateFunctionMaxInstanceConfigResponse::setPreStopHandler(const std::string& value)
{
    preStopHandler_ = value;
    preStopHandlerIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::preStopHandlerIsSet() const
{
    return preStopHandlerIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetpreStopHandler()
{
    preStopHandlerIsSet_ = false;
}

int32_t UpdateFunctionMaxInstanceConfigResponse::getPreStopTimeout() const
{
    return preStopTimeout_;
}

void UpdateFunctionMaxInstanceConfigResponse::setPreStopTimeout(int32_t value)
{
    preStopTimeout_ = value;
    preStopTimeoutIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::preStopTimeoutIsSet() const
{
    return preStopTimeoutIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetpreStopTimeout()
{
    preStopTimeoutIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateFunctionMaxInstanceConfigResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool UpdateFunctionMaxInstanceConfigResponse::isLongTime() const
{
    return longTime_;
}

void UpdateFunctionMaxInstanceConfigResponse::setLongTime(bool value)
{
    longTime_ = value;
    longTimeIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::longTimeIsSet() const
{
    return longTimeIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetlongTime()
{
    longTimeIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getLogGroupId() const
{
    return logGroupId_;
}

void UpdateFunctionMaxInstanceConfigResponse::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getLogStreamId() const
{
    return logStreamId_;
}

void UpdateFunctionMaxInstanceConfigResponse::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getType() const
{
    return type_;
}

void UpdateFunctionMaxInstanceConfigResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::typeIsSet() const
{
    return typeIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getEnableCloudDebug() const
{
    return enableCloudDebug_;
}

void UpdateFunctionMaxInstanceConfigResponse::setEnableCloudDebug(const std::string& value)
{
    enableCloudDebug_ = value;
    enableCloudDebugIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::enableCloudDebugIsSet() const
{
    return enableCloudDebugIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetenableCloudDebug()
{
    enableCloudDebugIsSet_ = false;
}

bool UpdateFunctionMaxInstanceConfigResponse::isEnableDynamicMemory() const
{
    return enableDynamicMemory_;
}

void UpdateFunctionMaxInstanceConfigResponse::setEnableDynamicMemory(bool value)
{
    enableDynamicMemory_ = value;
    enableDynamicMemoryIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::enableDynamicMemoryIsSet() const
{
    return enableDynamicMemoryIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetenableDynamicMemory()
{
    enableDynamicMemoryIsSet_ = false;
}

bool UpdateFunctionMaxInstanceConfigResponse::isIsStatefulFunction() const
{
    return isStatefulFunction_;
}

void UpdateFunctionMaxInstanceConfigResponse::setIsStatefulFunction(bool value)
{
    isStatefulFunction_ = value;
    isStatefulFunctionIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::isStatefulFunctionIsSet() const
{
    return isStatefulFunctionIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetisStatefulFunction()
{
    isStatefulFunctionIsSet_ = false;
}

std::string UpdateFunctionMaxInstanceConfigResponse::getDomainNames() const
{
    return domainNames_;
}

void UpdateFunctionMaxInstanceConfigResponse::setDomainNames(const std::string& value)
{
    domainNames_ = value;
    domainNamesIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::domainNamesIsSet() const
{
    return domainNamesIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetdomainNames()
{
    domainNamesIsSet_ = false;
}

bool UpdateFunctionMaxInstanceConfigResponse::isIsReturnStream() const
{
    return isReturnStream_;
}

void UpdateFunctionMaxInstanceConfigResponse::setIsReturnStream(bool value)
{
    isReturnStream_ = value;
    isReturnStreamIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::isReturnStreamIsSet() const
{
    return isReturnStreamIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetisReturnStream()
{
    isReturnStreamIsSet_ = false;
}

bool UpdateFunctionMaxInstanceConfigResponse::isEnableAuthInHeader() const
{
    return enableAuthInHeader_;
}

void UpdateFunctionMaxInstanceConfigResponse::setEnableAuthInHeader(bool value)
{
    enableAuthInHeader_ = value;
    enableAuthInHeaderIsSet_ = true;
}

bool UpdateFunctionMaxInstanceConfigResponse::enableAuthInHeaderIsSet() const
{
    return enableAuthInHeaderIsSet_;
}

void UpdateFunctionMaxInstanceConfigResponse::unsetenableAuthInHeader()
{
    enableAuthInHeaderIsSet_ = false;
}

}
}
}
}
}


