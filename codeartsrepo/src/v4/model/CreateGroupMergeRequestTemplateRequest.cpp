

#include "huaweicloud/codeartsrepo/v4/model/CreateGroupMergeRequestTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateGroupMergeRequestTemplateRequest::CreateGroupMergeRequestTemplateRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateGroupMergeRequestTemplateRequest::~CreateGroupMergeRequestTemplateRequest() = default;

void CreateGroupMergeRequestTemplateRequest::validate()
{
}

web::json::value CreateGroupMergeRequestTemplateRequest::toJson() const
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
bool CreateGroupMergeRequestTemplateRequest::fromJson(const web::json::value& val)
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
            CreateMergeRequestTemplateDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CreateGroupMergeRequestTemplateRequest::getGroupId() const
{
    return groupId_;
}

void CreateGroupMergeRequestTemplateRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CreateGroupMergeRequestTemplateRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CreateGroupMergeRequestTemplateRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

CreateMergeRequestTemplateDto CreateGroupMergeRequestTemplateRequest::getBody() const
{
    return body_;
}

void CreateGroupMergeRequestTemplateRequest::setBody(const CreateMergeRequestTemplateDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateGroupMergeRequestTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateGroupMergeRequestTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


