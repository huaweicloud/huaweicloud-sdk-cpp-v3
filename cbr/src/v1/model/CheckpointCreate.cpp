

#include "huaweicloud/cbr/v1/model/CheckpointCreate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CheckpointCreate::CheckpointCreate()
{
    createdAt_ = "";
    createdAtIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    vaultIsSet_ = false;
    extraInfoIsSet_ = false;
}

CheckpointCreate::~CheckpointCreate() = default;

void CheckpointCreate::validate()
{
}

web::json::value CheckpointCreate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(vaultIsSet_) {
        val[utility::conversions::to_string_t("vault")] = ModelBase::toJson(vault_);
    }
    if(extraInfoIsSet_) {
        val[utility::conversions::to_string_t("extra_info")] = ModelBase::toJson(extraInfo_);
    }

    return val;
}
bool CheckpointCreate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault"));
        if(!fieldValue.is_null())
        {
            CheckpointPlanCreate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_info"));
        if(!fieldValue.is_null())
        {
            CheckpointExtraInfoResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraInfo(refVal);
        }
    }
    return ok;
}


std::string CheckpointCreate::getCreatedAt() const
{
    return createdAt_;
}

void CheckpointCreate::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CheckpointCreate::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CheckpointCreate::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string CheckpointCreate::getId() const
{
    return id_;
}

void CheckpointCreate::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CheckpointCreate::idIsSet() const
{
    return idIsSet_;
}

void CheckpointCreate::unsetid()
{
    idIsSet_ = false;
}

std::string CheckpointCreate::getProjectId() const
{
    return projectId_;
}

void CheckpointCreate::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CheckpointCreate::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CheckpointCreate::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CheckpointCreate::getStatus() const
{
    return status_;
}

void CheckpointCreate::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CheckpointCreate::statusIsSet() const
{
    return statusIsSet_;
}

void CheckpointCreate::unsetstatus()
{
    statusIsSet_ = false;
}

CheckpointPlanCreate CheckpointCreate::getVault() const
{
    return vault_;
}

void CheckpointCreate::setVault(const CheckpointPlanCreate& value)
{
    vault_ = value;
    vaultIsSet_ = true;
}

bool CheckpointCreate::vaultIsSet() const
{
    return vaultIsSet_;
}

void CheckpointCreate::unsetvault()
{
    vaultIsSet_ = false;
}

CheckpointExtraInfoResp CheckpointCreate::getExtraInfo() const
{
    return extraInfo_;
}

void CheckpointCreate::setExtraInfo(const CheckpointExtraInfoResp& value)
{
    extraInfo_ = value;
    extraInfoIsSet_ = true;
}

bool CheckpointCreate::extraInfoIsSet() const
{
    return extraInfoIsSet_;
}

void CheckpointCreate::unsetextraInfo()
{
    extraInfoIsSet_ = false;
}

}
}
}
}
}


