

#include "huaweicloud/cbr/v1/model/UpdateExpirationTimeReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




UpdateExpirationTimeReq::UpdateExpirationTimeReq()
{
    expectExpirationDate_ = "";
    expectExpirationDateIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
}

UpdateExpirationTimeReq::~UpdateExpirationTimeReq() = default;

void UpdateExpirationTimeReq::validate()
{
}

web::json::value UpdateExpirationTimeReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(expectExpirationDateIsSet_) {
        val[utility::conversions::to_string_t("expect_expiration_date")] = ModelBase::toJson(expectExpirationDate_);
    }
    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }

    return val;
}
bool UpdateExpirationTimeReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("expect_expiration_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expect_expiration_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpectExpirationDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZone(refVal);
        }
    }
    return ok;
}


std::string UpdateExpirationTimeReq::getExpectExpirationDate() const
{
    return expectExpirationDate_;
}

void UpdateExpirationTimeReq::setExpectExpirationDate(const std::string& value)
{
    expectExpirationDate_ = value;
    expectExpirationDateIsSet_ = true;
}

bool UpdateExpirationTimeReq::expectExpirationDateIsSet() const
{
    return expectExpirationDateIsSet_;
}

void UpdateExpirationTimeReq::unsetexpectExpirationDate()
{
    expectExpirationDateIsSet_ = false;
}

std::string UpdateExpirationTimeReq::getTimeZone() const
{
    return timeZone_;
}

void UpdateExpirationTimeReq::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool UpdateExpirationTimeReq::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void UpdateExpirationTimeReq::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

}
}
}
}
}


