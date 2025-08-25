

#include "huaweicloud/cce/v3/model/EipSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




EipSpec::EipSpec()
{
    bandwidthIsSet_ = false;
}

EipSpec::~EipSpec() = default;

void EipSpec::validate()
{
}

web::json::value EipSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }

    return val;
}
bool EipSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            EipSpec_bandwidth refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    return ok;
}


EipSpec_bandwidth EipSpec::getBandwidth() const
{
    return bandwidth_;
}

void EipSpec::setBandwidth(const EipSpec_bandwidth& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool EipSpec::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void EipSpec::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

}
}
}
}
}


