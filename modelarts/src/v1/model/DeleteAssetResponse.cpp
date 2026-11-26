

#include "huaweicloud/modelarts/v1/model/DeleteAssetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteAssetResponse::DeleteAssetResponse()
{
    assetId_ = "";
    assetIdIsSet_ = false;
}

DeleteAssetResponse::~DeleteAssetResponse() = default;

void DeleteAssetResponse::validate()
{
}

web::json::value DeleteAssetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }

    return val;
}
bool DeleteAssetResponse::fromJson(const web::json::value& val)
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


std::string DeleteAssetResponse::getAssetId() const
{
    return assetId_;
}

void DeleteAssetResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool DeleteAssetResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void DeleteAssetResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

}
}
}
}
}


