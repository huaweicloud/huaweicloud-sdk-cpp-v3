

#include "huaweicloud/live/v1/model/LiveDomainModifyReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




LiveDomainModifyReq::LiveDomainModifyReq()
{
    domain_ = "";
    domainIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

LiveDomainModifyReq::~LiveDomainModifyReq() = default;

void LiveDomainModifyReq::validate()
{
}

web::json::value LiveDomainModifyReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}

bool LiveDomainModifyReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    return ok;
}


std::string LiveDomainModifyReq::getDomain() const
{
    return domain_;
}

void LiveDomainModifyReq::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool LiveDomainModifyReq::domainIsSet() const
{
    return domainIsSet_;
}

void LiveDomainModifyReq::unsetdomain()
{
    domainIsSet_ = false;
}

std::string LiveDomainModifyReq::getStatus() const
{
    return status_;
}

void LiveDomainModifyReq::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool LiveDomainModifyReq::statusIsSet() const
{
    return statusIsSet_;
}

void LiveDomainModifyReq::unsetstatus()
{
    statusIsSet_ = false;
}

std::string LiveDomainModifyReq::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void LiveDomainModifyReq::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool LiveDomainModifyReq::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void LiveDomainModifyReq::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


