

#include "huaweicloud/vod/v1/model/ShowAssetTempAuthorityRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowAssetTempAuthorityRequest::ShowAssetTempAuthorityRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    httpVerb_ = "";
    httpVerbIsSet_ = false;
    bucket_ = "";
    bucketIsSet_ = false;
    objectKey_ = "";
    objectKeyIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    contentMd5_ = "";
    contentMd5IsSet_ = false;
    uploadId_ = "";
    uploadIdIsSet_ = false;
    partNumber_ = 0;
    partNumberIsSet_ = false;
}

ShowAssetTempAuthorityRequest::~ShowAssetTempAuthorityRequest() = default;

void ShowAssetTempAuthorityRequest::validate()
{
}

web::json::value ShowAssetTempAuthorityRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(httpVerbIsSet_) {
        val[utility::conversions::to_string_t("http_verb")] = ModelBase::toJson(httpVerb_);
    }
    if(bucketIsSet_) {
        val[utility::conversions::to_string_t("bucket")] = ModelBase::toJson(bucket_);
    }
    if(objectKeyIsSet_) {
        val[utility::conversions::to_string_t("object_key")] = ModelBase::toJson(objectKey_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("content_type")] = ModelBase::toJson(contentType_);
    }
    if(contentMd5IsSet_) {
        val[utility::conversions::to_string_t("content_md5")] = ModelBase::toJson(contentMd5_);
    }
    if(uploadIdIsSet_) {
        val[utility::conversions::to_string_t("upload_id")] = ModelBase::toJson(uploadId_);
    }
    if(partNumberIsSet_) {
        val[utility::conversions::to_string_t("part_number")] = ModelBase::toJson(partNumber_);
    }

    return val;
}

bool ShowAssetTempAuthorityRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http_verb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_verb"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpVerb(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("object_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_md5"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_md5"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentMd5(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upload_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upload_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUploadId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("part_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("part_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartNumber(refVal);
        }
    }
    return ok;
}


std::string ShowAssetTempAuthorityRequest::getAuthorization() const
{
    return authorization_;
}

void ShowAssetTempAuthorityRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowAssetTempAuthorityRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowAssetTempAuthorityRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowAssetTempAuthorityRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowAssetTempAuthorityRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowAssetTempAuthorityRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowAssetTempAuthorityRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowAssetTempAuthorityRequest::getHttpVerb() const
{
    return httpVerb_;
}

void ShowAssetTempAuthorityRequest::setHttpVerb(const std::string& value)
{
    httpVerb_ = value;
    httpVerbIsSet_ = true;
}

bool ShowAssetTempAuthorityRequest::httpVerbIsSet() const
{
    return httpVerbIsSet_;
}

void ShowAssetTempAuthorityRequest::unsethttpVerb()
{
    httpVerbIsSet_ = false;
}

std::string ShowAssetTempAuthorityRequest::getBucket() const
{
    return bucket_;
}

void ShowAssetTempAuthorityRequest::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool ShowAssetTempAuthorityRequest::bucketIsSet() const
{
    return bucketIsSet_;
}

void ShowAssetTempAuthorityRequest::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string ShowAssetTempAuthorityRequest::getObjectKey() const
{
    return objectKey_;
}

void ShowAssetTempAuthorityRequest::setObjectKey(const std::string& value)
{
    objectKey_ = value;
    objectKeyIsSet_ = true;
}

bool ShowAssetTempAuthorityRequest::objectKeyIsSet() const
{
    return objectKeyIsSet_;
}

void ShowAssetTempAuthorityRequest::unsetobjectKey()
{
    objectKeyIsSet_ = false;
}

std::string ShowAssetTempAuthorityRequest::getContentType() const
{
    return contentType_;
}

void ShowAssetTempAuthorityRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowAssetTempAuthorityRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowAssetTempAuthorityRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string ShowAssetTempAuthorityRequest::getContentMd5() const
{
    return contentMd5_;
}

void ShowAssetTempAuthorityRequest::setContentMd5(const std::string& value)
{
    contentMd5_ = value;
    contentMd5IsSet_ = true;
}

bool ShowAssetTempAuthorityRequest::contentMd5IsSet() const
{
    return contentMd5IsSet_;
}

void ShowAssetTempAuthorityRequest::unsetcontentMd5()
{
    contentMd5IsSet_ = false;
}

std::string ShowAssetTempAuthorityRequest::getUploadId() const
{
    return uploadId_;
}

void ShowAssetTempAuthorityRequest::setUploadId(const std::string& value)
{
    uploadId_ = value;
    uploadIdIsSet_ = true;
}

bool ShowAssetTempAuthorityRequest::uploadIdIsSet() const
{
    return uploadIdIsSet_;
}

void ShowAssetTempAuthorityRequest::unsetuploadId()
{
    uploadIdIsSet_ = false;
}

int32_t ShowAssetTempAuthorityRequest::getPartNumber() const
{
    return partNumber_;
}

void ShowAssetTempAuthorityRequest::setPartNumber(int32_t value)
{
    partNumber_ = value;
    partNumberIsSet_ = true;
}

bool ShowAssetTempAuthorityRequest::partNumberIsSet() const
{
    return partNumberIsSet_;
}

void ShowAssetTempAuthorityRequest::unsetpartNumber()
{
    partNumberIsSet_ = false;
}

}
}
}
}
}


