

#include "huaweicloud/ocr/v1/model/RecognizeHouseholdRegisterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeHouseholdRegisterResponse::RecognizeHouseholdRegisterResponse()
{
    resultIsSet_ = false;
}

RecognizeHouseholdRegisterResponse::~RecognizeHouseholdRegisterResponse() = default;

void RecognizeHouseholdRegisterResponse::validate()
{
}

web::json::value RecognizeHouseholdRegisterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RecognizeHouseholdRegisterResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<HouseholdRegisterResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::vector<HouseholdRegisterResult>& RecognizeHouseholdRegisterResponse::getResult()
{
    return result_;
}

void RecognizeHouseholdRegisterResponse::setResult(const std::vector<HouseholdRegisterResult>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeHouseholdRegisterResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeHouseholdRegisterResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


