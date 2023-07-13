

#include "huaweicloud/ocr/v1/model/RecognizeMyanmarDriverLicenseResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeMyanmarDriverLicenseResponse::RecognizeMyanmarDriverLicenseResponse()
{
    resultIsSet_ = false;
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

}
}
}
}
}


