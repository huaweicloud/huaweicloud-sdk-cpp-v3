

#include "huaweicloud/cloudtable/v2/model/CreateClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




CreateClusterResponse::CreateClusterResponse()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

CreateClusterResponse::~CreateClusterResponse() = default;

void CreateClusterResponse::validate()
{
}

web::json::value CreateClusterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool CreateClusterResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    return ok;
}


std::string CreateClusterResponse::getClusterId() const
{
    return clusterId_;
}

void CreateClusterResponse::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateClusterResponse::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateClusterResponse::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


