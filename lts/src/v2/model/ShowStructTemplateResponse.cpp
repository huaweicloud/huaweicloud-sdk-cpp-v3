

#include "huaweicloud/lts/v2/model/ShowStructTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowStructTemplateResponse::ShowStructTemplateResponse()
{
    demoFieldsIsSet_ = false;
    tagFieldsIsSet_ = false;
    demoLog_ = "";
    demoLogIsSet_ = false;
    demoLabel_ = "";
    demoLabelIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    ruleIsSet_ = false;
    clusterInfoIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    regex_ = "";
    regexIsSet_ = false;
}

ShowStructTemplateResponse::~ShowStructTemplateResponse() = default;

void ShowStructTemplateResponse::validate()
{
}

web::json::value ShowStructTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(demoFieldsIsSet_) {
        val[utility::conversions::to_string_t("demoFields")] = ModelBase::toJson(demoFields_);
    }
    if(tagFieldsIsSet_) {
        val[utility::conversions::to_string_t("tagFields")] = ModelBase::toJson(tagFields_);
    }
    if(demoLogIsSet_) {
        val[utility::conversions::to_string_t("demoLog")] = ModelBase::toJson(demoLog_);
    }
    if(demoLabelIsSet_) {
        val[utility::conversions::to_string_t("demoLabel")] = ModelBase::toJson(demoLabel_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("logGroupId")] = ModelBase::toJson(logGroupId_);
    }
    if(ruleIsSet_) {
        val[utility::conversions::to_string_t("rule")] = ModelBase::toJson(rule_);
    }
    if(clusterInfoIsSet_) {
        val[utility::conversions::to_string_t("cluster_info")] = ModelBase::toJson(clusterInfo_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("logStreamId")] = ModelBase::toJson(logStreamId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("templateName")] = ModelBase::toJson(templateName_);
    }
    if(regexIsSet_) {
        val[utility::conversions::to_string_t("regex")] = ModelBase::toJson(regex_);
    }

    return val;
}
bool ShowStructTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("demoFields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("demoFields"));
        if(!fieldValue.is_null())
        {
            std::vector<StructFieldInfoReturn> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDemoFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tagFields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tagFields"));
        if(!fieldValue.is_null())
        {
            std::vector<TagFieldsInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("demoLog"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("demoLog"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDemoLog(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("demoLabel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("demoLabel"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDemoLabel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logGroupId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logGroupId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule"));
        if(!fieldValue.is_null())
        {
            ShowStructTemplateRule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_info"));
        if(!fieldValue.is_null())
        {
            ShowStructTemplateclusterInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logStreamId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logStreamId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("templateName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templateName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegex(refVal);
        }
    }
    return ok;
}


std::vector<StructFieldInfoReturn>& ShowStructTemplateResponse::getDemoFields()
{
    return demoFields_;
}

void ShowStructTemplateResponse::setDemoFields(const std::vector<StructFieldInfoReturn>& value)
{
    demoFields_ = value;
    demoFieldsIsSet_ = true;
}

bool ShowStructTemplateResponse::demoFieldsIsSet() const
{
    return demoFieldsIsSet_;
}

void ShowStructTemplateResponse::unsetdemoFields()
{
    demoFieldsIsSet_ = false;
}

std::vector<TagFieldsInfo>& ShowStructTemplateResponse::getTagFields()
{
    return tagFields_;
}

void ShowStructTemplateResponse::setTagFields(const std::vector<TagFieldsInfo>& value)
{
    tagFields_ = value;
    tagFieldsIsSet_ = true;
}

bool ShowStructTemplateResponse::tagFieldsIsSet() const
{
    return tagFieldsIsSet_;
}

void ShowStructTemplateResponse::unsettagFields()
{
    tagFieldsIsSet_ = false;
}

std::string ShowStructTemplateResponse::getDemoLog() const
{
    return demoLog_;
}

void ShowStructTemplateResponse::setDemoLog(const std::string& value)
{
    demoLog_ = value;
    demoLogIsSet_ = true;
}

bool ShowStructTemplateResponse::demoLogIsSet() const
{
    return demoLogIsSet_;
}

void ShowStructTemplateResponse::unsetdemoLog()
{
    demoLogIsSet_ = false;
}

std::string ShowStructTemplateResponse::getDemoLabel() const
{
    return demoLabel_;
}

void ShowStructTemplateResponse::setDemoLabel(const std::string& value)
{
    demoLabel_ = value;
    demoLabelIsSet_ = true;
}

bool ShowStructTemplateResponse::demoLabelIsSet() const
{
    return demoLabelIsSet_;
}

void ShowStructTemplateResponse::unsetdemoLabel()
{
    demoLabelIsSet_ = false;
}

std::string ShowStructTemplateResponse::getId() const
{
    return id_;
}

void ShowStructTemplateResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowStructTemplateResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowStructTemplateResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowStructTemplateResponse::getLogGroupId() const
{
    return logGroupId_;
}

void ShowStructTemplateResponse::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool ShowStructTemplateResponse::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void ShowStructTemplateResponse::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

ShowStructTemplateRule ShowStructTemplateResponse::getRule() const
{
    return rule_;
}

void ShowStructTemplateResponse::setRule(const ShowStructTemplateRule& value)
{
    rule_ = value;
    ruleIsSet_ = true;
}

bool ShowStructTemplateResponse::ruleIsSet() const
{
    return ruleIsSet_;
}

void ShowStructTemplateResponse::unsetrule()
{
    ruleIsSet_ = false;
}

ShowStructTemplateclusterInfo ShowStructTemplateResponse::getClusterInfo() const
{
    return clusterInfo_;
}

void ShowStructTemplateResponse::setClusterInfo(const ShowStructTemplateclusterInfo& value)
{
    clusterInfo_ = value;
    clusterInfoIsSet_ = true;
}

bool ShowStructTemplateResponse::clusterInfoIsSet() const
{
    return clusterInfoIsSet_;
}

void ShowStructTemplateResponse::unsetclusterInfo()
{
    clusterInfoIsSet_ = false;
}

std::string ShowStructTemplateResponse::getLogStreamId() const
{
    return logStreamId_;
}

void ShowStructTemplateResponse::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool ShowStructTemplateResponse::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void ShowStructTemplateResponse::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string ShowStructTemplateResponse::getProjectId() const
{
    return projectId_;
}

void ShowStructTemplateResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowStructTemplateResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowStructTemplateResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowStructTemplateResponse::getTemplateName() const
{
    return templateName_;
}

void ShowStructTemplateResponse::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool ShowStructTemplateResponse::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void ShowStructTemplateResponse::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string ShowStructTemplateResponse::getRegex() const
{
    return regex_;
}

void ShowStructTemplateResponse::setRegex(const std::string& value)
{
    regex_ = value;
    regexIsSet_ = true;
}

bool ShowStructTemplateResponse::regexIsSet() const
{
    return regexIsSet_;
}

void ShowStructTemplateResponse::unsetregex()
{
    regexIsSet_ = false;
}

}
}
}
}
}


