

#include "huaweicloud/gaussdb/v3/model/ShowBackupResourcePackageFlavorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowBackupResourcePackageFlavorsResponse::ShowBackupResourcePackageFlavorsResponse()
{
    flavorsIsSet_ = false;
}

ShowBackupResourcePackageFlavorsResponse::~ShowBackupResourcePackageFlavorsResponse() = default;

void ShowBackupResourcePackageFlavorsResponse::validate()
{
}

web::json::value ShowBackupResourcePackageFlavorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorsIsSet_) {
        val[utility::conversions::to_string_t("flavors")] = ModelBase::toJson(flavors_);
    }

    return val;
}
bool ShowBackupResourcePackageFlavorsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<BackupResourcePackageFlavor> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavors(refVal);
        }
    }
    return ok;
}


std::vector<BackupResourcePackageFlavor>& ShowBackupResourcePackageFlavorsResponse::getFlavors()
{
    return flavors_;
}

void ShowBackupResourcePackageFlavorsResponse::setFlavors(const std::vector<BackupResourcePackageFlavor>& value)
{
    flavors_ = value;
    flavorsIsSet_ = true;
}

bool ShowBackupResourcePackageFlavorsResponse::flavorsIsSet() const
{
    return flavorsIsSet_;
}

void ShowBackupResourcePackageFlavorsResponse::unsetflavors()
{
    flavorsIsSet_ = false;
}

}
}
}
}
}


