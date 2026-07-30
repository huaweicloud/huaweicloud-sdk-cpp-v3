

#include "huaweicloud/modelarts/v1/model/StartNotebookRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StartNotebookRequest::StartNotebookRequest()
{
    duration_ = 0L;
    durationIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

StartNotebookRequest::~StartNotebookRequest() = default;

void StartNotebookRequest::validate()
{
}

web::json::value StartNotebookRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool StartNotebookRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


int64_t StartNotebookRequest::getDuration() const
{
    return duration_;
}

void StartNotebookRequest::setDuration(int64_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool StartNotebookRequest::durationIsSet() const
{
    return durationIsSet_;
}

void StartNotebookRequest::unsetduration()
{
    durationIsSet_ = false;
}

std::string StartNotebookRequest::getId() const
{
    return id_;
}

void StartNotebookRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StartNotebookRequest::idIsSet() const
{
    return idIsSet_;
}

void StartNotebookRequest::unsetid()
{
    idIsSet_ = false;
}

std::string StartNotebookRequest::getType() const
{
    return type_;
}

void StartNotebookRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool StartNotebookRequest::typeIsSet() const
{
    return typeIsSet_;
}

void StartNotebookRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


