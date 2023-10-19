

#include "huaweicloud/cfw/v1/model/AddAddressSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddAddressSetRequest::AddAddressSetRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddAddressSetRequest::~AddAddressSetRequest() = default;

void AddAddressSetRequest::validate()
{
}

web::json::value AddAddressSetRequest::toJson() const
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
bool AddAddressSetRequest::fromJson(const web::json::value& val)
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


std::string AddAddressSetRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void AddAddressSetRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool AddAddressSetRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void AddAddressSetRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string AddAddressSetRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void AddAddressSetRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool AddAddressSetRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void AddAddressSetRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

AddAddressSetDto AddAddressSetRequest::getBody() const
{
    return body_;
}

void AddAddressSetRequest::setBody(const AddAddressSetDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddAddressSetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddAddressSetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


