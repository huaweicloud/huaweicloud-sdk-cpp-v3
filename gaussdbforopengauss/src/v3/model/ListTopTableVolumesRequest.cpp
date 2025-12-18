

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTopTableVolumesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTopTableVolumesRequest::ListTopTableVolumesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

ListTopTableVolumesRequest::~ListTopTableVolumesRequest() = default;

void ListTopTableVolumesRequest::validate()
{
}

web::json::value ListTopTableVolumesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }

    return val;
}
bool ListTopTableVolumesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    return ok;
}


std::string ListTopTableVolumesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListTopTableVolumesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListTopTableVolumesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListTopTableVolumesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListTopTableVolumesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListTopTableVolumesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListTopTableVolumesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListTopTableVolumesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListTopTableVolumesRequest::getJobId() const
{
    return jobId_;
}

void ListTopTableVolumesRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListTopTableVolumesRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListTopTableVolumesRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListTopTableVolumesRequest::getNodeId() const
{
    return nodeId_;
}

void ListTopTableVolumesRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListTopTableVolumesRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListTopTableVolumesRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


