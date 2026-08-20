

#include "huaweicloud/projectman/v4/model/PutIpdChangeReviewFormV2Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




PutIpdChangeReviewFormV2Response::PutIpdChangeReviewFormV2Response()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

PutIpdChangeReviewFormV2Response::~PutIpdChangeReviewFormV2Response() = default;

void PutIpdChangeReviewFormV2Response::validate()
{
}

web::json::value PutIpdChangeReviewFormV2Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool PutIpdChangeReviewFormV2Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ReviewEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string PutIpdChangeReviewFormV2Response::getStatus() const
{
    return status_;
}

void PutIpdChangeReviewFormV2Response::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PutIpdChangeReviewFormV2Response::statusIsSet() const
{
    return statusIsSet_;
}

void PutIpdChangeReviewFormV2Response::unsetstatus()
{
    statusIsSet_ = false;
}

std::string PutIpdChangeReviewFormV2Response::getMessage() const
{
    return message_;
}

void PutIpdChangeReviewFormV2Response::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool PutIpdChangeReviewFormV2Response::messageIsSet() const
{
    return messageIsSet_;
}

void PutIpdChangeReviewFormV2Response::unsetmessage()
{
    messageIsSet_ = false;
}

ReviewEntity PutIpdChangeReviewFormV2Response::getResult() const
{
    return result_;
}

void PutIpdChangeReviewFormV2Response::setResult(const ReviewEntity& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool PutIpdChangeReviewFormV2Response::resultIsSet() const
{
    return resultIsSet_;
}

void PutIpdChangeReviewFormV2Response::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


