

#include "huaweicloud/projectman/v4/model/BaseEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BaseEntity::BaseEntity()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    modifiedBy_ = "";
    modifiedByIsSet_ = false;
    modifiedDate_ = "";
    modifiedDateIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
}

BaseEntity::~BaseEntity() = default;

void BaseEntity::validate()
{
}

web::json::value BaseEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }
    if(modifiedDateIsSet_) {
        val[utility::conversions::to_string_t("modified_date")] = ModelBase::toJson(modifiedDate_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }

    return val;
}
bool BaseEntity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
        }
    }
    return ok;
}


std::string BaseEntity::getTenantId() const
{
    return tenantId_;
}

void BaseEntity::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool BaseEntity::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void BaseEntity::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string BaseEntity::getModifiedBy() const
{
    return modifiedBy_;
}

void BaseEntity::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool BaseEntity::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void BaseEntity::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

std::string BaseEntity::getModifiedDate() const
{
    return modifiedDate_;
}

void BaseEntity::setModifiedDate(const std::string& value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool BaseEntity::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void BaseEntity::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
}

std::string BaseEntity::getCreatedBy() const
{
    return createdBy_;
}

void BaseEntity::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool BaseEntity::createdByIsSet() const
{
    return createdByIsSet_;
}

void BaseEntity::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string BaseEntity::getCreatedDate() const
{
    return createdDate_;
}

void BaseEntity::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool BaseEntity::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void BaseEntity::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

}
}
}
}
}


