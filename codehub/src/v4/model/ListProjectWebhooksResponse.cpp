

#include "huaweicloud/codehub/v4/model/ListProjectWebhooksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListProjectWebhooksResponse::ListProjectWebhooksResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListProjectWebhooksResponse::~ListProjectWebhooksResponse() = default;

void ListProjectWebhooksResponse::validate()
{
}

web::json::value ListProjectWebhooksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ListProjectWebhooksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<WebhookDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
        }
    }
    return ok;
}


std::vector<WebhookDto>& ListProjectWebhooksResponse::getBody()
{
    return body_;
}

void ListProjectWebhooksResponse::setBody(const std::vector<WebhookDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProjectWebhooksResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProjectWebhooksResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListProjectWebhooksResponse::getXTotal() const
{
    return xTotal_;
}

void ListProjectWebhooksResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListProjectWebhooksResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListProjectWebhooksResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


