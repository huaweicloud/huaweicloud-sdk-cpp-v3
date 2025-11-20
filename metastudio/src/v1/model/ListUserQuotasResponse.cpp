

#include "huaweicloud/metastudio/v1/model/ListUserQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListUserQuotasResponse::ListUserQuotasResponse()
{
    count_ = 0;
    countIsSet_ = false;
    assetsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListUserQuotasResponse::~ListUserQuotasResponse() = default;

void ListUserQuotasResponse::validate()
{
}

web::json::value ListUserQuotasResponse::toJson() const
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
bool ListUserQuotasResponse::fromJson(const web::json::value& val)
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
            std::vector<UserQuotaInfo> refVal;
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


int32_t ListUserQuotasResponse::getCount() const
{
    return count_;
}

void ListUserQuotasResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListUserQuotasResponse::countIsSet() const
{
    return countIsSet_;
}

void ListUserQuotasResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<UserQuotaInfo>& ListUserQuotasResponse::getAssets()
{
    return assets_;
}

void ListUserQuotasResponse::setAssets(const std::vector<UserQuotaInfo>& value)
{
    assets_ = value;
    assetsIsSet_ = true;
}

bool ListUserQuotasResponse::assetsIsSet() const
{
    return assetsIsSet_;
}

void ListUserQuotasResponse::unsetassets()
{
    assetsIsSet_ = false;
}

std::string ListUserQuotasResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListUserQuotasResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListUserQuotasResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListUserQuotasResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


