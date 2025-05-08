

#include "huaweicloud/vod/v1/model/ShowObjectMetaDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowObjectMetaDataRequest::ShowObjectMetaDataRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bucket_ = "";
    bucketIsSet_ = false;
    object_ = "";
    objectIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowObjectMetaDataRequest::~ShowObjectMetaDataRequest() = default;

void ShowObjectMetaDataRequest::validate()
{
}

web::json::value ShowObjectMetaDataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(bucketIsSet_) {
        val[utility::conversions::to_string_t("bucket")] = ModelBase::toJson(bucket_);
    }
    if(objectIsSet_) {
        val[utility::conversions::to_string_t("object")] = ModelBase::toJson(object_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowObjectMetaDataRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ShowObjectMetaDataRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowObjectMetaDataRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowObjectMetaDataRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowObjectMetaDataRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowObjectMetaDataRequest::getBucket() const
{
    return bucket_;
}

void ShowObjectMetaDataRequest::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool ShowObjectMetaDataRequest::bucketIsSet() const
{
    return bucketIsSet_;
}

void ShowObjectMetaDataRequest::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string ShowObjectMetaDataRequest::getObject() const
{
    return object_;
}

void ShowObjectMetaDataRequest::setObject(const std::string& value)
{
    object_ = value;
    objectIsSet_ = true;
}

bool ShowObjectMetaDataRequest::objectIsSet() const
{
    return objectIsSet_;
}

void ShowObjectMetaDataRequest::unsetobject()
{
    objectIsSet_ = false;
}

std::string ShowObjectMetaDataRequest::getMarker() const
{
    return marker_;
}

void ShowObjectMetaDataRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ShowObjectMetaDataRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ShowObjectMetaDataRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ShowObjectMetaDataRequest::getLimit() const
{
    return limit_;
}

void ShowObjectMetaDataRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowObjectMetaDataRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowObjectMetaDataRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


