

#include "huaweicloud/codeartsrepo/v3/model/RepositoryMemberList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




RepositoryMemberList::RepositoryMemberList()
{
    total_ = 0;
    totalIsSet_ = false;
    usersIsSet_ = false;
}

RepositoryMemberList::~RepositoryMemberList() = default;

void RepositoryMemberList::validate()
{
}

web::json::value RepositoryMemberList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool RepositoryMemberList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<RepositoryMember> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


int32_t RepositoryMemberList::getTotal() const
{
    return total_;
}

void RepositoryMemberList::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool RepositoryMemberList::totalIsSet() const
{
    return totalIsSet_;
}

void RepositoryMemberList::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<RepositoryMember>& RepositoryMemberList::getUsers()
{
    return users_;
}

void RepositoryMemberList::setUsers(const std::vector<RepositoryMember>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool RepositoryMemberList::usersIsSet() const
{
    return usersIsSet_;
}

void RepositoryMemberList::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


