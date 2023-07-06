

#include "huaweicloud/vod/v1/model/AssetProcessReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




AssetProcessReq::AssetProcessReq()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    templateGroupName_ = "";
    templateGroupNameIsSet_ = false;
    autoEncrypt_ = 0;
    autoEncryptIsSet_ = false;
    thumbnailIsSet_ = false;
    subtitleIdIsSet_ = false;
}

AssetProcessReq::~AssetProcessReq() = default;

void AssetProcessReq::validate()
{
}

web::json::value AssetProcessReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(templateGroupNameIsSet_) {
        val[utility::conversions::to_string_t("template_group_name")] = ModelBase::toJson(templateGroupName_);
    }
    if(autoEncryptIsSet_) {
        val[utility::conversions::to_string_t("auto_encrypt")] = ModelBase::toJson(autoEncrypt_);
    }
    if(thumbnailIsSet_) {
        val[utility::conversions::to_string_t("thumbnail")] = ModelBase::toJson(thumbnail_);
    }
    if(subtitleIdIsSet_) {
        val[utility::conversions::to_string_t("subtitle_id")] = ModelBase::toJson(subtitleId_);
    }

    return val;
}

bool AssetProcessReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_encrypt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_encrypt"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoEncrypt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thumbnail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail"));
        if(!fieldValue.is_null())
        {
            Thumbnail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtitle_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtitle_id"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtitleId(refVal);
        }
    }
    return ok;
}

std::string AssetProcessReq::getAssetId() const
{
    return assetId_;
}

void AssetProcessReq::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool AssetProcessReq::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void AssetProcessReq::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string AssetProcessReq::getTemplateGroupName() const
{
    return templateGroupName_;
}

void AssetProcessReq::setTemplateGroupName(const std::string& value)
{
    templateGroupName_ = value;
    templateGroupNameIsSet_ = true;
}

bool AssetProcessReq::templateGroupNameIsSet() const
{
    return templateGroupNameIsSet_;
}

void AssetProcessReq::unsettemplateGroupName()
{
    templateGroupNameIsSet_ = false;
}

int32_t AssetProcessReq::getAutoEncrypt() const
{
    return autoEncrypt_;
}

void AssetProcessReq::setAutoEncrypt(int32_t value)
{
    autoEncrypt_ = value;
    autoEncryptIsSet_ = true;
}

bool AssetProcessReq::autoEncryptIsSet() const
{
    return autoEncryptIsSet_;
}

void AssetProcessReq::unsetautoEncrypt()
{
    autoEncryptIsSet_ = false;
}

Thumbnail AssetProcessReq::getThumbnail() const
{
    return thumbnail_;
}

void AssetProcessReq::setThumbnail(const Thumbnail& value)
{
    thumbnail_ = value;
    thumbnailIsSet_ = true;
}

bool AssetProcessReq::thumbnailIsSet() const
{
    return thumbnailIsSet_;
}

void AssetProcessReq::unsetthumbnail()
{
    thumbnailIsSet_ = false;
}

std::vector<int32_t>& AssetProcessReq::getSubtitleId()
{
    return subtitleId_;
}

void AssetProcessReq::setSubtitleId(std::vector<int32_t> value)
{
    subtitleId_ = value;
    subtitleIdIsSet_ = true;
}

bool AssetProcessReq::subtitleIdIsSet() const
{
    return subtitleIdIsSet_;
}

void AssetProcessReq::unsetsubtitleId()
{
    subtitleIdIsSet_ = false;
}

}
}
}
}
}


