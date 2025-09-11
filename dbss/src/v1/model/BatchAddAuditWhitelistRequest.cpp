

#include "huaweicloud/dbss/v1/model/BatchAddAuditWhitelistRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BatchAddAuditWhitelistRequest::BatchAddAuditWhitelistRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchAddAuditWhitelistRequest::~BatchAddAuditWhitelistRequest() = default;

void BatchAddAuditWhitelistRequest::validate()
{
}

web::json::value BatchAddAuditWhitelistRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchAddAuditWhitelistRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddWhitelistRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchAddAuditWhitelistRequest::getInstanceId() const
{
    return instanceId_;
}

void BatchAddAuditWhitelistRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BatchAddAuditWhitelistRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BatchAddAuditWhitelistRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AddWhitelistRequest BatchAddAuditWhitelistRequest::getBody() const
{
    return body_;
}

void BatchAddAuditWhitelistRequest::setBody(const AddWhitelistRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAddAuditWhitelistRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAddAuditWhitelistRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


