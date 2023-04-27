

#include "huaweicloud/lts/v2/model/LtsStructTemplateInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




LtsStructTemplateInfo::LtsStructTemplateInfo()
{
    demoFieldsIsSet_ = false;
    tagFieldsIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    parseType_ = "";
    parseTypeIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    regexRules_ = "";
    regexRulesIsSet_ = false;
    layers_ = 0;
    layersIsSet_ = false;
    tokenizer_ = "";
    tokenizerIsSet_ = false;
    logFormat_ = "";
    logFormatIsSet_ = false;
    ruleIsSet_ = false;
}

LtsStructTemplateInfo::~LtsStructTemplateInfo() = default;

void LtsStructTemplateInfo::validate()
{
}

web::json::value LtsStructTemplateInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(demoFieldsIsSet_) {
        val[utility::conversions::to_string_t("demo_fields")] = ModelBase::toJson(demoFields_);
    }
    if(tagFieldsIsSet_) {
        val[utility::conversions::to_string_t("tag_fields")] = ModelBase::toJson(tagFields_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(parseTypeIsSet_) {
        val[utility::conversions::to_string_t("parse_type")] = ModelBase::toJson(parseType_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(regexRulesIsSet_) {
        val[utility::conversions::to_string_t("regex_rules")] = ModelBase::toJson(regexRules_);
    }
    if(layersIsSet_) {
        val[utility::conversions::to_string_t("layers")] = ModelBase::toJson(layers_);
    }
    if(tokenizerIsSet_) {
        val[utility::conversions::to_string_t("tokenizer")] = ModelBase::toJson(tokenizer_);
    }
    if(logFormatIsSet_) {
        val[utility::conversions::to_string_t("log_format")] = ModelBase::toJson(logFormat_);
    }
    if(ruleIsSet_) {
        val[utility::conversions::to_string_t("rule")] = ModelBase::toJson(rule_);
    }

    return val;
}

bool LtsStructTemplateInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("demo_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("demo_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<StructFieldInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDemoFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<TagField> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parse_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parse_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParseType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("regex_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regex_rules"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegexRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("layers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("layers"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLayers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tokenizer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tokenizer"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTokenizer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule"));
        if(!fieldValue.is_null())
        {
            Rule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRule(refVal);
        }
    }
    return ok;
}


std::vector<StructFieldInfo>& LtsStructTemplateInfo::getDemoFields()
{
    return demoFields_;
}

void LtsStructTemplateInfo::setDemoFields(const std::vector<StructFieldInfo>& value)
{
    demoFields_ = value;
    demoFieldsIsSet_ = true;
}

bool LtsStructTemplateInfo::demoFieldsIsSet() const
{
    return demoFieldsIsSet_;
}

void LtsStructTemplateInfo::unsetdemoFields()
{
    demoFieldsIsSet_ = false;
}

std::vector<TagField>& LtsStructTemplateInfo::getTagFields()
{
    return tagFields_;
}

void LtsStructTemplateInfo::setTagFields(const std::vector<TagField>& value)
{
    tagFields_ = value;
    tagFieldsIsSet_ = true;
}

bool LtsStructTemplateInfo::tagFieldsIsSet() const
{
    return tagFieldsIsSet_;
}

void LtsStructTemplateInfo::unsettagFields()
{
    tagFieldsIsSet_ = false;
}

std::string LtsStructTemplateInfo::getContent() const
{
    return content_;
}

void LtsStructTemplateInfo::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool LtsStructTemplateInfo::contentIsSet() const
{
    return contentIsSet_;
}

void LtsStructTemplateInfo::unsetcontent()
{
    contentIsSet_ = false;
}

std::string LtsStructTemplateInfo::getLogGroupId() const
{
    return logGroupId_;
}

void LtsStructTemplateInfo::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool LtsStructTemplateInfo::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void LtsStructTemplateInfo::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string LtsStructTemplateInfo::getParseType() const
{
    return parseType_;
}

void LtsStructTemplateInfo::setParseType(const std::string& value)
{
    parseType_ = value;
    parseTypeIsSet_ = true;
}

bool LtsStructTemplateInfo::parseTypeIsSet() const
{
    return parseTypeIsSet_;
}

void LtsStructTemplateInfo::unsetparseType()
{
    parseTypeIsSet_ = false;
}

std::string LtsStructTemplateInfo::getLogStreamId() const
{
    return logStreamId_;
}

void LtsStructTemplateInfo::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool LtsStructTemplateInfo::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void LtsStructTemplateInfo::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string LtsStructTemplateInfo::getProjectId() const
{
    return projectId_;
}

void LtsStructTemplateInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool LtsStructTemplateInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void LtsStructTemplateInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string LtsStructTemplateInfo::getRegexRules() const
{
    return regexRules_;
}

void LtsStructTemplateInfo::setRegexRules(const std::string& value)
{
    regexRules_ = value;
    regexRulesIsSet_ = true;
}

bool LtsStructTemplateInfo::regexRulesIsSet() const
{
    return regexRulesIsSet_;
}

void LtsStructTemplateInfo::unsetregexRules()
{
    regexRulesIsSet_ = false;
}

int32_t LtsStructTemplateInfo::getLayers() const
{
    return layers_;
}

void LtsStructTemplateInfo::setLayers(int32_t value)
{
    layers_ = value;
    layersIsSet_ = true;
}

bool LtsStructTemplateInfo::layersIsSet() const
{
    return layersIsSet_;
}

void LtsStructTemplateInfo::unsetlayers()
{
    layersIsSet_ = false;
}

std::string LtsStructTemplateInfo::getTokenizer() const
{
    return tokenizer_;
}

void LtsStructTemplateInfo::setTokenizer(const std::string& value)
{
    tokenizer_ = value;
    tokenizerIsSet_ = true;
}

bool LtsStructTemplateInfo::tokenizerIsSet() const
{
    return tokenizerIsSet_;
}

void LtsStructTemplateInfo::unsettokenizer()
{
    tokenizerIsSet_ = false;
}

std::string LtsStructTemplateInfo::getLogFormat() const
{
    return logFormat_;
}

void LtsStructTemplateInfo::setLogFormat(const std::string& value)
{
    logFormat_ = value;
    logFormatIsSet_ = true;
}

bool LtsStructTemplateInfo::logFormatIsSet() const
{
    return logFormatIsSet_;
}

void LtsStructTemplateInfo::unsetlogFormat()
{
    logFormatIsSet_ = false;
}

Rule LtsStructTemplateInfo::getRule() const
{
    return rule_;
}

void LtsStructTemplateInfo::setRule(const Rule& value)
{
    rule_ = value;
    ruleIsSet_ = true;
}

bool LtsStructTemplateInfo::ruleIsSet() const
{
    return ruleIsSet_;
}

void LtsStructTemplateInfo::unsetrule()
{
    ruleIsSet_ = false;
}

}
}
}
}
}


