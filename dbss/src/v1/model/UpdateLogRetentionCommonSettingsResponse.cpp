

#include "huaweicloud/dbss/v1/model/UpdateLogRetentionCommonSettingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateLogRetentionCommonSettingsResponse::UpdateLogRetentionCommonSettingsResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

UpdateLogRetentionCommonSettingsResponse::~UpdateLogRetentionCommonSettingsResponse() = default;

void UpdateLogRetentionCommonSettingsResponse::validate()
{
}

web::json::value UpdateLogRetentionCommonSettingsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateLogRetentionCommonSettingsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string UpdateLogRetentionCommonSettingsResponse::getStatus() const
{
    return status_;
}

void UpdateLogRetentionCommonSettingsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateLogRetentionCommonSettingsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateLogRetentionCommonSettingsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


