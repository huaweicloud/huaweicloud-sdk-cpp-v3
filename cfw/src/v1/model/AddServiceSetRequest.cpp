

#include "huaweicloud/cfw/v1/model/AddServiceSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddServiceSetRequest::AddServiceSetRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddServiceSetRequest::~AddServiceSetRequest() = default;

void AddServiceSetRequest::validate()
{
}

web::json::value AddServiceSetRequest::toJson() const
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
bool AddServiceSetRequest::fromJson(const web::json::value& val)
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


std::string AddServiceSetRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void AddServiceSetRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool AddServiceSetRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void AddServiceSetRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string AddServiceSetRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void AddServiceSetRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool AddServiceSetRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void AddServiceSetRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

AddServiceSetUsingPOSTRequestBody AddServiceSetRequest::getBody() const
{
    return body_;
}

void AddServiceSetRequest::setBody(const AddServiceSetUsingPOSTRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddServiceSetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddServiceSetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


