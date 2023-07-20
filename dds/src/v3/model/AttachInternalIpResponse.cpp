

#include "huaweicloud/dds/v3/model/AttachInternalIpResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




AttachInternalIpResponse::AttachInternalIpResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    newIp_ = "";
    newIpIsSet_ = false;
}

AttachInternalIpResponse::~AttachInternalIpResponse() = default;

void AttachInternalIpResponse::validate()
{
}

web::json::value AttachInternalIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(newIpIsSet_) {
        val[utility::conversions::to_string_t("new_ip")] = ModelBase::toJson(newIp_);
    }

    return val;
}

bool AttachInternalIpResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewIp(refVal);
        }
    }
    return ok;
}

std::string AttachInternalIpResponse::getJobId() const
{
    return jobId_;
}

void AttachInternalIpResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool AttachInternalIpResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void AttachInternalIpResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string AttachInternalIpResponse::getNodeId() const
{
    return nodeId_;
}

void AttachInternalIpResponse::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool AttachInternalIpResponse::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void AttachInternalIpResponse::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string AttachInternalIpResponse::getNewIp() const
{
    return newIp_;
}

void AttachInternalIpResponse::setNewIp(const std::string& value)
{
    newIp_ = value;
    newIpIsSet_ = true;
}

bool AttachInternalIpResponse::newIpIsSet() const
{
    return newIpIsSet_;
}

void AttachInternalIpResponse::unsetnewIp()
{
    newIpIsSet_ = false;
}

}
}
}
}
}


