

#include "huaweicloud/cdn/v2/model/ConfigInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ConfigInfo::ConfigInfo()
{
    urlIsSet_ = false;
    uaIsSet_ = false;
}

ConfigInfo::~ConfigInfo() = default;

void ConfigInfo::validate()
{
}

web::json::value ConfigInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(uaIsSet_) {
        val[utility::conversions::to_string_t("ua")] = ModelBase::toJson(ua_);
    }

    return val;
}
bool ConfigInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            TopUrl refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ua"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ua"));
        if(!fieldValue.is_null())
        {
            TopUa refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUa(refVal);
        }
    }
    return ok;
}


TopUrl ConfigInfo::getUrl() const
{
    return url_;
}

void ConfigInfo::setUrl(const TopUrl& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ConfigInfo::urlIsSet() const
{
    return urlIsSet_;
}

void ConfigInfo::unseturl()
{
    urlIsSet_ = false;
}

TopUa ConfigInfo::getUa() const
{
    return ua_;
}

void ConfigInfo::setUa(const TopUa& value)
{
    ua_ = value;
    uaIsSet_ = true;
}

bool ConfigInfo::uaIsSet() const
{
    return uaIsSet_;
}

void ConfigInfo::unsetua()
{
    uaIsSet_ = false;
}

}
}
}
}
}


