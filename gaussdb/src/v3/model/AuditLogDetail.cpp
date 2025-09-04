

#include "huaweicloud/gaussdb/v3/model/AuditLogDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




AuditLogDetail::AuditLogDetail()
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

AuditLogDetail::~AuditLogDetail() = default;

void AuditLogDetail::validate()
{
}

web::json::value AuditLogDetail::toJson() const
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
bool AuditLogDetail::fromJson(const web::json::value& val)
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


std::string AuditLogDetail::getId() const
{
    return id_;
}

void AuditLogDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AuditLogDetail::idIsSet() const
{
    return idIsSet_;
}

void AuditLogDetail::unsetid()
{
    idIsSet_ = false;
}

std::string AuditLogDetail::getName() const
{
    return name_;
}

void AuditLogDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AuditLogDetail::nameIsSet() const
{
    return nameIsSet_;
}

void AuditLogDetail::unsetname()
{
    nameIsSet_ = false;
}

int64_t AuditLogDetail::getSize() const
{
    return size_;
}

void AuditLogDetail::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool AuditLogDetail::sizeIsSet() const
{
    return sizeIsSet_;
}

void AuditLogDetail::unsetsize()
{
    sizeIsSet_ = false;
}

std::string AuditLogDetail::getBeginTime() const
{
    return beginTime_;
}

void AuditLogDetail::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool AuditLogDetail::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void AuditLogDetail::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string AuditLogDetail::getEndTime() const
{
    return endTime_;
}

void AuditLogDetail::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool AuditLogDetail::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void AuditLogDetail::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


