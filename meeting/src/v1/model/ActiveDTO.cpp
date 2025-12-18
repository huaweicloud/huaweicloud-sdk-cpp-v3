

#include "huaweicloud/meeting/v1/model/ActiveDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ActiveDTO::ActiveDTO()
{
    smsNumber_ = "";
    smsNumberIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
    emailAddr_ = "";
    emailAddrIsSet_ = false;
}

ActiveDTO::~ActiveDTO() = default;

void ActiveDTO::validate()
{
}

web::json::value ActiveDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(smsNumberIsSet_) {
        val[utility::conversions::to_string_t("smsNumber")] = ModelBase::toJson(smsNumber_);
    }
    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
    }
    if(emailAddrIsSet_) {
        val[utility::conversions::to_string_t("emailAddr")] = ModelBase::toJson(emailAddr_);
    }

    return val;
}
bool ActiveDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("smsNumber"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smsNumber"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmsNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("country"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("country"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountry(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("emailAddr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emailAddr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmailAddr(refVal);
        }
    }
    return ok;
}


std::string ActiveDTO::getSmsNumber() const
{
    return smsNumber_;
}

void ActiveDTO::setSmsNumber(const std::string& value)
{
    smsNumber_ = value;
    smsNumberIsSet_ = true;
}

bool ActiveDTO::smsNumberIsSet() const
{
    return smsNumberIsSet_;
}

void ActiveDTO::unsetsmsNumber()
{
    smsNumberIsSet_ = false;
}

std::string ActiveDTO::getCountry() const
{
    return country_;
}

void ActiveDTO::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool ActiveDTO::countryIsSet() const
{
    return countryIsSet_;
}

void ActiveDTO::unsetcountry()
{
    countryIsSet_ = false;
}

std::string ActiveDTO::getEmailAddr() const
{
    return emailAddr_;
}

void ActiveDTO::setEmailAddr(const std::string& value)
{
    emailAddr_ = value;
    emailAddrIsSet_ = true;
}

bool ActiveDTO::emailAddrIsSet() const
{
    return emailAddrIsSet_;
}

void ActiveDTO::unsetemailAddr()
{
    emailAddrIsSet_ = false;
}

}
}
}
}
}


