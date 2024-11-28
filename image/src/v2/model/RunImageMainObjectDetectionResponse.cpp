

#include "huaweicloud/image/v2/model/RunImageMainObjectDetectionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




RunImageMainObjectDetectionResponse::RunImageMainObjectDetectionResponse()
{
    resultIsSet_ = false;
}

RunImageMainObjectDetectionResponse::~RunImageMainObjectDetectionResponse() = default;

void RunImageMainObjectDetectionResponse::validate()
{
}

web::json::value RunImageMainObjectDetectionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool RunImageMainObjectDetectionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<ImageMainObjectDetectionInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::vector<ImageMainObjectDetectionInstance>& RunImageMainObjectDetectionResponse::getResult()
{
    return result_;
}

void RunImageMainObjectDetectionResponse::setResult(const std::vector<ImageMainObjectDetectionInstance>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool RunImageMainObjectDetectionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void RunImageMainObjectDetectionResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


