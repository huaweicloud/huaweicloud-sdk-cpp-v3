

#include "huaweicloud/rds/v3/model/Auditlog.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Auditlog::Auditlog()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

Auditlog::~Auditlog() = default;

void Auditlog::validate()
{
}

web::json::value Auditlog::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool Auditlog::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string Auditlog::getId() const
{
    return id_;
}

void Auditlog::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Auditlog::idIsSet() const
{
    return idIsSet_;
}

void Auditlog::unsetid()
{
    idIsSet_ = false;
}

std::string Auditlog::getName() const
{
    return name_;
}

void Auditlog::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Auditlog::nameIsSet() const
{
    return nameIsSet_;
}

void Auditlog::unsetname()
{
    nameIsSet_ = false;
}

int64_t Auditlog::getSize() const
{
    return size_;
}

void Auditlog::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool Auditlog::sizeIsSet() const
{
    return sizeIsSet_;
}

void Auditlog::unsetsize()
{
    sizeIsSet_ = false;
}

std::string Auditlog::getBeginTime() const
{
    return beginTime_;
}

void Auditlog::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool Auditlog::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void Auditlog::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string Auditlog::getEndTime() const
{
    return endTime_;
}

void Auditlog::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool Auditlog::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void Auditlog::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


