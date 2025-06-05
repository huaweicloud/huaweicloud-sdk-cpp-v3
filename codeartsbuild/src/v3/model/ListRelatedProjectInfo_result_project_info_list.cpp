

#include "huaweicloud/codeartsbuild/v3/model/ListRelatedProjectInfo_result_project_info_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListRelatedProjectInfo_result_project_info_list::ListRelatedProjectInfo_result_project_info_list()
{
    identifier_ = "";
    identifierIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    authorId_ = "";
    authorIdIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    authorDomainId_ = "";
    authorDomainIdIsSet_ = false;
}

ListRelatedProjectInfo_result_project_info_list::~ListRelatedProjectInfo_result_project_info_list() = default;

void ListRelatedProjectInfo_result_project_info_list::validate()
{
}

web::json::value ListRelatedProjectInfo_result_project_info_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identifierIsSet_) {
        val[utility::conversions::to_string_t("identifier")] = ModelBase::toJson(identifier_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(authorIdIsSet_) {
        val[utility::conversions::to_string_t("author_id")] = ModelBase::toJson(authorId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(authorDomainIdIsSet_) {
        val[utility::conversions::to_string_t("author_domain_id")] = ModelBase::toJson(authorDomainId_);
    }

    return val;
}
bool ListRelatedProjectInfo_result_project_info_list::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("identifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentifier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorDomainId(refVal);
        }
    }
    return ok;
}


std::string ListRelatedProjectInfo_result_project_info_list::getIdentifier() const
{
    return identifier_;
}

void ListRelatedProjectInfo_result_project_info_list::setIdentifier(const std::string& value)
{
    identifier_ = value;
    identifierIsSet_ = true;
}

bool ListRelatedProjectInfo_result_project_info_list::identifierIsSet() const
{
    return identifierIsSet_;
}

void ListRelatedProjectInfo_result_project_info_list::unsetidentifier()
{
    identifierIsSet_ = false;
}

std::string ListRelatedProjectInfo_result_project_info_list::getName() const
{
    return name_;
}

void ListRelatedProjectInfo_result_project_info_list::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListRelatedProjectInfo_result_project_info_list::nameIsSet() const
{
    return nameIsSet_;
}

void ListRelatedProjectInfo_result_project_info_list::unsetname()
{
    nameIsSet_ = false;
}

std::string ListRelatedProjectInfo_result_project_info_list::getAuthorId() const
{
    return authorId_;
}

void ListRelatedProjectInfo_result_project_info_list::setAuthorId(const std::string& value)
{
    authorId_ = value;
    authorIdIsSet_ = true;
}

bool ListRelatedProjectInfo_result_project_info_list::authorIdIsSet() const
{
    return authorIdIsSet_;
}

void ListRelatedProjectInfo_result_project_info_list::unsetauthorId()
{
    authorIdIsSet_ = false;
}

int32_t ListRelatedProjectInfo_result_project_info_list::getStatus() const
{
    return status_;
}

void ListRelatedProjectInfo_result_project_info_list::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListRelatedProjectInfo_result_project_info_list::statusIsSet() const
{
    return statusIsSet_;
}

void ListRelatedProjectInfo_result_project_info_list::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListRelatedProjectInfo_result_project_info_list::getAuthorDomainId() const
{
    return authorDomainId_;
}

void ListRelatedProjectInfo_result_project_info_list::setAuthorDomainId(const std::string& value)
{
    authorDomainId_ = value;
    authorDomainIdIsSet_ = true;
}

bool ListRelatedProjectInfo_result_project_info_list::authorDomainIdIsSet() const
{
    return authorDomainIdIsSet_;
}

void ListRelatedProjectInfo_result_project_info_list::unsetauthorDomainId()
{
    authorDomainIdIsSet_ = false;
}

}
}
}
}
}


