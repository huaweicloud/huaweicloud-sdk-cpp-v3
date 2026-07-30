

#include "huaweicloud/modelarts/v1/model/ShowSaveImageJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowSaveImageJobResponse::ShowSaveImageJobResponse()
{
    name_ = "";
    nameIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
}

ShowSaveImageJobResponse::~ShowSaveImageJobResponse() = default;

void ShowSaveImageJobResponse::validate()
{
}

web::json::value ShowSaveImageJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool ShowSaveImageJobResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    return ok;
}


std::string ShowSaveImageJobResponse::getName() const
{
    return name_;
}

void ShowSaveImageJobResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowSaveImageJobResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowSaveImageJobResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowSaveImageJobResponse::getNamespace() const
{
    return namespace_;
}

void ShowSaveImageJobResponse::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ShowSaveImageJobResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ShowSaveImageJobResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string ShowSaveImageJobResponse::getTag() const
{
    return tag_;
}

void ShowSaveImageJobResponse::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ShowSaveImageJobResponse::tagIsSet() const
{
    return tagIsSet_;
}

void ShowSaveImageJobResponse::unsettag()
{
    tagIsSet_ = false;
}

std::string ShowSaveImageJobResponse::getDescription() const
{
    return description_;
}

void ShowSaveImageJobResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowSaveImageJobResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowSaveImageJobResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowSaveImageJobResponse::getStatus() const
{
    return status_;
}

void ShowSaveImageJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowSaveImageJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowSaveImageJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowSaveImageJobResponse::getMessage() const
{
    return message_;
}

void ShowSaveImageJobResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowSaveImageJobResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowSaveImageJobResponse::unsetmessage()
{
    messageIsSet_ = false;
}

int64_t ShowSaveImageJobResponse::getCreateTime() const
{
    return createTime_;
}

void ShowSaveImageJobResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowSaveImageJobResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowSaveImageJobResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


