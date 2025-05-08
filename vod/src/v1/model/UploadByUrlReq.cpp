

#include "huaweicloud/vod/v1/model/UploadByUrlReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UploadByUrlReq::UploadByUrlReq()
{
    bucket_ = "";
    bucketIsSet_ = false;
    object_ = "";
    objectIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    callbackUrl_ = "";
    callbackUrlIsSet_ = false;
    sessionContext_ = "";
    sessionContextIsSet_ = false;
}

UploadByUrlReq::~UploadByUrlReq() = default;

void UploadByUrlReq::validate()
{
}

web::json::value UploadByUrlReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketIsSet_) {
        val[utility::conversions::to_string_t("bucket")] = ModelBase::toJson(bucket_);
    }
    if(objectIsSet_) {
        val[utility::conversions::to_string_t("object")] = ModelBase::toJson(object_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(callbackUrlIsSet_) {
        val[utility::conversions::to_string_t("callback_url")] = ModelBase::toJson(callbackUrl_);
    }
    if(sessionContextIsSet_) {
        val[utility::conversions::to_string_t("session_context")] = ModelBase::toJson(sessionContext_);
    }

    return val;
}
bool UploadByUrlReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
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


std::string UploadByUrlReq::getBucket() const
{
    return bucket_;
}

void UploadByUrlReq::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool UploadByUrlReq::bucketIsSet() const
{
    return bucketIsSet_;
}

void UploadByUrlReq::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string UploadByUrlReq::getObject() const
{
    return object_;
}

void UploadByUrlReq::setObject(const std::string& value)
{
    object_ = value;
    objectIsSet_ = true;
}

bool UploadByUrlReq::objectIsSet() const
{
    return objectIsSet_;
}

void UploadByUrlReq::unsetobject()
{
    objectIsSet_ = false;
}

std::string UploadByUrlReq::getUrl() const
{
    return url_;
}

void UploadByUrlReq::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool UploadByUrlReq::urlIsSet() const
{
    return urlIsSet_;
}

void UploadByUrlReq::unseturl()
{
    urlIsSet_ = false;
}

std::string UploadByUrlReq::getFileType() const
{
    return fileType_;
}

void UploadByUrlReq::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool UploadByUrlReq::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void UploadByUrlReq::unsetfileType()
{
    fileTypeIsSet_ = false;
}

std::string UploadByUrlReq::getTitle() const
{
    return title_;
}

void UploadByUrlReq::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool UploadByUrlReq::titleIsSet() const
{
    return titleIsSet_;
}

void UploadByUrlReq::unsettitle()
{
    titleIsSet_ = false;
}

std::string UploadByUrlReq::getCallbackUrl() const
{
    return callbackUrl_;
}

void UploadByUrlReq::setCallbackUrl(const std::string& value)
{
    callbackUrl_ = value;
    callbackUrlIsSet_ = true;
}

bool UploadByUrlReq::callbackUrlIsSet() const
{
    return callbackUrlIsSet_;
}

void UploadByUrlReq::unsetcallbackUrl()
{
    callbackUrlIsSet_ = false;
}

std::string UploadByUrlReq::getSessionContext() const
{
    return sessionContext_;
}

void UploadByUrlReq::setSessionContext(const std::string& value)
{
    sessionContext_ = value;
    sessionContextIsSet_ = true;
}

bool UploadByUrlReq::sessionContextIsSet() const
{
    return sessionContextIsSet_;
}

void UploadByUrlReq::unsetsessionContext()
{
    sessionContextIsSet_ = false;
}

}
}
}
}
}


