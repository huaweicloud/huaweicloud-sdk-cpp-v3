

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryUserGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryUserGroupsResponse::ListRepositoryUserGroupsResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListRepositoryUserGroupsResponse::~ListRepositoryUserGroupsResponse() = default;

void ListRepositoryUserGroupsResponse::validate()
{
}

web::json::value ListRepositoryUserGroupsResponse::toJson() const
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
bool ListRepositoryUserGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<RepositoryUserGroupDto> refVal;
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


std::vector<RepositoryUserGroupDto>& ListRepositoryUserGroupsResponse::getBody()
{
    return body_;
}

void ListRepositoryUserGroupsResponse::setBody(const std::vector<RepositoryUserGroupDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRepositoryUserGroupsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRepositoryUserGroupsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListRepositoryUserGroupsResponse::getXTotal() const
{
    return xTotal_;
}

void ListRepositoryUserGroupsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListRepositoryUserGroupsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListRepositoryUserGroupsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


