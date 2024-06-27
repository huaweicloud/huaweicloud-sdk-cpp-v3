

#include "huaweicloud/cfw/v1/model/CancelCaptureTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CancelCaptureTaskRequest::CancelCaptureTaskRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CancelCaptureTaskRequest::~CancelCaptureTaskRequest() = default;

void CancelCaptureTaskRequest::validate()
{
}

web::json::value CancelCaptureTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CancelCaptureTaskRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CancelCaptureTaskDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CancelCaptureTaskRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void CancelCaptureTaskRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool CancelCaptureTaskRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void CancelCaptureTaskRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string CancelCaptureTaskRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CancelCaptureTaskRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CancelCaptureTaskRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CancelCaptureTaskRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

CancelCaptureTaskDto CancelCaptureTaskRequest::getBody() const
{
    return body_;
}

void CancelCaptureTaskRequest::setBody(const CancelCaptureTaskDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CancelCaptureTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CancelCaptureTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


