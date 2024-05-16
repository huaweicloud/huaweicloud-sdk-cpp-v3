

#include "huaweicloud/ocr/v1/model/RecognizeInsurancePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeInsurancePolicyResponse::RecognizeInsurancePolicyResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeInsurancePolicyResponse::~RecognizeInsurancePolicyResponse() = default;

void RecognizeInsurancePolicyResponse::validate()
{
}

web::json::value RecognizeInsurancePolicyResponse::toJson() const
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
bool RecognizeInsurancePolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyResult refVal;
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


InsurancePolicyResult RecognizeInsurancePolicyResponse::getResult() const
{
    return result_;
}

void RecognizeInsurancePolicyResponse::setResult(const InsurancePolicyResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeInsurancePolicyResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeInsurancePolicyResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeInsurancePolicyResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeInsurancePolicyResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeInsurancePolicyResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeInsurancePolicyResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


