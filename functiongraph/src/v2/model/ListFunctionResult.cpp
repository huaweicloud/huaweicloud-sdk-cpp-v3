

#include "huaweicloud/functiongraph/v2/model/ListFunctionResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionResult::ListFunctionResult()
{
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
    funcVpcId_ = "";
    funcVpcIdIsSet_ = false;
    strategyConfigIsSet_ = false;
    extendConfig_ = "";
    extendConfigIsSet_ = false;
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
    failCount_ = 0;
    failCountIsSet_ = false;
    isBridgeFunction_ = false;
    isBridgeFunctionIsSet_ = false;
    bindBridgeFuncUrnsIsSet_ = false;
}

ListFunctionResult::~ListFunctionResult() = default;

void ListFunctionResult::validate()
{
}

web::json::value ListFunctionResult::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(funcVpcIdIsSet_) {
        val[utility::conversions::to_string_t("func_vpc_id")] = ModelBase::toJson(funcVpcId_);
    }
    if(strategyConfigIsSet_) {
        val[utility::conversions::to_string_t("strategy_config")] = ModelBase::toJson(strategyConfig_);
    }
    if(extendConfigIsSet_) {
        val[utility::conversions::to_string_t("extend_config")] = ModelBase::toJson(extendConfig_);
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
    if(failCountIsSet_) {
        val[utility::conversions::to_string_t("fail_count")] = ModelBase::toJson(failCount_);
    }
    if(isBridgeFunctionIsSet_) {
        val[utility::conversions::to_string_t("is_bridge_function")] = ModelBase::toJson(isBridgeFunction_);
    }
    if(bindBridgeFuncUrnsIsSet_) {
        val[utility::conversions::to_string_t("bind_bridge_funcUrns")] = ModelBase::toJson(bindBridgeFuncUrns_);
    }

    return val;
}
bool ListFunctionResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("func_vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncVpcId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fail_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("bind_bridge_funcUrns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bind_bridge_funcUrns"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindBridgeFuncUrns(refVal);
        }
    }
    return ok;
}


std::string ListFunctionResult::getResourceId() const
{
    return resourceId_;
}

void ListFunctionResult::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ListFunctionResult::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ListFunctionResult::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ListFunctionResult::getFuncUrn() const
{
    return funcUrn_;
}

void ListFunctionResult::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool ListFunctionResult::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void ListFunctionResult::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

std::string ListFunctionResult::getFuncName() const
{
    return funcName_;
}

void ListFunctionResult::setFuncName(const std::string& value)
{
    funcName_ = value;
    funcNameIsSet_ = true;
}

bool ListFunctionResult::funcNameIsSet() const
{
    return funcNameIsSet_;
}

void ListFunctionResult::unsetfuncName()
{
    funcNameIsSet_ = false;
}

std::string ListFunctionResult::getDomainId() const
{
    return domainId_;
}

void ListFunctionResult::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListFunctionResult::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListFunctionResult::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ListFunctionResult::getNamespace() const
{
    return namespace_;
}

void ListFunctionResult::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ListFunctionResult::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ListFunctionResult::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string ListFunctionResult::getProjectName() const
{
    return projectName_;
}

void ListFunctionResult::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ListFunctionResult::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ListFunctionResult::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ListFunctionResult::getPackage() const
{
    return package_;
}

void ListFunctionResult::setPackage(const std::string& value)
{
    package_ = value;
    packageIsSet_ = true;
}

bool ListFunctionResult::packageIsSet() const
{
    return packageIsSet_;
}

void ListFunctionResult::unsetpackage()
{
    packageIsSet_ = false;
}

std::string ListFunctionResult::getRuntime() const
{
    return runtime_;
}

void ListFunctionResult::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool ListFunctionResult::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void ListFunctionResult::unsetruntime()
{
    runtimeIsSet_ = false;
}

int32_t ListFunctionResult::getTimeout() const
{
    return timeout_;
}

void ListFunctionResult::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool ListFunctionResult::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void ListFunctionResult::unsettimeout()
{
    timeoutIsSet_ = false;
}

