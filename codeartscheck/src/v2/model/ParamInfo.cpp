

#include "huaweicloud/codeartscheck/v2/model/ParamInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ParamInfo::ParamInfo()
{
    url_ = "";
    urlIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    excludeDir_ = "";
    excludeDirIsSet_ = false;
    encode_ = "";
    encodeIsSet_ = false;
    compileConfig_ = "";
    compileConfigIsSet_ = false;
    ruleTemplate_ = "";
    ruleTemplateIsSet_ = false;
}

ParamInfo::~ParamInfo() = default;

void ParamInfo::validate()
{
}

web::json::value ParamInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(excludeDirIsSet_) {
        val[utility::conversions::to_string_t("exclude_dir")] = ModelBase::toJson(excludeDir_);
    }
    if(encodeIsSet_) {
        val[utility::conversions::to_string_t("encode")] = ModelBase::toJson(encode_);
    }
    if(compileConfigIsSet_) {
        val[utility::conversions::to_string_t("compile_config")] = ModelBase::toJson(compileConfig_);
    }
    if(ruleTemplateIsSet_) {
        val[utility::conversions::to_string_t("rule_template")] = ModelBase::toJson(ruleTemplate_);
    }

    return val;
}
bool ParamInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exclude_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exclude_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludeDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compile_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compile_config"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompileConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_template"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleTemplate(refVal);
        }
    }
    return ok;
}


std::string ParamInfo::getUrl() const
{
    return url_;
}

void ParamInfo::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ParamInfo::urlIsSet() const
{
    return urlIsSet_;
}

void ParamInfo::unseturl()
{
    urlIsSet_ = false;
}

std::string ParamInfo::getBranch() const
{
    return branch_;
}

void ParamInfo::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool ParamInfo::branchIsSet() const
{
    return branchIsSet_;
}

void ParamInfo::unsetbranch()
{
    branchIsSet_ = false;
}

std::string ParamInfo::getLanguage() const
{
    return language_;
}

void ParamInfo::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ParamInfo::languageIsSet() const
{
    return languageIsSet_;
}

void ParamInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string ParamInfo::getExcludeDir() const
{
    return excludeDir_;
}

void ParamInfo::setExcludeDir(const std::string& value)
{
    excludeDir_ = value;
    excludeDirIsSet_ = true;
}

bool ParamInfo::excludeDirIsSet() const
{
    return excludeDirIsSet_;
}

void ParamInfo::unsetexcludeDir()
{
    excludeDirIsSet_ = false;
}

std::string ParamInfo::getEncode() const
{
    return encode_;
}

void ParamInfo::setEncode(const std::string& value)
{
    encode_ = value;
    encodeIsSet_ = true;
}

bool ParamInfo::encodeIsSet() const
{
    return encodeIsSet_;
}

void ParamInfo::unsetencode()
{
    encodeIsSet_ = false;
}

std::string ParamInfo::getCompileConfig() const
{
    return compileConfig_;
}

void ParamInfo::setCompileConfig(const std::string& value)
{
    compileConfig_ = value;
    compileConfigIsSet_ = true;
}

bool ParamInfo::compileConfigIsSet() const
{
    return compileConfigIsSet_;
}

void ParamInfo::unsetcompileConfig()
{
    compileConfigIsSet_ = false;
}

std::string ParamInfo::getRuleTemplate() const
{
    return ruleTemplate_;
}

void ParamInfo::setRuleTemplate(const std::string& value)
{
    ruleTemplate_ = value;
    ruleTemplateIsSet_ = true;
}

bool ParamInfo::ruleTemplateIsSet() const
{
    return ruleTemplateIsSet_;
}

void ParamInfo::unsetruleTemplate()
{
    ruleTemplateIsSet_ = false;
}

}
}
}
}
}


