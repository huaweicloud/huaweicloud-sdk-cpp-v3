

#include "huaweicloud/ocr/v1/model/RecognizeWaybillElectronicResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeWaybillElectronicResponse::RecognizeWaybillElectronicResponse()
{
    resultIsSet_ = false;
}

RecognizeWaybillElectronicResponse::~RecognizeWaybillElectronicResponse() = default;

void RecognizeWaybillElectronicResponse::validate()
{
}

web::json::value RecognizeWaybillElectronicResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RecognizeWaybillElectronicResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            WaybillElectronicResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


WaybillElectronicResult RecognizeWaybillElectronicResponse::getResult() const
{
    return result_;
}

void RecognizeWaybillElectronicResponse::setResult(const WaybillElectronicResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeWaybillElectronicResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeWaybillElectronicResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


