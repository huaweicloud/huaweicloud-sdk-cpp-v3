

#include "huaweicloud/codeartsrepo/v3/model/SetRepoRoleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




SetRepoRoleRequestBody::SetRepoRoleRequestBody()
{
    role_ = 0;
    roleIsSet_ = false;
}

SetRepoRoleRequestBody::~SetRepoRoleRequestBody() = default;

void SetRepoRoleRequestBody::validate()
{
}

web::json::value SetRepoRoleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }

    return val;
}
bool SetRepoRoleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
        }
    }
    return ok;
}


int32_t SetRepoRoleRequestBody::getRole() const
{
    return role_;
}

void SetRepoRoleRequestBody::setRole(int32_t value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool SetRepoRoleRequestBody::roleIsSet() const
{
    return roleIsSet_;
}

void SetRepoRoleRequestBody::unsetrole()
{
    roleIsSet_ = false;
}

}
}
}
}
}


