

#include "huaweicloud/cfw/v1/model/UpdateServiceSetUsingPutRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateServiceSetUsingPutRequest::UpdateServiceSetUsingPutRequest()
{
    setId_ = "";
    setIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateServiceSetUsingPutRequest::~UpdateServiceSetUsingPutRequest() = default;

void UpdateServiceSetUsingPutRequest::validate()
{
}

web::json::value UpdateServiceSetUsingPutRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }
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
bool UpdateServiceSetUsingPutRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
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
            UpdateServiceSetUsingPUTRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateServiceSetUsingPutRequest::getSetId() const
{
    return setId_;
}

void UpdateServiceSetUsingPutRequest::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool UpdateServiceSetUsingPutRequest::setIdIsSet() const
{
    return setIdIsSet_;
}

void UpdateServiceSetUsingPutRequest::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string UpdateServiceSetUsingPutRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateServiceSetUsingPutRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateServiceSetUsingPutRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateServiceSetUsingPutRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string UpdateServiceSetUsingPutRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void UpdateServiceSetUsingPutRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool UpdateServiceSetUsingPutRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void UpdateServiceSetUsingPutRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

UpdateServiceSetUsingPUTRequestBody UpdateServiceSetUsingPutRequest::getBody() const
{
    return body_;
}

void UpdateServiceSetUsingPutRequest::setBody(const UpdateServiceSetUsingPUTRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateServiceSetUsingPutRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateServiceSetUsingPutRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


