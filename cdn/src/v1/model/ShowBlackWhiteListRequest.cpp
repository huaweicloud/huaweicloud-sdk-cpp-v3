

#include "huaweicloud/cdn/v1/model/ShowBlackWhiteListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowBlackWhiteListRequest::ShowBlackWhiteListRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ShowBlackWhiteListRequest::~ShowBlackWhiteListRequest() = default;

void ShowBlackWhiteListRequest::validate()
{
}

web::json::value ShowBlackWhiteListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool ShowBlackWhiteListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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


std::string ShowBlackWhiteListRequest::getDomainId() const
{
    return domainId_;
}

void ShowBlackWhiteListRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowBlackWhiteListRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowBlackWhiteListRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowBlackWhiteListRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowBlackWhiteListRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowBlackWhiteListRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowBlackWhiteListRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


