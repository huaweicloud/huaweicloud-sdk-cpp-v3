

#include "huaweicloud/lts/v2/model/BriefStructTemplateModel.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




BriefStructTemplateModel::BriefStructTemplateModel()
{
    createTime_ = 0L;
    createTimeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    templateType_ = "";
    templateTypeIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

BriefStructTemplateModel::~BriefStructTemplateModel() = default;

void BriefStructTemplateModel::validate()
{
}

web::json::value BriefStructTemplateModel::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(templateTypeIsSet_) {
        val[utility::conversions::to_string_t("template_type")] = ModelBase::toJson(templateType_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool BriefStructTemplateModel::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    return ok;
}


int64_t BriefStructTemplateModel::getCreateTime() const
{
    return createTime_;
}

void BriefStructTemplateModel::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool BriefStructTemplateModel::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void BriefStructTemplateModel::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string BriefStructTemplateModel::getId() const
{
    return id_;
}

void BriefStructTemplateModel::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BriefStructTemplateModel::idIsSet() const
{
    return idIsSet_;
}

void BriefStructTemplateModel::unsetid()
{
    idIsSet_ = false;
}

std::string BriefStructTemplateModel::getTemplateName() const
{
    return templateName_;
}

void BriefStructTemplateModel::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool BriefStructTemplateModel::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void BriefStructTemplateModel::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string BriefStructTemplateModel::getTemplateType() const
{
    return templateType_;
}

void BriefStructTemplateModel::setTemplateType(const std::string& value)
{
    templateType_ = value;
    templateTypeIsSet_ = true;
}

bool BriefStructTemplateModel::templateTypeIsSet() const
{
    return templateTypeIsSet_;
}

void BriefStructTemplateModel::unsettemplateType()
{
    templateTypeIsSet_ = false;
}

std::string BriefStructTemplateModel::getProjectId() const
{
    return projectId_;
}

void BriefStructTemplateModel::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BriefStructTemplateModel::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BriefStructTemplateModel::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


