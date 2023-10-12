

#include "huaweicloud/ocr/v1/model/RecognizeBusinessLicenseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeBusinessLicenseResponse::RecognizeBusinessLicenseResponse()
{
    resultIsSet_ = false;
}

RecognizeBusinessLicenseResponse::~RecognizeBusinessLicenseResponse() = default;

void RecognizeBusinessLicenseResponse::validate()
{
}

web::json::value RecognizeBusinessLicenseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RecognizeBusinessLicenseResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            BusinessLicenseResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


BusinessLicenseResult RecognizeBusinessLicenseResponse::getResult() const
{
    return result_;
}

void RecognizeBusinessLicenseResponse::setResult(const BusinessLicenseResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeBusinessLicenseResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeBusinessLicenseResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


