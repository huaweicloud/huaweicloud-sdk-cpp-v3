

#include "huaweicloud/lts/v2/model/StructConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




StructConfig::StructConfig()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    templateType_ = "";
    templateTypeIsSet_ = false;
    demoFieldsIsSet_ = false;
    tagFieldsIsSet_ = false;
    quickAnalysis_ = false;
    quickAnalysisIsSet_ = false;
}

StructConfig::~StructConfig() = default;

void StructConfig::validate()
{
}

web::json::value StructConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(templateTypeIsSet_) {
        val[utility::conversions::to_string_t("template_type")] = ModelBase::toJson(templateType_);
    }
    if(demoFieldsIsSet_) {
        val[utility::conversions::to_string_t("demo_fields")] = ModelBase::toJson(demoFields_);
    }
    if(tagFieldsIsSet_) {
        val[utility::conversions::to_string_t("tag_fields")] = ModelBase::toJson(tagFields_);
    }
    if(quickAnalysisIsSet_) {
        val[utility::conversions::to_string_t("quick_analysis")] = ModelBase::toJson(quickAnalysis_);
    }

    return val;
}
bool StructConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("demo_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("demo_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<FieldModel> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDemoFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<FieldModel> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quick_analysis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quick_analysis"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuickAnalysis(refVal);
        }
    }
    return ok;
}


std::string StructConfig::getLogGroupId() const
{
    return logGroupId_;
}

void StructConfig::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool StructConfig::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void StructConfig::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string StructConfig::getLogStreamId() const
{
    return logStreamId_;
}

void StructConfig::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool StructConfig::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void StructConfig::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string StructConfig::getTemplateId() const
{
    return templateId_;
}

void StructConfig::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool StructConfig::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void StructConfig::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string StructConfig::getTemplateName() const
{
    return templateName_;
}

void StructConfig::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool StructConfig::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void StructConfig::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string StructConfig::getTemplateType() const
{
    return templateType_;
}

void StructConfig::setTemplateType(const std::string& value)
{
    templateType_ = value;
    templateTypeIsSet_ = true;
}

bool StructConfig::templateTypeIsSet() const
{
    return templateTypeIsSet_;
}

void StructConfig::unsettemplateType()
{
    templateTypeIsSet_ = false;
}

std::vector<FieldModel>& StructConfig::getDemoFields()
{
    return demoFields_;
}

void StructConfig::setDemoFields(const std::vector<FieldModel>& value)
{
    demoFields_ = value;
    demoFieldsIsSet_ = true;
}

bool StructConfig::demoFieldsIsSet() const
{
    return demoFieldsIsSet_;
}

void StructConfig::unsetdemoFields()
{
    demoFieldsIsSet_ = false;
}

std::vector<FieldModel>& StructConfig::getTagFields()
{
    return tagFields_;
}

void StructConfig::setTagFields(const std::vector<FieldModel>& value)
{
    tagFields_ = value;
    tagFieldsIsSet_ = true;
}

bool StructConfig::tagFieldsIsSet() const
{
    return tagFieldsIsSet_;
}

void StructConfig::unsettagFields()
{
    tagFieldsIsSet_ = false;
}

bool StructConfig::isQuickAnalysis() const
{
    return quickAnalysis_;
}

void StructConfig::setQuickAnalysis(bool value)
{
    quickAnalysis_ = value;
    quickAnalysisIsSet_ = true;
}

bool StructConfig::quickAnalysisIsSet() const
{
    return quickAnalysisIsSet_;
}

void StructConfig::unsetquickAnalysis()
{
    quickAnalysisIsSet_ = false;
}

}
}
}
}
}


