

#include "huaweicloud/lts/v2/model/StructTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




StructTemplate::StructTemplate()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    templateType_ = "";
    templateTypeIsSet_ = false;
    demoLog_ = "";
    demoLogIsSet_ = false;
    demoFieldsIsSet_ = false;
    tagFieldsIsSet_ = false;
    ruleIsSet_ = false;
    demoLabel_ = "";
    demoLabelIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
}

StructTemplate::~StructTemplate() = default;

void StructTemplate::validate()
{
}

web::json::value StructTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(templateTypeIsSet_) {
        val[utility::conversions::to_string_t("template_type")] = ModelBase::toJson(templateType_);
    }
    if(demoLogIsSet_) {
        val[utility::conversions::to_string_t("demo_log")] = ModelBase::toJson(demoLog_);
    }
    if(demoFieldsIsSet_) {
        val[utility::conversions::to_string_t("demo_fields")] = ModelBase::toJson(demoFields_);
    }
    if(tagFieldsIsSet_) {
        val[utility::conversions::to_string_t("tag_fields")] = ModelBase::toJson(tagFields_);
    }
    if(ruleIsSet_) {
        val[utility::conversions::to_string_t("rule")] = ModelBase::toJson(rule_);
    }
    if(demoLabelIsSet_) {
        val[utility::conversions::to_string_t("demo_label")] = ModelBase::toJson(demoLabel_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool StructTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("demo_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("demo_log"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDemoLog(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("demo_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("demo_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<DemoField> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDemoFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<TagFieldNew> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule"));
        if(!fieldValue.is_null())
        {
            TemplateRule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("demo_label"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("demo_label"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDemoLabel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    return ok;
}


std::string StructTemplate::getProjectId() const
{
    return projectId_;
}

void StructTemplate::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool StructTemplate::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void StructTemplate::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string StructTemplate::getTemplateName() const
{
    return templateName_;
}

void StructTemplate::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool StructTemplate::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void StructTemplate::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string StructTemplate::getTemplateType() const
{
    return templateType_;
}

void StructTemplate::setTemplateType(const std::string& value)
{
    templateType_ = value;
    templateTypeIsSet_ = true;
}

bool StructTemplate::templateTypeIsSet() const
{
    return templateTypeIsSet_;
}

void StructTemplate::unsettemplateType()
{
    templateTypeIsSet_ = false;
}

std::string StructTemplate::getDemoLog() const
{
    return demoLog_;
}

void StructTemplate::setDemoLog(const std::string& value)
{
    demoLog_ = value;
    demoLogIsSet_ = true;
}

bool StructTemplate::demoLogIsSet() const
{
    return demoLogIsSet_;
}

void StructTemplate::unsetdemoLog()
{
    demoLogIsSet_ = false;
}

std::vector<DemoField>& StructTemplate::getDemoFields()
{
    return demoFields_;
}

void StructTemplate::setDemoFields(const std::vector<DemoField>& value)
{
    demoFields_ = value;
    demoFieldsIsSet_ = true;
}

bool StructTemplate::demoFieldsIsSet() const
{
    return demoFieldsIsSet_;
}

void StructTemplate::unsetdemoFields()
{
    demoFieldsIsSet_ = false;
}

std::vector<TagFieldNew>& StructTemplate::getTagFields()
{
    return tagFields_;
}

void StructTemplate::setTagFields(const std::vector<TagFieldNew>& value)
{
    tagFields_ = value;
    tagFieldsIsSet_ = true;
}

bool StructTemplate::tagFieldsIsSet() const
{
    return tagFieldsIsSet_;
}

void StructTemplate::unsettagFields()
{
    tagFieldsIsSet_ = false;
}

TemplateRule StructTemplate::getRule() const
{
    return rule_;
}

void StructTemplate::setRule(const TemplateRule& value)
{
    rule_ = value;
    ruleIsSet_ = true;
}

bool StructTemplate::ruleIsSet() const
{
    return ruleIsSet_;
}

void StructTemplate::unsetrule()
{
    ruleIsSet_ = false;
}

std::string StructTemplate::getDemoLabel() const
{
    return demoLabel_;
}

void StructTemplate::setDemoLabel(const std::string& value)
{
    demoLabel_ = value;
    demoLabelIsSet_ = true;
}

bool StructTemplate::demoLabelIsSet() const
{
    return demoLabelIsSet_;
}

void StructTemplate::unsetdemoLabel()
{
    demoLabelIsSet_ = false;
}

int64_t StructTemplate::getCreateTime() const
{
    return createTime_;
}

void StructTemplate::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool StructTemplate::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void StructTemplate::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


