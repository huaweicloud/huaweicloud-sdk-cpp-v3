

#include "huaweicloud/cdn/v2/model/AccessControlUrls.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




AccessControlUrls::AccessControlUrls()
{
    urlsIsSet_ = false;
    banDuration_ = 0;
    banDurationIsSet_ = false;
}

AccessControlUrls::~AccessControlUrls() = default;

void AccessControlUrls::validate()
{
}

web::json::value AccessControlUrls::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlsIsSet_) {
        val[utility::conversions::to_string_t("urls")] = ModelBase::toJson(urls_);
    }
    if(banDurationIsSet_) {
        val[utility::conversions::to_string_t("ban_duration")] = ModelBase::toJson(banDuration_);
    }

    return val;
}
bool AccessControlUrls::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urls"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ban_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ban_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBanDuration(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& AccessControlUrls::getUrls()
{
    return urls_;
}

void AccessControlUrls::setUrls(const std::vector<std::string>& value)
{
    urls_ = value;
    urlsIsSet_ = true;
}

bool AccessControlUrls::urlsIsSet() const
{
    return urlsIsSet_;
}

void AccessControlUrls::unseturls()
{
    urlsIsSet_ = false;
}

int32_t AccessControlUrls::getBanDuration() const
{
    return banDuration_;
}

void AccessControlUrls::setBanDuration(int32_t value)
{
    banDuration_ = value;
    banDurationIsSet_ = true;
}

bool AccessControlUrls::banDurationIsSet() const
{
    return banDurationIsSet_;
}

void AccessControlUrls::unsetbanDuration()
{
    banDurationIsSet_ = false;
}

}
}
}
}
}


