

#include "huaweicloud/cce/v3/model/GetClusterFlavorSpecsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetClusterFlavorSpecsRequest::GetClusterFlavorSpecsRequest()
{
    clusterType_ = "";
    clusterTypeIsSet_ = false;
}

GetClusterFlavorSpecsRequest::~GetClusterFlavorSpecsRequest() = default;

void GetClusterFlavorSpecsRequest::validate()
{
}

web::json::value GetClusterFlavorSpecsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterTypeIsSet_) {
        val[utility::conversions::to_string_t("clusterType")] = ModelBase::toJson(clusterType_);
    }

    return val;
}
bool GetClusterFlavorSpecsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("clusterType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterType(refVal);
        }
    }
    return ok;
}


std::string GetClusterFlavorSpecsRequest::getClusterType() const
{
    return clusterType_;
}

void GetClusterFlavorSpecsRequest::setClusterType(const std::string& value)
{
    clusterType_ = value;
    clusterTypeIsSet_ = true;
}

bool GetClusterFlavorSpecsRequest::clusterTypeIsSet() const
{
    return clusterTypeIsSet_;
}

void GetClusterFlavorSpecsRequest::unsetclusterType()
{
    clusterTypeIsSet_ = false;
}

}
}
}
}
}


