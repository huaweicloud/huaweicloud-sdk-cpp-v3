

#include "huaweicloud/codeartsrepo/v4/model/DeleteMergeRequestApproverSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DeleteMergeRequestApproverSettingRequest::DeleteMergeRequestApproverSettingRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    settingId_ = 0;
    settingIdIsSet_ = false;
}

DeleteMergeRequestApproverSettingRequest::~DeleteMergeRequestApproverSettingRequest() = default;

void DeleteMergeRequestApproverSettingRequest::validate()
{
}

web::json::value DeleteMergeRequestApproverSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(settingIdIsSet_) {
        val[utility::conversions::to_string_t("setting_id")] = ModelBase::toJson(settingId_);
    }

    return val;
}
bool DeleteMergeRequestApproverSettingRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("setting_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("setting_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSettingId(refVal);
        }
    }
    return ok;
}


int32_t DeleteMergeRequestApproverSettingRequest::getRepositoryId() const
{
    return repositoryId_;
}

void DeleteMergeRequestApproverSettingRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool DeleteMergeRequestApproverSettingRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void DeleteMergeRequestApproverSettingRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t DeleteMergeRequestApproverSettingRequest::getSettingId() const
{
    return settingId_;
}

void DeleteMergeRequestApproverSettingRequest::setSettingId(int32_t value)
{
    settingId_ = value;
    settingIdIsSet_ = true;
}

bool DeleteMergeRequestApproverSettingRequest::settingIdIsSet() const
{
    return settingIdIsSet_;
}

void DeleteMergeRequestApproverSettingRequest::unsetsettingId()
{
    settingIdIsSet_ = false;
}

}
}
}
}
}


