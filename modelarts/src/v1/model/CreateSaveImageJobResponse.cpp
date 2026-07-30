

#include "huaweicloud/modelarts/v1/model/CreateSaveImageJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateSaveImageJobResponse::CreateSaveImageJobResponse()
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

CreateSaveImageJobResponse::~CreateSaveImageJobResponse() = default;

void CreateSaveImageJobResponse::validate()
{
}

web::json::value CreateSaveImageJobResponse::toJson() const
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
bool CreateSaveImageJobResponse::fromJson(const web::json::value& val)
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


std::string CreateSaveImageJobResponse::getName() const
{
    return name_;
}

void CreateSaveImageJobResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateSaveImageJobResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateSaveImageJobResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateSaveImageJobResponse::getNamespace() const
{
    return namespace_;
}

void CreateSaveImageJobResponse::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool CreateSaveImageJobResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void CreateSaveImageJobResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string CreateSaveImageJobResponse::getTag() const
{
    return tag_;
}

void CreateSaveImageJobResponse::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool CreateSaveImageJobResponse::tagIsSet() const
{
    return tagIsSet_;
}

void CreateSaveImageJobResponse::unsettag()
{
    tagIsSet_ = false;
}

std::string CreateSaveImageJobResponse::getDescription() const
{
    return description_;
}

void CreateSaveImageJobResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateSaveImageJobResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateSaveImageJobResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateSaveImageJobResponse::getStatus() const
{
    return status_;
}

void CreateSaveImageJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateSaveImageJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateSaveImageJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateSaveImageJobResponse::getMessage() const
{
    return message_;
}

void CreateSaveImageJobResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CreateSaveImageJobResponse::messageIsSet() const
{
    return messageIsSet_;
}

void CreateSaveImageJobResponse::unsetmessage()
{
    messageIsSet_ = false;
}

int64_t CreateSaveImageJobResponse::getCreateTime() const
{
    return createTime_;
}

void CreateSaveImageJobResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateSaveImageJobResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateSaveImageJobResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


