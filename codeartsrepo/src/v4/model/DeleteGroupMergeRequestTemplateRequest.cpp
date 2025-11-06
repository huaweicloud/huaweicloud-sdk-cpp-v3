

#include "huaweicloud/codeartsrepo/v4/model/DeleteGroupMergeRequestTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DeleteGroupMergeRequestTemplateRequest::DeleteGroupMergeRequestTemplateRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    templateId_ = 0;
    templateIdIsSet_ = false;
}

DeleteGroupMergeRequestTemplateRequest::~DeleteGroupMergeRequestTemplateRequest() = default;

void DeleteGroupMergeRequestTemplateRequest::validate()
{
}

web::json::value DeleteGroupMergeRequestTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool DeleteGroupMergeRequestTemplateRequest::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t DeleteGroupMergeRequestTemplateRequest::getGroupId() const
{
    return groupId_;
}

void DeleteGroupMergeRequestTemplateRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeleteGroupMergeRequestTemplateRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeleteGroupMergeRequestTemplateRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t DeleteGroupMergeRequestTemplateRequest::getTemplateId() const
{
    return templateId_;
}

void DeleteGroupMergeRequestTemplateRequest::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool DeleteGroupMergeRequestTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void DeleteGroupMergeRequestTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


