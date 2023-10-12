

#include "huaweicloud/gaussdb/v3/model/OperateSqlFilterControlReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




OperateSqlFilterControlReq::OperateSqlFilterControlReq()
{
    switchStatus_ = "";
    switchStatusIsSet_ = false;
}

OperateSqlFilterControlReq::~OperateSqlFilterControlReq() = default;

void OperateSqlFilterControlReq::validate()
{
}

web::json::value OperateSqlFilterControlReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchStatusIsSet_) {
        val[utility::conversions::to_string_t("switch_status")] = ModelBase::toJson(switchStatus_);
    }

    return val;
}
bool OperateSqlFilterControlReq::fromJson(const web::json::value& val)
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


std::string OperateSqlFilterControlReq::getSwitchStatus() const
{
    return switchStatus_;
}

void OperateSqlFilterControlReq::setSwitchStatus(const std::string& value)
{
    switchStatus_ = value;
    switchStatusIsSet_ = true;
}

bool OperateSqlFilterControlReq::switchStatusIsSet() const
{
    return switchStatusIsSet_;
}

void OperateSqlFilterControlReq::unsetswitchStatus()
{
    switchStatusIsSet_ = false;
}

}
}
}
}
}


