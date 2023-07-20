

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDbUsersResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDbUsersResponse::ListDbUsersResponse()
{
    usersIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListDbUsersResponse::~ListDbUsersResponse() = default;

void ListDbUsersResponse::validate()
{
}

web::json::value ListDbUsersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool ListDbUsersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<GaussDBforOpenGaussUserForList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}

std::vector<GaussDBforOpenGaussUserForList>& ListDbUsersResponse::getUsers()
{
    return users_;
}

void ListDbUsersResponse::setUsers(const std::vector<GaussDBforOpenGaussUserForList>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool ListDbUsersResponse::usersIsSet() const
{
    return usersIsSet_;
}

void ListDbUsersResponse::unsetusers()
{
    usersIsSet_ = false;
}

int32_t ListDbUsersResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDbUsersResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDbUsersResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDbUsersResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


