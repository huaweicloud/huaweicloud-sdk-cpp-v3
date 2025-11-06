

#include "huaweicloud/codeartsrepo/v4/model/ListProjectWebhookLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProjectWebhookLogsResponse::ListProjectWebhookLogsResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListProjectWebhookLogsResponse::~ListProjectWebhookLogsResponse() = default;

void ListProjectWebhookLogsResponse::validate()
{
}

web::json::value ListProjectWebhookLogsResponse::toJson() const
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
bool ListProjectWebhookLogsResponse::fromJson(const web::json::value& val)
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


std::vector<WebhookLogExtendDto>& ListProjectWebhookLogsResponse::getBody()
{
    return body_;
}

void ListProjectWebhookLogsResponse::setBody(const std::vector<WebhookLogExtendDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProjectWebhookLogsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProjectWebhookLogsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListProjectWebhookLogsResponse::getXTotal() const
{
    return xTotal_;
}

void ListProjectWebhookLogsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListProjectWebhookLogsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListProjectWebhookLogsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


