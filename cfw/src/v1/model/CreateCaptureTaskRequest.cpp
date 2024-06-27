

#include "huaweicloud/cfw/v1/model/CreateCaptureTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateCaptureTaskRequest::CreateCaptureTaskRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateCaptureTaskRequest::~CreateCaptureTaskRequest() = default;

void CreateCaptureTaskRequest::validate()
{
}

web::json::value CreateCaptureTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateCaptureTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CaptureTaskDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateCaptureTaskRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateCaptureTaskRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateCaptureTaskRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateCaptureTaskRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CreateCaptureTaskRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void CreateCaptureTaskRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool CreateCaptureTaskRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void CreateCaptureTaskRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

CaptureTaskDto CreateCaptureTaskRequest::getBody() const
{
    return body_;
}

void CreateCaptureTaskRequest::setBody(const CaptureTaskDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateCaptureTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateCaptureTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


