

#include "huaweicloud/gaussdb/v3/model/UpdateNewNodeAutoAddSwitchRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateNewNodeAutoAddSwitchRequestBody::UpdateNewNodeAutoAddSwitchRequestBody()
{
    switchStatus_ = "";
    switchStatusIsSet_ = false;
    weight_ = 0;
    weightIsSet_ = false;
}

UpdateNewNodeAutoAddSwitchRequestBody::~UpdateNewNodeAutoAddSwitchRequestBody() = default;

void UpdateNewNodeAutoAddSwitchRequestBody::validate()
{
}

web::json::value UpdateNewNodeAutoAddSwitchRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchStatusIsSet_) {
        val[utility::conversions::to_string_t("switch_status")] = ModelBase::toJson(switchStatus_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }

    return val;
}
bool UpdateNewNodeAutoAddSwitchRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
        }
    }
    return ok;
}


std::string UpdateNewNodeAutoAddSwitchRequestBody::getSwitchStatus() const
{
    return switchStatus_;
}

void UpdateNewNodeAutoAddSwitchRequestBody::setSwitchStatus(const std::string& value)
{
    switchStatus_ = value;
    switchStatusIsSet_ = true;
}

bool UpdateNewNodeAutoAddSwitchRequestBody::switchStatusIsSet() const
{
    return switchStatusIsSet_;
}

void UpdateNewNodeAutoAddSwitchRequestBody::unsetswitchStatus()
{
    switchStatusIsSet_ = false;
}

int32_t UpdateNewNodeAutoAddSwitchRequestBody::getWeight() const
{
    return weight_;
}

void UpdateNewNodeAutoAddSwitchRequestBody::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool UpdateNewNodeAutoAddSwitchRequestBody::weightIsSet() const
{
    return weightIsSet_;
}

void UpdateNewNodeAutoAddSwitchRequestBody::unsetweight()
{
    weightIsSet_ = false;
}

}
}
}
}
}


