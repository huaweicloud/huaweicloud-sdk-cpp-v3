

#include "huaweicloud/modelarts/v1/model/CreateHpaRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateHpaRequestBody::CreateHpaRequestBody()
{
    type_ = "";
    typeIsSet_ = false;
    targetResourceId_ = "";
    targetResourceIdIsSet_ = false;
    targetResourceType_ = "";
    targetResourceTypeIsSet_ = false;
    hpaRulesIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

CreateHpaRequestBody::~CreateHpaRequestBody() = default;

void CreateHpaRequestBody::validate()
{
}

web::json::value CreateHpaRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(targetResourceIdIsSet_) {
        val[utility::conversions::to_string_t("target_resource_id")] = ModelBase::toJson(targetResourceId_);
    }
    if(targetResourceTypeIsSet_) {
        val[utility::conversions::to_string_t("target_resource_type")] = ModelBase::toJson(targetResourceType_);
    }
    if(hpaRulesIsSet_) {
        val[utility::conversions::to_string_t("hpa_rules")] = ModelBase::toJson(hpaRules_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool CreateHpaRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hpa_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hpa_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<HpaRules> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHpaRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    return ok;
}


std::string CreateHpaRequestBody::getType() const
{
    return type_;
}

void CreateHpaRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateHpaRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void CreateHpaRequestBody::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateHpaRequestBody::getTargetResourceId() const
{
    return targetResourceId_;
}

void CreateHpaRequestBody::setTargetResourceId(const std::string& value)
{
    targetResourceId_ = value;
    targetResourceIdIsSet_ = true;
}

bool CreateHpaRequestBody::targetResourceIdIsSet() const
{
    return targetResourceIdIsSet_;
}

void CreateHpaRequestBody::unsettargetResourceId()
{
    targetResourceIdIsSet_ = false;
}

std::string CreateHpaRequestBody::getTargetResourceType() const
{
    return targetResourceType_;
}

void CreateHpaRequestBody::setTargetResourceType(const std::string& value)
{
    targetResourceType_ = value;
    targetResourceTypeIsSet_ = true;
}

bool CreateHpaRequestBody::targetResourceTypeIsSet() const
{
    return targetResourceTypeIsSet_;
}

void CreateHpaRequestBody::unsettargetResourceType()
{
    targetResourceTypeIsSet_ = false;
}

std::vector<HpaRules>& CreateHpaRequestBody::getHpaRules()
{
    return hpaRules_;
}

void CreateHpaRequestBody::setHpaRules(const std::vector<HpaRules>& value)
{
    hpaRules_ = value;
    hpaRulesIsSet_ = true;
}

bool CreateHpaRequestBody::hpaRulesIsSet() const
{
    return hpaRulesIsSet_;
}

void CreateHpaRequestBody::unsethpaRules()
{
    hpaRulesIsSet_ = false;
}

std::string CreateHpaRequestBody::getWorkspaceId() const
{
    return workspaceId_;
}

void CreateHpaRequestBody::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool CreateHpaRequestBody::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void CreateHpaRequestBody::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


