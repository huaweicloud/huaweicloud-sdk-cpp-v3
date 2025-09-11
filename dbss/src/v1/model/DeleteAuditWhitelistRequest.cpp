

#include "huaweicloud/dbss/v1/model/DeleteAuditWhitelistRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditWhitelistRequest::DeleteAuditWhitelistRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteAuditWhitelistRequest::~DeleteAuditWhitelistRequest() = default;

void DeleteAuditWhitelistRequest::validate()
{
}

web::json::value DeleteAuditWhitelistRequest::toJson() const
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
bool DeleteAuditWhitelistRequest::fromJson(const web::json::value& val)
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
            WhitelistBatchDeleteRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteAuditWhitelistRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteAuditWhitelistRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteAuditWhitelistRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteAuditWhitelistRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

WhitelistBatchDeleteRequest DeleteAuditWhitelistRequest::getBody() const
{
    return body_;
}

void DeleteAuditWhitelistRequest::setBody(const WhitelistBatchDeleteRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteAuditWhitelistRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteAuditWhitelistRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


