

#include "huaweicloud/codeartsrepo/v4/model/ListProjectProtectedRefsUserGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProjectProtectedRefsUserGroupsResponse::ListProjectProtectedRefsUserGroupsResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListProjectProtectedRefsUserGroupsResponse::~ListProjectProtectedRefsUserGroupsResponse() = default;

void ListProjectProtectedRefsUserGroupsResponse::validate()
{
}

web::json::value ListProjectProtectedRefsUserGroupsResponse::toJson() const
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
bool ListProjectProtectedRefsUserGroupsResponse::fromJson(const web::json::value& val)
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


std::vector<ProtectedRefsUserGroupBasicDto>& ListProjectProtectedRefsUserGroupsResponse::getBody()
{
    return body_;
}

void ListProjectProtectedRefsUserGroupsResponse::setBody(const std::vector<ProtectedRefsUserGroupBasicDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProjectProtectedRefsUserGroupsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProjectProtectedRefsUserGroupsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListProjectProtectedRefsUserGroupsResponse::getXTotal() const
{
    return xTotal_;
}

void ListProjectProtectedRefsUserGroupsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListProjectProtectedRefsUserGroupsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListProjectProtectedRefsUserGroupsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


