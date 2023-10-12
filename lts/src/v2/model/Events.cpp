

#include "huaweicloud/lts/v2/model/Events.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




Events::Events()
{
    annotationsIsSet_ = false;
    metadataIsSet_ = false;
    arrivesAt_ = 0L;
    arrivesAtIsSet_ = false;
    endsAt_ = 0L;
    endsAtIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    startsAt_ = 0L;
    startsAtIsSet_ = false;
    timeout_ = 0L;
    timeoutIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

Events::~Events() = default;

void Events::validate()
{
}

web::json::value Events::toJson() const
{
    web::json::value val = web::json::value::object();

    if(annotationsIsSet_) {
        val[utility::conversions::to_string_t("annotations")] = ModelBase::toJson(annotations_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(arrivesAtIsSet_) {
        val[utility::conversions::to_string_t("arrives_at")] = ModelBase::toJson(arrivesAt_);
    }
    if(endsAtIsSet_) {
        val[utility::conversions::to_string_t("ends_at")] = ModelBase::toJson(endsAt_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(startsAtIsSet_) {
        val[utility::conversions::to_string_t("starts_at")] = ModelBase::toJson(startsAt_);
    }
    if(timeoutIsSet_) {
        val[utility::conversions::to_string_t("timeout")] = ModelBase::toJson(timeout_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool Events::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("annotations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("annotations"));
        if(!fieldValue.is_null())
        {
            Annotations refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnnotations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            Metadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("arrives_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arrives_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArrivesAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ends_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ends_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndsAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("starts_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("starts_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartsAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeout(refVal);
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


Annotations Events::getAnnotations() const
{
    return annotations_;
}

void Events::setAnnotations(const Annotations& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool Events::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void Events::unsetannotations()
{
    annotationsIsSet_ = false;
}

Metadata Events::getMetadata() const
{
    return metadata_;
}

void Events::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool Events::metadataIsSet() const
{
    return metadataIsSet_;
}

void Events::unsetmetadata()
{
    metadataIsSet_ = false;
}

int64_t Events::getArrivesAt() const
{
    return arrivesAt_;
}

void Events::setArrivesAt(int64_t value)
{
    arrivesAt_ = value;
    arrivesAtIsSet_ = true;
}

bool Events::arrivesAtIsSet() const
{
    return arrivesAtIsSet_;
}

void Events::unsetarrivesAt()
{
    arrivesAtIsSet_ = false;
}

int64_t Events::getEndsAt() const
{
    return endsAt_;
}

void Events::setEndsAt(int64_t value)
{
    endsAt_ = value;
    endsAtIsSet_ = true;
}

bool Events::endsAtIsSet() const
{
    return endsAtIsSet_;
}

void Events::unsetendsAt()
{
    endsAtIsSet_ = false;
}

std::string Events::getId() const
{
    return id_;
}

void Events::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Events::idIsSet() const
{
    return idIsSet_;
}

void Events::unsetid()
{
    idIsSet_ = false;
}

int64_t Events::getStartsAt() const
{
    return startsAt_;
}

void Events::setStartsAt(int64_t value)
{
    startsAt_ = value;
    startsAtIsSet_ = true;
}

bool Events::startsAtIsSet() const
{
    return startsAtIsSet_;
}

void Events::unsetstartsAt()
{
    startsAtIsSet_ = false;
}

int64_t Events::getTimeout() const
{
    return timeout_;
}

void Events::setTimeout(int64_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool Events::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void Events::unsettimeout()
{
    timeoutIsSet_ = false;
}

std::string Events::getType() const
{
    return type_;
}

void Events::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Events::typeIsSet() const
{
    return typeIsSet_;
}

void Events::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


