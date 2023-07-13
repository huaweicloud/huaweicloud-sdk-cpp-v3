

#include "huaweicloud/cfw/v1/model/AddServiceItemsUsingPostRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddServiceItemsUsingPostRequest::AddServiceItemsUsingPostRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddServiceItemsUsingPostRequest::~AddServiceItemsUsingPostRequest() = default;

void AddServiceItemsUsingPostRequest::validate()
{
}

web::json::value AddServiceItemsUsingPostRequest::toJson() const
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

bool AddServiceItemsUsingPostRequest::fromJson(const web::json::value& val)
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
            AddServiceItemsUsingPOSTRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string AddServiceItemsUsingPostRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void AddServiceItemsUsingPostRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool AddServiceItemsUsingPostRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void AddServiceItemsUsingPostRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string AddServiceItemsUsingPostRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void AddServiceItemsUsingPostRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool AddServiceItemsUsingPostRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void AddServiceItemsUsingPostRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

AddServiceItemsUsingPOSTRequestBody AddServiceItemsUsingPostRequest::getBody() const
{
    return body_;
}

void AddServiceItemsUsingPostRequest::setBody(const AddServiceItemsUsingPOSTRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddServiceItemsUsingPostRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddServiceItemsUsingPostRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


