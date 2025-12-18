

#include "huaweicloud/meeting/v1/model/CreateAnonymousAuthRandomResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreateAnonymousAuthRandomResponse::CreateAnonymousAuthRandomResponse()
{
    siteUrl_ = "";
    siteUrlIsSet_ = false;
    random_ = "";
    randomIsSet_ = false;
}

CreateAnonymousAuthRandomResponse::~CreateAnonymousAuthRandomResponse() = default;

void CreateAnonymousAuthRandomResponse::validate()
{
}

web::json::value CreateAnonymousAuthRandomResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(siteUrlIsSet_) {
        val[utility::conversions::to_string_t("siteUrl")] = ModelBase::toJson(siteUrl_);
    }
    if(randomIsSet_) {
        val[utility::conversions::to_string_t("random")] = ModelBase::toJson(random_);
    }

    return val;
}
bool CreateAnonymousAuthRandomResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("siteUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("siteUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSiteUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("random"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("random"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRandom(refVal);
        }
    }
    return ok;
}


std::string CreateAnonymousAuthRandomResponse::getSiteUrl() const
{
    return siteUrl_;
}

void CreateAnonymousAuthRandomResponse::setSiteUrl(const std::string& value)
{
    siteUrl_ = value;
    siteUrlIsSet_ = true;
}

bool CreateAnonymousAuthRandomResponse::siteUrlIsSet() const
{
    return siteUrlIsSet_;
}

void CreateAnonymousAuthRandomResponse::unsetsiteUrl()
{
    siteUrlIsSet_ = false;
}

std::string CreateAnonymousAuthRandomResponse::getRandom() const
{
    return random_;
}

void CreateAnonymousAuthRandomResponse::setRandom(const std::string& value)
{
    random_ = value;
    randomIsSet_ = true;
}

bool CreateAnonymousAuthRandomResponse::randomIsSet() const
{
    return randomIsSet_;
}

void CreateAnonymousAuthRandomResponse::unsetrandom()
{
    randomIsSet_ = false;
}

}
}
}
}
}


