

#include "huaweicloud/codehub/v4/model/ListRepositoryEventsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryEventsResponse::ListRepositoryEventsResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListRepositoryEventsResponse::~ListRepositoryEventsResponse() = default;

void ListRepositoryEventsResponse::validate()
{
}

web::json::value ListRepositoryEventsResponse::toJson() const
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
bool ListRepositoryEventsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<RepositoryPushEventDto> refVal;
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


std::vector<RepositoryPushEventDto>& ListRepositoryEventsResponse::getBody()
{
    return body_;
}

void ListRepositoryEventsResponse::setBody(const std::vector<RepositoryPushEventDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRepositoryEventsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRepositoryEventsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListRepositoryEventsResponse::getXTotal() const
{
    return xTotal_;
}

void ListRepositoryEventsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListRepositoryEventsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListRepositoryEventsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


