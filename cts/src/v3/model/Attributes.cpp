

#include "huaweicloud/cts/v3/model/Attributes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




Attributes::Attributes()
{
    createdAt_ = "";
    createdAtIsSet_ = false;
    mfaAuthenticated_ = "";
    mfaAuthenticatedIsSet_ = false;
}

Attributes::~Attributes() = default;

void Attributes::validate()
{
}

web::json::value Attributes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(mfaAuthenticatedIsSet_) {
        val[utility::conversions::to_string_t("mfa_authenticated")] = ModelBase::toJson(mfaAuthenticated_);
    }

    return val;
}
bool Attributes::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mfa_authenticated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mfa_authenticated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMfaAuthenticated(refVal);
        }
    }
    return ok;
}


std::string Attributes::getCreatedAt() const
{
    return createdAt_;
}

void Attributes::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool Attributes::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void Attributes::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string Attributes::getMfaAuthenticated() const
{
    return mfaAuthenticated_;
}

void Attributes::setMfaAuthenticated(const std::string& value)
{
    mfaAuthenticated_ = value;
    mfaAuthenticatedIsSet_ = true;
}

bool Attributes::mfaAuthenticatedIsSet() const
{
    return mfaAuthenticatedIsSet_;
}

void Attributes::unsetmfaAuthenticated()
{
    mfaAuthenticatedIsSet_ = false;
}

}
}
}
}
}


