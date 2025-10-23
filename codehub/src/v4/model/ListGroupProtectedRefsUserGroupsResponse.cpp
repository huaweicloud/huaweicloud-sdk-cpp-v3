

#include "huaweicloud/codehub/v4/model/ListGroupProtectedRefsUserGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListGroupProtectedRefsUserGroupsResponse::ListGroupProtectedRefsUserGroupsResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListGroupProtectedRefsUserGroupsResponse::~ListGroupProtectedRefsUserGroupsResponse() = default;

void ListGroupProtectedRefsUserGroupsResponse::validate()
{
}

web::json::value ListGroupProtectedRefsUserGroupsResponse::toJson() const
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
bool ListGroupProtectedRefsUserGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ProtectedRefsUserGroupBasicDto> refVal;
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


std::vector<ProtectedRefsUserGroupBasicDto>& ListGroupProtectedRefsUserGroupsResponse::getBody()
{
    return body_;
}

void ListGroupProtectedRefsUserGroupsResponse::setBody(const std::vector<ProtectedRefsUserGroupBasicDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGroupProtectedRefsUserGroupsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGroupProtectedRefsUserGroupsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListGroupProtectedRefsUserGroupsResponse::getXTotal() const
{
    return xTotal_;
}

void ListGroupProtectedRefsUserGroupsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListGroupProtectedRefsUserGroupsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListGroupProtectedRefsUserGroupsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


