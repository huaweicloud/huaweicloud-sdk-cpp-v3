

#include "huaweicloud/cfw/v1/model/UpdateAddressSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateAddressSetRequest::UpdateAddressSetRequest()
{
    setId_ = "";
    setIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAddressSetRequest::~UpdateAddressSetRequest() = default;

void UpdateAddressSetRequest::validate()
{
}

web::json::value UpdateAddressSetRequest::toJson() const
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
bool UpdateAddressSetRequest::fromJson(const web::json::value& val)
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
            UpdateAddressSetDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAddressSetRequest::getSetId() const
{
    return setId_;
}

void UpdateAddressSetRequest::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool UpdateAddressSetRequest::setIdIsSet() const
{
    return setIdIsSet_;
}

void UpdateAddressSetRequest::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string UpdateAddressSetRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateAddressSetRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateAddressSetRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateAddressSetRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string UpdateAddressSetRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void UpdateAddressSetRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool UpdateAddressSetRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void UpdateAddressSetRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

UpdateAddressSetDto UpdateAddressSetRequest::getBody() const
{
    return body_;
}

void UpdateAddressSetRequest::setBody(const UpdateAddressSetDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAddressSetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAddressSetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


