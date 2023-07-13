

#include "huaweicloud/cdn/v1/model/Urls.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




Urls::Urls()
{
    id_ = 0L;
    idIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    taskId_ = 0L;
    taskIdIsSet_ = false;
    modifyTime_ = 0L;
    modifyTimeIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
}

Urls::~Urls() = default;

void Urls::validate()
{
}

web::json::value Urls::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(modifyTimeIsSet_) {
        val[utility::conversions::to_string_t("modify_time")] = ModelBase::toJson(modifyTime_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }

    return val;
}

bool Urls::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modify_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modify_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifyTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
        }
    }
    return ok;
}

int64_t Urls::getId() const
{
    return id_;
}

void Urls::setId(int64_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Urls::idIsSet() const
{
    return idIsSet_;
}

void Urls::unsetid()
{
    idIsSet_ = false;
}

std::string Urls::getUrl() const
{
    return url_;
}

void Urls::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool Urls::urlIsSet() const
{
    return urlIsSet_;
}

void Urls::unseturl()
{
    urlIsSet_ = false;
}

std::string Urls::getStatus() const
{
    return status_;
}

void Urls::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Urls::statusIsSet() const
{
    return statusIsSet_;
}

void Urls::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Urls::getType() const
{
    return type_;
}

void Urls::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Urls::typeIsSet() const
{
    return typeIsSet_;
}

void Urls::unsettype()
{
    typeIsSet_ = false;
}

int64_t Urls::getTaskId() const
{
    return taskId_;
}

void Urls::setTaskId(int64_t value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool Urls::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void Urls::unsettaskId()
{
    taskIdIsSet_ = false;
}

int64_t Urls::getModifyTime() const
{
    return modifyTime_;
}

void Urls::setModifyTime(int64_t value)
{
    modifyTime_ = value;
    modifyTimeIsSet_ = true;
}

bool Urls::modifyTimeIsSet() const
{
    return modifyTimeIsSet_;
}

void Urls::unsetmodifyTime()
{
    modifyTimeIsSet_ = false;
}

int64_t Urls::getCreateTime() const
{
    return createTime_;
}

void Urls::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool Urls::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void Urls::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string Urls::getFileType() const
{
    return fileType_;
}

void Urls::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool Urls::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void Urls::unsetfileType()
{
    fileTypeIsSet_ = false;
}

}
}
}
}
}


