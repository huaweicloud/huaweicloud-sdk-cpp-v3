

#include "huaweicloud/mpc/v1/model/BucketAuthorizedReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




BucketAuthorizedReq::BucketAuthorizedReq()
{
    bucket_ = "";
    bucketIsSet_ = false;
    operation_ = "";
    operationIsSet_ = false;
}

BucketAuthorizedReq::~BucketAuthorizedReq() = default;

void BucketAuthorizedReq::validate()
{
}

web::json::value BucketAuthorizedReq::toJson() const
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

bool BucketAuthorizedReq::fromJson(const web::json::value& val)
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

std::string BucketAuthorizedReq::getBucket() const
{
    return bucket_;
}

void BucketAuthorizedReq::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool BucketAuthorizedReq::bucketIsSet() const
{
    return bucketIsSet_;
}

void BucketAuthorizedReq::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string BucketAuthorizedReq::getOperation() const
{
    return operation_;
}

void BucketAuthorizedReq::setOperation(const std::string& value)
{
    operation_ = value;
    operationIsSet_ = true;
}

bool BucketAuthorizedReq::operationIsSet() const
{
    return operationIsSet_;
}

void BucketAuthorizedReq::unsetoperation()
{
    operationIsSet_ = false;
}

}
}
}
}
}


