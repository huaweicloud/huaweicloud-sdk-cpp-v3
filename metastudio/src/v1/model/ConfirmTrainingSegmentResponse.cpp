

#include "huaweicloud/metastudio/v1/model/ConfirmTrainingSegmentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ConfirmTrainingSegmentResponse::ConfirmTrainingSegmentResponse()
{
    confirmResult_ = false;
    confirmResultIsSet_ = false;
    unmatchedIndexHitIsSet_ = false;
}

ConfirmTrainingSegmentResponse::~ConfirmTrainingSegmentResponse() = default;

void ConfirmTrainingSegmentResponse::validate()
{
}

web::json::value ConfirmTrainingSegmentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confirmResultIsSet_) {
        val[utility::conversions::to_string_t("confirm_result")] = ModelBase::toJson(confirmResult_);
    }
    if(unmatchedIndexHitIsSet_) {
        val[utility::conversions::to_string_t("unmatched_index_hit")] = ModelBase::toJson(unmatchedIndexHit_);
    }

    return val;
}
bool ConfirmTrainingSegmentResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("confirm_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confirm_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfirmResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unmatched_index_hit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unmatched_index_hit"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnmatchedIndexHit(refVal);
        }
    }
    return ok;
}


bool ConfirmTrainingSegmentResponse::isConfirmResult() const
{
    return confirmResult_;
}

void ConfirmTrainingSegmentResponse::setConfirmResult(bool value)
{
    confirmResult_ = value;
    confirmResultIsSet_ = true;
}

bool ConfirmTrainingSegmentResponse::confirmResultIsSet() const
{
    return confirmResultIsSet_;
}

void ConfirmTrainingSegmentResponse::unsetconfirmResult()
{
    confirmResultIsSet_ = false;
}

std::vector<int32_t>& ConfirmTrainingSegmentResponse::getUnmatchedIndexHit()
{
    return unmatchedIndexHit_;
}

void ConfirmTrainingSegmentResponse::setUnmatchedIndexHit(std::vector<int32_t> value)
{
    unmatchedIndexHit_ = value;
    unmatchedIndexHitIsSet_ = true;
}

bool ConfirmTrainingSegmentResponse::unmatchedIndexHitIsSet() const
{
    return unmatchedIndexHitIsSet_;
}

void ConfirmTrainingSegmentResponse::unsetunmatchedIndexHit()
{
    unmatchedIndexHitIsSet_ = false;
}

}
}
}
}
}


