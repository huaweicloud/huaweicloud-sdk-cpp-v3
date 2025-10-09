

#include "huaweicloud/cce/v3/model/MigrateVolumeSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MigrateVolumeSpec::MigrateVolumeSpec()
{
    cmkID_ = "";
    cmkIDIsSet_ = false;
}

MigrateVolumeSpec::~MigrateVolumeSpec() = default;

void MigrateVolumeSpec::validate()
{
}

web::json::value MigrateVolumeSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cmkIDIsSet_) {
        val[utility::conversions::to_string_t("cmkID")] = ModelBase::toJson(cmkID_);
    }

    return val;
}
bool MigrateVolumeSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cmkID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmkID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmkID(refVal);
        }
    }
    return ok;
}


std::string MigrateVolumeSpec::getCmkID() const
{
    return cmkID_;
}

void MigrateVolumeSpec::setCmkID(const std::string& value)
{
    cmkID_ = value;
    cmkIDIsSet_ = true;
}

bool MigrateVolumeSpec::cmkIDIsSet() const
{
    return cmkIDIsSet_;
}

void MigrateVolumeSpec::unsetcmkID()
{
    cmkIDIsSet_ = false;
}

}
}
}
}
}


