

#include "huaweicloud/codehub/v4/model/BatchUpdateFilePushPermissionBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BatchUpdateFilePushPermissionBodyDto::BatchUpdateFilePushPermissionBodyDto()
{
    permissionsIsSet_ = false;
}

BatchUpdateFilePushPermissionBodyDto::~BatchUpdateFilePushPermissionBodyDto() = default;

void BatchUpdateFilePushPermissionBodyDto::validate()
{
}

web::json::value BatchUpdateFilePushPermissionBodyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionsIsSet_) {
        val[utility::conversions::to_string_t("permissions")] = ModelBase::toJson(permissions_);
    }

    return val;
}
bool BatchUpdateFilePushPermissionBodyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permissions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permissions"));
        if(!fieldValue.is_null())
        {
            std::vector<FilePushPermissionUpdateDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissions(refVal);
        }
    }
    return ok;
}


std::vector<FilePushPermissionUpdateDto>& BatchUpdateFilePushPermissionBodyDto::getPermissions()
{
    return permissions_;
}

void BatchUpdateFilePushPermissionBodyDto::setPermissions(const std::vector<FilePushPermissionUpdateDto>& value)
{
    permissions_ = value;
    permissionsIsSet_ = true;
}

bool BatchUpdateFilePushPermissionBodyDto::permissionsIsSet() const
{
    return permissionsIsSet_;
}

void BatchUpdateFilePushPermissionBodyDto::unsetpermissions()
{
    permissionsIsSet_ = false;
}

}
}
}
}
}


