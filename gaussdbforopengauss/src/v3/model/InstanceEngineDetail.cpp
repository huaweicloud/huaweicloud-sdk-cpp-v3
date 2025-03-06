

#include "huaweicloud/gaussdbforopengauss/v3/model/InstanceEngineDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstanceEngineDetail::InstanceEngineDetail()
{
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    instancesIsSet_ = false;
}

InstanceEngineDetail::~InstanceEngineDetail() = default;

void InstanceEngineDetail::validate()
{
}

web::json::value InstanceEngineDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }

    return val;
}
bool InstanceEngineDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


std::string InstanceEngineDetail::getEngineVersion() const
{
    return engineVersion_;
}

void InstanceEngineDetail::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool InstanceEngineDetail::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void InstanceEngineDetail::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::vector<InstanceDetail>& InstanceEngineDetail::getInstances()
{
    return instances_;
}

void InstanceEngineDetail::setInstances(const std::vector<InstanceDetail>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool InstanceEngineDetail::instancesIsSet() const
{
    return instancesIsSet_;
}

void InstanceEngineDetail::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


