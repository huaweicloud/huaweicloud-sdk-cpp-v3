

#include "huaweicloud/modelarts/v1/model/CreateAssetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateAssetResponse::CreateAssetResponse()
{
    assetId_ = "";
    assetIdIsSet_ = false;
}

CreateAssetResponse::~CreateAssetResponse() = default;

void CreateAssetResponse::validate()
{
}

web::json::value CreateAssetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }

    return val;
}
bool CreateAssetResponse::fromJson(const web::json::value& val)
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


std::string CreateAssetResponse::getAssetId() const
{
    return assetId_;
}

void CreateAssetResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool CreateAssetResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void CreateAssetResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

}
}
}
}
}


