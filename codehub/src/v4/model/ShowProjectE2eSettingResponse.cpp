

#include "huaweicloud/codehub/v4/model/ShowProjectE2eSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowProjectE2eSettingResponse::ShowProjectE2eSettingResponse()
{
    e2ePoliciesIsSet_ = false;
    reqIsSet_ = false;
    linkIsSet_ = false;
}

ShowProjectE2eSettingResponse::~ShowProjectE2eSettingResponse() = default;

void ShowProjectE2eSettingResponse::validate()
{
}

web::json::value ShowProjectE2eSettingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(e2ePoliciesIsSet_) {
        val[utility::conversions::to_string_t("e2e_policies")] = ModelBase::toJson(e2ePolicies_);
    }
    if(reqIsSet_) {
        val[utility::conversions::to_string_t("req")] = ModelBase::toJson(req_);
    }
    if(linkIsSet_) {
        val[utility::conversions::to_string_t("link")] = ModelBase::toJson(link_);
    }

    return val;
}
bool ShowProjectE2eSettingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("e2e_policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("e2e_policies"));
        if(!fieldValue.is_null())
        {
            E2ePolicyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setE2ePolicies(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("req"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("req"));
        if(!fieldValue.is_null())
        {
            ReqSettingDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReq(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("link"));
        if(!fieldValue.is_null())
        {
            LinkSettingDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLink(refVal);
        }
    }
    return ok;
}


E2ePolicyDto ShowProjectE2eSettingResponse::getE2ePolicies() const
{
    return e2ePolicies_;
}

void ShowProjectE2eSettingResponse::setE2ePolicies(const E2ePolicyDto& value)
{
    e2ePolicies_ = value;
    e2ePoliciesIsSet_ = true;
}

bool ShowProjectE2eSettingResponse::e2ePoliciesIsSet() const
{
    return e2ePoliciesIsSet_;
}

void ShowProjectE2eSettingResponse::unsete2ePolicies()
{
    e2ePoliciesIsSet_ = false;
}

ReqSettingDto ShowProjectE2eSettingResponse::getReq() const
{
    return req_;
}

void ShowProjectE2eSettingResponse::setReq(const ReqSettingDto& value)
{
    req_ = value;
    reqIsSet_ = true;
}

bool ShowProjectE2eSettingResponse::reqIsSet() const
{
    return reqIsSet_;
}

void ShowProjectE2eSettingResponse::unsetreq()
{
    reqIsSet_ = false;
}

LinkSettingDto ShowProjectE2eSettingResponse::getLink() const
{
    return link_;
}

void ShowProjectE2eSettingResponse::setLink(const LinkSettingDto& value)
{
    link_ = value;
    linkIsSet_ = true;
}

bool ShowProjectE2eSettingResponse::linkIsSet() const
{
    return linkIsSet_;
}

void ShowProjectE2eSettingResponse::unsetlink()
{
    linkIsSet_ = false;
}

}
}
}
}
}


