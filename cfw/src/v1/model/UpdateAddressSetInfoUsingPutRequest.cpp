

#include "huaweicloud/cfw/v1/model/UpdateAddressSetInfoUsingPutRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateAddressSetInfoUsingPutRequest::UpdateAddressSetInfoUsingPutRequest()
{
    setId_ = "";
    setIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAddressSetInfoUsingPutRequest::~UpdateAddressSetInfoUsingPutRequest() = default;

void UpdateAddressSetInfoUsingPutRequest::validate()
{
}

web::json::value UpdateAddressSetInfoUsingPutRequest::toJson() const
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
bool UpdateAddressSetInfoUsingPutRequest::fromJson(const web::json::value& val)
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


std::string UpdateAddressSetInfoUsingPutRequest::getSetId() const
{
    return setId_;
}

void UpdateAddressSetInfoUsingPutRequest::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool UpdateAddressSetInfoUsingPutRequest::setIdIsSet() const
{
    return setIdIsSet_;
}

void UpdateAddressSetInfoUsingPutRequest::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string UpdateAddressSetInfoUsingPutRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateAddressSetInfoUsingPutRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateAddressSetInfoUsingPutRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateAddressSetInfoUsingPutRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string UpdateAddressSetInfoUsingPutRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void UpdateAddressSetInfoUsingPutRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool UpdateAddressSetInfoUsingPutRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void UpdateAddressSetInfoUsingPutRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

UpdateAddressSetDto UpdateAddressSetInfoUsingPutRequest::getBody() const
{
    return body_;
}

void UpdateAddressSetInfoUsingPutRequest::setBody(const UpdateAddressSetDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAddressSetInfoUsingPutRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAddressSetInfoUsingPutRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


