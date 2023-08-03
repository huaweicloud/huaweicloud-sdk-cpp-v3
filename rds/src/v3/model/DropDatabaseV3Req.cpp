

#include "huaweicloud/rds/v3/model/DropDatabaseV3Req.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DropDatabaseV3Req::DropDatabaseV3Req()
{
    isForceDelete_ = false;
    isForceDeleteIsSet_ = false;
}

DropDatabaseV3Req::~DropDatabaseV3Req() = default;

void DropDatabaseV3Req::validate()
{
}

web::json::value DropDatabaseV3Req::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isForceDeleteIsSet_) {
        val[utility::conversions::to_string_t("is_force_delete")] = ModelBase::toJson(isForceDelete_);
    }

    return val;
}

bool DropDatabaseV3Req::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_force_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_force_delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsForceDelete(refVal);
        }
    }
    return ok;
}

bool DropDatabaseV3Req::isIsForceDelete() const
{
    return isForceDelete_;
}

void DropDatabaseV3Req::setIsForceDelete(bool value)
{
    isForceDelete_ = value;
    isForceDeleteIsSet_ = true;
}

bool DropDatabaseV3Req::isForceDeleteIsSet() const
{
    return isForceDeleteIsSet_;
}

void DropDatabaseV3Req::unsetisForceDelete()
{
    isForceDeleteIsSet_ = false;
}

}
}
}
}
}


