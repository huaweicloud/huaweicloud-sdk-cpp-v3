

#include "huaweicloud/lts/v2/model/StructTemplateModel.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




StructTemplateModel::StructTemplateModel()
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
    id_ = "";
    idIsSet_ = false;
}

StructTemplateModel::~StructTemplateModel() = default;

void StructTemplateModel::validate()
{
}

web::json::value StructTemplateModel::toJson() const
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
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool StructTemplateModel::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string StructTemplateModel::getProjectId() const
{
    return projectId_;
}

void StructTemplateModel::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool StructTemplateModel::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void StructTemplateModel::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string StructTemplateModel::getTemplateName() const
{
    return templateName_;
}

void StructTemplateModel::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool StructTemplateModel::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void StructTemplateModel::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string StructTemplateModel::getTemplateType() const
{
    return templateType_;
}

void StructTemplateModel::setTemplateType(const std::string& value)
{
    templateType_ = value;
    templateTypeIsSet_ = true;
}

bool StructTemplateModel::templateTypeIsSet() const
{
    return templateTypeIsSet_;
}

void StructTemplateModel::unsettemplateType()
{
    templateTypeIsSet_ = false;
}

std::string StructTemplateModel::getDemoLog() const
{
    return demoLog_;
}

void StructTemplateModel::setDemoLog(const std::string& value)
{
    demoLog_ = value;
    demoLogIsSet_ = true;
}

bool StructTemplateModel::demoLogIsSet() const
{
    return demoLogIsSet_;
}

void StructTemplateModel::unsetdemoLog()
{
    demoLogIsSet_ = false;
}

std::vector<DemoField>& StructTemplateModel::getDemoFields()
{
    return demoFields_;
}

void StructTemplateModel::setDemoFields(const std::vector<DemoField>& value)
{
    demoFields_ = value;
    demoFieldsIsSet_ = true;
}

bool StructTemplateModel::demoFieldsIsSet() const
{
    return demoFieldsIsSet_;
}

void StructTemplateModel::unsetdemoFields()
{
    demoFieldsIsSet_ = false;
}

std::vector<TagFieldNew>& StructTemplateModel::getTagFields()
{
    return tagFields_;
}

void StructTemplateModel::setTagFields(const std::vector<TagFieldNew>& value)
{
    tagFields_ = value;
    tagFieldsIsSet_ = true;
}

bool StructTemplateModel::tagFieldsIsSet() const
{
    return tagFieldsIsSet_;
}

void StructTemplateModel::unsettagFields()
{
    tagFieldsIsSet_ = false;
}

TemplateRule StructTemplateModel::getRule() const
{
    return rule_;
}

void StructTemplateModel::setRule(const TemplateRule& value)
{
    rule_ = value;
    ruleIsSet_ = true;
}

bool StructTemplateModel::ruleIsSet() const
{
    return ruleIsSet_;
}

void StructTemplateModel::unsetrule()
{
    ruleIsSet_ = false;
}

std::string StructTemplateModel::getDemoLabel() const
{
    return demoLabel_;
}

void StructTemplateModel::setDemoLabel(const std::string& value)
{
    demoLabel_ = value;
    demoLabelIsSet_ = true;
}

bool StructTemplateModel::demoLabelIsSet() const
{
    return demoLabelIsSet_;
}

void StructTemplateModel::unsetdemoLabel()
{
    demoLabelIsSet_ = false;
}

int64_t StructTemplateModel::getCreateTime() const
{
    return createTime_;
}

void StructTemplateModel::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool StructTemplateModel::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void StructTemplateModel::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string StructTemplateModel::getId() const
{
    return id_;
}

void StructTemplateModel::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StructTemplateModel::idIsSet() const
{
    return idIsSet_;
}

void StructTemplateModel::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


