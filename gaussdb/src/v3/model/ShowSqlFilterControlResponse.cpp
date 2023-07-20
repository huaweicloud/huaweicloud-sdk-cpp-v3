

#include "huaweicloud/gaussdb/v3/model/ShowSqlFilterControlResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowSqlFilterControlResponse::ShowSqlFilterControlResponse()
{
    switchStatus_ = "";
    switchStatusIsSet_ = false;
}

ShowSqlFilterControlResponse::~ShowSqlFilterControlResponse() = default;

void ShowSqlFilterControlResponse::validate()
{
}

web::json::value ShowSqlFilterControlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchStatusIsSet_) {
        val[utility::conversions::to_string_t("switch_status")] = ModelBase::toJson(switchStatus_);
    }

    return val;
}

bool ShowSqlFilterControlResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("switch_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchStatus(refVal);
        }
    }
    return ok;
}

std::string ShowSqlFilterControlResponse::getSwitchStatus() const
{
    return switchStatus_;
}

void ShowSqlFilterControlResponse::setSwitchStatus(const std::string& value)
{
    switchStatus_ = value;
    switchStatusIsSet_ = true;
}

bool ShowSqlFilterControlResponse::switchStatusIsSet() const
{
    return switchStatusIsSet_;
}

void ShowSqlFilterControlResponse::unsetswitchStatus()
{
    switchStatusIsSet_ = false;
}

}
}
}
}
}


