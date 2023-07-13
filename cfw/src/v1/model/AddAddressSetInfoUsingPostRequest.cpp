

#include "huaweicloud/cfw/v1/model/AddAddressSetInfoUsingPostRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddAddressSetInfoUsingPostRequest::AddAddressSetInfoUsingPostRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddAddressSetInfoUsingPostRequest::~AddAddressSetInfoUsingPostRequest() = default;

void AddAddressSetInfoUsingPostRequest::validate()
{
}

web::json::value AddAddressSetInfoUsingPostRequest::toJson() const
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

bool AddAddressSetInfoUsingPostRequest::fromJson(const web::json::value& val)
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
            AddAddressSetDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string AddAddressSetInfoUsingPostRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void AddAddressSetInfoUsingPostRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool AddAddressSetInfoUsingPostRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void AddAddressSetInfoUsingPostRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string AddAddressSetInfoUsingPostRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void AddAddressSetInfoUsingPostRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool AddAddressSetInfoUsingPostRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void AddAddressSetInfoUsingPostRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

AddAddressSetDto AddAddressSetInfoUsingPostRequest::getBody() const
{
    return body_;
}

void AddAddressSetInfoUsingPostRequest::setBody(const AddAddressSetDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddAddressSetInfoUsingPostRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddAddressSetInfoUsingPostRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


