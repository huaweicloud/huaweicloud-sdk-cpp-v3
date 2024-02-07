

#include "huaweicloud/geip/v3/model/CreateUserDisclaimerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CreateUserDisclaimerResponse::CreateUserDisclaimerResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    userDisclaimerRecordIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateUserDisclaimerResponse::~CreateUserDisclaimerResponse() = default;

void CreateUserDisclaimerResponse::validate()
{
}

web::json::value CreateUserDisclaimerResponse::toJson() const
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
bool CreateUserDisclaimerResponse::fromJson(const web::json::value& val)
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
            CreateUserDisclaimerRecord refVal;
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


std::string CreateUserDisclaimerResponse::getRequestId() const
{
    return requestId_;
}

void CreateUserDisclaimerResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateUserDisclaimerResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateUserDisclaimerResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

CreateUserDisclaimerRecord CreateUserDisclaimerResponse::getUserDisclaimerRecord() const
{
    return userDisclaimerRecord_;
}

void CreateUserDisclaimerResponse::setUserDisclaimerRecord(const CreateUserDisclaimerRecord& value)
{
    userDisclaimerRecord_ = value;
    userDisclaimerRecordIsSet_ = true;
}

bool CreateUserDisclaimerResponse::userDisclaimerRecordIsSet() const
{
    return userDisclaimerRecordIsSet_;
}

void CreateUserDisclaimerResponse::unsetuserDisclaimerRecord()
{
    userDisclaimerRecordIsSet_ = false;
}

std::string CreateUserDisclaimerResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateUserDisclaimerResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateUserDisclaimerResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateUserDisclaimerResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


