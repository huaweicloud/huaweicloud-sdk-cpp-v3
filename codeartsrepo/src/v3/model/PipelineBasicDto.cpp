

#include "huaweicloud/codeartsrepo/v3/model/PipelineBasicDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




PipelineBasicDto::PipelineBasicDto()
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
}

PipelineBasicDto::~PipelineBasicDto() = default;

void PipelineBasicDto::validate()
{
}

web::json::value PipelineBasicDto::toJson() const
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

    return val;
}
bool PipelineBasicDto::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t PipelineBasicDto::getId() const
{
    return id_;
}

void PipelineBasicDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PipelineBasicDto::idIsSet() const
{
    return idIsSet_;
}

void PipelineBasicDto::unsetid()
{
    idIsSet_ = false;
}

std::string PipelineBasicDto::getWebUrl() const
{
    return webUrl_;
}

void PipelineBasicDto::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool PipelineBasicDto::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void PipelineBasicDto::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::string PipelineBasicDto::getSha() const
{
    return sha_;
}

void PipelineBasicDto::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool PipelineBasicDto::shaIsSet() const
{
    return shaIsSet_;
}

void PipelineBasicDto::unsetsha()
{
    shaIsSet_ = false;
}

std::string PipelineBasicDto::getRef() const
{
    return ref_;
}

void PipelineBasicDto::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool PipelineBasicDto::refIsSet() const
{
    return refIsSet_;
}

void PipelineBasicDto::unsetref()
{
    refIsSet_ = false;
}

std::string PipelineBasicDto::getStatus() const
{
    return status_;
}

void PipelineBasicDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PipelineBasicDto::statusIsSet() const
{
    return statusIsSet_;
}

void PipelineBasicDto::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


