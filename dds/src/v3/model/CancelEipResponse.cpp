

#include "huaweicloud/dds/v3/model/CancelEipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CancelEipResponse::CancelEipResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
}

CancelEipResponse::~CancelEipResponse() = default;

void CancelEipResponse::validate()
{
}

web::json::value CancelEipResponse::toJson() const
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

    return val;
}
bool CancelEipResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CancelEipResponse::getJobId() const
{
    return jobId_;
}

void CancelEipResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CancelEipResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CancelEipResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CancelEipResponse::getNodeId() const
{
    return nodeId_;
}

void CancelEipResponse::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool CancelEipResponse::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void CancelEipResponse::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string CancelEipResponse::getNodeName() const
{
    return nodeName_;
}

void CancelEipResponse::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool CancelEipResponse::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void CancelEipResponse::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

}
}
}
}
}


