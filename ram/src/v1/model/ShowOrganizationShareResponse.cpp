

#include "huaweicloud/ram/v1/model/ShowOrganizationShareResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ShowOrganizationShareResponse::ShowOrganizationShareResponse()
{
    enabled_ = false;
    enabledIsSet_ = false;
}

ShowOrganizationShareResponse::~ShowOrganizationShareResponse() = default;

void ShowOrganizationShareResponse::validate()
{
}

web::json::value ShowOrganizationShareResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}
bool ShowOrganizationShareResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    return ok;
}


bool ShowOrganizationShareResponse::isEnabled() const
{
    return enabled_;
}

void ShowOrganizationShareResponse::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ShowOrganizationShareResponse::enabledIsSet() const
{
    return enabledIsSet_;
}

void ShowOrganizationShareResponse::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


