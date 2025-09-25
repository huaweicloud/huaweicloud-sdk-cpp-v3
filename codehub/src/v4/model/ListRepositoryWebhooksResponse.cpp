

#include "huaweicloud/codehub/v4/model/ListRepositoryWebhooksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryWebhooksResponse::ListRepositoryWebhooksResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListRepositoryWebhooksResponse::~ListRepositoryWebhooksResponse() = default;

void ListRepositoryWebhooksResponse::validate()
{
}

web::json::value ListRepositoryWebhooksResponse::toJson() const
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
bool ListRepositoryWebhooksResponse::fromJson(const web::json::value& val)
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


std::vector<WebhookDto>& ListRepositoryWebhooksResponse::getBody()
{
    return body_;
}

void ListRepositoryWebhooksResponse::setBody(const std::vector<WebhookDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRepositoryWebhooksResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRepositoryWebhooksResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListRepositoryWebhooksResponse::getXTotal() const
{
    return xTotal_;
}

void ListRepositoryWebhooksResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListRepositoryWebhooksResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListRepositoryWebhooksResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


