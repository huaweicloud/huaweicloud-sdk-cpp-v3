

#include "huaweicloud/functiongraph/v2/model/CreateFunctionVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateFunctionVersionResponse::CreateFunctionVersionResponse()
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
    versionDescription_ = "";
    versionDescriptionIsSet_ = false;
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
    enableDynamicMemory_ = false;
    enableDynamicMemoryIsSet_ = false;
    functionAsyncConfigIsSet_ = false;
}

CreateFunctionVersionResponse::~CreateFunctionVersionResponse() = default;

void CreateFunctionVersionResponse::validate()
{
}

web::json::value CreateFunctionVersionResponse::toJson() const
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
    if(versionDescriptionIsSet_) {
        val[utility::conversions::to_string_t("version_description")] = ModelBase::toJson(versionDescription_);
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
    if(enableDynamicMemoryIsSet_) {
        val[utility::conversions::to_string_t("enable_dynamic_memory")] = ModelBase::toJson(enableDynamicMemory_);
    }
    if(functionAsyncConfigIsSet_) {
        val[utility::conversions::to_string_t("function_async_config")] = ModelBase::toJson(functionAsyncConfig_);
    }

    return val;
}
bool CreateFunctionVersionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enable_dynamic_memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_dynamic_memory"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableDynamicMemory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("function_async_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_async_config"));
        if(!fieldValue.is_null())
        {
            FunctionAsyncConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionAsyncConfig(refVal);
        }
    }
    return ok;
}


std::string CreateFunctionVersionResponse::getFuncUrn() const
{
    return funcUrn_;
}

void CreateFunctionVersionResponse::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool CreateFunctionVersionResponse::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void CreateFunctionVersionResponse::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getFuncName() const
{
    return funcName_;
}

void CreateFunctionVersionResponse::setFuncName(const std::string& value)
{
    funcName_ = value;
    funcNameIsSet_ = true;
}

bool CreateFunctionVersionResponse::funcNameIsSet() const
{
    return funcNameIsSet_;
}

