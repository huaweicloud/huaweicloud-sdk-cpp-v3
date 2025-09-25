

#include "huaweicloud/codehub/v4/model/ListProductPermissionResourcesGrantedUsersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListProductPermissionResourcesGrantedUsersResponse::ListProductPermissionResourcesGrantedUsersResponse()
{
    bodyIsSet_ = false;
}

ListProductPermissionResourcesGrantedUsersResponse::~ListProductPermissionResourcesGrantedUsersResponse() = default;

void ListProductPermissionResourcesGrantedUsersResponse::validate()
{
}

web::json::value ListProductPermissionResourcesGrantedUsersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListProductPermissionResourcesGrantedUsersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<GrantedUsersDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<GrantedUsersDto>& ListProductPermissionResourcesGrantedUsersResponse::getBody()
{
    return body_;
}

void ListProductPermissionResourcesGrantedUsersResponse::setBody(const std::vector<GrantedUsersDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProductPermissionResourcesGrantedUsersResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProductPermissionResourcesGrantedUsersResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


