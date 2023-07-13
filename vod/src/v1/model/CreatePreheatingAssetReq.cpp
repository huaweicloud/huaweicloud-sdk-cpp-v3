

#include "huaweicloud/vod/v1/model/CreatePreheatingAssetReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreatePreheatingAssetReq::CreatePreheatingAssetReq()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    urlsIsSet_ = false;
}

CreatePreheatingAssetReq::~CreatePreheatingAssetReq() = default;

void CreatePreheatingAssetReq::validate()
{
}

web::json::value CreatePreheatingAssetReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(urlsIsSet_) {
        val[utility::conversions::to_string_t("urls")] = ModelBase::toJson(urls_);
    }

    return val;
}

bool CreatePreheatingAssetReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urls"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrls(refVal);
        }
    }
    return ok;
}

std::string CreatePreheatingAssetReq::getAssetId() const
{
    return assetId_;
}

void CreatePreheatingAssetReq::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool CreatePreheatingAssetReq::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void CreatePreheatingAssetReq::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::vector<std::string>& CreatePreheatingAssetReq::getUrls()
{
    return urls_;
}

void CreatePreheatingAssetReq::setUrls(const std::vector<std::string>& value)
{
    urls_ = value;
    urlsIsSet_ = true;
}

bool CreatePreheatingAssetReq::urlsIsSet() const
{
    return urlsIsSet_;
}

void CreatePreheatingAssetReq::unseturls()
{
    urlsIsSet_ = false;
}

}
}
}
}
}


