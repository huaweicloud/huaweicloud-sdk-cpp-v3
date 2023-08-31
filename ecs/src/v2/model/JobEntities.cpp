

#include "huaweicloud/ecs/v2/model/JobEntities.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




JobEntities::JobEntities()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    nicId_ = "";
    nicIdIsSet_ = false;
    subJobsIsSet_ = false;
    subJobsTotal_ = 0;
    subJobsTotalIsSet_ = false;
}

JobEntities::~JobEntities() = default;

void JobEntities::validate()
{
}

web::json::value JobEntities::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(nicIdIsSet_) {
        val[utility::conversions::to_string_t("nic_id")] = ModelBase::toJson(nicId_);
    }
    if(subJobsIsSet_) {
        val[utility::conversions::to_string_t("sub_jobs")] = ModelBase::toJson(subJobs_);
    }
    if(subJobsTotalIsSet_) {
        val[utility::conversions::to_string_t("sub_jobs_total")] = ModelBase::toJson(subJobsTotal_);
    }

    return val;
}

bool JobEntities::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nic_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nic_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNicId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<SubJob> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubJobs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_jobs_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_jobs_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubJobsTotal(refVal);
        }
    }
    return ok;
}

std::string JobEntities::getServerId() const
{
    return serverId_;
}

void JobEntities::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool JobEntities::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void JobEntities::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::string JobEntities::getNicId() const
{
    return nicId_;
}

void JobEntities::setNicId(const std::string& value)
{
    nicId_ = value;
    nicIdIsSet_ = true;
}

bool JobEntities::nicIdIsSet() const
{
    return nicIdIsSet_;
}

void JobEntities::unsetnicId()
{
    nicIdIsSet_ = false;
}

std::vector<SubJob>& JobEntities::getSubJobs()
{
    return subJobs_;
}

void JobEntities::setSubJobs(const std::vector<SubJob>& value)
{
    subJobs_ = value;
    subJobsIsSet_ = true;
}

bool JobEntities::subJobsIsSet() const
{
    return subJobsIsSet_;
}

void JobEntities::unsetsubJobs()
{
    subJobsIsSet_ = false;
}

int32_t JobEntities::getSubJobsTotal() const
{
    return subJobsTotal_;
}

void JobEntities::setSubJobsTotal(int32_t value)
{
    subJobsTotal_ = value;
    subJobsTotalIsSet_ = true;
}

bool JobEntities::subJobsTotalIsSet() const
{
    return subJobsTotalIsSet_;
}

void JobEntities::unsetsubJobsTotal()
{
    subJobsTotalIsSet_ = false;
}

}
}
}
}
}


