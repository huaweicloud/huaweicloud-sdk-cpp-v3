

#include "huaweicloud/iotda/v5/model/BatchTargets.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




BatchTargets::BatchTargets()
{
    targetsIsSet_ = false;
}

BatchTargets::~BatchTargets() = default;

void BatchTargets::validate()
{
}

web::json::value BatchTargets::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetsIsSet_) {
        val[utility::conversions::to_string_t("targets")] = ModelBase::toJson(targets_);
    }

    return val;
}
bool BatchTargets::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("targets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targets"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargets(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchTargets::getTargets()
{
    return targets_;
}

void BatchTargets::setTargets(const std::vector<std::string>& value)
{
    targets_ = value;
    targetsIsSet_ = true;
}

bool BatchTargets::targetsIsSet() const
{
    return targetsIsSet_;
}

void BatchTargets::unsettargets()
{
    targetsIsSet_ = false;
}

}
}
}
}
}


