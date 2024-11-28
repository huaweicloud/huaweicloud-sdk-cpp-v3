

#include "huaweicloud/image/v2/model/RunImageTaggingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




RunImageTaggingResponse::RunImageTaggingResponse()
{
    resultIsSet_ = false;
}

RunImageTaggingResponse::~RunImageTaggingResponse() = default;

void RunImageTaggingResponse::validate()
{
}

web::json::value RunImageTaggingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RunImageTaggingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ImageTaggingResponse_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


ImageTaggingResponse_result RunImageTaggingResponse::getResult() const
{
    return result_;
}

void RunImageTaggingResponse::setResult(const ImageTaggingResponse_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RunImageTaggingResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RunImageTaggingResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


