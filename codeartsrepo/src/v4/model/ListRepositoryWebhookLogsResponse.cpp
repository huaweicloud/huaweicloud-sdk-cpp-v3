

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryWebhookLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryWebhookLogsResponse::ListRepositoryWebhookLogsResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListRepositoryWebhookLogsResponse::~ListRepositoryWebhookLogsResponse() = default;

void ListRepositoryWebhookLogsResponse::validate()
{
}

web::json::value ListRepositoryWebhookLogsResponse::toJson() const
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
bool ListRepositoryWebhookLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<WebhookLogDto> refVal;
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


std::vector<WebhookLogDto>& ListRepositoryWebhookLogsResponse::getBody()
{
    return body_;
}

void ListRepositoryWebhookLogsResponse::setBody(const std::vector<WebhookLogDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRepositoryWebhookLogsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRepositoryWebhookLogsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListRepositoryWebhookLogsResponse::getXTotal() const
{
    return xTotal_;
}

void ListRepositoryWebhookLogsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListRepositoryWebhookLogsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListRepositoryWebhookLogsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


