

#include "huaweicloud/cpcs/v1/model/DeleteCcspClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




DeleteCcspClusterResponse::DeleteCcspClusterResponse()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteCcspClusterResponse::~DeleteCcspClusterResponse() = default;

void DeleteCcspClusterResponse::validate()
{
}

web::json::value DeleteCcspClusterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteCcspClusterResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::string DeleteCcspClusterResponse::getClusterId() const
{
    return clusterId_;
}

void DeleteCcspClusterResponse::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool DeleteCcspClusterResponse::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void DeleteCcspClusterResponse::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string DeleteCcspClusterResponse::getJobId() const
{
    return jobId_;
}

void DeleteCcspClusterResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteCcspClusterResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteCcspClusterResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


