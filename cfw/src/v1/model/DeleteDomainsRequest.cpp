

#include "huaweicloud/cfw/v1/model/DeleteDomainsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteDomainsRequest::DeleteDomainsRequest()
{
    setId_ = "";
    setIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteDomainsRequest::~DeleteDomainsRequest() = default;

void DeleteDomainsRequest::validate()
{
}

web::json::value DeleteDomainsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }
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
bool DeleteDomainsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
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
            DeleteDomainDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteDomainsRequest::getSetId() const
{
    return setId_;
}

void DeleteDomainsRequest::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool DeleteDomainsRequest::setIdIsSet() const
{
    return setIdIsSet_;
}

void DeleteDomainsRequest::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string DeleteDomainsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DeleteDomainsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DeleteDomainsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DeleteDomainsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string DeleteDomainsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void DeleteDomainsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool DeleteDomainsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void DeleteDomainsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

DeleteDomainDto DeleteDomainsRequest::getBody() const
{
    return body_;
}

void DeleteDomainsRequest::setBody(const DeleteDomainDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteDomainsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteDomainsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


