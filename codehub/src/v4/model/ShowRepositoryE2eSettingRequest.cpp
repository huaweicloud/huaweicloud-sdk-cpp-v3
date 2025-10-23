

#include "huaweicloud/codehub/v4/model/ShowRepositoryE2eSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowRepositoryE2eSettingRequest::ShowRepositoryE2eSettingRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    takeEffect_ = false;
    takeEffectIsSet_ = false;
}

ShowRepositoryE2eSettingRequest::~ShowRepositoryE2eSettingRequest() = default;

void ShowRepositoryE2eSettingRequest::validate()
{
}

web::json::value ShowRepositoryE2eSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(takeEffectIsSet_) {
        val[utility::conversions::to_string_t("take_effect")] = ModelBase::toJson(takeEffect_);
    }

    return val;
}
bool ShowRepositoryE2eSettingRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("take_effect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("take_effect"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTakeEffect(refVal);
        }
    }
    return ok;
}


int32_t ShowRepositoryE2eSettingRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowRepositoryE2eSettingRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowRepositoryE2eSettingRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowRepositoryE2eSettingRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

bool ShowRepositoryE2eSettingRequest::isTakeEffect() const
{
    return takeEffect_;
}

void ShowRepositoryE2eSettingRequest::setTakeEffect(bool value)
{
    takeEffect_ = value;
    takeEffectIsSet_ = true;
}

bool ShowRepositoryE2eSettingRequest::takeEffectIsSet() const
{
    return takeEffectIsSet_;
}

void ShowRepositoryE2eSettingRequest::unsettakeEffect()
{
    takeEffectIsSet_ = false;
}

}
}
}
}
}


