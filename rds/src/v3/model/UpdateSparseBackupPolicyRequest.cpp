

#include "huaweicloud/rds/v3/model/UpdateSparseBackupPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateSparseBackupPolicyRequest::UpdateSparseBackupPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSparseBackupPolicyRequest::~UpdateSparseBackupPolicyRequest() = default;

void UpdateSparseBackupPolicyRequest::validate()
{
}

web::json::value UpdateSparseBackupPolicyRequest::toJson() const
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
bool UpdateSparseBackupPolicyRequest::fromJson(const web::json::value& val)
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
            UpdateSparseBackupPolicyReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateSparseBackupPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateSparseBackupPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateSparseBackupPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateSparseBackupPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateSparseBackupPolicyReq UpdateSparseBackupPolicyRequest::getBody() const
{
    return body_;
}

void UpdateSparseBackupPolicyRequest::setBody(const UpdateSparseBackupPolicyReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSparseBackupPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSparseBackupPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


