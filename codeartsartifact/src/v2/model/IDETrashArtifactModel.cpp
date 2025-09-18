

#include "huaweicloud/codeartsartifact/v2/model/IDETrashArtifactModel.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




IDETrashArtifactModel::IDETrashArtifactModel()
{
    id_ = "";
    idIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    uri_ = "";
    uriIsSet_ = false;
}

IDETrashArtifactModel::~IDETrashArtifactModel() = default;

void IDETrashArtifactModel::validate()
{
}

web::json::value IDETrashArtifactModel::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }

    return val;
}
bool IDETrashArtifactModel::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    return ok;
}


std::string IDETrashArtifactModel::getId() const
{
    return id_;
}

void IDETrashArtifactModel::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IDETrashArtifactModel::idIsSet() const
{
    return idIsSet_;
}

void IDETrashArtifactModel::unsetid()
{
    idIsSet_ = false;
}

std::string IDETrashArtifactModel::getFormat() const
{
    return format_;
}

void IDETrashArtifactModel::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool IDETrashArtifactModel::formatIsSet() const
{
    return formatIsSet_;
}

void IDETrashArtifactModel::unsetformat()
{
    formatIsSet_ = false;
}

std::string IDETrashArtifactModel::getStatus() const
{
    return status_;
}

void IDETrashArtifactModel::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool IDETrashArtifactModel::statusIsSet() const
{
    return statusIsSet_;
}

void IDETrashArtifactModel::unsetstatus()
{
    statusIsSet_ = false;
}

std::string IDETrashArtifactModel::getUri() const
{
    return uri_;
}

void IDETrashArtifactModel::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool IDETrashArtifactModel::uriIsSet() const
{
    return uriIsSet_;
}

void IDETrashArtifactModel::unseturi()
{
    uriIsSet_ = false;
}

}
}
}
}
}


