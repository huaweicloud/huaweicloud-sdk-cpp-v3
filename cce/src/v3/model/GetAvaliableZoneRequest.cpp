

#include "huaweicloud/cce/v3/model/GetAvaliableZoneRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetAvaliableZoneRequest::GetAvaliableZoneRequest()
{
    locale_ = "";
    localeIsSet_ = false;
}

GetAvaliableZoneRequest::~GetAvaliableZoneRequest() = default;

void GetAvaliableZoneRequest::validate()
{
}

web::json::value GetAvaliableZoneRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(localeIsSet_) {
        val[utility::conversions::to_string_t("locale")] = ModelBase::toJson(locale_);
    }

    return val;
}
bool GetAvaliableZoneRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("locale"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locale"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocale(refVal);
        }
    }
    return ok;
}


std::string GetAvaliableZoneRequest::getLocale() const
{
    return locale_;
}

void GetAvaliableZoneRequest::setLocale(const std::string& value)
{
    locale_ = value;
    localeIsSet_ = true;
}

bool GetAvaliableZoneRequest::localeIsSet() const
{
    return localeIsSet_;
}

void GetAvaliableZoneRequest::unsetlocale()
{
    localeIsSet_ = false;
}

}
}
}
}
}


