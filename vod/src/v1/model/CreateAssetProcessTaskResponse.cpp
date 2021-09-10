

#include "huaweicloud/vod/v1/model/CreateAssetProcessTaskResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateAssetProcessTaskResponse::CreateAssetProcessTaskResponse()
{
    assetId_ = "";
    assetIdIsSet_ = false;
}

CreateAssetProcessTaskResponse::~CreateAssetProcessTaskResponse() = default;

void CreateAssetProcessTaskResponse::validate()
{
}

web::json::value CreateAssetProcessTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }

    return val;
}

bool CreateAssetProcessTaskResponse::fromJson(const web::json::value& val)
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


std::string CreateAssetProcessTaskResponse::getAssetId() const
{
    return assetId_;
}

void CreateAssetProcessTaskResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool CreateAssetProcessTaskResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void CreateAssetProcessTaskResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

}
}
}
}
}


