

#include "huaweicloud/codehub/v4/model/ShowUserRefPermissionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowUserRefPermissionRequest::ShowUserRefPermissionRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    targetRef_ = "";
    targetRefIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    changeRequestIid_ = 0;
    changeRequestIidIsSet_ = false;
}

ShowUserRefPermissionRequest::~ShowUserRefPermissionRequest() = default;

void ShowUserRefPermissionRequest::validate()
{
}

web::json::value ShowUserRefPermissionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(targetRefIsSet_) {
        val[utility::conversions::to_string_t("target_ref")] = ModelBase::toJson(targetRef_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(changeRequestIidIsSet_) {
        val[utility::conversions::to_string_t("change_request_iid")] = ModelBase::toJson(changeRequestIid_);
    }

    return val;
}
bool ShowUserRefPermissionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("change_request_iid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("change_request_iid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChangeRequestIid(refVal);
        }
    }
    return ok;
}


int32_t ShowUserRefPermissionRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowUserRefPermissionRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowUserRefPermissionRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowUserRefPermissionRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowUserRefPermissionRequest::getTargetRef() const
{
    return targetRef_;
}

void ShowUserRefPermissionRequest::setTargetRef(const std::string& value)
{
    targetRef_ = value;
    targetRefIsSet_ = true;
}

bool ShowUserRefPermissionRequest::targetRefIsSet() const
{
    return targetRefIsSet_;
}

void ShowUserRefPermissionRequest::unsettargetRef()
{
    targetRefIsSet_ = false;
}

std::string ShowUserRefPermissionRequest::getAction() const
{
    return action_;
}

void ShowUserRefPermissionRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ShowUserRefPermissionRequest::actionIsSet() const
{
    return actionIsSet_;
}

void ShowUserRefPermissionRequest::unsetaction()
{
    actionIsSet_ = false;
}

int32_t ShowUserRefPermissionRequest::getChangeRequestIid() const
{
    return changeRequestIid_;
}

void ShowUserRefPermissionRequest::setChangeRequestIid(int32_t value)
{
    changeRequestIid_ = value;
    changeRequestIidIsSet_ = true;
}

bool ShowUserRefPermissionRequest::changeRequestIidIsSet() const
{
    return changeRequestIidIsSet_;
}

void ShowUserRefPermissionRequest::unsetchangeRequestIid()
{
    changeRequestIidIsSet_ = false;
}

}
}
}
}
}


