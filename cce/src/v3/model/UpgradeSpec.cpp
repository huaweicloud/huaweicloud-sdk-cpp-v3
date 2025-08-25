

#include "huaweicloud/cce/v3/model/UpgradeSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeSpec::UpgradeSpec()
{
    clusterUpgradeActionIsSet_ = false;
}

UpgradeSpec::~UpgradeSpec() = default;

void UpgradeSpec::validate()
{
}

web::json::value UpgradeSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterUpgradeActionIsSet_) {
        val[utility::conversions::to_string_t("clusterUpgradeAction")] = ModelBase::toJson(clusterUpgradeAction_);
    }

    return val;
}
bool UpgradeSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("clusterUpgradeAction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterUpgradeAction"));
        if(!fieldValue.is_null())
        {
            ClusterUpgradeAction refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterUpgradeAction(refVal);
        }
    }
    return ok;
}


ClusterUpgradeAction UpgradeSpec::getClusterUpgradeAction() const
{
    return clusterUpgradeAction_;
}

void UpgradeSpec::setClusterUpgradeAction(const ClusterUpgradeAction& value)
{
    clusterUpgradeAction_ = value;
    clusterUpgradeActionIsSet_ = true;
}

bool UpgradeSpec::clusterUpgradeActionIsSet() const
{
    return clusterUpgradeActionIsSet_;
}

void UpgradeSpec::unsetclusterUpgradeAction()
{
    clusterUpgradeActionIsSet_ = false;
}

}
}
}
}
}


