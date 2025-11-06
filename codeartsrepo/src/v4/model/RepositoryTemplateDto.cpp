

#include "huaweicloud/codeartsrepo/v4/model/RepositoryTemplateDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RepositoryTemplateDto::RepositoryTemplateDto()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    system_ = false;
    systemIsSet_ = false;
    tagsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
    briefIntroduction_ = "";
    briefIntroductionIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    usedTimes_ = 0;
    usedTimesIsSet_ = false;
    likedTimes_ = 0;
    likedTimesIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    httpsUrl_ = "";
    httpsUrlIsSet_ = false;
}

RepositoryTemplateDto::~RepositoryTemplateDto() = default;

void RepositoryTemplateDto::validate()
{
}

web::json::value RepositoryTemplateDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(systemIsSet_) {
        val[utility::conversions::to_string_t("system")] = ModelBase::toJson(system_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repository_name")] = ModelBase::toJson(repositoryName_);
    }
    if(briefIntroductionIsSet_) {
        val[utility::conversions::to_string_t("brief_introduction")] = ModelBase::toJson(briefIntroduction_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(usedTimesIsSet_) {
        val[utility::conversions::to_string_t("used_times")] = ModelBase::toJson(usedTimes_);
    }
    if(likedTimesIsSet_) {
        val[utility::conversions::to_string_t("liked_times")] = ModelBase::toJson(likedTimes_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(httpsUrlIsSet_) {
        val[utility::conversions::to_string_t("https_url")] = ModelBase::toJson(httpsUrl_);
    }

    return val;
}
bool RepositoryTemplateDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("system"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("brief_introduction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("brief_introduction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBriefIntroduction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("liked_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("liked_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLikedTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("https_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("https_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpsUrl(refVal);
        }
    }
    return ok;
}


int32_t RepositoryTemplateDto::getRepositoryId() const
{
    return repositoryId_;
}

void RepositoryTemplateDto::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool RepositoryTemplateDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void RepositoryTemplateDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string RepositoryTemplateDto::getName() const
{
    return name_;
}

void RepositoryTemplateDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RepositoryTemplateDto::nameIsSet() const
{
    return nameIsSet_;
}

void RepositoryTemplateDto::unsetname()
{
    nameIsSet_ = false;
}

bool RepositoryTemplateDto::isSystem() const
{
    return system_;
}

void RepositoryTemplateDto::setSystem(bool value)
{
    system_ = value;
    systemIsSet_ = true;
}

bool RepositoryTemplateDto::systemIsSet() const
{
    return systemIsSet_;
}

void RepositoryTemplateDto::unsetsystem()
{
    systemIsSet_ = false;
}

std::vector<std::string>& RepositoryTemplateDto::getTags()
{
    return tags_;
}

void RepositoryTemplateDto::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool RepositoryTemplateDto::tagsIsSet() const
{
    return tagsIsSet_;
}

void RepositoryTemplateDto::unsettags()
{
    tagsIsSet_ = false;
}

std::string RepositoryTemplateDto::getDescription() const
{
    return description_;
}

void RepositoryTemplateDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RepositoryTemplateDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RepositoryTemplateDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string RepositoryTemplateDto::getLanguage() const
{
    return language_;
}

void RepositoryTemplateDto::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool RepositoryTemplateDto::languageIsSet() const
{
    return languageIsSet_;
}

void RepositoryTemplateDto::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string RepositoryTemplateDto::getRepositoryName() const
{
    return repositoryName_;
}

void RepositoryTemplateDto::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool RepositoryTemplateDto::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void RepositoryTemplateDto::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

std::string RepositoryTemplateDto::getBriefIntroduction() const
{
    return briefIntroduction_;
}

void RepositoryTemplateDto::setBriefIntroduction(const std::string& value)
{
    briefIntroduction_ = value;
    briefIntroductionIsSet_ = true;
}

bool RepositoryTemplateDto::briefIntroductionIsSet() const
{
    return briefIntroductionIsSet_;
}

void RepositoryTemplateDto::unsetbriefIntroduction()
{
    briefIntroductionIsSet_ = false;
}

std::string RepositoryTemplateDto::getCreatedAt() const
{
    return createdAt_;
}

void RepositoryTemplateDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RepositoryTemplateDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RepositoryTemplateDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

int32_t RepositoryTemplateDto::getUsedTimes() const
{
    return usedTimes_;
}

void RepositoryTemplateDto::setUsedTimes(int32_t value)
{
    usedTimes_ = value;
    usedTimesIsSet_ = true;
}

bool RepositoryTemplateDto::usedTimesIsSet() const
{
    return usedTimesIsSet_;
}

void RepositoryTemplateDto::unsetusedTimes()
{
    usedTimesIsSet_ = false;
}

int32_t RepositoryTemplateDto::getLikedTimes() const
{
    return likedTimes_;
}

void RepositoryTemplateDto::setLikedTimes(int32_t value)
{
    likedTimes_ = value;
    likedTimesIsSet_ = true;
}

bool RepositoryTemplateDto::likedTimesIsSet() const
{
    return likedTimesIsSet_;
}

void RepositoryTemplateDto::unsetlikedTimes()
{
    likedTimesIsSet_ = false;
}

std::string RepositoryTemplateDto::getCreatorName() const
{
    return creatorName_;
}

void RepositoryTemplateDto::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool RepositoryTemplateDto::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void RepositoryTemplateDto::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string RepositoryTemplateDto::getHttpsUrl() const
{
    return httpsUrl_;
}

void RepositoryTemplateDto::setHttpsUrl(const std::string& value)
{
    httpsUrl_ = value;
    httpsUrlIsSet_ = true;
}

bool RepositoryTemplateDto::httpsUrlIsSet() const
{
    return httpsUrlIsSet_;
}

void RepositoryTemplateDto::unsethttpsUrl()
{
    httpsUrlIsSet_ = false;
}

}
}
}
}
}


