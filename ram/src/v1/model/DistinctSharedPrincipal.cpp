

#include "huaweicloud/ram/v1/model/DistinctSharedPrincipal.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




DistinctSharedPrincipal::DistinctSharedPrincipal()
{
    id_ = "";
    idIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

DistinctSharedPrincipal::~DistinctSharedPrincipal() = default;

void DistinctSharedPrincipal::validate()
{
}

web::json::value DistinctSharedPrincipal::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool DistinctSharedPrincipal::fromJson(const web::json::value& val)
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


std::string DistinctSharedPrincipal::getId() const
{
    return id_;
}

void DistinctSharedPrincipal::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DistinctSharedPrincipal::idIsSet() const
{
    return idIsSet_;
}

void DistinctSharedPrincipal::unsetid()
{
    idIsSet_ = false;
}

utility::datetime DistinctSharedPrincipal::getUpdatedAt() const
{
    return updatedAt_;
}

void DistinctSharedPrincipal::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool DistinctSharedPrincipal::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void DistinctSharedPrincipal::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


