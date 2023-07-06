

#include "huaweicloud/ocr/v1/model/RecognizePcrTestRecordResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizePcrTestRecordResponse::RecognizePcrTestRecordResponse()
{
    resultIsSet_ = false;
}

RecognizePcrTestRecordResponse::~RecognizePcrTestRecordResponse() = default;

void RecognizePcrTestRecordResponse::validate()
{
}

web::json::value RecognizePcrTestRecordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizePcrTestRecordResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            PcrTestRecordResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}

PcrTestRecordResult RecognizePcrTestRecordResponse::getResult() const
{
    return result_;
}

void RecognizePcrTestRecordResponse::setResult(const PcrTestRecordResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizePcrTestRecordResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizePcrTestRecordResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


