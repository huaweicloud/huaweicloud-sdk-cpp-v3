

#include "huaweicloud/cts/v3/model/CheckObsBucketsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




CheckObsBucketsResponse::CheckObsBucketsResponse()
{
    bucketsIsSet_ = false;
}

CheckObsBucketsResponse::~CheckObsBucketsResponse() = default;

void CheckObsBucketsResponse::validate()
{
}

web::json::value CheckObsBucketsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketsIsSet_) {
        val[utility::conversions::to_string_t("buckets")] = ModelBase::toJson(buckets_);
    }

    return val;
}
bool CheckObsBucketsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("buckets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("buckets"));
        if(!fieldValue.is_null())
        {
            std::vector<Bucket> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuckets(refVal);
        }
    }
    return ok;
}


std::vector<Bucket>& CheckObsBucketsResponse::getBuckets()
{
    return buckets_;
}

void CheckObsBucketsResponse::setBuckets(const std::vector<Bucket>& value)
{
    buckets_ = value;
    bucketsIsSet_ = true;
}

bool CheckObsBucketsResponse::bucketsIsSet() const
{
    return bucketsIsSet_;
}

void CheckObsBucketsResponse::unsetbuckets()
{
    bucketsIsSet_ = false;
}

}
}
}
}
}


