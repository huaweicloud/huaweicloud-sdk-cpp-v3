

#include "huaweicloud/metastudio/v1/model/BindAssetResourceReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




BindAssetResourceReq::BindAssetResourceReq()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    businessType_ = "";
    businessTypeIsSet_ = false;
}

BindAssetResourceReq::~BindAssetResourceReq() = default;

void BindAssetResourceReq::validate()
{
}

web::json::value BindAssetResourceReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }

    return val;
}
bool BindAssetResourceReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
        }
    }
    return ok;
}


std::string BindAssetResourceReq::getAssetId() const
{
    return assetId_;
}

void BindAssetResourceReq::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool BindAssetResourceReq::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void BindAssetResourceReq::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string BindAssetResourceReq::getBusinessType() const
{
    return businessType_;
}

void BindAssetResourceReq::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool BindAssetResourceReq::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void BindAssetResourceReq::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

}
}
}
}
}


