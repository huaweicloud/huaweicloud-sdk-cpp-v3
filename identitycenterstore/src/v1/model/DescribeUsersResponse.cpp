

#include "huaweicloud/identitycenterstore/v1/model/DescribeUsersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DescribeUsersResponse::DescribeUsersResponse()
{
    usersIsSet_ = false;
}

DescribeUsersResponse::~DescribeUsersResponse() = default;

void DescribeUsersResponse::validate()
{
}

web::json::value DescribeUsersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool DescribeUsersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<DescribeUserResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


std::vector<DescribeUserResp>& DescribeUsersResponse::getUsers()
{
    return users_;
}

void DescribeUsersResponse::setUsers(const std::vector<DescribeUserResp>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool DescribeUsersResponse::usersIsSet() const
{
    return usersIsSet_;
}

void DescribeUsersResponse::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


