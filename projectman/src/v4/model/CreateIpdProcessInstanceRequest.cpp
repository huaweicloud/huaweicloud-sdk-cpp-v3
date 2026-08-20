

#include "huaweicloud/projectman/v4/model/CreateIpdProcessInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateIpdProcessInstanceRequest::CreateIpdProcessInstanceRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    operateType_ = "";
    operateTypeIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateIpdProcessInstanceRequest::~CreateIpdProcessInstanceRequest() = default;

void CreateIpdProcessInstanceRequest::validate()
{
}

web::json::value CreateIpdProcessInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(operateTypeIsSet_) {
        val[utility::conversions::to_string_t("operate_type")] = ModelBase::toJson(operateType_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateIpdProcessInstanceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateProcessInstanceReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateIpdProcessInstanceRequest::getProjectId() const
{
    return projectId_;
}

void CreateIpdProcessInstanceRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateIpdProcessInstanceRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateIpdProcessInstanceRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreateIpdProcessInstanceRequest::getOperateType() const
{
    return operateType_;
}

void CreateIpdProcessInstanceRequest::setOperateType(const std::string& value)
{
    operateType_ = value;
    operateTypeIsSet_ = true;
}

bool CreateIpdProcessInstanceRequest::operateTypeIsSet() const
{
    return operateTypeIsSet_;
}

void CreateIpdProcessInstanceRequest::unsetoperateType()
{
    operateTypeIsSet_ = false;
}

std::string CreateIpdProcessInstanceRequest::getDomainId() const
{
    return domainId_;
}

void CreateIpdProcessInstanceRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateIpdProcessInstanceRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateIpdProcessInstanceRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

CreateProcessInstanceReq CreateIpdProcessInstanceRequest::getBody() const
{
    return body_;
}

void CreateIpdProcessInstanceRequest::setBody(const CreateProcessInstanceReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateIpdProcessInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateIpdProcessInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


