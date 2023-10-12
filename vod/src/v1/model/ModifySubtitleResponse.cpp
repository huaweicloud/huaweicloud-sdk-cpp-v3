

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

}
}
}
}
}


