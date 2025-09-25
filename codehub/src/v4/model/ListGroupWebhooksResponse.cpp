

#include "huaweicloud/codehub/v4/model/ListGroupWebhooksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListGroupWebhooksResponse::ListGroupWebhooksResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListGroupWebhooksResponse::~ListGroupWebhooksResponse() = default;

void ListGroupWebhooksResponse::validate()
{
}

web::json::value ListGroupWebhooksResponse::toJson() const
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
bool ListGroupWebhooksResponse::fromJson(const web::json::value& val)
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


std::vector<WebhookDto>& ListGroupWebhooksResponse::getBody()
{
    return body_;
}

void ListGroupWebhooksResponse::setBody(const std::vector<WebhookDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGroupWebhooksResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGroupWebhooksResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListGroupWebhooksResponse::getXTotal() const
{
    return xTotal_;
}

void ListGroupWebhooksResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListGroupWebhooksResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListGroupWebhooksResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


