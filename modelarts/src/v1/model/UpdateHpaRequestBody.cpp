

#include "huaweicloud/modelarts/v1/model/UpdateHpaRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateHpaRequestBody::UpdateHpaRequestBody()
{
    id_ = "";
    idIsSet_ = false;
    hpaRulesIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

UpdateHpaRequestBody::~UpdateHpaRequestBody() = default;

void UpdateHpaRequestBody::validate()
{
}

web::json::value UpdateHpaRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(hpaRulesIsSet_) {
        val[utility::conversions::to_string_t("hpa_rules")] = ModelBase::toJson(hpaRules_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool UpdateHpaRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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


std::string UpdateHpaRequestBody::getId() const
{
    return id_;
}

void UpdateHpaRequestBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateHpaRequestBody::idIsSet() const
{
    return idIsSet_;
}

void UpdateHpaRequestBody::unsetid()
{
    idIsSet_ = false;
}

std::vector<HpaRules>& UpdateHpaRequestBody::getHpaRules()
{
    return hpaRules_;
}

void UpdateHpaRequestBody::setHpaRules(const std::vector<HpaRules>& value)
{
    hpaRules_ = value;
    hpaRulesIsSet_ = true;
}

bool UpdateHpaRequestBody::hpaRulesIsSet() const
{
    return hpaRulesIsSet_;
}

void UpdateHpaRequestBody::unsethpaRules()
{
    hpaRulesIsSet_ = false;
}

std::string UpdateHpaRequestBody::getWorkspaceId() const
{
    return workspaceId_;
}

void UpdateHpaRequestBody::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool UpdateHpaRequestBody::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void UpdateHpaRequestBody::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


