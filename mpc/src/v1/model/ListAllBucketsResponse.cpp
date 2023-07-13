

#include "huaweicloud/mpc/v1/model/ListAllBucketsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListAllBucketsResponse::ListAllBucketsResponse()
{
    bucketsIsSet_ = false;
}

ListAllBucketsResponse::~ListAllBucketsResponse() = default;

void ListAllBucketsResponse::validate()
{
}

web::json::value ListAllBucketsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketsIsSet_) {
        val[utility::conversions::to_string_t("buckets")] = ModelBase::toJson(buckets_);
    }

    return val;
}

bool ListAllBucketsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("buckets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("buckets"));
        if(!fieldValue.is_null())
        {
            std::vector<ObsBucket> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuckets(refVal);
        }
    }
    return ok;
}

std::vector<ObsBucket>& ListAllBucketsResponse::getBuckets()
{
    return buckets_;
}

void ListAllBucketsResponse::setBuckets(const std::vector<ObsBucket>& value)
{
    buckets_ = value;
    bucketsIsSet_ = true;
}

bool ListAllBucketsResponse::bucketsIsSet() const
{
    return bucketsIsSet_;
}

void ListAllBucketsResponse::unsetbuckets()
{
    bucketsIsSet_ = false;
}

}
}
}
}
}


