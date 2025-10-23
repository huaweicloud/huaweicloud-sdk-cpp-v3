

#include "huaweicloud/codehub/v4/model/ListGroupUserGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListGroupUserGroupsResponse::ListGroupUserGroupsResponse()
{
    bodyIsSet_ = false;
}

ListGroupUserGroupsResponse::~ListGroupUserGroupsResponse() = default;

void ListGroupUserGroupsResponse::validate()
{
}

web::json::value ListGroupUserGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListGroupUserGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectUserGroupDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ProjectUserGroupDto>& ListGroupUserGroupsResponse::getBody()
{
    return body_;
}

void ListGroupUserGroupsResponse::setBody(const std::vector<ProjectUserGroupDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGroupUserGroupsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGroupUserGroupsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


