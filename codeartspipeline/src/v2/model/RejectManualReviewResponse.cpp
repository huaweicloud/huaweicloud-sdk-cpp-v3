

#include "huaweicloud/codeartspipeline/v2/model/RejectManualReviewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RejectManualReviewResponse::RejectManualReviewResponse()
{
    success_ = false;
    successIsSet_ = false;
}

RejectManualReviewResponse::~RejectManualReviewResponse() = default;

void RejectManualReviewResponse::validate()
{
}

web::json::value RejectManualReviewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}
bool RejectManualReviewResponse::fromJson(const web::json::value& val)
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


bool RejectManualReviewResponse::isSuccess() const
{
    return success_;
}

void RejectManualReviewResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool RejectManualReviewResponse::successIsSet() const
{
    return successIsSet_;
}

void RejectManualReviewResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


