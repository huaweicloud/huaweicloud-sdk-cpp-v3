

#include "huaweicloud/cfw/v1/model/AddServiceSetUsingPostRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddServiceSetUsingPostRequest::AddServiceSetUsingPostRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddServiceSetUsingPostRequest::~AddServiceSetUsingPostRequest() = default;

void AddServiceSetUsingPostRequest::validate()
{
}

web::json::value AddServiceSetUsingPostRequest::toJson() const
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
bool AddServiceSetUsingPostRequest::fromJson(const web::json::value& val)
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
            AddServiceSetUsingPOSTRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddServiceSetUsingPostRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void AddServiceSetUsingPostRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool AddServiceSetUsingPostRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void AddServiceSetUsingPostRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string AddServiceSetUsingPostRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void AddServiceSetUsingPostRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool AddServiceSetUsingPostRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void AddServiceSetUsingPostRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

AddServiceSetUsingPOSTRequestBody AddServiceSetUsingPostRequest::getBody() const
{
    return body_;
}

void AddServiceSetUsingPostRequest::setBody(const AddServiceSetUsingPOSTRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddServiceSetUsingPostRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddServiceSetUsingPostRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


