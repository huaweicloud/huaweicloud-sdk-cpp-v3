

#include "huaweicloud/codehub/v4/model/CreateMergeRequestApproverSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateMergeRequestApproverSettingRequest::CreateMergeRequestApproverSettingRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateMergeRequestApproverSettingRequest::~CreateMergeRequestApproverSettingRequest() = default;

void CreateMergeRequestApproverSettingRequest::validate()
{
}

web::json::value CreateMergeRequestApproverSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateMergeRequestApproverSettingRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            MergeRequestApproverSettingResultDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CreateMergeRequestApproverSettingRequest::getRepositoryId() const
{
    return repositoryId_;
}

void CreateMergeRequestApproverSettingRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateMergeRequestApproverSettingRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateMergeRequestApproverSettingRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

MergeRequestApproverSettingResultDto CreateMergeRequestApproverSettingRequest::getBody() const
{
    return body_;
}

void CreateMergeRequestApproverSettingRequest::setBody(const MergeRequestApproverSettingResultDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMergeRequestApproverSettingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMergeRequestApproverSettingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


