

#include "huaweicloud/cfw/v1/model/AddAddressItemRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddAddressItemRequest::AddAddressItemRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddAddressItemRequest::~AddAddressItemRequest() = default;

void AddAddressItemRequest::validate()
{
}

web::json::value AddAddressItemRequest::toJson() const
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
bool AddAddressItemRequest::fromJson(const web::json::value& val)
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
            AddAddressItemsInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddAddressItemRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void AddAddressItemRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool AddAddressItemRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void AddAddressItemRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string AddAddressItemRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void AddAddressItemRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool AddAddressItemRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void AddAddressItemRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

AddAddressItemsInfoDto AddAddressItemRequest::getBody() const
{
    return body_;
}

void AddAddressItemRequest::setBody(const AddAddressItemsInfoDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddAddressItemRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddAddressItemRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


