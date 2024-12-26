

#include "huaweicloud/cfw/v1/model/BatchDeleteDomainSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteDomainSetRequest::BatchDeleteDomainSetRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteDomainSetRequest::~BatchDeleteDomainSetRequest() = default;

void BatchDeleteDomainSetRequest::validate()
{
}

web::json::value BatchDeleteDomainSetRequest::toJson() const
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
bool BatchDeleteDomainSetRequest::fromJson(const web::json::value& val)
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
            BatchDeleteDomainSetsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteDomainSetRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void BatchDeleteDomainSetRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool BatchDeleteDomainSetRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void BatchDeleteDomainSetRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string BatchDeleteDomainSetRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void BatchDeleteDomainSetRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool BatchDeleteDomainSetRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void BatchDeleteDomainSetRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

BatchDeleteDomainSetsDto BatchDeleteDomainSetRequest::getBody() const
{
    return body_;
}

void BatchDeleteDomainSetRequest::setBody(const BatchDeleteDomainSetsDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteDomainSetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteDomainSetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


