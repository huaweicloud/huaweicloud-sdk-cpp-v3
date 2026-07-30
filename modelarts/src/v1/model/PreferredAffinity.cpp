

#include "huaweicloud/modelarts/v1/model/PreferredAffinity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PreferredAffinity::PreferredAffinity()
{
    nodeAffinityIsSet_ = false;
}

PreferredAffinity::~PreferredAffinity() = default;

void PreferredAffinity::validate()
{
}

web::json::value PreferredAffinity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeAffinityIsSet_) {
        val[utility::conversions::to_string_t("node_affinity")] = ModelBase::toJson(nodeAffinity_);
    }

    return val;
}
bool PreferredAffinity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_affinity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_affinity"));
        if(!fieldValue.is_null())
        {
            std::vector<PreferredSchedulingTerm> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeAffinity(refVal);
        }
    }
    return ok;
}


std::vector<PreferredSchedulingTerm>& PreferredAffinity::getNodeAffinity()
{
    return nodeAffinity_;
}

void PreferredAffinity::setNodeAffinity(const std::vector<PreferredSchedulingTerm>& value)
{
    nodeAffinity_ = value;
    nodeAffinityIsSet_ = true;
}

bool PreferredAffinity::nodeAffinityIsSet() const
{
    return nodeAffinityIsSet_;
}

void PreferredAffinity::unsetnodeAffinity()
{
    nodeAffinityIsSet_ = false;
}

}
}
}
}
}


