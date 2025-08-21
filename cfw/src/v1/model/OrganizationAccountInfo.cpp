

#include "huaweicloud/cfw/v1/model/OrganizationAccountInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




OrganizationAccountInfo::OrganizationAccountInfo()
{
    delegated_ = false;
    delegatedIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    orgType_ = "";
    orgTypeIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    urn_ = "";
    urnIsSet_ = false;
}

OrganizationAccountInfo::~OrganizationAccountInfo() = default;

void OrganizationAccountInfo::validate()
{
}

web::json::value OrganizationAccountInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(delegatedIsSet_) {
        val[utility::conversions::to_string_t("delegated")] = ModelBase::toJson(delegated_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(orgTypeIsSet_) {
        val[utility::conversions::to_string_t("org_type")] = ModelBase::toJson(orgType_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(urnIsSet_) {
        val[utility::conversions::to_string_t("urn")] = ModelBase::toJson(urn_);
    }

    return val;
}
bool OrganizationAccountInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delegated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delegated"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelegated(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("org_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("org_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrgType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
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
    return ok;
}


bool OrganizationAccountInfo::isDelegated() const
{
    return delegated_;
}

void OrganizationAccountInfo::setDelegated(bool value)
{
    delegated_ = value;
    delegatedIsSet_ = true;
}

bool OrganizationAccountInfo::delegatedIsSet() const
{
    return delegatedIsSet_;
}

void OrganizationAccountInfo::unsetdelegated()
{
    delegatedIsSet_ = false;
}

std::string OrganizationAccountInfo::getId() const
{
    return id_;
}

void OrganizationAccountInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OrganizationAccountInfo::idIsSet() const
{
    return idIsSet_;
}

void OrganizationAccountInfo::unsetid()
{
    idIsSet_ = false;
}

std::string OrganizationAccountInfo::getName() const
{
    return name_;
}

void OrganizationAccountInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OrganizationAccountInfo::nameIsSet() const
{
    return nameIsSet_;
}

void OrganizationAccountInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string OrganizationAccountInfo::getOrgType() const
{
    return orgType_;
}

void OrganizationAccountInfo::setOrgType(const std::string& value)
{
    orgType_ = value;
    orgTypeIsSet_ = true;
}

bool OrganizationAccountInfo::orgTypeIsSet() const
{
    return orgTypeIsSet_;
}

void OrganizationAccountInfo::unsetorgType()
{
    orgTypeIsSet_ = false;
}

std::string OrganizationAccountInfo::getParentId() const
{
    return parentId_;
}

void OrganizationAccountInfo::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool OrganizationAccountInfo::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void OrganizationAccountInfo::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string OrganizationAccountInfo::getUrn() const
{
    return urn_;
}

void OrganizationAccountInfo::setUrn(const std::string& value)
{
    urn_ = value;
    urnIsSet_ = true;
}

bool OrganizationAccountInfo::urnIsSet() const
{
    return urnIsSet_;
}

void OrganizationAccountInfo::unseturn()
{
    urnIsSet_ = false;
}

}
}
}
}
}


