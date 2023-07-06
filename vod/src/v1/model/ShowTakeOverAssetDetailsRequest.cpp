

#include "huaweicloud/vod/v1/model/ShowTakeOverAssetDetailsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowTakeOverAssetDetailsRequest::ShowTakeOverAssetDetailsRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    sourceBucket_ = "";
    sourceBucketIsSet_ = false;
    sourceObject_ = "";
    sourceObjectIsSet_ = false;
}

ShowTakeOverAssetDetailsRequest::~ShowTakeOverAssetDetailsRequest() = default;

void ShowTakeOverAssetDetailsRequest::validate()
{
}

web::json::value ShowTakeOverAssetDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(sourceBucketIsSet_) {
        val[utility::conversions::to_string_t("source_bucket")] = ModelBase::toJson(sourceBucket_);
    }
    if(sourceObjectIsSet_) {
        val[utility::conversions::to_string_t("source_object")] = ModelBase::toJson(sourceObject_);
    }

    return val;
}

bool ShowTakeOverAssetDetailsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceBucket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_object"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceObject(refVal);
        }
    }
    return ok;
}

std::string ShowTakeOverAssetDetailsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowTakeOverAssetDetailsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowTakeOverAssetDetailsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowTakeOverAssetDetailsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowTakeOverAssetDetailsRequest::getSourceBucket() const
{
    return sourceBucket_;
}

void ShowTakeOverAssetDetailsRequest::setSourceBucket(const std::string& value)
{
    sourceBucket_ = value;
    sourceBucketIsSet_ = true;
}

bool ShowTakeOverAssetDetailsRequest::sourceBucketIsSet() const
{
    return sourceBucketIsSet_;
}

void ShowTakeOverAssetDetailsRequest::unsetsourceBucket()
{
    sourceBucketIsSet_ = false;
}

std::string ShowTakeOverAssetDetailsRequest::getSourceObject() const
{
    return sourceObject_;
}

void ShowTakeOverAssetDetailsRequest::setSourceObject(const std::string& value)
{
    sourceObject_ = value;
    sourceObjectIsSet_ = true;
}

bool ShowTakeOverAssetDetailsRequest::sourceObjectIsSet() const
{
    return sourceObjectIsSet_;
}

void ShowTakeOverAssetDetailsRequest::unsetsourceObject()
{
    sourceObjectIsSet_ = false;
}

}
}
}
}
}


