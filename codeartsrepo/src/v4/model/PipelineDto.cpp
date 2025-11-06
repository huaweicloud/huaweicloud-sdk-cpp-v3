

#include "huaweicloud/codeartsrepo/v4/model/PipelineDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




PipelineDto::PipelineDto()
{
    id_ = 0;
    idIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    startedAt_ = "";
    startedAtIsSet_ = false;
    finishedAt_ = "";
    finishedAtIsSet_ = false;
}

PipelineDto::~PipelineDto() = default;

void PipelineDto::validate()
{
}

web::json::value PipelineDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
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

    return val;
}
bool PipelineDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("web_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("web_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebUrl(refVal);
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
    return ok;
}


int32_t PipelineDto::getId() const
{
    return id_;
}

void PipelineDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PipelineDto::idIsSet() const
{
    return idIsSet_;
}

void PipelineDto::unsetid()
{
    idIsSet_ = false;
}

std::string PipelineDto::getWebUrl() const
{
    return webUrl_;
}

void PipelineDto::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool PipelineDto::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void PipelineDto::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::string PipelineDto::getSha() const
{
    return sha_;
}

void PipelineDto::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool PipelineDto::shaIsSet() const
{
    return shaIsSet_;
}

void PipelineDto::unsetsha()
{
    shaIsSet_ = false;
}

std::string PipelineDto::getRef() const
{
    return ref_;
}

void PipelineDto::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool PipelineDto::refIsSet() const
{
    return refIsSet_;
}

void PipelineDto::unsetref()
{
    refIsSet_ = false;
}

std::string PipelineDto::getStatus() const
{
    return status_;
}

void PipelineDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PipelineDto::statusIsSet() const
{
    return statusIsSet_;
}

void PipelineDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::string PipelineDto::getCreatedAt() const
{
    return createdAt_;
}

void PipelineDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool PipelineDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void PipelineDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string PipelineDto::getUpdatedAt() const
{
    return updatedAt_;
}

void PipelineDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool PipelineDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void PipelineDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string PipelineDto::getStartedAt() const
{
    return startedAt_;
}

void PipelineDto::setStartedAt(const std::string& value)
{
    startedAt_ = value;
    startedAtIsSet_ = true;
}

bool PipelineDto::startedAtIsSet() const
{
    return startedAtIsSet_;
}

void PipelineDto::unsetstartedAt()
{
    startedAtIsSet_ = false;
}

std::string PipelineDto::getFinishedAt() const
{
    return finishedAt_;
}

void PipelineDto::setFinishedAt(const std::string& value)
{
    finishedAt_ = value;
    finishedAtIsSet_ = true;
}

bool PipelineDto::finishedAtIsSet() const
{
    return finishedAtIsSet_;
}

void PipelineDto::unsetfinishedAt()
{
    finishedAtIsSet_ = false;
}

}
}
}
}
}


