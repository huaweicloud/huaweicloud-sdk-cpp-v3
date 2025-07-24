

#include "huaweicloud/cloudtest/v1/model/ShowReviewByPageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowReviewByPageResponse::ShowReviewByPageResponse()
{
    code_ = "";
    codeIsSet_ = false;
    dataIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ShowReviewByPageResponse::~ShowReviewByPageResponse() = default;

void ShowReviewByPageResponse::validate()
{
}

web::json::value ShowReviewByPageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool ShowReviewByPageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            BasePageInfoReview refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string ShowReviewByPageResponse::getCode() const
{
    return code_;
}

void ShowReviewByPageResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowReviewByPageResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowReviewByPageResponse::unsetcode()
{
    codeIsSet_ = false;
}

BasePageInfoReview ShowReviewByPageResponse::getData() const
{
    return data_;
}

void ShowReviewByPageResponse::setData(const BasePageInfoReview& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowReviewByPageResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowReviewByPageResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowReviewByPageResponse::getMessage() const
{
    return message_;
}

void ShowReviewByPageResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowReviewByPageResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowReviewByPageResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


