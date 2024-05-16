

#include "huaweicloud/ocr/v1/model/RecognizeTrainTicketResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeTrainTicketResponse::RecognizeTrainTicketResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeTrainTicketResponse::~RecognizeTrainTicketResponse() = default;

void RecognizeTrainTicketResponse::validate()
{
}

web::json::value RecognizeTrainTicketResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool RecognizeTrainTicketResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            TrainTicketResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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


TrainTicketResult RecognizeTrainTicketResponse::getResult() const
{
    return result_;
}

void RecognizeTrainTicketResponse::setResult(const TrainTicketResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeTrainTicketResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeTrainTicketResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeTrainTicketResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeTrainTicketResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeTrainTicketResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeTrainTicketResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


