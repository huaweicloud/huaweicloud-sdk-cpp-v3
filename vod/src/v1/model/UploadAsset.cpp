

#include "huaweicloud/vod/v1/model/UploadAsset.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UploadAsset::UploadAsset()
{
    url_ = "";
    urlIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

UploadAsset::~UploadAsset() = default;

void UploadAsset::validate()
{
}

web::json::value UploadAsset::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool UploadAsset::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}


std::string UploadAsset::getUrl() const
{
    return url_;
}

void UploadAsset::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool UploadAsset::urlIsSet() const
{
    return urlIsSet_;
}

void UploadAsset::unseturl()
{
    urlIsSet_ = false;
}

std::string UploadAsset::getAssetId() const
{
    return assetId_;
}

void UploadAsset::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool UploadAsset::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void UploadAsset::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string UploadAsset::getErrorCode() const
{
    return errorCode_;
}

void UploadAsset::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool UploadAsset::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void UploadAsset::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string UploadAsset::getErrorMsg() const
{
    return errorMsg_;
}

void UploadAsset::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool UploadAsset::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void UploadAsset::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


