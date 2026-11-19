

#include "huaweicloud/gaussdb/v3/model/ShowExceptionSnapshotStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowExceptionSnapshotStatusResponse::ShowExceptionSnapshotStatusResponse()
{
    enabled_ = false;
    enabledIsSet_ = false;
}

ShowExceptionSnapshotStatusResponse::~ShowExceptionSnapshotStatusResponse() = default;

void ShowExceptionSnapshotStatusResponse::validate()
{
}

web::json::value ShowExceptionSnapshotStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}
bool ShowExceptionSnapshotStatusResponse::fromJson(const web::json::value& val)
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


bool ShowExceptionSnapshotStatusResponse::isEnabled() const
{
    return enabled_;
}

void ShowExceptionSnapshotStatusResponse::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ShowExceptionSnapshotStatusResponse::enabledIsSet() const
{
    return enabledIsSet_;
}

void ShowExceptionSnapshotStatusResponse::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


