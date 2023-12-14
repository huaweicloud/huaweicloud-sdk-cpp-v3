

#include "huaweicloud/cloudtable/v2/model/CreateCloudTableClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




CreateCloudTableClusterResponse::CreateCloudTableClusterResponse()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

CreateCloudTableClusterResponse::~CreateCloudTableClusterResponse() = default;

void CreateCloudTableClusterResponse::validate()
{
}

web::json::value CreateCloudTableClusterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool CreateCloudTableClusterResponse::fromJson(const web::json::value& val)
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


std::string CreateCloudTableClusterResponse::getClusterId() const
{
    return clusterId_;
}

void CreateCloudTableClusterResponse::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateCloudTableClusterResponse::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateCloudTableClusterResponse::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


