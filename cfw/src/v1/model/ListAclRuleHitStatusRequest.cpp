

#include "huaweicloud/cfw/v1/model/ListAclRuleHitStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAclRuleHitStatusRequest::ListAclRuleHitStatusRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListAclRuleHitStatusRequest::~ListAclRuleHitStatusRequest() = default;

void ListAclRuleHitStatusRequest::validate()
{
}

web::json::value ListAclRuleHitStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListAclRuleHitStatusRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListAclRuleHitStatusRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListAclRuleHitStatusRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListAclRuleHitStatusRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListAclRuleHitStatusRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListAclRuleHitStatusRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

ListAclRuleHitStatusRequestBody ListAclRuleHitStatusRequest::getBody() const
{
    return body_;
}

void ListAclRuleHitStatusRequest::setBody(const ListAclRuleHitStatusRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAclRuleHitStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAclRuleHitStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


