

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryProtectedRefsUserGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryProtectedRefsUserGroupsResponse::ListRepositoryProtectedRefsUserGroupsResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListRepositoryProtectedRefsUserGroupsResponse::~ListRepositoryProtectedRefsUserGroupsResponse() = default;

void ListRepositoryProtectedRefsUserGroupsResponse::validate()
{
}

web::json::value ListRepositoryProtectedRefsUserGroupsResponse::toJson() const
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
bool ListRepositoryProtectedRefsUserGroupsResponse::fromJson(const web::json::value& val)
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


std::vector<ProtectedRefsUserGroupBasicDto>& ListRepositoryProtectedRefsUserGroupsResponse::getBody()
{
    return body_;
}

void ListRepositoryProtectedRefsUserGroupsResponse::setBody(const std::vector<ProtectedRefsUserGroupBasicDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRepositoryProtectedRefsUserGroupsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRepositoryProtectedRefsUserGroupsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListRepositoryProtectedRefsUserGroupsResponse::getXTotal() const
{
    return xTotal_;
}

void ListRepositoryProtectedRefsUserGroupsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListRepositoryProtectedRefsUserGroupsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListRepositoryProtectedRefsUserGroupsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


