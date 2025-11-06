

#include "huaweicloud/codeartsrepo/v3/model/CreateRepoMemberRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




CreateRepoMemberRequest::CreateRepoMemberRequest()
{
    usersIsSet_ = false;
}

CreateRepoMemberRequest::~CreateRepoMemberRequest() = default;

void CreateRepoMemberRequest::validate()
{
}

web::json::value CreateRepoMemberRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool CreateRepoMemberRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<RepoMemberInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


std::vector<RepoMemberInfo>& CreateRepoMemberRequest::getUsers()
{
    return users_;
}

void CreateRepoMemberRequest::setUsers(const std::vector<RepoMemberInfo>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool CreateRepoMemberRequest::usersIsSet() const
{
    return usersIsSet_;
}

void CreateRepoMemberRequest::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


