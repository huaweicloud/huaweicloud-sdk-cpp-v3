

#include "huaweicloud/cfw/v1/model/AddServiceItemsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddServiceItemsRequest::AddServiceItemsRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddServiceItemsRequest::~AddServiceItemsRequest() = default;

void AddServiceItemsRequest::validate()
{
}

web::json::value AddServiceItemsRequest::toJson() const
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
bool AddServiceItemsRequest::fromJson(const web::json::value& val)
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


std::string AddServiceItemsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void AddServiceItemsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool AddServiceItemsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void AddServiceItemsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string AddServiceItemsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void AddServiceItemsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool AddServiceItemsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void AddServiceItemsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

AddServiceItemsUsingPOSTRequestBody AddServiceItemsRequest::getBody() const
{
    return body_;
}

void AddServiceItemsRequest::setBody(const AddServiceItemsUsingPOSTRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddServiceItemsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddServiceItemsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


