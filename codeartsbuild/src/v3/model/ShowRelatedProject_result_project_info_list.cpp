

#include "huaweicloud/codeartsbuild/v3/model/ShowRelatedProject_result_project_info_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowRelatedProject_result_project_info_list::ShowRelatedProject_result_project_info_list()
{
    identifier_ = "";
    identifierIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    authorId_ = "";
    authorIdIsSet_ = false;
    isCreator_ = false;
    isCreatorIsSet_ = false;
    authorDomainId_ = "";
    authorDomainIdIsSet_ = false;
}

ShowRelatedProject_result_project_info_list::~ShowRelatedProject_result_project_info_list() = default;

void ShowRelatedProject_result_project_info_list::validate()
{
}

web::json::value ShowRelatedProject_result_project_info_list::toJson() const
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
    if(isCreatorIsSet_) {
        val[utility::conversions::to_string_t("is_creator")] = ModelBase::toJson(isCreator_);
    }
    if(authorDomainIdIsSet_) {
        val[utility::conversions::to_string_t("author_domain_id")] = ModelBase::toJson(authorDomainId_);
    }

    return val;
}
bool ShowRelatedProject_result_project_info_list::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_creator"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCreator(refVal);
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


std::string ShowRelatedProject_result_project_info_list::getIdentifier() const
{
    return identifier_;
}

void ShowRelatedProject_result_project_info_list::setIdentifier(const std::string& value)
{
    identifier_ = value;
    identifierIsSet_ = true;
}

bool ShowRelatedProject_result_project_info_list::identifierIsSet() const
{
    return identifierIsSet_;
}

void ShowRelatedProject_result_project_info_list::unsetidentifier()
{
    identifierIsSet_ = false;
}

std::string ShowRelatedProject_result_project_info_list::getName() const
{
    return name_;
}

void ShowRelatedProject_result_project_info_list::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowRelatedProject_result_project_info_list::nameIsSet() const
{
    return nameIsSet_;
}

void ShowRelatedProject_result_project_info_list::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowRelatedProject_result_project_info_list::getAuthorId() const
{
    return authorId_;
}

void ShowRelatedProject_result_project_info_list::setAuthorId(const std::string& value)
{
    authorId_ = value;
    authorIdIsSet_ = true;
}

bool ShowRelatedProject_result_project_info_list::authorIdIsSet() const
{
    return authorIdIsSet_;
}

void ShowRelatedProject_result_project_info_list::unsetauthorId()
{
    authorIdIsSet_ = false;
}

bool ShowRelatedProject_result_project_info_list::isIsCreator() const
{
    return isCreator_;
}

void ShowRelatedProject_result_project_info_list::setIsCreator(bool value)
{
    isCreator_ = value;
    isCreatorIsSet_ = true;
}

bool ShowRelatedProject_result_project_info_list::isCreatorIsSet() const
{
    return isCreatorIsSet_;
}

void ShowRelatedProject_result_project_info_list::unsetisCreator()
{
    isCreatorIsSet_ = false;
}

std::string ShowRelatedProject_result_project_info_list::getAuthorDomainId() const
{
    return authorDomainId_;
}

void ShowRelatedProject_result_project_info_list::setAuthorDomainId(const std::string& value)
{
    authorDomainId_ = value;
    authorDomainIdIsSet_ = true;
}

bool ShowRelatedProject_result_project_info_list::authorDomainIdIsSet() const
{
    return authorDomainIdIsSet_;
}

void ShowRelatedProject_result_project_info_list::unsetauthorDomainId()
{
    authorDomainIdIsSet_ = false;
}

}
}
}
}
}


