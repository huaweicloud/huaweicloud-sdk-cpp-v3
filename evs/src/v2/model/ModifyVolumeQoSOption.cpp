

#include "huaweicloud/evs/v2/model/ModifyVolumeQoSOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ModifyVolumeQoSOption::ModifyVolumeQoSOption()
{
    iops_ = 0;
    iopsIsSet_ = false;
    throughput_ = 0;
    throughputIsSet_ = false;
}

ModifyVolumeQoSOption::~ModifyVolumeQoSOption() = default;

void ModifyVolumeQoSOption::validate()
{
}

web::json::value ModifyVolumeQoSOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iopsIsSet_) {
        val[utility::conversions::to_string_t("iops")] = ModelBase::toJson(iops_);
    }
    if(throughputIsSet_) {
        val[utility::conversions::to_string_t("throughput")] = ModelBase::toJson(throughput_);
    }

    return val;
}

bool ModifyVolumeQoSOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("iops"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iops"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIops(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("throughput"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("throughput"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThroughput(refVal);
        }
    }
    return ok;
}

int32_t ModifyVolumeQoSOption::getIops() const
{
    return iops_;
}

void ModifyVolumeQoSOption::setIops(int32_t value)
{
    iops_ = value;
    iopsIsSet_ = true;
}

bool ModifyVolumeQoSOption::iopsIsSet() const
{
    return iopsIsSet_;
}

void ModifyVolumeQoSOption::unsetiops()
{
    iopsIsSet_ = false;
}

int32_t ModifyVolumeQoSOption::getThroughput() const
{
    return throughput_;
}

void ModifyVolumeQoSOption::setThroughput(int32_t value)
{
    throughput_ = value;
    throughputIsSet_ = true;
}

bool ModifyVolumeQoSOption::throughputIsSet() const
{
    return throughputIsSet_;
}

void ModifyVolumeQoSOption::unsetthroughput()
{
    throughputIsSet_ = false;
}

}
}
}
}
}


