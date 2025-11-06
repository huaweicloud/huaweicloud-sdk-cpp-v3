

#include "huaweicloud/codeartsrepo/v3/model/TemplateRepository.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




TemplateRepository::TemplateRepository()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    tagsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    briefIntroduction_ = "";
    briefIntroductionIsSet_ = false;
    autoPendingPipelines_ = 0;
    autoPendingPipelinesIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
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

TemplateRepository::~TemplateRepository() = default;

void TemplateRepository::validate()
{
}

web::json::value TemplateRepository::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(briefIntroductionIsSet_) {
        val[utility::conversions::to_string_t("brief_introduction")] = ModelBase::toJson(briefIntroduction_);
    }
    if(autoPendingPipelinesIsSet_) {
        val[utility::conversions::to_string_t("auto_pending_pipelines")] = ModelBase::toJson(autoPendingPipelines_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
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
bool TemplateRepository::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("brief_introduction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("brief_introduction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBriefIntroduction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_pending_pipelines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_pending_pipelines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoPendingPipelines(refVal);
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


int32_t TemplateRepository::getId() const
{
    return id_;
}

void TemplateRepository::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TemplateRepository::idIsSet() const
{
    return idIsSet_;
}

void TemplateRepository::unsetid()
{
    idIsSet_ = false;
}

std::string TemplateRepository::getName() const
{
    return name_;
}

void TemplateRepository::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TemplateRepository::nameIsSet() const
{
    return nameIsSet_;
}

void TemplateRepository::unsetname()
{
    nameIsSet_ = false;
}

std::string TemplateRepository::getTemplateName() const
{
    return templateName_;
}

void TemplateRepository::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool TemplateRepository::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void TemplateRepository::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::vector<std::string>& TemplateRepository::getTags()
{
    return tags_;
}

void TemplateRepository::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool TemplateRepository::tagsIsSet() const
{
    return tagsIsSet_;
}

void TemplateRepository::unsettags()
{
    tagsIsSet_ = false;
}

std::string TemplateRepository::getDescription() const
{
    return description_;
}

void TemplateRepository::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TemplateRepository::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TemplateRepository::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string TemplateRepository::getBriefIntroduction() const
{
    return briefIntroduction_;
}

void TemplateRepository::setBriefIntroduction(const std::string& value)
{
    briefIntroduction_ = value;
    briefIntroductionIsSet_ = true;
}

bool TemplateRepository::briefIntroductionIsSet() const
{
    return briefIntroductionIsSet_;
}

void TemplateRepository::unsetbriefIntroduction()
{
    briefIntroductionIsSet_ = false;
}

int32_t TemplateRepository::getAutoPendingPipelines() const
{
    return autoPendingPipelines_;
}

void TemplateRepository::setAutoPendingPipelines(int32_t value)
{
    autoPendingPipelines_ = value;
    autoPendingPipelinesIsSet_ = true;
}

bool TemplateRepository::autoPendingPipelinesIsSet() const
{
    return autoPendingPipelinesIsSet_;
}

void TemplateRepository::unsetautoPendingPipelines()
{
    autoPendingPipelinesIsSet_ = false;
}

std::string TemplateRepository::getLanguage() const
{
    return language_;
}

void TemplateRepository::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool TemplateRepository::languageIsSet() const
{
    return languageIsSet_;
}

void TemplateRepository::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string TemplateRepository::getCreatedAt() const
{
    return createdAt_;
}

void TemplateRepository::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool TemplateRepository::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void TemplateRepository::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

int32_t TemplateRepository::getUsedTimes() const
{
    return usedTimes_;
}

void TemplateRepository::setUsedTimes(int32_t value)
{
    usedTimes_ = value;
    usedTimesIsSet_ = true;
}

bool TemplateRepository::usedTimesIsSet() const
{
    return usedTimesIsSet_;
}

void TemplateRepository::unsetusedTimes()
{
    usedTimesIsSet_ = false;
}

int32_t TemplateRepository::getLikedTimes() const
{
    return likedTimes_;
}

void TemplateRepository::setLikedTimes(int32_t value)
{
    likedTimes_ = value;
    likedTimesIsSet_ = true;
}

bool TemplateRepository::likedTimesIsSet() const
{
    return likedTimesIsSet_;
}

void TemplateRepository::unsetlikedTimes()
{
    likedTimesIsSet_ = false;
}

std::string TemplateRepository::getCreatorName() const
{
    return creatorName_;
}

void TemplateRepository::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool TemplateRepository::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void TemplateRepository::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string TemplateRepository::getHttpsUrl() const
{
    return httpsUrl_;
}

void TemplateRepository::setHttpsUrl(const std::string& value)
{
    httpsUrl_ = value;
    httpsUrlIsSet_ = true;
}

bool TemplateRepository::httpsUrlIsSet() const
{
    return httpsUrlIsSet_;
}

void TemplateRepository::unsethttpsUrl()
{
    httpsUrlIsSet_ = false;
}

}
}
}
}
}


