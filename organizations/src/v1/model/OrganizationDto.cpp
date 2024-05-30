

#include "huaweicloud/organizations/v1/model/OrganizationDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




OrganizationDto::OrganizationDto()
{
    id_ = "";
    idIsSet_ = false;
    urn_ = "";
    urnIsSet_ = false;
    managementAccountId_ = "";
    managementAccountIdIsSet_ = false;
    managementAccountName_ = "";
    managementAccountNameIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
}

OrganizationDto::~OrganizationDto() = default;

void OrganizationDto::validate()
{
}

web::json::value OrganizationDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(urnIsSet_) {
        val[utility::conversions::to_string_t("urn")] = ModelBase::toJson(urn_);
    }
    if(managementAccountIdIsSet_) {
        val[utility::conversions::to_string_t("management_account_id")] = ModelBase::toJson(managementAccountId_);
    }
    if(managementAccountNameIsSet_) {
        val[utility::conversions::to_string_t("management_account_name")] = ModelBase::toJson(managementAccountName_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }

    return val;
}
bool OrganizationDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    return ok;
}


std::string OrganizationDto::getId() const
{
    return id_;
}

void OrganizationDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OrganizationDto::idIsSet() const
{
    return idIsSet_;
}

void OrganizationDto::unsetid()
{
    idIsSet_ = false;
}

std::string OrganizationDto::getUrn() const
{
    return urn_;
}

void OrganizationDto::setUrn(const std::string& value)
{
    urn_ = value;
    urnIsSet_ = true;
}

bool OrganizationDto::urnIsSet() const
{
    return urnIsSet_;
}

void OrganizationDto::unseturn()
{
    urnIsSet_ = false;
}

std::string OrganizationDto::getManagementAccountId() const
{
    return managementAccountId_;
}

void OrganizationDto::setManagementAccountId(const std::string& value)
{
    managementAccountId_ = value;
    managementAccountIdIsSet_ = true;
}

bool OrganizationDto::managementAccountIdIsSet() const
{
    return managementAccountIdIsSet_;
}

void OrganizationDto::unsetmanagementAccountId()
{
    managementAccountIdIsSet_ = false;
}

std::string OrganizationDto::getManagementAccountName() const
{
    return managementAccountName_;
}

void OrganizationDto::setManagementAccountName(const std::string& value)
{
    managementAccountName_ = value;
    managementAccountNameIsSet_ = true;
}

bool OrganizationDto::managementAccountNameIsSet() const
{
    return managementAccountNameIsSet_;
}

void OrganizationDto::unsetmanagementAccountName()
{
    managementAccountNameIsSet_ = false;
}

utility::datetime OrganizationDto::getCreatedAt() const
{
    return createdAt_;
}

void OrganizationDto::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool OrganizationDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void OrganizationDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}


