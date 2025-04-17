

#include "huaweicloud/vod/v1/model/RefreshTaskReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




RefreshTaskReq::RefreshTaskReq()
{
    assetIdListIsSet_ = false;
    urlsIsSet_ = false;
}

RefreshTaskReq::~RefreshTaskReq() = default;

void RefreshTaskReq::validate()
{
}

web::json::value RefreshTaskReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdListIsSet_) {
        val[utility::conversions::to_string_t("asset_id_list")] = ModelBase::toJson(assetIdList_);
    }
    if(urlsIsSet_) {
        val[utility::conversions::to_string_t("urls")] = ModelBase::toJson(urls_);
    }

    return val;
}
bool RefreshTaskReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetIdList(refVal);
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


std::vector<std::string>& RefreshTaskReq::getAssetIdList()
{
    return assetIdList_;
}

void RefreshTaskReq::setAssetIdList(const std::vector<std::string>& value)
{
    assetIdList_ = value;
    assetIdListIsSet_ = true;
}

bool RefreshTaskReq::assetIdListIsSet() const
{
    return assetIdListIsSet_;
}

void RefreshTaskReq::unsetassetIdList()
{
    assetIdListIsSet_ = false;
}

std::vector<std::string>& RefreshTaskReq::getUrls()
{
    return urls_;
}

void RefreshTaskReq::setUrls(const std::vector<std::string>& value)
{
    urls_ = value;
    urlsIsSet_ = true;
}

bool RefreshTaskReq::urlsIsSet() const
{
    return urlsIsSet_;
}

void RefreshTaskReq::unseturls()
{
    urlsIsSet_ = false;
}

}
}
}
}
}


