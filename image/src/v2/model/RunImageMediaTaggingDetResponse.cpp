

#include "huaweicloud/image/v2/model/RunImageMediaTaggingDetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




RunImageMediaTaggingDetResponse::RunImageMediaTaggingDetResponse()
{
    resultIsSet_ = false;
}

RunImageMediaTaggingDetResponse::~RunImageMediaTaggingDetResponse() = default;

void RunImageMediaTaggingDetResponse::validate()
{
}

web::json::value RunImageMediaTaggingDetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RunImageMediaTaggingDetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ImageMediaTaggingDetResponse_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


ImageMediaTaggingDetResponse_result RunImageMediaTaggingDetResponse::getResult() const
{
    return result_;
}

void RunImageMediaTaggingDetResponse::setResult(const ImageMediaTaggingDetResponse_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RunImageMediaTaggingDetResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RunImageMediaTaggingDetResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


