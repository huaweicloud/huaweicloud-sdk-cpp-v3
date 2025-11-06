

#include "huaweicloud/codeartsrepo/v4/model/ShowLastPushEventInRepositoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowLastPushEventInRepositoryResponse::ShowLastPushEventInRepositoryResponse()
{
    ref_ = "";
    refIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    repositoryIsSet_ = false;
}

ShowLastPushEventInRepositoryResponse::~ShowLastPushEventInRepositoryResponse() = default;

void ShowLastPushEventInRepositoryResponse::validate()
{
}

web::json::value ShowLastPushEventInRepositoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(repositoryIsSet_) {
        val[utility::conversions::to_string_t("repository")] = ModelBase::toJson(repository_);
    }

    return val;
}
bool ShowLastPushEventInRepositoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRef(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repository"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository"));
        if(!fieldValue.is_null())
        {
            RepositoryBriefDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepository(refVal);
        }
    }
    return ok;
}


std::string ShowLastPushEventInRepositoryResponse::getRef() const
{
    return ref_;
}

void ShowLastPushEventInRepositoryResponse::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool ShowLastPushEventInRepositoryResponse::refIsSet() const
{
    return refIsSet_;
}

void ShowLastPushEventInRepositoryResponse::unsetref()
{
    refIsSet_ = false;
}

std::string ShowLastPushEventInRepositoryResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowLastPushEventInRepositoryResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowLastPushEventInRepositoryResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowLastPushEventInRepositoryResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

RepositoryBriefDto ShowLastPushEventInRepositoryResponse::getRepository() const
{
    return repository_;
}

void ShowLastPushEventInRepositoryResponse::setRepository(const RepositoryBriefDto& value)
{
    repository_ = value;
    repositoryIsSet_ = true;
}

bool ShowLastPushEventInRepositoryResponse::repositoryIsSet() const
{
    return repositoryIsSet_;
}

void ShowLastPushEventInRepositoryResponse::unsetrepository()
{
    repositoryIsSet_ = false;
}

}
}
}
}
}


