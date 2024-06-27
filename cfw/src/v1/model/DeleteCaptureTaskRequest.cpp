

#include "huaweicloud/cfw/v1/model/DeleteCaptureTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteCaptureTaskRequest::DeleteCaptureTaskRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteCaptureTaskRequest::~DeleteCaptureTaskRequest() = default;

void DeleteCaptureTaskRequest::validate()
{
}

web::json::value DeleteCaptureTaskRequest::toJson() const
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
bool DeleteCaptureTaskRequest::fromJson(const web::json::value& val)
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
            DeleteCaptureTaskDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteCaptureTaskRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void DeleteCaptureTaskRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool DeleteCaptureTaskRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void DeleteCaptureTaskRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string DeleteCaptureTaskRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DeleteCaptureTaskRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DeleteCaptureTaskRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DeleteCaptureTaskRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

DeleteCaptureTaskDto DeleteCaptureTaskRequest::getBody() const
{
    return body_;
}

void DeleteCaptureTaskRequest::setBody(const DeleteCaptureTaskDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteCaptureTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteCaptureTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


