

#include "huaweicloud/ocr/v1/model/RecognizeTrainTicketResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeTrainTicketResponse::RecognizeTrainTicketResponse()
{
    resultIsSet_ = false;
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

}
}
}
}
}


