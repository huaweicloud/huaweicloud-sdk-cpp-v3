

#include "huaweicloud/gaussdb/v3/model/SwitchExceptionSnapshotStatusRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchExceptionSnapshotStatusRequestBody::SwitchExceptionSnapshotStatusRequestBody()
{
    enabled_ = false;
    enabledIsSet_ = false;
}

SwitchExceptionSnapshotStatusRequestBody::~SwitchExceptionSnapshotStatusRequestBody() = default;

void SwitchExceptionSnapshotStatusRequestBody::validate()
{
}

web::json::value SwitchExceptionSnapshotStatusRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}
bool SwitchExceptionSnapshotStatusRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    return ok;
}


bool SwitchExceptionSnapshotStatusRequestBody::isEnabled() const
{
    return enabled_;
}

void SwitchExceptionSnapshotStatusRequestBody::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool SwitchExceptionSnapshotStatusRequestBody::enabledIsSet() const
{
    return enabledIsSet_;
}

void SwitchExceptionSnapshotStatusRequestBody::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


