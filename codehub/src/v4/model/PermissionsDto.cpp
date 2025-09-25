

#include "huaweicloud/codehub/v4/model/PermissionsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




PermissionsDto::PermissionsDto()
{
    repositoryAccessIsSet_ = false;
    groupAccessIsSet_ = false;
}

PermissionsDto::~PermissionsDto() = default;

void PermissionsDto::validate()
{
}

web::json::value PermissionsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryAccessIsSet_) {
        val[utility::conversions::to_string_t("repository_access")] = ModelBase::toJson(repositoryAccess_);
    }
    if(groupAccessIsSet_) {
        val[utility::conversions::to_string_t("group_access")] = ModelBase::toJson(groupAccess_);
    }

    return val;
}
bool PermissionsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_access"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_access"));
        if(!fieldValue.is_null())
        {
            MemberAccess refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryAccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_access"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_access"));
        if(!fieldValue.is_null())
        {
            MemberAccess refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupAccess(refVal);
        }
    }
    return ok;
}


MemberAccess PermissionsDto::getRepositoryAccess() const
{
    return repositoryAccess_;
}

void PermissionsDto::setRepositoryAccess(const MemberAccess& value)
{
    repositoryAccess_ = value;
    repositoryAccessIsSet_ = true;
}

bool PermissionsDto::repositoryAccessIsSet() const
{
    return repositoryAccessIsSet_;
}

void PermissionsDto::unsetrepositoryAccess()
{
    repositoryAccessIsSet_ = false;
}

MemberAccess PermissionsDto::getGroupAccess() const
{
    return groupAccess_;
}

void PermissionsDto::setGroupAccess(const MemberAccess& value)
{
    groupAccess_ = value;
    groupAccessIsSet_ = true;
}

bool PermissionsDto::groupAccessIsSet() const
{
    return groupAccessIsSet_;
}

void PermissionsDto::unsetgroupAccess()
{
    groupAccessIsSet_ = false;
}

}
}
}
}
}


