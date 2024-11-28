

#include "huaweicloud/image/v2/model/RunRecaptureDetectResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




RunRecaptureDetectResponse::RunRecaptureDetectResponse()
{
    resultIsSet_ = false;
}

RunRecaptureDetectResponse::~RunRecaptureDetectResponse() = default;

void RunRecaptureDetectResponse::validate()
{
}

web::json::value RunRecaptureDetectResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RunRecaptureDetectResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            RecaptureDetectResponse_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


RecaptureDetectResponse_result RunRecaptureDetectResponse::getResult() const
{
    return result_;
}

void RunRecaptureDetectResponse::setResult(const RecaptureDetectResponse_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RunRecaptureDetectResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RunRecaptureDetectResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


