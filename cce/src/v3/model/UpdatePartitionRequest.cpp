

#include "huaweicloud/cce/v3/model/UpdatePartitionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdatePartitionRequest::UpdatePartitionRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    partitionName_ = "";
    partitionNameIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePartitionRequest::~UpdatePartitionRequest() = default;

void UpdatePartitionRequest::validate()
{
}

web::json::value UpdatePartitionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(partitionNameIsSet_) {
        val[utility::conversions::to_string_t("partition_name")] = ModelBase::toJson(partitionName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdatePartitionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PartitionReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePartitionRequest::getClusterId() const
{
    return clusterId_;
}

void UpdatePartitionRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpdatePartitionRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpdatePartitionRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string UpdatePartitionRequest::getPartitionName() const
{
    return partitionName_;
}

void UpdatePartitionRequest::setPartitionName(const std::string& value)
{
    partitionName_ = value;
    partitionNameIsSet_ = true;
}

bool UpdatePartitionRequest::partitionNameIsSet() const
{
    return partitionNameIsSet_;
}

void UpdatePartitionRequest::unsetpartitionName()
{
    partitionNameIsSet_ = false;
}

PartitionReqBody UpdatePartitionRequest::getBody() const
{
    return body_;
}

void UpdatePartitionRequest::setBody(const PartitionReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePartitionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePartitionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


