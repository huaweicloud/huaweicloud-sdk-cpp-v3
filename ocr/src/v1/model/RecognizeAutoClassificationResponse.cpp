

#include "huaweicloud/ocr/v1/model/RecognizeAutoClassificationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeAutoClassificationResponse::RecognizeAutoClassificationResponse()
{
    resultIsSet_ = false;
}

RecognizeAutoClassificationResponse::~RecognizeAutoClassificationResponse() = default;

void RecognizeAutoClassificationResponse::validate()
{
}

web::json::value RecognizeAutoClassificationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizeAutoClassificationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<AutoClassificationResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::vector<AutoClassificationResult>& RecognizeAutoClassificationResponse::getResult()
{
    return result_;
}

void RecognizeAutoClassificationResponse::setResult(const std::vector<AutoClassificationResult>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeAutoClassificationResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeAutoClassificationResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


