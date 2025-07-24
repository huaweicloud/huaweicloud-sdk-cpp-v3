

#include "huaweicloud/cloudtest/v1/model/CommRequestReviewPageParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommRequestReviewPageParam::CommRequestReviewPageParam()
{
    paramsIsSet_ = false;
}

CommRequestReviewPageParam::~CommRequestReviewPageParam() = default;

void CommRequestReviewPageParam::validate()
{
}

web::json::value CommRequestReviewPageParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CommRequestReviewPageParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            ReviewPageParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


ReviewPageParam CommRequestReviewPageParam::getParams() const
{
    return params_;
}

void CommRequestReviewPageParam::setParams(const ReviewPageParam& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CommRequestReviewPageParam::paramsIsSet() const
{
    return paramsIsSet_;
}

void CommRequestReviewPageParam::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


