

#include "huaweicloud/cce/v3/model/UpgradeResponseSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeResponseSpec::UpgradeResponseSpec()
{
    clusterUpgradeActionIsSet_ = false;
}

UpgradeResponseSpec::~UpgradeResponseSpec() = default;

void UpgradeResponseSpec::validate()
{
}

web::json::value UpgradeResponseSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterUpgradeActionIsSet_) {
        val[utility::conversions::to_string_t("clusterUpgradeAction")] = ModelBase::toJson(clusterUpgradeAction_);
    }

    return val;
}
bool UpgradeResponseSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("clusterUpgradeAction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterUpgradeAction"));
        if(!fieldValue.is_null())
        {
            ClusterUpgradeResponseAction refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterUpgradeAction(refVal);
        }
    }
    return ok;
}


ClusterUpgradeResponseAction UpgradeResponseSpec::getClusterUpgradeAction() const
{
    return clusterUpgradeAction_;
}

void UpgradeResponseSpec::setClusterUpgradeAction(const ClusterUpgradeResponseAction& value)
{
    clusterUpgradeAction_ = value;
    clusterUpgradeActionIsSet_ = true;
}

bool UpgradeResponseSpec::clusterUpgradeActionIsSet() const
{
    return clusterUpgradeActionIsSet_;
}

void UpgradeResponseSpec::unsetclusterUpgradeAction()
{
    clusterUpgradeActionIsSet_ = false;
}

}
}
}
}
}


