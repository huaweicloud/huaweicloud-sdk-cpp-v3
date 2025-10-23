

#include "huaweicloud/codehub/v4/model/UpdateGroupMergeRequestTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateGroupMergeRequestTemplateRequest::UpdateGroupMergeRequestTemplateRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    templateId_ = 0;
    templateIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGroupMergeRequestTemplateRequest::~UpdateGroupMergeRequestTemplateRequest() = default;

void UpdateGroupMergeRequestTemplateRequest::validate()
{
}

web::json::value UpdateGroupMergeRequestTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateGroupMergeRequestTemplateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
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


int32_t UpdateGroupMergeRequestTemplateRequest::getGroupId() const
{
    return groupId_;
}

void UpdateGroupMergeRequestTemplateRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateGroupMergeRequestTemplateRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateGroupMergeRequestTemplateRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t UpdateGroupMergeRequestTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void UpdateGroupMergeRequestTemplateRequest::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool UpdateGroupMergeRequestTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void UpdateGroupMergeRequestTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

CreateMergeRequestTemplateDto UpdateGroupMergeRequestTemplateRequest::getBody() const
{
    return body_;
}

void UpdateGroupMergeRequestTemplateRequest::setBody(const CreateMergeRequestTemplateDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGroupMergeRequestTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGroupMergeRequestTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


