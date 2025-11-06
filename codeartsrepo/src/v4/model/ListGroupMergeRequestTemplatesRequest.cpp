

#include "huaweicloud/codeartsrepo/v4/model/ListGroupMergeRequestTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListGroupMergeRequestTemplatesRequest::ListGroupMergeRequestTemplatesRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListGroupMergeRequestTemplatesRequest::~ListGroupMergeRequestTemplatesRequest() = default;

void ListGroupMergeRequestTemplatesRequest::validate()
{
}

web::json::value ListGroupMergeRequestTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListGroupMergeRequestTemplatesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


int32_t ListGroupMergeRequestTemplatesRequest::getGroupId() const
{
    return groupId_;
}

void ListGroupMergeRequestTemplatesRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListGroupMergeRequestTemplatesRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListGroupMergeRequestTemplatesRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ListGroupMergeRequestTemplatesRequest::getTemplateName() const
{
    return templateName_;
}

void ListGroupMergeRequestTemplatesRequest::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool ListGroupMergeRequestTemplatesRequest::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void ListGroupMergeRequestTemplatesRequest::unsettemplateName()
{
    templateNameIsSet_ = false;
}

int32_t ListGroupMergeRequestTemplatesRequest::getOffset() const
{
    return offset_;
}

void ListGroupMergeRequestTemplatesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGroupMergeRequestTemplatesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGroupMergeRequestTemplatesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGroupMergeRequestTemplatesRequest::getLimit() const
{
    return limit_;
}

void ListGroupMergeRequestTemplatesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGroupMergeRequestTemplatesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGroupMergeRequestTemplatesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


