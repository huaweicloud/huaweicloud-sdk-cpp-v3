

#include "huaweicloud/codeartsartifact/v2/model/TrashArtifactModelForDelete.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




TrashArtifactModelForDelete::TrashArtifactModelForDelete()
{
    id_ = "";
    idIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    uri_ = "";
    uriIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    includePattern_ = "";
    includePatternIsSet_ = false;
}

TrashArtifactModelForDelete::~TrashArtifactModelForDelete() = default;

void TrashArtifactModelForDelete::validate()
{
}

web::json::value TrashArtifactModelForDelete::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(includePatternIsSet_) {
        val[utility::conversions::to_string_t("include_pattern")] = ModelBase::toJson(includePattern_);
    }

    return val;
}
bool TrashArtifactModelForDelete::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("include_pattern"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_pattern"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludePattern(refVal);
        }
    }
    return ok;
}


std::string TrashArtifactModelForDelete::getId() const
{
    return id_;
}

void TrashArtifactModelForDelete::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TrashArtifactModelForDelete::idIsSet() const
{
    return idIsSet_;
}

void TrashArtifactModelForDelete::unsetid()
{
    idIsSet_ = false;
}

std::string TrashArtifactModelForDelete::getFormat() const
{
    return format_;
}

void TrashArtifactModelForDelete::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool TrashArtifactModelForDelete::formatIsSet() const
{
    return formatIsSet_;
}

void TrashArtifactModelForDelete::unsetformat()
{
    formatIsSet_ = false;
}

std::string TrashArtifactModelForDelete::getUri() const
{
    return uri_;
}

void TrashArtifactModelForDelete::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool TrashArtifactModelForDelete::uriIsSet() const
{
    return uriIsSet_;
}

void TrashArtifactModelForDelete::unseturi()
{
    uriIsSet_ = false;
}

std::string TrashArtifactModelForDelete::getStatus() const
{
    return status_;
}

void TrashArtifactModelForDelete::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TrashArtifactModelForDelete::statusIsSet() const
{
    return statusIsSet_;
}

void TrashArtifactModelForDelete::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TrashArtifactModelForDelete::getIncludePattern() const
{
    return includePattern_;
}

void TrashArtifactModelForDelete::setIncludePattern(const std::string& value)
{
    includePattern_ = value;
    includePatternIsSet_ = true;
}

bool TrashArtifactModelForDelete::includePatternIsSet() const
{
    return includePatternIsSet_;
}

void TrashArtifactModelForDelete::unsetincludePattern()
{
    includePatternIsSet_ = false;
}

}
}
}
}
}


