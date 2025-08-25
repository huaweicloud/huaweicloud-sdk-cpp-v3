

#include "huaweicloud/cce/v3/model/ContainerNetworkUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ContainerNetworkUpdate::ContainerNetworkUpdate()
{
    cidrsIsSet_ = false;
}

ContainerNetworkUpdate::~ContainerNetworkUpdate() = default;

void ContainerNetworkUpdate::validate()
{
}

web::json::value ContainerNetworkUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cidrsIsSet_) {
        val[utility::conversions::to_string_t("cidrs")] = ModelBase::toJson(cidrs_);
    }

    return val;
}
bool ContainerNetworkUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cidrs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidrs"));
        if(!fieldValue.is_null())
        {
            std::vector<ContainerCIDR> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidrs(refVal);
        }
    }
    return ok;
}


std::vector<ContainerCIDR>& ContainerNetworkUpdate::getCidrs()
{
    return cidrs_;
}

void ContainerNetworkUpdate::setCidrs(const std::vector<ContainerCIDR>& value)
{
    cidrs_ = value;
    cidrsIsSet_ = true;
}

bool ContainerNetworkUpdate::cidrsIsSet() const
{
    return cidrsIsSet_;
}

void ContainerNetworkUpdate::unsetcidrs()
{
    cidrsIsSet_ = false;
}

}
}
}
}
}


