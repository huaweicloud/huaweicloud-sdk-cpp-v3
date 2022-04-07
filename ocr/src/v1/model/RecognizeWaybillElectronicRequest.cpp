

#include "huaweicloud/ocr/v1/model/RecognizeWaybillElectronicRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeWaybillElectronicRequest::RecognizeWaybillElectronicRequest()
{
    bodyIsSet_ = false;
}

RecognizeWaybillElectronicRequest::~RecognizeWaybillElectronicRequest() = default;

void RecognizeWaybillElectronicRequest::validate()
{
}

web::json::value RecognizeWaybillElectronicRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeWaybillElectronicRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            WaybillElectronicRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


WaybillElectronicRequestBody RecognizeWaybillElectronicRequest::getBody() const
{
    return body_;
}

void RecognizeWaybillElectronicRequest::setBody(const WaybillElectronicRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeWaybillElectronicRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeWaybillElectronicRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


