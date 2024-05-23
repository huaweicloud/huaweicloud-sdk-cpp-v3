

#include "huaweicloud/ram/v1/model/SharedPrincipal.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SharedPrincipal::SharedPrincipal()
{
    resourceShareId_ = "";
    resourceShareIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

SharedPrincipal::~SharedPrincipal() = default;

void SharedPrincipal::validate()
{
}

web::json::value SharedPrincipal::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceShareIdIsSet_) {
        val[utility::conversions::to_string_t("resource_share_id")] = ModelBase::toJson(resourceShareId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool SharedPrincipal::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_share_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
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
    return ok;
}


std::string SharedPrincipal::getResourceShareId() const
{
    return resourceShareId_;
}

void SharedPrincipal::setResourceShareId(const std::string& value)
{
    resourceShareId_ = value;
    resourceShareIdIsSet_ = true;
}

bool SharedPrincipal::resourceShareIdIsSet() const
{
    return resourceShareIdIsSet_;
}

void SharedPrincipal::unsetresourceShareId()
{
    resourceShareIdIsSet_ = false;
}

std::string SharedPrincipal::getId() const
{
    return id_;
}

void SharedPrincipal::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SharedPrincipal::idIsSet() const
{
    return idIsSet_;
}

void SharedPrincipal::unsetid()
{
    idIsSet_ = false;
}

utility::datetime SharedPrincipal::getCreatedAt() const
{
    return createdAt_;
}

void SharedPrincipal::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool SharedPrincipal::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void SharedPrincipal::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime SharedPrincipal::getUpdatedAt() const
{
    return updatedAt_;
}

void SharedPrincipal::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool SharedPrincipal::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void SharedPrincipal::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