void CreateFunctionVersionResponse::unsetfuncName()
{
    funcNameIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getDomainId() const
{
    return domainId_;
}

void CreateFunctionVersionResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateFunctionVersionResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateFunctionVersionResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getNamespace() const
{
    return namespace_;
}

void CreateFunctionVersionResponse::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool CreateFunctionVersionResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void CreateFunctionVersionResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getProjectName() const
{
    return projectName_;
}

void CreateFunctionVersionResponse::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool CreateFunctionVersionResponse::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void CreateFunctionVersionResponse::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getPackage() const
{
    return package_;
}

void CreateFunctionVersionResponse::setPackage(const std::string& value)
{
    package_ = value;
    packageIsSet_ = true;
}

bool CreateFunctionVersionResponse::packageIsSet() const
{
    return packageIsSet_;
}

void CreateFunctionVersionResponse::unsetpackage()
{
    packageIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getRuntime() const
{
    return runtime_;
}

void CreateFunctionVersionResponse::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool CreateFunctionVersionResponse::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void CreateFunctionVersionResponse::unsetruntime()
{
    runtimeIsSet_ = false;
}

int32_t CreateFunctionVersionResponse::getTimeout() const
{
    return timeout_;
}

void CreateFunctionVersionResponse::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool CreateFunctionVersionResponse::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void CreateFunctionVersionResponse::unsettimeout()
{
    timeoutIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getHandler() const
{
    return handler_;
}

void CreateFunctionVersionResponse::setHandler(const std::string& value)
{
    handler_ = value;
    handlerIsSet_ = true;
}

bool CreateFunctionVersionResponse::handlerIsSet() const
{
    return handlerIsSet_;
}

void CreateFunctionVersionResponse::unsethandler()
{
    handlerIsSet_ = false;
}

int32_t CreateFunctionVersionResponse::getMemorySize() const
{
    return memorySize_;
}

void CreateFunctionVersionResponse::setMemorySize(int32_t value)
{
    memorySize_ = value;
    memorySizeIsSet_ = true;
}

bool CreateFunctionVersionResponse::memorySizeIsSet() const
{
    return memorySizeIsSet_;
}

void CreateFunctionVersionResponse::unsetmemorySize()
{
    memorySizeIsSet_ = false;
}

int32_t CreateFunctionVersionResponse::getCpu() const
{
    return cpu_;
}

void CreateFunctionVersionResponse::setCpu(int32_t value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool CreateFunctionVersionResponse::cpuIsSet() const
{
    return cpuIsSet_;
}

void CreateFunctionVersionResponse::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getCodeType() const
{
    return codeType_;
}

void CreateFunctionVersionResponse::setCodeType(const std::string& value)
{
    codeType_ = value;
    codeTypeIsSet_ = true;
}

bool CreateFunctionVersionResponse::codeTypeIsSet() const
{
    return codeTypeIsSet_;
}

void CreateFunctionVersionResponse::unsetcodeType()
{
    codeTypeIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getCodeUrl() const
{
    return codeUrl_;
}

void CreateFunctionVersionResponse::setCodeUrl(const std::string& value)
{
    codeUrl_ = value;
    codeUrlIsSet_ = true;
}

bool CreateFunctionVersionResponse::codeUrlIsSet() const
{
    return codeUrlIsSet_;
}

void CreateFunctionVersionResponse::unsetcodeUrl()
{
    codeUrlIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getCodeFilename() const
{
    return codeFilename_;
}

void CreateFunctionVersionResponse::setCodeFilename(const std::string& value)
{
    codeFilename_ = value;
    codeFilenameIsSet_ = true;
}

bool CreateFunctionVersionResponse::codeFilenameIsSet() const
{
    return codeFilenameIsSet_;
}

void CreateFunctionVersionResponse::unsetcodeFilename()
{
    codeFilenameIsSet_ = false;
}

int64_t CreateFunctionVersionResponse::getCodeSize() const
{
    return codeSize_;
}

void CreateFunctionVersionResponse::setCodeSize(int64_t value)
{
    codeSize_ = value;
    codeSizeIsSet_ = true;
}

bool CreateFunctionVersionResponse::codeSizeIsSet() const
{
    return codeSizeIsSet_;
}

void CreateFunctionVersionResponse::unsetcodeSize()
{
    codeSizeIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getUserData() const
{
    return userData_;
}

void CreateFunctionVersionResponse::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool CreateFunctionVersionResponse::userDataIsSet() const
{
    return userDataIsSet_;
}

void CreateFunctionVersionResponse::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getEncryptedUserData() const
{
    return encryptedUserData_;
}

void CreateFunctionVersionResponse::setEncryptedUserData(const std::string& value)
{
    encryptedUserData_ = value;
    encryptedUserDataIsSet_ = true;
}

bool CreateFunctionVersionResponse::encryptedUserDataIsSet() const
{
    return encryptedUserDataIsSet_;
}

void CreateFunctionVersionResponse::unsetencryptedUserData()
{
    encryptedUserDataIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getDigest() const
{
    return digest_;
}

void CreateFunctionVersionResponse::setDigest(const std::string& value)
{
    digest_ = value;
    digestIsSet_ = true;
}

bool CreateFunctionVersionResponse::digestIsSet() const
{
    return digestIsSet_;
}

void CreateFunctionVersionResponse::unsetdigest()
{
    digestIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getVersion() const
{
    return version_;
}

void CreateFunctionVersionResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CreateFunctionVersionResponse::versionIsSet() const
{
    return versionIsSet_;
}

void CreateFunctionVersionResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getImageName() const
{
    return imageName_;
}

void CreateFunctionVersionResponse::setImageName(const std::string& value)
{
    imageName_ = value;
    imageNameIsSet_ = true;
}

bool CreateFunctionVersionResponse::imageNameIsSet() const
{
    return imageNameIsSet_;
}

void CreateFunctionVersionResponse::unsetimageName()
{
    imageNameIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getXrole() const
{
    return xrole_;
}

void CreateFunctionVersionResponse::setXrole(const std::string& value)
{
    xrole_ = value;
    xroleIsSet_ = true;
}

bool CreateFunctionVersionResponse::xroleIsSet() const
{
    return xroleIsSet_;
}

void CreateFunctionVersionResponse::unsetxrole()
{
    xroleIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getAppXrole() const
{
    return appXrole_;
}

void CreateFunctionVersionResponse::setAppXrole(const std::string& value)
{
    appXrole_ = value;
    appXroleIsSet_ = true;
}

bool CreateFunctionVersionResponse::appXroleIsSet() const
{
    return appXroleIsSet_;
}

void CreateFunctionVersionResponse::unsetappXrole()
{
    appXroleIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getDescription() const
{
    return description_;
}

void CreateFunctionVersionResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateFunctionVersionResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateFunctionVersionResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getVersionDescription() const
{
    return versionDescription_;
}

void CreateFunctionVersionResponse::setVersionDescription(const std::string& value)
{
    versionDescription_ = value;
    versionDescriptionIsSet_ = true;
}

bool CreateFunctionVersionResponse::versionDescriptionIsSet() const
{
    return versionDescriptionIsSet_;
}

void CreateFunctionVersionResponse::unsetversionDescription()
{
    versionDescriptionIsSet_ = false;
}

utility::datetime CreateFunctionVersionResponse::getLastModified() const
{
    return lastModified_;
}

void CreateFunctionVersionResponse::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool CreateFunctionVersionResponse::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void CreateFunctionVersionResponse::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

FuncVpc CreateFunctionVersionResponse::getFuncVpc() const
{
    return funcVpc_;
}

void CreateFunctionVersionResponse::setFuncVpc(const FuncVpc& value)
{
    funcVpc_ = value;
    funcVpcIsSet_ = true;
}

bool CreateFunctionVersionResponse::funcVpcIsSet() const
{
    return funcVpcIsSet_;
}

void CreateFunctionVersionResponse::unsetfuncVpc()
{
    funcVpcIsSet_ = false;
}

MountConfig CreateFunctionVersionResponse::getMountConfig() const
{
    return mountConfig_;
}

void CreateFunctionVersionResponse::setMountConfig(const MountConfig& value)
{
    mountConfig_ = value;
    mountConfigIsSet_ = true;
}

bool CreateFunctionVersionResponse::mountConfigIsSet() const
{
    return mountConfigIsSet_;
}

void CreateFunctionVersionResponse::unsetmountConfig()
{
    mountConfigIsSet_ = false;
}

StrategyConfig CreateFunctionVersionResponse::getStrategyConfig() const
{
    return strategyConfig_;
}

void CreateFunctionVersionResponse::setStrategyConfig(const StrategyConfig& value)
{
    strategyConfig_ = value;
    strategyConfigIsSet_ = true;
}

bool CreateFunctionVersionResponse::strategyConfigIsSet() const
{
    return strategyConfigIsSet_;
}

void CreateFunctionVersionResponse::unsetstrategyConfig()
{
    strategyConfigIsSet_ = false;
}

std::vector<Dependency>& CreateFunctionVersionResponse::getDependencies()
{
    return dependencies_;
}

void CreateFunctionVersionResponse::setDependencies(const std::vector<Dependency>& value)
{
    dependencies_ = value;
    dependenciesIsSet_ = true;
}

bool CreateFunctionVersionResponse::dependenciesIsSet() const
{
    return dependenciesIsSet_;
}

void CreateFunctionVersionResponse::unsetdependencies()
{
    dependenciesIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getInitializerHandler() const
{
    return initializerHandler_;
}

void CreateFunctionVersionResponse::setInitializerHandler(const std::string& value)
{
    initializerHandler_ = value;
    initializerHandlerIsSet_ = true;
}

bool CreateFunctionVersionResponse::initializerHandlerIsSet() const
{
    return initializerHandlerIsSet_;
}

void CreateFunctionVersionResponse::unsetinitializerHandler()
{
    initializerHandlerIsSet_ = false;
}

int32_t CreateFunctionVersionResponse::getInitializerTimeout() const
{
    return initializerTimeout_;
}

void CreateFunctionVersionResponse::setInitializerTimeout(int32_t value)
{
    initializerTimeout_ = value;
    initializerTimeoutIsSet_ = true;
}

bool CreateFunctionVersionResponse::initializerTimeoutIsSet() const
{
    return initializerTimeoutIsSet_;
}

void CreateFunctionVersionResponse::unsetinitializerTimeout()
{
    initializerTimeoutIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getPreStopHandler() const
{
    return preStopHandler_;
}

void CreateFunctionVersionResponse::setPreStopHandler(const std::string& value)
{
    preStopHandler_ = value;
    preStopHandlerIsSet_ = true;
}

bool CreateFunctionVersionResponse::preStopHandlerIsSet() const
{
    return preStopHandlerIsSet_;
}

void CreateFunctionVersionResponse::unsetpreStopHandler()
{
    preStopHandlerIsSet_ = false;
}

int32_t CreateFunctionVersionResponse::getPreStopTimeout() const
{
    return preStopTimeout_;
}

void CreateFunctionVersionResponse::setPreStopTimeout(int32_t value)
{
    preStopTimeout_ = value;
    preStopTimeoutIsSet_ = true;
}

bool CreateFunctionVersionResponse::preStopTimeoutIsSet() const
{
    return preStopTimeoutIsSet_;
}

void CreateFunctionVersionResponse::unsetpreStopTimeout()
{
    preStopTimeoutIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateFunctionVersionResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateFunctionVersionResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateFunctionVersionResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool CreateFunctionVersionResponse::isLongTime() const
{
    return longTime_;
}

void CreateFunctionVersionResponse::setLongTime(bool value)
{
    longTime_ = value;
    longTimeIsSet_ = true;
}

bool CreateFunctionVersionResponse::longTimeIsSet() const
{
    return longTimeIsSet_;
}

void CreateFunctionVersionResponse::unsetlongTime()
{
    longTimeIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getLogGroupId() const
{
    return logGroupId_;
}

void CreateFunctionVersionResponse::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool CreateFunctionVersionResponse::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void CreateFunctionVersionResponse::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getLogStreamId() const
{
    return logStreamId_;
}

void CreateFunctionVersionResponse::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool CreateFunctionVersionResponse::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void CreateFunctionVersionResponse::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string CreateFunctionVersionResponse::getType() const
{
    return type_;
}

void CreateFunctionVersionResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateFunctionVersionResponse::typeIsSet() const
{
    return typeIsSet_;
}

void CreateFunctionVersionResponse::unsettype()
{
    typeIsSet_ = false;
}

bool CreateFunctionVersionResponse::isEnableDynamicMemory() const
{
    return enableDynamicMemory_;
}

void CreateFunctionVersionResponse::setEnableDynamicMemory(bool value)
{
    enableDynamicMemory_ = value;
    enableDynamicMemoryIsSet_ = true;
}

bool CreateFunctionVersionResponse::enableDynamicMemoryIsSet() const
{
    return enableDynamicMemoryIsSet_;
}

void CreateFunctionVersionResponse::unsetenableDynamicMemory()
{
    enableDynamicMemoryIsSet_ = false;
}

FunctionAsyncConfig CreateFunctionVersionResponse::getFunctionAsyncConfig() const
{
    return functionAsyncConfig_;
}

void CreateFunctionVersionResponse::setFunctionAsyncConfig(const FunctionAsyncConfig& value)
{
    functionAsyncConfig_ = value;
    functionAsyncConfigIsSet_ = true;
}

bool CreateFunctionVersionResponse::functionAsyncConfigIsSet() const
{
    return functionAsyncConfigIsSet_;
}

void CreateFunctionVersionResponse::unsetfunctionAsyncConfig()
{
    functionAsyncConfigIsSet_ = false;
}

}
}
}
}
}


