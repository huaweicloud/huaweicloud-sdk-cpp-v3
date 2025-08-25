

#include "huaweicloud/cce/v3/model/ShowPartitionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowPartitionRequest::ShowPartitionRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    partitionName_ = "";
    partitionNameIsSet_ = false;
}

ShowPartitionRequest::~ShowPartitionRequest() = default;

void ShowPartitionRequest::validate()
{
}

web::json::value ShowPartitionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(partitionNameIsSet_) {
        val[utility::conversions::to_string_t("partition_name")] = ModelBase::toJson(partitionName_);
    }

    return val;
}
bool ShowPartitionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("partition_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partition_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartitionName(refVal);
        }
    }
    return ok;
}


std::string ShowPartitionRequest::getClusterId() const
{
    return clusterId_;
}

void ShowPartitionRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowPartitionRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowPartitionRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowPartitionRequest::getPartitionName() const
{
    return partitionName_;
}

void ShowPartitionRequest::setPartitionName(const std::string& value)
{
    partitionName_ = value;
    partitionNameIsSet_ = true;
}

bool ShowPartitionRequest::partitionNameIsSet() const
{
    return partitionNameIsSet_;
}

void ShowPartitionRequest::unsetpartitionName()
{
    partitionNameIsSet_ = false;
}

}
}
}
}
}


