

#include "huaweicloud/metastudio/v1/model/ListAssetSummaryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListAssetSummaryResponse::ListAssetSummaryResponse()
{
    assetListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListAssetSummaryResponse::~ListAssetSummaryResponse() = default;

void ListAssetSummaryResponse::validate()
{
}

web::json::value ListAssetSummaryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetListIsSet_) {
        val[utility::conversions::to_string_t("asset_list")] = ModelBase::toJson(assetList_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListAssetSummaryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_list"));
        if(!fieldValue.is_null())
        {
            std::vector<DigitalAssetSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<DigitalAssetSummary>& ListAssetSummaryResponse::getAssetList()
{
    return assetList_;
}

void ListAssetSummaryResponse::setAssetList(const std::vector<DigitalAssetSummary>& value)
{
    assetList_ = value;
    assetListIsSet_ = true;
}

bool ListAssetSummaryResponse::assetListIsSet() const
{
    return assetListIsSet_;
}

void ListAssetSummaryResponse::unsetassetList()
{
    assetListIsSet_ = false;
}

std::string ListAssetSummaryResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListAssetSummaryResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListAssetSummaryResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListAssetSummaryResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


