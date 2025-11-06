

#include "huaweicloud/codeartsrepo/v4/model/ListMergeRequestTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListMergeRequestTemplatesRequest::ListMergeRequestTemplatesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    view_ = "";
    viewIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListMergeRequestTemplatesRequest::~ListMergeRequestTemplatesRequest() = default;

void ListMergeRequestTemplatesRequest::validate()
{
}

web::json::value ListMergeRequestTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(viewIsSet_) {
        val[utility::conversions::to_string_t("view")] = ModelBase::toJson(view_);
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
bool ListMergeRequestTemplatesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setView(refVal);
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


int32_t ListMergeRequestTemplatesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListMergeRequestTemplatesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListMergeRequestTemplatesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListMergeRequestTemplatesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListMergeRequestTemplatesRequest::getView() const
{
    return view_;
}

void ListMergeRequestTemplatesRequest::setView(const std::string& value)
{
    view_ = value;
    viewIsSet_ = true;
}

bool ListMergeRequestTemplatesRequest::viewIsSet() const
{
    return viewIsSet_;
}

void ListMergeRequestTemplatesRequest::unsetview()
{
    viewIsSet_ = false;
}

std::string ListMergeRequestTemplatesRequest::getTemplateName() const
{
    return templateName_;
}

void ListMergeRequestTemplatesRequest::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool ListMergeRequestTemplatesRequest::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void ListMergeRequestTemplatesRequest::unsettemplateName()
{
    templateNameIsSet_ = false;
}

int32_t ListMergeRequestTemplatesRequest::getOffset() const
{
    return offset_;
}

void ListMergeRequestTemplatesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMergeRequestTemplatesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMergeRequestTemplatesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMergeRequestTemplatesRequest::getLimit() const
{
    return limit_;
}

void ListMergeRequestTemplatesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMergeRequestTemplatesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListMergeRequestTemplatesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


