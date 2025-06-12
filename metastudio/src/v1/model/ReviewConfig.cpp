

#include "huaweicloud/metastudio/v1/model/ReviewConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ReviewConfig::ReviewConfig()
{
    noNeedReview_ = false;
    noNeedReviewIsSet_ = false;
}

ReviewConfig::~ReviewConfig() = default;

void ReviewConfig::validate()
{
}

web::json::value ReviewConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(noNeedReviewIsSet_) {
        val[utility::conversions::to_string_t("no_need_review")] = ModelBase::toJson(noNeedReview_);
    }

    return val;
}
bool ReviewConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("no_need_review"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("no_need_review"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoNeedReview(refVal);
        }
    }
    return ok;
}


bool ReviewConfig::isNoNeedReview() const
{
    return noNeedReview_;
}

void ReviewConfig::setNoNeedReview(bool value)
{
    noNeedReview_ = value;
    noNeedReviewIsSet_ = true;
}

bool ReviewConfig::noNeedReviewIsSet() const
{
    return noNeedReviewIsSet_;
}

void ReviewConfig::unsetnoNeedReview()
{
    noNeedReviewIsSet_ = false;
}

}
}
}
}
}


