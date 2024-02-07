

#include "huaweicloud/geip/v3/model/ShowUserDisclaimerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowUserDisclaimerResponse::ShowUserDisclaimerResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    userDisclaimerRecordIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowUserDisclaimerResponse::~ShowUserDisclaimerResponse() = default;

void ShowUserDisclaimerResponse::validate()
{
}

web::json::value ShowUserDisclaimerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(userDisclaimerRecordIsSet_) {
        val[utility::conversions::to_string_t("user_disclaimer_record")] = ModelBase::toJson(userDisclaimerRecord_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowUserDisclaimerResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_disclaimer_record"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_disclaimer_record"));
        if(!fieldValue.is_null())
        {
            ShowUserDisclaimerRecord refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserDisclaimerRecord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowUserDisclaimerResponse::getRequestId() const
{
    return requestId_;
}

void ShowUserDisclaimerResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowUserDisclaimerResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowUserDisclaimerResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

ShowUserDisclaimerRecord ShowUserDisclaimerResponse::getUserDisclaimerRecord() const
{
    return userDisclaimerRecord_;
}

void ShowUserDisclaimerResponse::setUserDisclaimerRecord(const ShowUserDisclaimerRecord& value)
{
    userDisclaimerRecord_ = value;
    userDisclaimerRecordIsSet_ = true;
}

bool ShowUserDisclaimerResponse::userDisclaimerRecordIsSet() const
{
    return userDisclaimerRecordIsSet_;
}

void ShowUserDisclaimerResponse::unsetuserDisclaimerRecord()
{
    userDisclaimerRecordIsSet_ = false;
}

std::string ShowUserDisclaimerResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowUserDisclaimerResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowUserDisclaimerResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowUserDisclaimerResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


