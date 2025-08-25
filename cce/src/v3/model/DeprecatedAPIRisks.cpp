

#include "huaweicloud/cce/v3/model/DeprecatedAPIRisks.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeprecatedAPIRisks::DeprecatedAPIRisks()
{
    url_ = "";
    urlIsSet_ = false;
    userAgent_ = "";
    userAgentIsSet_ = false;
}

DeprecatedAPIRisks::~DeprecatedAPIRisks() = default;

void DeprecatedAPIRisks::validate()
{
}

web::json::value DeprecatedAPIRisks::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(userAgentIsSet_) {
        val[utility::conversions::to_string_t("userAgent")] = ModelBase::toJson(userAgent_);
    }

    return val;
}
bool DeprecatedAPIRisks::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userAgent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userAgent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserAgent(refVal);
        }
    }
    return ok;
}


std::string DeprecatedAPIRisks::getUrl() const
{
    return url_;
}

void DeprecatedAPIRisks::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool DeprecatedAPIRisks::urlIsSet() const
{
    return urlIsSet_;
}

void DeprecatedAPIRisks::unseturl()
{
    urlIsSet_ = false;
}

std::string DeprecatedAPIRisks::getUserAgent() const
{
    return userAgent_;
}

void DeprecatedAPIRisks::setUserAgent(const std::string& value)
{
    userAgent_ = value;
    userAgentIsSet_ = true;
}

bool DeprecatedAPIRisks::userAgentIsSet() const
{
    return userAgentIsSet_;
}

void DeprecatedAPIRisks::unsetuserAgent()
{
    userAgentIsSet_ = false;
}

}
}
}
}
}


