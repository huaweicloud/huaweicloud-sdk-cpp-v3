

#include "huaweicloud/cce/v3/model/ClusterConfigurationsSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterConfigurationsSpec::ClusterConfigurationsSpec()
{
    packagesIsSet_ = false;
}

ClusterConfigurationsSpec::~ClusterConfigurationsSpec() = default;

void ClusterConfigurationsSpec::validate()
{
}

web::json::value ClusterConfigurationsSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(packagesIsSet_) {
        val[utility::conversions::to_string_t("packages")] = ModelBase::toJson(packages_);
    }

    return val;
}
bool ClusterConfigurationsSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("packages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("packages"));
        if(!fieldValue.is_null())
        {
            std::vector<ClusterConfigurationsSpec_packages> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackages(refVal);
        }
    }
    return ok;
}


std::vector<ClusterConfigurationsSpec_packages>& ClusterConfigurationsSpec::getPackages()
{
    return packages_;
}

void ClusterConfigurationsSpec::setPackages(const std::vector<ClusterConfigurationsSpec_packages>& value)
{
    packages_ = value;
    packagesIsSet_ = true;
}

bool ClusterConfigurationsSpec::packagesIsSet() const
{
    return packagesIsSet_;
}

void ClusterConfigurationsSpec::unsetpackages()
{
    packagesIsSet_ = false;
}

}
}
}
}
}


