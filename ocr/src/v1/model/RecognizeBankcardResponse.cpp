

#include "huaweicloud/ocr/v1/model/RecognizeBankcardResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeBankcardResponse::RecognizeBankcardResponse()
{
    resultIsSet_ = false;
}

RecognizeBankcardResponse::~RecognizeBankcardResponse() = default;

void RecognizeBankcardResponse::validate()
{
}

web::json::value RecognizeBankcardResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool RecognizeBankcardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            BankcardResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


BankcardResult RecognizeBankcardResponse::getResult() const
{
    return result_;
}

void RecognizeBankcardResponse::setResult(const BankcardResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RecognizeBankcardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RecognizeBankcardResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


