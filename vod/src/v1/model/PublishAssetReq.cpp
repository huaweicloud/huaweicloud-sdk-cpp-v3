

#include "huaweicloud/vod/v1/model/PublishAssetReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




PublishAssetReq::PublishAssetReq()
{
    assetIdIsSet_ = false;
}

PublishAssetReq::~PublishAssetReq() = default;

void PublishAssetReq::validate()
{
}

web::json::value PublishAssetReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }

    return val;
}

bool PublishAssetReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& PublishAssetReq::getAssetId()
{
    return assetId_;
}

void PublishAssetReq::setAssetId(const std::vector<std::string>& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool PublishAssetReq::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void PublishAssetReq::unsetassetId()
{
    assetIdIsSet_ = false;
}

}
}
}
}
}


