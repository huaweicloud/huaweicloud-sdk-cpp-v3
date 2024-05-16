

#include "huaweicloud/ocr/v1/model/RecognizeMyanmarDriverLicenseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeMyanmarDriverLicenseResponse::RecognizeMyanmarDriverLicenseResponse()
{
    resultIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RecognizeMyanmarDriverLicenseResponse::~RecognizeMyanmarDriverLicenseResponse() = default;

void RecognizeMyanmarDriverLicenseResponse::validate()
{
}

web::json::value RecognizeMyanmarDriverLicenseResponse::toJson() const
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
bool RecognizeMyanmarDriverLicenseResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            MyanmarDriverLicenseResult refVal;
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


MyanmarDriverLicenseResult RecognizeMyanmarDriverLicenseResponse::getResult() const
{
    return result_;
}

void RecognizeMyanmarDriverLicenseResponse::setResult(const MyanmarDriverLicenseResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeMyanmarDriverLicenseResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeMyanmarDriverLicenseResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string RecognizeMyanmarDriverLicenseResponse::getXRequestId() const
{
    return xRequestId_;
}

void RecognizeMyanmarDriverLicenseResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RecognizeMyanmarDriverLicenseResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RecognizeMyanmarDriverLicenseResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


