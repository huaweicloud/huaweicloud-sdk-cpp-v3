

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseRolesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatabaseRolesResponse::ListDatabaseRolesResponse()
{
    rolesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListDatabaseRolesResponse::~ListDatabaseRolesResponse() = default;

void ListDatabaseRolesResponse::validate()
{
}

web::json::value ListDatabaseRolesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rolesIsSet_) {
        val[utility::conversions::to_string_t("roles")] = ModelBase::toJson(roles_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListDatabaseRolesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roles"));
        if(!fieldValue.is_null())
        {
            std::vector<GaussDBListDatabaseRoles> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoles(refVal);
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


std::vector<GaussDBListDatabaseRoles>& ListDatabaseRolesResponse::getRoles()
{
    return roles_;
}

void ListDatabaseRolesResponse::setRoles(const std::vector<GaussDBListDatabaseRoles>& value)
{
    roles_ = value;
    rolesIsSet_ = true;
}

bool ListDatabaseRolesResponse::rolesIsSet() const
{
    return rolesIsSet_;
}

void ListDatabaseRolesResponse::unsetroles()
{
    rolesIsSet_ = false;
}

int32_t ListDatabaseRolesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDatabaseRolesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDatabaseRolesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDatabaseRolesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


