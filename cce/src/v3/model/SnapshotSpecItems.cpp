

#include "huaweicloud/cce/v3/model/SnapshotSpecItems.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




SnapshotSpecItems::SnapshotSpecItems()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    creationTimestamp_ = "";
    creationTimestampIsSet_ = false;
    updateTimestamp_ = "";
    updateTimestampIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

SnapshotSpecItems::~SnapshotSpecItems() = default;

void SnapshotSpecItems::validate()
{
}

web::json::value SnapshotSpecItems::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(creationTimestampIsSet_) {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(creationTimestamp_);
    }
    if(updateTimestampIsSet_) {
        val[utility::conversions::to_string_t("updateTimestamp")] = ModelBase::toJson(updateTimestamp_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool SnapshotSpecItems::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("creationTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creationTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string SnapshotSpecItems::getId() const
{
    return id_;
}

void SnapshotSpecItems::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SnapshotSpecItems::idIsSet() const
{
    return idIsSet_;
}

void SnapshotSpecItems::unsetid()
{
    idIsSet_ = false;
}

std::string SnapshotSpecItems::getType() const
{
    return type_;
}

void SnapshotSpecItems::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SnapshotSpecItems::typeIsSet() const
{
    return typeIsSet_;
}

void SnapshotSpecItems::unsettype()
{
    typeIsSet_ = false;
}

std::string SnapshotSpecItems::getStatus() const
{
    return status_;
}

void SnapshotSpecItems::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SnapshotSpecItems::statusIsSet() const
{
    return statusIsSet_;
}

void SnapshotSpecItems::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SnapshotSpecItems::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void SnapshotSpecItems::setCreationTimestamp(const std::string& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool SnapshotSpecItems::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void SnapshotSpecItems::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

std::string SnapshotSpecItems::getUpdateTimestamp() const
{
    return updateTimestamp_;
}

void SnapshotSpecItems::setUpdateTimestamp(const std::string& value)
{
    updateTimestamp_ = value;
    updateTimestampIsSet_ = true;
}

bool SnapshotSpecItems::updateTimestampIsSet() const
{
    return updateTimestampIsSet_;
}

void SnapshotSpecItems::unsetupdateTimestamp()
{
    updateTimestampIsSet_ = false;
}

std::string SnapshotSpecItems::getMessage() const
{
    return message_;
}

void SnapshotSpecItems::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool SnapshotSpecItems::messageIsSet() const
{
    return messageIsSet_;
}

void SnapshotSpecItems::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


