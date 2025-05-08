

#include "huaweicloud/vod/v1/model/DeleteDyAssetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




DeleteDyAssetRequest::DeleteDyAssetRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bucket_ = "";
    bucketIsSet_ = false;
    objectIsSet_ = false;
    callbackUrl_ = "";
    callbackUrlIsSet_ = false;
    sessionContext_ = "";
    sessionContextIsSet_ = false;
}

DeleteDyAssetRequest::~DeleteDyAssetRequest() = default;

void DeleteDyAssetRequest::validate()
{
}

web::json::value DeleteDyAssetRequest::toJson() const
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
    if(callbackUrlIsSet_) {
        val[utility::conversions::to_string_t("callback_url")] = ModelBase::toJson(callbackUrl_);
    }
    if(sessionContextIsSet_) {
        val[utility::conversions::to_string_t("session_context")] = ModelBase::toJson(sessionContext_);
    }

    return val;
}
bool DeleteDyAssetRequest::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callback_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_context"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_context"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionContext(refVal);
        }
    }
    return ok;
}


std::string DeleteDyAssetRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteDyAssetRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteDyAssetRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteDyAssetRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteDyAssetRequest::getBucket() const
{
    return bucket_;
}

void DeleteDyAssetRequest::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool DeleteDyAssetRequest::bucketIsSet() const
{
    return bucketIsSet_;
}

void DeleteDyAssetRequest::unsetbucket()
{
    bucketIsSet_ = false;
}

std::vector<std::string>& DeleteDyAssetRequest::getObject()
{
    return object_;
}

void DeleteDyAssetRequest::setObject(const std::vector<std::string>& value)
{
    object_ = value;
    objectIsSet_ = true;
}

bool DeleteDyAssetRequest::objectIsSet() const
{
    return objectIsSet_;
}

void DeleteDyAssetRequest::unsetobject()
{
    objectIsSet_ = false;
}

std::string DeleteDyAssetRequest::getCallbackUrl() const
{
    return callbackUrl_;
}

void DeleteDyAssetRequest::setCallbackUrl(const std::string& value)
{
    callbackUrl_ = value;
    callbackUrlIsSet_ = true;
}

bool DeleteDyAssetRequest::callbackUrlIsSet() const
{
    return callbackUrlIsSet_;
}

void DeleteDyAssetRequest::unsetcallbackUrl()
{
    callbackUrlIsSet_ = false;
}

std::string DeleteDyAssetRequest::getSessionContext() const
{
    return sessionContext_;
}

void DeleteDyAssetRequest::setSessionContext(const std::string& value)
{
    sessionContext_ = value;
    sessionContextIsSet_ = true;
}

bool DeleteDyAssetRequest::sessionContextIsSet() const
{
    return sessionContextIsSet_;
}

void DeleteDyAssetRequest::unsetsessionContext()
{
    sessionContextIsSet_ = false;
}

}
}
}
}
}


