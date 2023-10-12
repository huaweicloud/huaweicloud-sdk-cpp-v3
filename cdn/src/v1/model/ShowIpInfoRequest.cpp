

#include "huaweicloud/cdn/v1/model/ShowIpInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowIpInfoRequest::ShowIpInfoRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    ips_ = "";
    ipsIsSet_ = false;
}

ShowIpInfoRequest::~ShowIpInfoRequest() = default;

void ShowIpInfoRequest::validate()
{
}

web::json::value ShowIpInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(ipsIsSet_) {
        val[utility::conversions::to_string_t("ips")] = ModelBase::toJson(ips_);
    }

    return val;
}
bool ShowIpInfoRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIps(refVal);
        }
    }
    return ok;
}


std::string ShowIpInfoRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowIpInfoRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowIpInfoRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowIpInfoRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ShowIpInfoRequest::getIps() const
{
    return ips_;
}

void ShowIpInfoRequest::setIps(const std::string& value)
{
    ips_ = value;
    ipsIsSet_ = true;
}

bool ShowIpInfoRequest::ipsIsSet() const
{
    return ipsIsSet_;
}

void ShowIpInfoRequest::unsetips()
{
    ipsIsSet_ = false;
}

}
}
}
}
}


