

#include "huaweicloud/cfw/v1/model/UpdateServiceSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateServiceSetRequest::UpdateServiceSetRequest()
{
    setId_ = "";
    setIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateServiceSetRequest::~UpdateServiceSetRequest() = default;

void UpdateServiceSetRequest::validate()
{
}

web::json::value UpdateServiceSetRequest::toJson() const
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
bool UpdateServiceSetRequest::fromJson(const web::json::value& val)
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


std::string UpdateServiceSetRequest::getSetId() const
{
    return setId_;
}

void UpdateServiceSetRequest::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool UpdateServiceSetRequest::setIdIsSet() const
{
    return setIdIsSet_;
}

void UpdateServiceSetRequest::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string UpdateServiceSetRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateServiceSetRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateServiceSetRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateServiceSetRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string UpdateServiceSetRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void UpdateServiceSetRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool UpdateServiceSetRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void UpdateServiceSetRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

UpdateServiceSetUsingPUTRequestBody UpdateServiceSetRequest::getBody() const
{
    return body_;
}

void UpdateServiceSetRequest::setBody(const UpdateServiceSetUsingPUTRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateServiceSetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateServiceSetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


