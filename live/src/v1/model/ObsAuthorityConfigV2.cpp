

#include "huaweicloud/live/v1/model/ObsAuthorityConfigV2.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ObsAuthorityConfigV2::ObsAuthorityConfigV2()
{
    bucket_ = "";
    bucketIsSet_ = false;
    operation_ = 0;
    operationIsSet_ = false;
}

ObsAuthorityConfigV2::~ObsAuthorityConfigV2() = default;

void ObsAuthorityConfigV2::validate()
{
}

web::json::value ObsAuthorityConfigV2::toJson() const
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

bool ObsAuthorityConfigV2::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperation(refVal);
        }
    }
    return ok;
}


std::string ObsAuthorityConfigV2::getBucket() const
{
    return bucket_;
}

void ObsAuthorityConfigV2::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool ObsAuthorityConfigV2::bucketIsSet() const
{
    return bucketIsSet_;
}

void ObsAuthorityConfigV2::unsetbucket()
{
    bucketIsSet_ = false;
}

int32_t ObsAuthorityConfigV2::getOperation() const
{
    return operation_;
}

void ObsAuthorityConfigV2::setOperation(int32_t value)
{
    operation_ = value;
    operationIsSet_ = true;
}

bool ObsAuthorityConfigV2::operationIsSet() const
{
    return operationIsSet_;
}

void ObsAuthorityConfigV2::unsetoperation()
{
    operationIsSet_ = false;
}

}
}
}
}
}


