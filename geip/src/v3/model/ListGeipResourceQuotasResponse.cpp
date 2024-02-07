

#include "huaweicloud/geip/v3/model/ListGeipResourceQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGeipResourceQuotasResponse::ListGeipResourceQuotasResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    quotasIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListGeipResourceQuotasResponse::~ListGeipResourceQuotasResponse() = default;

void ListGeipResourceQuotasResponse::validate()
{
}

web::json::value ListGeipResourceQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListGeipResourceQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            ListQuotas refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
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


std::string ListGeipResourceQuotasResponse::getRequestId() const
{
    return requestId_;
}

void ListGeipResourceQuotasResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListGeipResourceQuotasResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListGeipResourceQuotasResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

ListQuotas ListGeipResourceQuotasResponse::getQuotas() const
{
    return quotas_;
}

void ListGeipResourceQuotasResponse::setQuotas(const ListQuotas& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ListGeipResourceQuotasResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ListGeipResourceQuotasResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

std::string ListGeipResourceQuotasResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListGeipResourceQuotasResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListGeipResourceQuotasResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListGeipResourceQuotasResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


