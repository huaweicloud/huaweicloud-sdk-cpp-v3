

#include "huaweicloud/functiongraph/v2/model/ShowFunctionCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowFunctionCodeResponse::ShowFunctionCodeResponse()
{
    funcUrn_ = "";
    funcUrnIsSet_ = false;
    funcName_ = "";
    funcNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    runtime_ = "";
    runtimeIsSet_ = false;
    codeType_ = "";
    codeTypeIsSet_ = false;
    codeUrl_ = "";
    codeUrlIsSet_ = false;
    codeFilename_ = "";
    codeFilenameIsSet_ = false;
    codeSize_ = 0L;
    codeSizeIsSet_ = false;
    digest_ = "";
    digestIsSet_ = false;
    lastModified_ = utility::datetime();
    lastModifiedIsSet_ = false;
    funcCodeIsSet_ = false;
    dependListIsSet_ = false;
    dependVersionListIsSet_ = false;
    strategyConfigIsSet_ = false;
    dependenciesIsSet_ = false;
}

ShowFunctionCodeResponse::~ShowFunctionCodeResponse() = default;

void ShowFunctionCodeResponse::validate()
{
}

web::json::value ShowFunctionCodeResponse::toJson() const
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
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
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
    if(digestIsSet_) {
        val[utility::conversions::to_string_t("digest")] = ModelBase::toJson(digest_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }
    if(funcCodeIsSet_) {
        val[utility::conversions::to_string_t("func_code")] = ModelBase::toJson(funcCode_);
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

    return val;
}
bool ShowFunctionCodeResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("digest"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("digest"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDigest(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("func_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_code"));
        if(!fieldValue.is_null())
        {
            FuncCode refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncCode(refVal);
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
    return ok;
}


std::string ShowFunctionCodeResponse::getFuncUrn() const
{
    return funcUrn_;
}

void ShowFunctionCodeResponse::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool ShowFunctionCodeResponse::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void ShowFunctionCodeResponse::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

std::string ShowFunctionCodeResponse::getFuncName() const
{
    return funcName_;
}

void ShowFunctionCodeResponse::setFuncName(const std::string& value)
{
    funcName_ = value;
    funcNameIsSet_ = true;
}

bool ShowFunctionCodeResponse::funcNameIsSet() const
{
    return funcNameIsSet_;
}

void ShowFunctionCodeResponse::unsetfuncName()
{
    funcNameIsSet_ = false;
}

std::string ShowFunctionCodeResponse::getDomainId() const
{
    return domainId_;
}

void ShowFunctionCodeResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowFunctionCodeResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowFunctionCodeResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowFunctionCodeResponse::getRuntime() const
{
    return runtime_;
}

void ShowFunctionCodeResponse::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool ShowFunctionCodeResponse::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void ShowFunctionCodeResponse::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::string ShowFunctionCodeResponse::getCodeType() const
{
    return codeType_;
}

void ShowFunctionCodeResponse::setCodeType(const std::string& value)
{
    codeType_ = value;
    codeTypeIsSet_ = true;
}

bool ShowFunctionCodeResponse::codeTypeIsSet() const
{
    return codeTypeIsSet_;
}

void ShowFunctionCodeResponse::unsetcodeType()
{
    codeTypeIsSet_ = false;
}

std::string ShowFunctionCodeResponse::getCodeUrl() const
{
    return codeUrl_;
}

void ShowFunctionCodeResponse::setCodeUrl(const std::string& value)
{
    codeUrl_ = value;
    codeUrlIsSet_ = true;
}

bool ShowFunctionCodeResponse::codeUrlIsSet() const
{
    return codeUrlIsSet_;
}

void ShowFunctionCodeResponse::unsetcodeUrl()
{
    codeUrlIsSet_ = false;
}

std::string ShowFunctionCodeResponse::getCodeFilename() const
{
    return codeFilename_;
}

void ShowFunctionCodeResponse::setCodeFilename(const std::string& value)
{
    codeFilename_ = value;
    codeFilenameIsSet_ = true;
}

bool ShowFunctionCodeResponse::codeFilenameIsSet() const
{
    return codeFilenameIsSet_;
}

void ShowFunctionCodeResponse::unsetcodeFilename()
{
    codeFilenameIsSet_ = false;
}

int64_t ShowFunctionCodeResponse::getCodeSize() const
{
    return codeSize_;
}

void ShowFunctionCodeResponse::setCodeSize(int64_t value)
{
    codeSize_ = value;
    codeSizeIsSet_ = true;
}

bool ShowFunctionCodeResponse::codeSizeIsSet() const
{
    return codeSizeIsSet_;
}

void ShowFunctionCodeResponse::unsetcodeSize()
{
    codeSizeIsSet_ = false;
}

std::string ShowFunctionCodeResponse::getDigest() const
{
    return digest_;
}

void ShowFunctionCodeResponse::setDigest(const std::string& value)
{
    digest_ = value;
    digestIsSet_ = true;
}

bool ShowFunctionCodeResponse::digestIsSet() const
{
    return digestIsSet_;
}

void ShowFunctionCodeResponse::unsetdigest()
{
    digestIsSet_ = false;
}

utility::datetime ShowFunctionCodeResponse::getLastModified() const
{
    return lastModified_;
}

void ShowFunctionCodeResponse::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool ShowFunctionCodeResponse::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void ShowFunctionCodeResponse::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

FuncCode ShowFunctionCodeResponse::getFuncCode() const
{
    return funcCode_;
}

void ShowFunctionCodeResponse::setFuncCode(const FuncCode& value)
{
    funcCode_ = value;
    funcCodeIsSet_ = true;
}

bool ShowFunctionCodeResponse::funcCodeIsSet() const
{
    return funcCodeIsSet_;
}

void ShowFunctionCodeResponse::unsetfuncCode()
{
    funcCodeIsSet_ = false;
}

std::vector<std::string>& ShowFunctionCodeResponse::getDependList()
{
    return dependList_;
}

void ShowFunctionCodeResponse::setDependList(const std::vector<std::string>& value)
{
    dependList_ = value;
    dependListIsSet_ = true;
}

bool ShowFunctionCodeResponse::dependListIsSet() const
{
    return dependListIsSet_;
}

void ShowFunctionCodeResponse::unsetdependList()
{
    dependListIsSet_ = false;
}

std::vector<std::string>& ShowFunctionCodeResponse::getDependVersionList()
{
    return dependVersionList_;
}

void ShowFunctionCodeResponse::setDependVersionList(const std::vector<std::string>& value)
{
    dependVersionList_ = value;
    dependVersionListIsSet_ = true;
}

bool ShowFunctionCodeResponse::dependVersionListIsSet() const
{
    return dependVersionListIsSet_;
}

void ShowFunctionCodeResponse::unsetdependVersionList()
{
    dependVersionListIsSet_ = false;
}

StrategyConfig ShowFunctionCodeResponse::getStrategyConfig() const
{
    return strategyConfig_;
}

void ShowFunctionCodeResponse::setStrategyConfig(const StrategyConfig& value)
{
    strategyConfig_ = value;
    strategyConfigIsSet_ = true;
}

bool ShowFunctionCodeResponse::strategyConfigIsSet() const
{
    return strategyConfigIsSet_;
}

void ShowFunctionCodeResponse::unsetstrategyConfig()
{
    strategyConfigIsSet_ = false;
}

std::vector<Dependency>& ShowFunctionCodeResponse::getDependencies()
{
    return dependencies_;
}

void ShowFunctionCodeResponse::setDependencies(const std::vector<Dependency>& value)
{
    dependencies_ = value;
    dependenciesIsSet_ = true;
}

bool ShowFunctionCodeResponse::dependenciesIsSet() const
{
    return dependenciesIsSet_;
}

void ShowFunctionCodeResponse::unsetdependencies()
{
    dependenciesIsSet_ = false;
}

}
}
}
}
}


