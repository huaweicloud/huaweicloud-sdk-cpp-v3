

#include "huaweicloud/codeartsrepo/v4/model/CheckGroupDeployKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CheckGroupDeployKeyRequest::CheckGroupDeployKeyRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

CheckGroupDeployKeyRequest::~CheckGroupDeployKeyRequest() = default;

void CheckGroupDeployKeyRequest::validate()
{
}

web::json::value CheckGroupDeployKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CheckGroupDeployKeyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeployKeyValueDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CheckGroupDeployKeyRequest::getGroupId() const
{
    return groupId_;
}

void CheckGroupDeployKeyRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CheckGroupDeployKeyRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CheckGroupDeployKeyRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

DeployKeyValueDto CheckGroupDeployKeyRequest::getBody() const
{
    return body_;
}

void CheckGroupDeployKeyRequest::setBody(const DeployKeyValueDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckGroupDeployKeyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckGroupDeployKeyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


