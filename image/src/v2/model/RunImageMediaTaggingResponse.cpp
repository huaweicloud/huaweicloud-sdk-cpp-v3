

#include "huaweicloud/image/v2/model/RunImageMediaTaggingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




RunImageMediaTaggingResponse::RunImageMediaTaggingResponse()
{
    resultIsSet_ = false;
}

RunImageMediaTaggingResponse::~RunImageMediaTaggingResponse() = default;

void RunImageMediaTaggingResponse::validate()
{
}

web::json::value RunImageMediaTaggingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RunImageMediaTaggingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ImageMediaTaggingResponse_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


ImageMediaTaggingResponse_result RunImageMediaTaggingResponse::getResult() const
{
    return result_;
}

void RunImageMediaTaggingResponse::setResult(const ImageMediaTaggingResponse_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RunImageMediaTaggingResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RunImageMediaTaggingResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