std::string ListFunctionResult::getHandler() const
{
    return handler_;
}

void ListFunctionResult::setHandler(const std::string& value)
{
    handler_ = value;
    handlerIsSet_ = true;
}

bool ListFunctionResult::handlerIsSet() const
{
    return handlerIsSet_;
}

void ListFunctionResult::unsethandler()
{
    handlerIsSet_ = false;
}

int32_t ListFunctionResult::getMemorySize() const
{
    return memorySize_;
}

void ListFunctionResult::setMemorySize(int32_t value)
{
    memorySize_ = value;
    memorySizeIsSet_ = true;
}

bool ListFunctionResult::memorySizeIsSet() const
{
    return memorySizeIsSet_;
}

void ListFunctionResult::unsetmemorySize()
{
    memorySizeIsSet_ = false;
}

int32_t ListFunctionResult::getGpuMemory() const
{
    return gpuMemory_;
}

void ListFunctionResult::setGpuMemory(int32_t value)
{
    gpuMemory_ = value;
    gpuMemoryIsSet_ = true;
}

bool ListFunctionResult::gpuMemoryIsSet() const
{
    return gpuMemoryIsSet_;
}

void ListFunctionResult::unsetgpuMemory()
{
    gpuMemoryIsSet_ = false;
}

int32_t ListFunctionResult::getCpu() const
{
    return cpu_;
}

