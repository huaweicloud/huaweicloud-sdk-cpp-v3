

#include "huaweicloud/modelarts/v1/model/PoolSpecModel_dataVolumes_extendParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolSpecModel_dataVolumes_extendParams::PoolSpecModel_dataVolumes_extendParams()
{
    billing_ = "";
    billingIsSet_ = false;
    volumeGroup_ = "";
    volumeGroupIsSet_ = false;
}

PoolSpecModel_dataVolumes_extendParams::~PoolSpecModel_dataVolumes_extendParams() = default;

void PoolSpecModel_dataVolumes_extendParams::validate()
{
}

web::json::value PoolSpecModel_dataVolumes_extendParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(billingIsSet_) {
        val[utility::conversions::to_string_t("billing")] = ModelBase::toJson(billing_);
    }
    if(volumeGroupIsSet_) {
        val[utility::conversions::to_string_t("volumeGroup")] = ModelBase::toJson(volumeGroup_);
    }

    return val;
}
bool PoolSpecModel_dataVolumes_extendParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("billing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBilling(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumeGroup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeGroup"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeGroup(refVal);
        }
    }
    return ok;
}


std::string PoolSpecModel_dataVolumes_extendParams::getBilling() const
{
    return billing_;
}

void PoolSpecModel_dataVolumes_extendParams::setBilling(const std::string& value)
{
    billing_ = value;
    billingIsSet_ = true;
}

bool PoolSpecModel_dataVolumes_extendParams::billingIsSet() const
{
    return billingIsSet_;
}

void PoolSpecModel_dataVolumes_extendParams::unsetbilling()
{
    billingIsSet_ = false;
}

std::string PoolSpecModel_dataVolumes_extendParams::getVolumeGroup() const
{
    return volumeGroup_;
}

void PoolSpecModel_dataVolumes_extendParams::setVolumeGroup(const std::string& value)
{
    volumeGroup_ = value;
    volumeGroupIsSet_ = true;
}

bool PoolSpecModel_dataVolumes_extendParams::volumeGroupIsSet() const
{
    return volumeGroupIsSet_;
}

void PoolSpecModel_dataVolumes_extendParams::unsetvolumeGroup()
{
    volumeGroupIsSet_ = false;
}

}
}
}
}
}


