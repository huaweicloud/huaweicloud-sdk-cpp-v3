

#include "huaweicloud/codehub/v4/model/ListRepositoryWorkItemsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryWorkItemsResponse::ListRepositoryWorkItemsResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListRepositoryWorkItemsResponse::~ListRepositoryWorkItemsResponse() = default;

void ListRepositoryWorkItemsResponse::validate()
{
}

web::json::value ListRepositoryWorkItemsResponse::toJson() const
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
bool ListRepositoryWorkItemsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ReqWorkItemDto> refVal;
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


std::vector<ReqWorkItemDto>& ListRepositoryWorkItemsResponse::getBody()
{
    return body_;
}

void ListRepositoryWorkItemsResponse::setBody(const std::vector<ReqWorkItemDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRepositoryWorkItemsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRepositoryWorkItemsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListRepositoryWorkItemsResponse::getXTotal() const
{
    return xTotal_;
}

void ListRepositoryWorkItemsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListRepositoryWorkItemsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListRepositoryWorkItemsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