void ListFunctionResult::setCpu(int32_t value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool ListFunctionResult::cpuIsSet() const
{
    return cpuIsSet_;
}

void ListFunctionResult::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string ListFunctionResult::getCodeType() const
{
    return codeType_;
}

void ListFunctionResult::setCodeType(const std::string& value)
{
    codeType_ = value;
    codeTypeIsSet_ = true;
}

bool ListFunctionResult::codeTypeIsSet() const
{
    return codeTypeIsSet_;
}

void ListFunctionResult::unsetcodeType()
{
    codeTypeIsSet_ = false;
}

std::string ListFunctionResult::getCodeUrl() const
{
    return codeUrl_;
}

void ListFunctionResult::setCodeUrl(const std::string& value)
{
    codeUrl_ = value;
    codeUrlIsSet_ = true;
}

bool ListFunctionResult::codeUrlIsSet() const
{
    return codeUrlIsSet_;
}

void ListFunctionResult::unsetcodeUrl()
{
    codeUrlIsSet_ = false;
}

std::string ListFunctionResult::getCodeFilename() const
{
    return codeFilename_;
}

void ListFunctionResult::setCodeFilename(const std::string& value)
{
    codeFilename_ = value;
    codeFilenameIsSet_ = true;
}

bool ListFunctionResult::codeFilenameIsSet() const
{
    return codeFilenameIsSet_;
}

void ListFunctionResult::unsetcodeFilename()
{
    codeFilenameIsSet_ = false;
}

int64_t ListFunctionResult::getCodeSize() const
{
    return codeSize_;
}

void ListFunctionResult::setCodeSize(int64_t value)
{
    codeSize_ = value;
    codeSizeIsSet_ = true;
}

bool ListFunctionResult::codeSizeIsSet() const
{
    return codeSizeIsSet_;
}

void ListFunctionResult::unsetcodeSize()
{
    codeSizeIsSet_ = false;
}

std::string ListFunctionResult::getUserData() const
{
    return userData_;
}

void ListFunctionResult::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool ListFunctionResult::userDataIsSet() const
{
    return userDataIsSet_;
}

void ListFunctionResult::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string ListFunctionResult::getEncryptedUserData() const
{
    return encryptedUserData_;
}

void ListFunctionResult::setEncryptedUserData(const std::string& value)
{
    encryptedUserData_ = value;
    encryptedUserDataIsSet_ = true;
}

bool ListFunctionResult::encryptedUserDataIsSet() const
{
    return encryptedUserDataIsSet_;
}

void ListFunctionResult::unsetencryptedUserData()
{
    encryptedUserDataIsSet_ = false;
}

std::string ListFunctionResult::getDigest() const
{
    return digest_;
}

void ListFunctionResult::setDigest(const std::string& value)
{
    digest_ = value;
    digestIsSet_ = true;
}

bool ListFunctionResult::digestIsSet() const
{
    return digestIsSet_;
}

void ListFunctionResult::unsetdigest()
{
    digestIsSet_ = false;
}

std::string ListFunctionResult::getVersion() const
{
    return version_;
}

void ListFunctionResult::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListFunctionResult::versionIsSet() const
{
    return versionIsSet_;
}

void ListFunctionResult::unsetversion()
{
    versionIsSet_ = false;
}

std::string ListFunctionResult::getImageName() const
{
    return imageName_;
}

void ListFunctionResult::setImageName(const std::string& value)
{
    imageName_ = value;
    imageNameIsSet_ = true;
}

bool ListFunctionResult::imageNameIsSet() const
{
    return imageNameIsSet_;
}

void ListFunctionResult::unsetimageName()
{
    imageNameIsSet_ = false;
}

std::string ListFunctionResult::getXrole() const
{
    return xrole_;
}

void ListFunctionResult::setXrole(const std::string& value)
{
    xrole_ = value;
    xroleIsSet_ = true;
}

bool ListFunctionResult::xroleIsSet() const
{
    return xroleIsSet_;
}

void ListFunctionResult::unsetxrole()
{
    xroleIsSet_ = false;
}

std::string ListFunctionResult::getAppXrole() const
{
    return appXrole_;
}

void ListFunctionResult::setAppXrole(const std::string& value)
{
    appXrole_ = value;
    appXroleIsSet_ = true;
}

bool ListFunctionResult::appXroleIsSet() const
{
    return appXroleIsSet_;
}

void ListFunctionResult::unsetappXrole()
{
    appXroleIsSet_ = false;
}

std::string ListFunctionResult::getDescription() const
{
    return description_;
}

void ListFunctionResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListFunctionResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListFunctionResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

utility::datetime ListFunctionResult::getLastModified() const
{
    return lastModified_;
}

void ListFunctionResult::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool ListFunctionResult::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void ListFunctionResult::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

std::string ListFunctionResult::getFuncVpcId() const
{
    return funcVpcId_;
}

void ListFunctionResult::setFuncVpcId(const std::string& value)
{
    funcVpcId_ = value;
    funcVpcIdIsSet_ = true;
}

bool ListFunctionResult::funcVpcIdIsSet() const
{
    return funcVpcIdIsSet_;
}

void ListFunctionResult::unsetfuncVpcId()
{
    funcVpcIdIsSet_ = false;
}

StrategyConfig ListFunctionResult::getStrategyConfig() const
{
    return strategyConfig_;
}

void ListFunctionResult::setStrategyConfig(const StrategyConfig& value)
{
    strategyConfig_ = value;
    strategyConfigIsSet_ = true;
}

bool ListFunctionResult::strategyConfigIsSet() const
{
    return strategyConfigIsSet_;
}

void ListFunctionResult::unsetstrategyConfig()
{
    strategyConfigIsSet_ = false;
}

std::string ListFunctionResult::getExtendConfig() const
{
    return extendConfig_;
}

void ListFunctionResult::setExtendConfig(const std::string& value)
{
    extendConfig_ = value;
    extendConfigIsSet_ = true;
}

bool ListFunctionResult::extendConfigIsSet() const
{
    return extendConfigIsSet_;
}

void ListFunctionResult::unsetextendConfig()
{
    extendConfigIsSet_ = false;
}

std::string ListFunctionResult::getInitializerHandler() const
{
    return initializerHandler_;
}

void ListFunctionResult::setInitializerHandler(const std::string& value)
{
    initializerHandler_ = value;
    initializerHandlerIsSet_ = true;
}

bool ListFunctionResult::initializerHandlerIsSet() const
{
    return initializerHandlerIsSet_;
}

void ListFunctionResult::unsetinitializerHandler()
{
    initializerHandlerIsSet_ = false;
}

int32_t ListFunctionResult::getInitializerTimeout() const
{
    return initializerTimeout_;
}

void ListFunctionResult::setInitializerTimeout(int32_t value)
{
    initializerTimeout_ = value;
    initializerTimeoutIsSet_ = true;
}

bool ListFunctionResult::initializerTimeoutIsSet() const
{
    return initializerTimeoutIsSet_;
}

void ListFunctionResult::unsetinitializerTimeout()
{
    initializerTimeoutIsSet_ = false;
}

std::string ListFunctionResult::getPreStopHandler() const
{
    return preStopHandler_;
}

void ListFunctionResult::setPreStopHandler(const std::string& value)
{
    preStopHandler_ = value;
    preStopHandlerIsSet_ = true;
}

bool ListFunctionResult::preStopHandlerIsSet() const
{
    return preStopHandlerIsSet_;
}

void ListFunctionResult::unsetpreStopHandler()
{
    preStopHandlerIsSet_ = false;
}

int32_t ListFunctionResult::getPreStopTimeout() const
{
    return preStopTimeout_;
}

void ListFunctionResult::setPreStopTimeout(int32_t value)
{
    preStopTimeout_ = value;
    preStopTimeoutIsSet_ = true;
}

bool ListFunctionResult::preStopTimeoutIsSet() const
{
    return preStopTimeoutIsSet_;
}

void ListFunctionResult::unsetpreStopTimeout()
{
    preStopTimeoutIsSet_ = false;
}

std::string ListFunctionResult::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListFunctionResult::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListFunctionResult::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListFunctionResult::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool ListFunctionResult::isLongTime() const
{
    return longTime_;
}

void ListFunctionResult::setLongTime(bool value)
{
    longTime_ = value;
    longTimeIsSet_ = true;
}

bool ListFunctionResult::longTimeIsSet() const
{
    return longTimeIsSet_;
}

void ListFunctionResult::unsetlongTime()
{
    longTimeIsSet_ = false;
}

std::string ListFunctionResult::getLogGroupId() const
{
    return logGroupId_;
}

void ListFunctionResult::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool ListFunctionResult::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void ListFunctionResult::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string ListFunctionResult::getLogStreamId() const
{
    return logStreamId_;
}

void ListFunctionResult::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool ListFunctionResult::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void ListFunctionResult::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string ListFunctionResult::getType() const
{
    return type_;
}

void ListFunctionResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListFunctionResult::typeIsSet() const
{
    return typeIsSet_;
}

void ListFunctionResult::unsettype()
{
    typeIsSet_ = false;
}

int32_t ListFunctionResult::getFailCount() const
{
    return failCount_;
}

void ListFunctionResult::setFailCount(int32_t value)
{
    failCount_ = value;
    failCountIsSet_ = true;
}

bool ListFunctionResult::failCountIsSet() const
{
    return failCountIsSet_;
}

void ListFunctionResult::unsetfailCount()
{
    failCountIsSet_ = false;
}

bool ListFunctionResult::isIsBridgeFunction() const
{
    return isBridgeFunction_;
}

void ListFunctionResult::setIsBridgeFunction(bool value)
{
    isBridgeFunction_ = value;
    isBridgeFunctionIsSet_ = true;
}

bool ListFunctionResult::isBridgeFunctionIsSet() const
{
    return isBridgeFunctionIsSet_;
}

void ListFunctionResult::unsetisBridgeFunction()
{
    isBridgeFunctionIsSet_ = false;
}

std::vector<std::string>& ListFunctionResult::getBindBridgeFuncUrns()
{
    return bindBridgeFuncUrns_;
}

void ListFunctionResult::setBindBridgeFuncUrns(const std::vector<std::string>& value)
{
    bindBridgeFuncUrns_ = value;
    bindBridgeFuncUrnsIsSet_ = true;
}

bool ListFunctionResult::bindBridgeFuncUrnsIsSet() const
{
    return bindBridgeFuncUrnsIsSet_;
}

void ListFunctionResult::unsetbindBridgeFuncUrns()
{
    bindBridgeFuncUrnsIsSet_ = false;
}

}
}
}
}
}


