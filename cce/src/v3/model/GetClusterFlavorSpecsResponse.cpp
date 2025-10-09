

#include "huaweicloud/cce/v3/model/GetClusterFlavorSpecsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetClusterFlavorSpecsResponse::GetClusterFlavorSpecsResponse()
{
    clusterFlavorSpecsIsSet_ = false;
}

GetClusterFlavorSpecsResponse::~GetClusterFlavorSpecsResponse() = default;

void GetClusterFlavorSpecsResponse::validate()
{
}

web::json::value GetClusterFlavorSpecsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterFlavorSpecsIsSet_) {
        val[utility::conversions::to_string_t("clusterFlavorSpecs")] = ModelBase::toJson(clusterFlavorSpecs_);
    }

    return val;
}
bool GetClusterFlavorSpecsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("clusterFlavorSpecs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterFlavorSpecs"));
        if(!fieldValue.is_null())
        {
            ClusterFlavorSpecification refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterFlavorSpecs(refVal);
        }
    }
    return ok;
}


ClusterFlavorSpecification GetClusterFlavorSpecsResponse::getClusterFlavorSpecs() const
{
    return clusterFlavorSpecs_;
}

void GetClusterFlavorSpecsResponse::setClusterFlavorSpecs(const ClusterFlavorSpecification& value)
{
    clusterFlavorSpecs_ = value;
    clusterFlavorSpecsIsSet_ = true;
}

bool GetClusterFlavorSpecsResponse::clusterFlavorSpecsIsSet() const
{
    return clusterFlavorSpecsIsSet_;
}

void GetClusterFlavorSpecsResponse::unsetclusterFlavorSpecs()
{
    clusterFlavorSpecsIsSet_ = false;
}

}
}
}
}
}


