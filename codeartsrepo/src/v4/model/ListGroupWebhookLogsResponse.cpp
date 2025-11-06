

#include "huaweicloud/codeartsrepo/v4/model/ListGroupWebhookLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListGroupWebhookLogsResponse::ListGroupWebhookLogsResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListGroupWebhookLogsResponse::~ListGroupWebhookLogsResponse() = default;

void ListGroupWebhookLogsResponse::validate()
{
}

web::json::value ListGroupWebhookLogsResponse::toJson() const
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
bool ListGroupWebhookLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<WebhookLogExtendDto> refVal;
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


std::vector<WebhookLogExtendDto>& ListGroupWebhookLogsResponse::getBody()
{
    return body_;
}

void ListGroupWebhookLogsResponse::setBody(const std::vector<WebhookLogExtendDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGroupWebhookLogsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGroupWebhookLogsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListGroupWebhookLogsResponse::getXTotal() const
{
    return xTotal_;
}

void ListGroupWebhookLogsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListGroupWebhookLogsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListGroupWebhookLogsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


