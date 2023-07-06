

#include "huaweicloud/vod/v1/model/UpdateBucketAuthorizedReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateBucketAuthorizedReq::UpdateBucketAuthorizedReq()
{
    bucket_ = "";
    bucketIsSet_ = false;
    operation_ = "";
    operationIsSet_ = false;
}

UpdateBucketAuthorizedReq::~UpdateBucketAuthorizedReq() = default;

void UpdateBucketAuthorizedReq::validate()
{
}

web::json::value UpdateBucketAuthorizedReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketIsSet_) {
        val[utility::conversions::to_string_t("bucket")] = ModelBase::toJson(bucket_);
    }
    if(operationIsSet_) {
        val[utility::conversions::to_string_t("operation")] = ModelBase::toJson(operation_);
    }

    return val;
}

bool UpdateBucketAuthorizedReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperation(refVal);
        }
    }
    return ok;
}

std::string UpdateBucketAuthorizedReq::getBucket() const
{
    return bucket_;
}

void UpdateBucketAuthorizedReq::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool UpdateBucketAuthorizedReq::bucketIsSet() const
{
    return bucketIsSet_;
}

void UpdateBucketAuthorizedReq::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string UpdateBucketAuthorizedReq::getOperation() const
{
    return operation_;
}

void UpdateBucketAuthorizedReq::setOperation(const std::string& value)
{
    operation_ = value;
    operationIsSet_ = true;
}

bool UpdateBucketAuthorizedReq::operationIsSet() const
{
    return operationIsSet_;
}

void UpdateBucketAuthorizedReq::unsetoperation()
{
    operationIsSet_ = false;
}

}
}
}
}
}


