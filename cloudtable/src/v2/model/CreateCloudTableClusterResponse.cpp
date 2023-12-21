

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
    jobId_ = "";
    jobIdIsSet_ = false;
    getJobEndpoint_ = "";
    getJobEndpointIsSet_ = false;
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
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("jobId")] = ModelBase::toJson(jobId_);
    }
    if(getJobEndpointIsSet_) {
        val[utility::conversions::to_string_t("getJobEndpoint")] = ModelBase::toJson(getJobEndpoint_);
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
    if(val.has_field(utility::conversions::to_string_t("jobId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("getJobEndpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("getJobEndpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGetJobEndpoint(refVal);
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

std::string CreateCloudTableClusterResponse::getJobId() const
{
    return jobId_;
}

void CreateCloudTableClusterResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateCloudTableClusterResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateCloudTableClusterResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateCloudTableClusterResponse::getGetJobEndpoint() const
{
    return getJobEndpoint_;
}

void CreateCloudTableClusterResponse::setGetJobEndpoint(const std::string& value)
{
    getJobEndpoint_ = value;
    getJobEndpointIsSet_ = true;
}

bool CreateCloudTableClusterResponse::getJobEndpointIsSet() const
{
    return getJobEndpointIsSet_;
}

void CreateCloudTableClusterResponse::unsetgetJobEndpoint()
{
    getJobEndpointIsSet_ = false;
}

}
}
}
}
}


