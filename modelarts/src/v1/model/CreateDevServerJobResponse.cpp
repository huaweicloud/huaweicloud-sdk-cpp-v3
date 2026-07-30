

#include "huaweicloud/modelarts/v1/model/CreateDevServerJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateDevServerJobResponse::CreateDevServerJobResponse()
{
    createAt_ = "";
    createAtIsSet_ = false;
    updateAt_ = "";
    updateAtIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    itemsIsSet_ = false;
    tasksIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    abnormalCount_ = 0;
    abnormalCountIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CreateDevServerJobResponse::~CreateDevServerJobResponse() = default;

void CreateDevServerJobResponse::validate()
{
}

web::json::value CreateDevServerJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }
    if(tasksIsSet_) {
        val[utility::conversions::to_string_t("tasks")] = ModelBase::toJson(tasks_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(abnormalCountIsSet_) {
        val[utility::conversions::to_string_t("abnormal_count")] = ModelBase::toJson(abnormalCount_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool CreateDevServerJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<DevServerJobItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<DevServerTaskResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("abnormal_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("abnormal_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbnormalCount(refVal);
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
    return ok;
}


std::string CreateDevServerJobResponse::getCreateAt() const
{
    return createAt_;
}

void CreateDevServerJobResponse::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool CreateDevServerJobResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void CreateDevServerJobResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string CreateDevServerJobResponse::getUpdateAt() const
{
    return updateAt_;
}

void CreateDevServerJobResponse::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool CreateDevServerJobResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void CreateDevServerJobResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string CreateDevServerJobResponse::getId() const
{
    return id_;
}

void CreateDevServerJobResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateDevServerJobResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateDevServerJobResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateDevServerJobResponse::getName() const
{
    return name_;
}

void CreateDevServerJobResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateDevServerJobResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateDevServerJobResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateDevServerJobResponse::getType() const
{
    return type_;
}

void CreateDevServerJobResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateDevServerJobResponse::typeIsSet() const
{
    return typeIsSet_;
}

void CreateDevServerJobResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateDevServerJobResponse::getStatus() const
{
    return status_;
}

void CreateDevServerJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateDevServerJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateDevServerJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<DevServerJobItem>& CreateDevServerJobResponse::getItems()
{
    return items_;
}

void CreateDevServerJobResponse::setItems(const std::vector<DevServerJobItem>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool CreateDevServerJobResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void CreateDevServerJobResponse::unsetitems()
{
    itemsIsSet_ = false;
}

std::vector<DevServerTaskResponse>& CreateDevServerJobResponse::getTasks()
{
    return tasks_;
}

void CreateDevServerJobResponse::setTasks(const std::vector<DevServerTaskResponse>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool CreateDevServerJobResponse::tasksIsSet() const
{
    return tasksIsSet_;
}

void CreateDevServerJobResponse::unsettasks()
{
    tasksIsSet_ = false;
}

std::string CreateDevServerJobResponse::getTemplateId() const
{
    return templateId_;
}

void CreateDevServerJobResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool CreateDevServerJobResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void CreateDevServerJobResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string CreateDevServerJobResponse::getUserName() const
{
    return userName_;
}

void CreateDevServerJobResponse::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool CreateDevServerJobResponse::userNameIsSet() const
{
    return userNameIsSet_;
}

void CreateDevServerJobResponse::unsetuserName()
{
    userNameIsSet_ = false;
}

int32_t CreateDevServerJobResponse::getAbnormalCount() const
{
    return abnormalCount_;
}

void CreateDevServerJobResponse::setAbnormalCount(int32_t value)
{
    abnormalCount_ = value;
    abnormalCountIsSet_ = true;
}

bool CreateDevServerJobResponse::abnormalCountIsSet() const
{
    return abnormalCountIsSet_;
}

void CreateDevServerJobResponse::unsetabnormalCount()
{
    abnormalCountIsSet_ = false;
}

std::string CreateDevServerJobResponse::getDescription() const
{
    return description_;
}

void CreateDevServerJobResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateDevServerJobResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateDevServerJobResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


