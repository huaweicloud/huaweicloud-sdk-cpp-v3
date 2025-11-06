

#include "huaweicloud/codeartsrepo/v4/model/JobWithStageDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




JobWithStageDto::JobWithStageDto()
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
    stageId_ = 0;
    stageIdIsSet_ = false;
    stage_ = "";
    stageIsSet_ = false;
}

JobWithStageDto::~JobWithStageDto() = default;

void JobWithStageDto::validate()
{
}

web::json::value JobWithStageDto::toJson() const
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
    if(stageIdIsSet_) {
        val[utility::conversions::to_string_t("stage_id")] = ModelBase::toJson(stageId_);
    }
    if(stageIsSet_) {
        val[utility::conversions::to_string_t("stage")] = ModelBase::toJson(stage_);
    }

    return val;
}
bool JobWithStageDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("stage_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStage(refVal);
        }
    }
    return ok;
}


int32_t JobWithStageDto::getId() const
{
    return id_;
}

void JobWithStageDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool JobWithStageDto::idIsSet() const
{
    return idIsSet_;
}

void JobWithStageDto::unsetid()
{
    idIsSet_ = false;
}

std::string JobWithStageDto::getSha() const
{
    return sha_;
}

void JobWithStageDto::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool JobWithStageDto::shaIsSet() const
{
    return shaIsSet_;
}

void JobWithStageDto::unsetsha()
{
    shaIsSet_ = false;
}

std::string JobWithStageDto::getRef() const
{
    return ref_;
}

void JobWithStageDto::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool JobWithStageDto::refIsSet() const
{
    return refIsSet_;
}

void JobWithStageDto::unsetref()
{
    refIsSet_ = false;
}

std::string JobWithStageDto::getStatus() const
{
    return status_;
}

void JobWithStageDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool JobWithStageDto::statusIsSet() const
{
    return statusIsSet_;
}

void JobWithStageDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::string JobWithStageDto::getName() const
{
    return name_;
}

void JobWithStageDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobWithStageDto::nameIsSet() const
{
    return nameIsSet_;
}

void JobWithStageDto::unsetname()
{
    nameIsSet_ = false;
}

std::string JobWithStageDto::getTargetUrl() const
{
    return targetUrl_;
}

void JobWithStageDto::setTargetUrl(const std::string& value)
{
    targetUrl_ = value;
    targetUrlIsSet_ = true;
}

bool JobWithStageDto::targetUrlIsSet() const
{
    return targetUrlIsSet_;
}

void JobWithStageDto::unsettargetUrl()
{
    targetUrlIsSet_ = false;
}

std::string JobWithStageDto::getCreatedAt() const
{
    return createdAt_;
}

void JobWithStageDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool JobWithStageDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void JobWithStageDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string JobWithStageDto::getUpdatedAt() const
{
    return updatedAt_;
}

void JobWithStageDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool JobWithStageDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void JobWithStageDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string JobWithStageDto::getStartedAt() const
{
    return startedAt_;
}

void JobWithStageDto::setStartedAt(const std::string& value)
{
    startedAt_ = value;
    startedAtIsSet_ = true;
}

bool JobWithStageDto::startedAtIsSet() const
{
    return startedAtIsSet_;
}

void JobWithStageDto::unsetstartedAt()
{
    startedAtIsSet_ = false;
}

std::string JobWithStageDto::getFinishedAt() const
{
    return finishedAt_;
}

void JobWithStageDto::setFinishedAt(const std::string& value)
{
    finishedAt_ = value;
    finishedAtIsSet_ = true;
}

bool JobWithStageDto::finishedAtIsSet() const
{
    return finishedAtIsSet_;
}

void JobWithStageDto::unsetfinishedAt()
{
    finishedAtIsSet_ = false;
}

std::string JobWithStageDto::getThirdBuildId() const
{
    return thirdBuildId_;
}

void JobWithStageDto::setThirdBuildId(const std::string& value)
{
    thirdBuildId_ = value;
    thirdBuildIdIsSet_ = true;
}

bool JobWithStageDto::thirdBuildIdIsSet() const
{
    return thirdBuildIdIsSet_;
}

void JobWithStageDto::unsetthirdBuildId()
{
    thirdBuildIdIsSet_ = false;
}

int32_t JobWithStageDto::getStageId() const
{
    return stageId_;
}

void JobWithStageDto::setStageId(int32_t value)
{
    stageId_ = value;
    stageIdIsSet_ = true;
}

bool JobWithStageDto::stageIdIsSet() const
{
    return stageIdIsSet_;
}

void JobWithStageDto::unsetstageId()
{
    stageIdIsSet_ = false;
}

std::string JobWithStageDto::getStage() const
{
    return stage_;
}

void JobWithStageDto::setStage(const std::string& value)
{
    stage_ = value;
    stageIsSet_ = true;
}

bool JobWithStageDto::stageIsSet() const
{
    return stageIsSet_;
}

void JobWithStageDto::unsetstage()
{
    stageIsSet_ = false;
}

}
}
}
}
}


