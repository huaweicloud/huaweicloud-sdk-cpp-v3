

#include "huaweicloud/dds/v3/model/AttachEipResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




AttachEipResponse::AttachEipResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
    publicIpId_ = "";
    publicIpIdIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
}

AttachEipResponse::~AttachEipResponse() = default;

void AttachEipResponse::validate()
{
}

web::json::value AttachEipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }
    if(publicIpIdIsSet_) {
        val[utility::conversions::to_string_t("public_ip_id")] = ModelBase::toJson(publicIpId_);
    }
    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }

    return val;
}

bool AttachEipResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIp(refVal);
        }
    }
    return ok;
}

std::string AttachEipResponse::getJobId() const
{
    return jobId_;
}

void AttachEipResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool AttachEipResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void AttachEipResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string AttachEipResponse::getNodeId() const
{
    return nodeId_;
}

void AttachEipResponse::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool AttachEipResponse::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void AttachEipResponse::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string AttachEipResponse::getNodeName() const
{
    return nodeName_;
}

void AttachEipResponse::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool AttachEipResponse::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void AttachEipResponse::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string AttachEipResponse::getPublicIpId() const
{
    return publicIpId_;
}

void AttachEipResponse::setPublicIpId(const std::string& value)
{
    publicIpId_ = value;
    publicIpIdIsSet_ = true;
}

bool AttachEipResponse::publicIpIdIsSet() const
{
    return publicIpIdIsSet_;
}

void AttachEipResponse::unsetpublicIpId()
{
    publicIpIdIsSet_ = false;
}

std::string AttachEipResponse::getPublicIp() const
{
    return publicIp_;
}

void AttachEipResponse::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool AttachEipResponse::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void AttachEipResponse::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

}
}
}
}
}


