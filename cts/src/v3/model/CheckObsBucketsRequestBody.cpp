

#include "huaweicloud/cts/v3/model/CheckObsBucketsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




CheckObsBucketsRequestBody::CheckObsBucketsRequestBody()
{
    bucketsIsSet_ = false;
}

CheckObsBucketsRequestBody::~CheckObsBucketsRequestBody() = default;

void CheckObsBucketsRequestBody::validate()
{
}

web::json::value CheckObsBucketsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketsIsSet_) {
        val[utility::conversions::to_string_t("buckets")] = ModelBase::toJson(buckets_);
    }

    return val;
}
bool CheckObsBucketsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("buckets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("buckets"));
        if(!fieldValue.is_null())
        {
            std::vector<CheckBucketRequest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuckets(refVal);
        }
    }
    return ok;
}


std::vector<CheckBucketRequest>& CheckObsBucketsRequestBody::getBuckets()
{
    return buckets_;
}

void CheckObsBucketsRequestBody::setBuckets(const std::vector<CheckBucketRequest>& value)
{
    buckets_ = value;
    bucketsIsSet_ = true;
}

bool CheckObsBucketsRequestBody::bucketsIsSet() const
{
    return bucketsIsSet_;
}

void CheckObsBucketsRequestBody::unsetbuckets()
{
    bucketsIsSet_ = false;
}

}
}
}
}
}


