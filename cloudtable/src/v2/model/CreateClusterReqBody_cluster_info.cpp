

#include "huaweicloud/cloudtable/v2/model/CreateClusterReqBody_cluster_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




CreateClusterReqBody_cluster_info::CreateClusterReqBody_cluster_info()
{
    featureMapIsSet_ = false;
    clusterInstanceInfoIsSet_ = false;
}

CreateClusterReqBody_cluster_info::~CreateClusterReqBody_cluster_info() = default;

void CreateClusterReqBody_cluster_info::validate()
{
}

web::json::value CreateClusterReqBody_cluster_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(featureMapIsSet_) {
        val[utility::conversions::to_string_t("feature_map")] = ModelBase::toJson(featureMap_);
    }
    if(clusterInstanceInfoIsSet_) {
        val[utility::conversions::to_string_t("cluster_instance_info")] = ModelBase::toJson(clusterInstanceInfo_);
    }

    return val;
}
bool CreateClusterReqBody_cluster_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("feature_map"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature_map"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeatureMap(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_instance_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_instance_info"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateClusterInstanceBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterInstanceInfo(refVal);
        }
    }
    return ok;
}


std::map<std::string, std::string>& CreateClusterReqBody_cluster_info::getFeatureMap()
{
    return featureMap_;
}

void CreateClusterReqBody_cluster_info::setFeatureMap(const std::map<std::string, std::string>& value)
{
    featureMap_ = value;
    featureMapIsSet_ = true;
}

bool CreateClusterReqBody_cluster_info::featureMapIsSet() const
{
    return featureMapIsSet_;
}

void CreateClusterReqBody_cluster_info::unsetfeatureMap()
{
    featureMapIsSet_ = false;
}

std::vector<CreateClusterInstanceBody>& CreateClusterReqBody_cluster_info::getClusterInstanceInfo()
{
    return clusterInstanceInfo_;
}

void CreateClusterReqBody_cluster_info::setClusterInstanceInfo(const std::vector<CreateClusterInstanceBody>& value)
{
    clusterInstanceInfo_ = value;
    clusterInstanceInfoIsSet_ = true;
}

bool CreateClusterReqBody_cluster_info::clusterInstanceInfoIsSet() const
{
    return clusterInstanceInfoIsSet_;
}

void CreateClusterReqBody_cluster_info::unsetclusterInstanceInfo()
{
    clusterInstanceInfoIsSet_ = false;
}

}
}
}
}
}


