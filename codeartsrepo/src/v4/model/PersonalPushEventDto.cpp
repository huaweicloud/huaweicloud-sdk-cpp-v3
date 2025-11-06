

#include "huaweicloud/codeartsrepo/v4/model/PersonalPushEventDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




PersonalPushEventDto::PersonalPushEventDto()
{
    authorIsSet_ = false;
    repositoryIsSet_ = false;
    pushDataIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
}

PersonalPushEventDto::~PersonalPushEventDto() = default;

void PersonalPushEventDto::validate()
{
}

web::json::value PersonalPushEventDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(repositoryIsSet_) {
        val[utility::conversions::to_string_t("repository")] = ModelBase::toJson(repository_);
    }
    if(pushDataIsSet_) {
        val[utility::conversions::to_string_t("push_data")] = ModelBase::toJson(pushData_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }

    return val;
}
bool PersonalPushEventDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            PersonalEventAuthorDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository"));
        if(!fieldValue.is_null())
        {
            RepositorySimpleDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepository(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("push_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("push_data"));
        if(!fieldValue.is_null())
        {
            PushEventPayloadDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPushData(refVal);
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
    return ok;
}


PersonalEventAuthorDto PersonalPushEventDto::getAuthor() const
{
    return author_;
}

void PersonalPushEventDto::setAuthor(const PersonalEventAuthorDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool PersonalPushEventDto::authorIsSet() const
{
    return authorIsSet_;
}

void PersonalPushEventDto::unsetauthor()
{
    authorIsSet_ = false;
}

RepositorySimpleDto PersonalPushEventDto::getRepository() const
{
    return repository_;
}

void PersonalPushEventDto::setRepository(const RepositorySimpleDto& value)
{
    repository_ = value;
    repositoryIsSet_ = true;
}

bool PersonalPushEventDto::repositoryIsSet() const
{
    return repositoryIsSet_;
}

void PersonalPushEventDto::unsetrepository()
{
    repositoryIsSet_ = false;
}

PushEventPayloadDto PersonalPushEventDto::getPushData() const
{
    return pushData_;
}

void PersonalPushEventDto::setPushData(const PushEventPayloadDto& value)
{
    pushData_ = value;
    pushDataIsSet_ = true;
}

bool PersonalPushEventDto::pushDataIsSet() const
{
    return pushDataIsSet_;
}

void PersonalPushEventDto::unsetpushData()
{
    pushDataIsSet_ = false;
}

std::string PersonalPushEventDto::getCreatedAt() const
{
    return createdAt_;
}

void PersonalPushEventDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool PersonalPushEventDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void PersonalPushEventDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}


