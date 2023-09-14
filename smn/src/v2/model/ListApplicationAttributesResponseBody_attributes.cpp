

#include "huaweicloud/smn/v2/model/ListApplicationAttributesResponseBody_attributes.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListApplicationAttributesResponseBody_attributes::ListApplicationAttributesResponseBody_attributes()
{
    enabled_ = "";
    enabledIsSet_ = false;
    appleCertificateExpirationDate_ = "";
    appleCertificateExpirationDateIsSet_ = false;
}

ListApplicationAttributesResponseBody_attributes::~ListApplicationAttributesResponseBody_attributes() = default;

void ListApplicationAttributesResponseBody_attributes::validate()
{
}

web::json::value ListApplicationAttributesResponseBody_attributes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(appleCertificateExpirationDateIsSet_) {
        val[utility::conversions::to_string_t("apple_certificate_expiration_date")] = ModelBase::toJson(appleCertificateExpirationDate_);
    }

    return val;
}

bool ListApplicationAttributesResponseBody_attributes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apple_certificate_expiration_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apple_certificate_expiration_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppleCertificateExpirationDate(refVal);
        }
    }
    return ok;
}

std::string ListApplicationAttributesResponseBody_attributes::getEnabled() const
{
    return enabled_;
}

void ListApplicationAttributesResponseBody_attributes::setEnabled(const std::string& value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ListApplicationAttributesResponseBody_attributes::enabledIsSet() const
{
    return enabledIsSet_;
}

void ListApplicationAttributesResponseBody_attributes::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string ListApplicationAttributesResponseBody_attributes::getAppleCertificateExpirationDate() const
{
    return appleCertificateExpirationDate_;
}

void ListApplicationAttributesResponseBody_attributes::setAppleCertificateExpirationDate(const std::string& value)
{
    appleCertificateExpirationDate_ = value;
    appleCertificateExpirationDateIsSet_ = true;
}

bool ListApplicationAttributesResponseBody_attributes::appleCertificateExpirationDateIsSet() const
{
    return appleCertificateExpirationDateIsSet_;
}

void ListApplicationAttributesResponseBody_attributes::unsetappleCertificateExpirationDate()
{
    appleCertificateExpirationDateIsSet_ = false;
}

}
}
}
}
}


