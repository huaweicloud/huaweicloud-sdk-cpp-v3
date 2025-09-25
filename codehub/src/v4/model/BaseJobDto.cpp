

#include "huaweicloud/codehub/v4/model/BaseJobDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BaseJobDto::BaseJobDto()
{
    id_ = 0;
    idIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    targetUrl_ = "";
    targetUrlIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    startedAt_ = "";
    startedAtIsSet_ = false;
    finishedAt_ = "";
    finishedAtIsSet_ = false;
    thirdBuildId_ = "";
    thirdBuildIdIsSet_ = false;
}

BaseJobDto::~BaseJobDto() = default;

void BaseJobDto::validate()
{
}

web::json::value BaseJobDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }
    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(targetUrlIsSet_) {
        val[utility::conversions::to_string_t("target_url")] = ModelBase::toJson(targetUrl_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(startedAtIsSet_) {
        val[utility::conversions::to_string_t("started_at")] = ModelBase::toJson(startedAt_);
    }
    if(finishedAtIsSet_) {
        val[utility::conversions::to_string_t("finished_at")] = ModelBase::toJson(finishedAt_);
    }
    if(thirdBuildIdIsSet_) {
        val[utility::conversions::to_string_t("third_build_id")] = ModelBase::toJson(thirdBuildId_);
    }

    return val;
}
bool BaseJobDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("target_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("started_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("started_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finished_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finished_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("third_build_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("third_build_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThirdBuildId(refVal);
        }
    }
    return ok;
}


int32_t BaseJobDto::getId() const
{
    return id_;
}

void BaseJobDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BaseJobDto::idIsSet() const
{
    return idIsSet_;
}

void BaseJobDto::unsetid()
{
    idIsSet_ = false;
}

std::string BaseJobDto::getSha() const
{
    return sha_;
}

void BaseJobDto::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool BaseJobDto::shaIsSet() const
{
    return shaIsSet_;
}

void BaseJobDto::unsetsha()
{
    shaIsSet_ = false;
}

std::string BaseJobDto::getRef() const
{
    return ref_;
}

void BaseJobDto::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool BaseJobDto::refIsSet() const
{
    return refIsSet_;
}

void BaseJobDto::unsetref()
{
    refIsSet_ = false;
}

std::string BaseJobDto::getStatus() const
{
    return status_;
}

void BaseJobDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BaseJobDto::statusIsSet() const
{
    return statusIsSet_;
}

void BaseJobDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BaseJobDto::getName() const
{
    return name_;
}

void BaseJobDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BaseJobDto::nameIsSet() const
{
    return nameIsSet_;
}

void BaseJobDto::unsetname()
{
    nameIsSet_ = false;
}

std::string BaseJobDto::getTargetUrl() const
{
    return targetUrl_;
}

void BaseJobDto::setTargetUrl(const std::string& value)
{
    targetUrl_ = value;
    targetUrlIsSet_ = true;
}

bool BaseJobDto::targetUrlIsSet() const
{
    return targetUrlIsSet_;
}

void BaseJobDto::unsettargetUrl()
{
    targetUrlIsSet_ = false;
}

std::string BaseJobDto::getCreatedAt() const
{
    return createdAt_;
}

void BaseJobDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool BaseJobDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void BaseJobDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string BaseJobDto::getUpdatedAt() const
{
    return updatedAt_;
}

void BaseJobDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool BaseJobDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void BaseJobDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string BaseJobDto::getStartedAt() const
{
    return startedAt_;
}

void BaseJobDto::setStartedAt(const std::string& value)
{
    startedAt_ = value;
    startedAtIsSet_ = true;
}

bool BaseJobDto::startedAtIsSet() const
{
    return startedAtIsSet_;
}

void BaseJobDto::unsetstartedAt()
{
    startedAtIsSet_ = false;
}

std::string BaseJobDto::getFinishedAt() const
{
    return finishedAt_;
}

void BaseJobDto::setFinishedAt(const std::string& value)
{
    finishedAt_ = value;
    finishedAtIsSet_ = true;
}

bool BaseJobDto::finishedAtIsSet() const
{
    return finishedAtIsSet_;
}

void BaseJobDto::unsetfinishedAt()
{
    finishedAtIsSet_ = false;
}

std::string BaseJobDto::getThirdBuildId() const
{
    return thirdBuildId_;
}

void BaseJobDto::setThirdBuildId(const std::string& value)
{
    thirdBuildId_ = value;
    thirdBuildIdIsSet_ = true;
}

bool BaseJobDto::thirdBuildIdIsSet() const
{
    return thirdBuildIdIsSet_;
}

void BaseJobDto::unsetthirdBuildId()
{
    thirdBuildIdIsSet_ = false;
}

}
}
}
}
}


