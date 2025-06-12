

#include "huaweicloud/metastudio/v1/model/ListAssetsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListAssetsResponse::ListAssetsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    assetsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListAssetsResponse::~ListAssetsResponse() = default;

void ListAssetsResponse::validate()
{
}

web::json::value ListAssetsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(assetsIsSet_) {
        val[utility::conversions::to_string_t("assets")] = ModelBase::toJson(assets_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListAssetsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assets"));
        if(!fieldValue.is_null())
        {
            std::vector<DigitalAssetInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssets(refVal);
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


int32_t ListAssetsResponse::getCount() const
{
    return count_;
}

void ListAssetsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListAssetsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListAssetsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<DigitalAssetInfo>& ListAssetsResponse::getAssets()
{
    return assets_;
}

void ListAssetsResponse::setAssets(const std::vector<DigitalAssetInfo>& value)
{
    assets_ = value;
    assetsIsSet_ = true;
}

bool ListAssetsResponse::assetsIsSet() const
{
    return assetsIsSet_;
}

void ListAssetsResponse::unsetassets()
{
    assetsIsSet_ = false;
}

std::string ListAssetsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListAssetsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListAssetsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListAssetsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


