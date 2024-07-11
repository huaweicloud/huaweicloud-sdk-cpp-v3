

#include "huaweicloud/codeartsdeploy/v2/model/BatchDeleteHostsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




BatchDeleteHostsRequest::BatchDeleteHostsRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteHostsRequest::~BatchDeleteHostsRequest() = default;

void BatchDeleteHostsRequest::validate()
{
}

web::json::value BatchDeleteHostsRequest::toJson() const
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
bool BatchDeleteHostsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeploymentHostListEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteHostsRequest::getGroupId() const
{
    return groupId_;
}

void BatchDeleteHostsRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool BatchDeleteHostsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void BatchDeleteHostsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

DeploymentHostListEntity BatchDeleteHostsRequest::getBody() const
{
    return body_;
}

void BatchDeleteHostsRequest::setBody(const DeploymentHostListEntity& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteHostsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteHostsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


