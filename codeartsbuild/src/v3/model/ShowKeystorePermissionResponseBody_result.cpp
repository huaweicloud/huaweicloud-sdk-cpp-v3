

#include "huaweicloud/codeartsbuild/v3/model/ShowKeystorePermissionResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowKeystorePermissionResponseBody_result::ShowKeystorePermissionResponseBody_result()
{
    total_ = 0;
    totalIsSet_ = false;
    permissionListIsSet_ = false;
}

ShowKeystorePermissionResponseBody_result::~ShowKeystorePermissionResponseBody_result() = default;

void ShowKeystorePermissionResponseBody_result::validate()
{
}

web::json::value ShowKeystorePermissionResponseBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(permissionListIsSet_) {
        val[utility::conversions::to_string_t("permission_list")] = ModelBase::toJson(permissionList_);
    }

    return val;
}
bool ShowKeystorePermissionResponseBody_result::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("permission_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AddKeystorePermissionResponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionList(refVal);
        }
    }
    return ok;
}


int32_t ShowKeystorePermissionResponseBody_result::getTotal() const
{
    return total_;
}

void ShowKeystorePermissionResponseBody_result::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowKeystorePermissionResponseBody_result::totalIsSet() const
{
    return totalIsSet_;
}

void ShowKeystorePermissionResponseBody_result::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<AddKeystorePermissionResponseBody>& ShowKeystorePermissionResponseBody_result::getPermissionList()
{
    return permissionList_;
}

void ShowKeystorePermissionResponseBody_result::setPermissionList(const std::vector<AddKeystorePermissionResponseBody>& value)
{
    permissionList_ = value;
    permissionListIsSet_ = true;
}

bool ShowKeystorePermissionResponseBody_result::permissionListIsSet() const
{
    return permissionListIsSet_;
}

void ShowKeystorePermissionResponseBody_result::unsetpermissionList()
{
    permissionListIsSet_ = false;
}

}
}
}
}
}


