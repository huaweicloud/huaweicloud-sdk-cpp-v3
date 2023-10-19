

#include "huaweicloud/cfw/v1/model/ListFirewallListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListFirewallListRequest::ListFirewallListRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListFirewallListRequest::~ListFirewallListRequest() = default;

void ListFirewallListRequest::validate()
{
}

web::json::value ListFirewallListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListFirewallListRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            QueryFireWallInstanceDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListFirewallListRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListFirewallListRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListFirewallListRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListFirewallListRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

QueryFireWallInstanceDto ListFirewallListRequest::getBody() const
{
    return body_;
}

void ListFirewallListRequest::setBody(const QueryFireWallInstanceDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListFirewallListRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListFirewallListRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


