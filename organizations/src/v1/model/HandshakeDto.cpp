

#include "huaweicloud/organizations/v1/model/HandshakeDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




HandshakeDto::HandshakeDto()
{
    id_ = "";
    idIsSet_ = false;
    urn_ = "";
    urnIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    expiredAt_ = utility::datetime();
    expiredAtIsSet_ = false;
    managementAccountId_ = "";
    managementAccountIdIsSet_ = false;
    managementAccountName_ = "";
    managementAccountNameIsSet_ = false;
    organizationId_ = "";
    organizationIdIsSet_ = false;
    notes_ = "";
    notesIsSet_ = false;
    targetIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

HandshakeDto::~HandshakeDto() = default;

void HandshakeDto::validate()
{
}

web::json::value HandshakeDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(urnIsSet_) {
        val[utility::conversions::to_string_t("urn")] = ModelBase::toJson(urn_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(expiredAtIsSet_) {
        val[utility::conversions::to_string_t("expired_at")] = ModelBase::toJson(expiredAt_);
    }
    if(managementAccountIdIsSet_) {
        val[utility::conversions::to_string_t("management_account_id")] = ModelBase::toJson(managementAccountId_);
    }
    if(managementAccountNameIsSet_) {
        val[utility::conversions::to_string_t("management_account_name")] = ModelBase::toJson(managementAccountName_);
    }
    if(organizationIdIsSet_) {
        val[utility::conversions::to_string_t("organization_id")] = ModelBase::toJson(organizationId_);
    }
    if(notesIsSet_) {
        val[utility::conversions::to_string_t("notes")] = ModelBase::toJson(notes_);
    }
    if(targetIsSet_) {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(target_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool HandshakeDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expired_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expired_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiredAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("management_account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("management_account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagementAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("management_account_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("management_account_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagementAccountName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organization_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organization_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            TargetDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
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
    return ok;
}


std::string HandshakeDto::getId() const
{
    return id_;
}

void HandshakeDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HandshakeDto::idIsSet() const
{
    return idIsSet_;
}

void HandshakeDto::unsetid()
{
    idIsSet_ = false;
}

std::string HandshakeDto::getUrn() const
{
    return urn_;
}

void HandshakeDto::setUrn(const std::string& value)
{
    urn_ = value;
    urnIsSet_ = true;
}

bool HandshakeDto::urnIsSet() const
{
    return urnIsSet_;
}

void HandshakeDto::unseturn()
{
    urnIsSet_ = false;
}

utility::datetime HandshakeDto::getUpdatedAt() const
{
    return updatedAt_;
}

void HandshakeDto::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool HandshakeDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void HandshakeDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

utility::datetime HandshakeDto::getCreatedAt() const
{
    return createdAt_;
}

void HandshakeDto::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool HandshakeDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void HandshakeDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime HandshakeDto::getExpiredAt() const
{
    return expiredAt_;
}

void HandshakeDto::setExpiredAt(const utility::datetime& value)
{
    expiredAt_ = value;
    expiredAtIsSet_ = true;
}

bool HandshakeDto::expiredAtIsSet() const
{
    return expiredAtIsSet_;
}

void HandshakeDto::unsetexpiredAt()
{
    expiredAtIsSet_ = false;
}

std::string HandshakeDto::getManagementAccountId() const
{
    return managementAccountId_;
}

void HandshakeDto::setManagementAccountId(const std::string& value)
{
    managementAccountId_ = value;
    managementAccountIdIsSet_ = true;
}

bool HandshakeDto::managementAccountIdIsSet() const
{
    return managementAccountIdIsSet_;
}

void HandshakeDto::unsetmanagementAccountId()
{
    managementAccountIdIsSet_ = false;
}

std::string HandshakeDto::getManagementAccountName() const
{
    return managementAccountName_;
}

void HandshakeDto::setManagementAccountName(const std::string& value)
{
    managementAccountName_ = value;
    managementAccountNameIsSet_ = true;
}

bool HandshakeDto::managementAccountNameIsSet() const
{
    return managementAccountNameIsSet_;
}

void HandshakeDto::unsetmanagementAccountName()
{
    managementAccountNameIsSet_ = false;
}

std::string HandshakeDto::getOrganizationId() const
{
    return organizationId_;
}

void HandshakeDto::setOrganizationId(const std::string& value)
{
    organizationId_ = value;
    organizationIdIsSet_ = true;
}

bool HandshakeDto::organizationIdIsSet() const
{
    return organizationIdIsSet_;
}

void HandshakeDto::unsetorganizationId()
{
    organizationIdIsSet_ = false;
}

std::string HandshakeDto::getNotes() const
{
    return notes_;
}

void HandshakeDto::setNotes(const std::string& value)
{
    notes_ = value;
    notesIsSet_ = true;
}

bool HandshakeDto::notesIsSet() const
{
    return notesIsSet_;
}

void HandshakeDto::unsetnotes()
{
    notesIsSet_ = false;
}

TargetDto HandshakeDto::getTarget() const
{
    return target_;
}

void HandshakeDto::setTarget(const TargetDto& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool HandshakeDto::targetIsSet() const
{
    return targetIsSet_;
}

void HandshakeDto::unsettarget()
{
    targetIsSet_ = false;
}

std::string HandshakeDto::getStatus() const
{
    return status_;
}

void HandshakeDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool HandshakeDto::statusIsSet() const
{
    return statusIsSet_;
}

void HandshakeDto::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


