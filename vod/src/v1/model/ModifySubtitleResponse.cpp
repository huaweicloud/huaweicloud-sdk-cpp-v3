

#include "huaweicloud/vod/v1/model/ModifySubtitleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ModifySubtitleResponse::ModifySubtitleResponse()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    thumbnailTaskId_ = "";
    thumbnailTaskIdIsSet_ = false;
}

ModifySubtitleResponse::~ModifySubtitleResponse() = default;

void ModifySubtitleResponse::validate()
{
}

web::json::value ModifySubtitleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(thumbnailTaskIdIsSet_) {
        val[utility::conversions::to_string_t("thumbnail_task_id")] = ModelBase::toJson(thumbnailTaskId_);
    }

    return val;
}
bool ModifySubtitleResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("thumbnail_task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail_task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailTaskId(refVal);
        }
    }
    return ok;
}


std::string ModifySubtitleResponse::getAssetId() const
{
    return assetId_;
}

void ModifySubtitleResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ModifySubtitleResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ModifySubtitleResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ModifySubtitleResponse::getThumbnailTaskId() const
{
    return thumbnailTaskId_;
}

void ModifySubtitleResponse::setThumbnailTaskId(const std::string& value)
{
    thumbnailTaskId_ = value;
    thumbnailTaskIdIsSet_ = true;
}

bool ModifySubtitleResponse::thumbnailTaskIdIsSet() const
{
    return thumbnailTaskIdIsSet_;
}

void ModifySubtitleResponse::unsetthumbnailTaskId()
{
    thumbnailTaskIdIsSet_ = false;
}

}
}
}
}
}


