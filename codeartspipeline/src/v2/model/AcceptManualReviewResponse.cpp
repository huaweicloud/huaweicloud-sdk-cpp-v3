

#include "huaweicloud/codeartspipeline/v2/model/AcceptManualReviewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




AcceptManualReviewResponse::AcceptManualReviewResponse()
{
    success_ = false;
    successIsSet_ = false;
}

AcceptManualReviewResponse::~AcceptManualReviewResponse() = default;

void AcceptManualReviewResponse::validate()
{
}

web::json::value AcceptManualReviewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}
bool AcceptManualReviewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    return ok;
}


bool AcceptManualReviewResponse::isSuccess() const
{
    return success_;
}

void AcceptManualReviewResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool AcceptManualReviewResponse::successIsSet() const
{
    return successIsSet_;
}

void AcceptManualReviewResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


