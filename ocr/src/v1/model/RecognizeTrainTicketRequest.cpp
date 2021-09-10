

#include "huaweicloud/ocr/v1/model/RecognizeTrainTicketRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeTrainTicketRequest::RecognizeTrainTicketRequest()
{
    bodyIsSet_ = false;
}

RecognizeTrainTicketRequest::~RecognizeTrainTicketRequest() = default;

void RecognizeTrainTicketRequest::validate()
{
}

web::json::value RecognizeTrainTicketRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeTrainTicketRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TrainTicketRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


TrainTicketRequestBody RecognizeTrainTicketRequest::getBody() const
{
    return body_;
}

void RecognizeTrainTicketRequest::setBody(const TrainTicketRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeTrainTicketRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeTrainTicketRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


