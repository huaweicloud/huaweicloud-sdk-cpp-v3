

#include "huaweicloud/codeartsrepo/v4/model/ListGroupAddableUserGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListGroupAddableUserGroupsResponse::ListGroupAddableUserGroupsResponse()
{
    bodyIsSet_ = false;
}

ListGroupAddableUserGroupsResponse::~ListGroupAddableUserGroupsResponse() = default;

void ListGroupAddableUserGroupsResponse::validate()
{
}

web::json::value ListGroupAddableUserGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListGroupAddableUserGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<UserGroupDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<UserGroupDto>& ListGroupAddableUserGroupsResponse::getBody()
{
    return body_;
}

void ListGroupAddableUserGroupsResponse::setBody(const std::vector<UserGroupDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGroupAddableUserGroupsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGroupAddableUserGroupsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


