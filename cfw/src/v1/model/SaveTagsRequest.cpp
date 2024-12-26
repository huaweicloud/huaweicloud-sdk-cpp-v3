

#include "huaweicloud/cfw/v1/model/SaveTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




SaveTagsRequest::SaveTagsRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

SaveTagsRequest::~SaveTagsRequest() = default;

void SaveTagsRequest::validate()
{
}

web::json::value SaveTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SaveTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateTagsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SaveTagsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void SaveTagsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool SaveTagsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void SaveTagsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string SaveTagsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void SaveTagsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool SaveTagsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void SaveTagsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

CreateTagsDto SaveTagsRequest::getBody() const
{
    return body_;
}

void SaveTagsRequest::setBody(const CreateTagsDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SaveTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SaveTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


