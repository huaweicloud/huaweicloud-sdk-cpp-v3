

#include "huaweicloud/cfw/v1/model/ListCaptureResultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListCaptureResultRequest::ListCaptureResultRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    ipIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ListCaptureResultRequest::~ListCaptureResultRequest() = default;

void ListCaptureResultRequest::validate()
{
}

web::json::value ListCaptureResultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool ListCaptureResultRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string ListCaptureResultRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListCaptureResultRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListCaptureResultRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListCaptureResultRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ListCaptureResultRequest::getTaskId() const
{
    return taskId_;
}

void ListCaptureResultRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListCaptureResultRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListCaptureResultRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

int32_t ListCaptureResultRequest::getType() const
{
    return type_;
}

void ListCaptureResultRequest::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListCaptureResultRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListCaptureResultRequest::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::string>& ListCaptureResultRequest::getIp()
{
    return ip_;
}

void ListCaptureResultRequest::setIp(const std::vector<std::string>& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ListCaptureResultRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ListCaptureResultRequest::unsetip()
{
    ipIsSet_ = false;
}

std::string ListCaptureResultRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListCaptureResultRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListCaptureResultRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListCaptureResultRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


