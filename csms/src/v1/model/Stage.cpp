

#include "huaweicloud/csms/v1/model/Stage.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




Stage::Stage()
{
    name_ = "";
    nameIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    secretName_ = "";
    secretNameIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
}

Stage::~Stage() = default;

void Stage::validate()
{
}

web::json::value Stage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }
    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }

    return val;
}

bool Stage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionId(refVal);
        }
    }
    return ok;
}

std::string Stage::getName() const
{
    return name_;
}

void Stage::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Stage::nameIsSet() const
{
    return nameIsSet_;
}

void Stage::unsetname()
{
    nameIsSet_ = false;
}

int64_t Stage::getUpdateTime() const
{
    return updateTime_;
}

void Stage::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool Stage::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void Stage::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string Stage::getSecretName() const
{
    return secretName_;
}

void Stage::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool Stage::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void Stage::unsetsecretName()
{
    secretNameIsSet_ = false;
}

std::string Stage::getVersionId() const
{
    return versionId_;
}

void Stage::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool Stage::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void Stage::unsetversionId()
{
    versionIdIsSet_ = false;
}

}
}
}
}
}


