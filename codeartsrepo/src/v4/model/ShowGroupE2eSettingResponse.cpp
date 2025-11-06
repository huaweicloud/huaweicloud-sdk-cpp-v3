

#include "huaweicloud/codeartsrepo/v4/model/ShowGroupE2eSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowGroupE2eSettingResponse::ShowGroupE2eSettingResponse()
{
    e2ePoliciesIsSet_ = false;
    reqIsSet_ = false;
    linkIsSet_ = false;
}

ShowGroupE2eSettingResponse::~ShowGroupE2eSettingResponse() = default;

void ShowGroupE2eSettingResponse::validate()
{
}

web::json::value ShowGroupE2eSettingResponse::toJson() const
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
bool ShowGroupE2eSettingResponse::fromJson(const web::json::value& val)
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


E2ePolicyDto ShowGroupE2eSettingResponse::getE2ePolicies() const
{
    return e2ePolicies_;
}

void ShowGroupE2eSettingResponse::setE2ePolicies(const E2ePolicyDto& value)
{
    e2ePolicies_ = value;
    e2ePoliciesIsSet_ = true;
}

bool ShowGroupE2eSettingResponse::e2ePoliciesIsSet() const
{
    return e2ePoliciesIsSet_;
}

void ShowGroupE2eSettingResponse::unsete2ePolicies()
{
    e2ePoliciesIsSet_ = false;
}

ReqSettingDto ShowGroupE2eSettingResponse::getReq() const
{
    return req_;
}

void ShowGroupE2eSettingResponse::setReq(const ReqSettingDto& value)
{
    req_ = value;
    reqIsSet_ = true;
}

bool ShowGroupE2eSettingResponse::reqIsSet() const
{
    return reqIsSet_;
}

void ShowGroupE2eSettingResponse::unsetreq()
{
    reqIsSet_ = false;
}

LinkSettingDto ShowGroupE2eSettingResponse::getLink() const
{
    return link_;
}

void ShowGroupE2eSettingResponse::setLink(const LinkSettingDto& value)
{
    link_ = value;
    linkIsSet_ = true;
}

bool ShowGroupE2eSettingResponse::linkIsSet() const
{
    return linkIsSet_;
}

void ShowGroupE2eSettingResponse::unsetlink()
{
    linkIsSet_ = false;
}

}
}
}
}
}


