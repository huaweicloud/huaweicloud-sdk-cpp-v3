

#include "huaweicloud/projectman/v4/model/BatchUpdateResponse_result_project.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchUpdateResponse_result_project::BatchUpdateResponse_result_project()
{
    id_ = 0;
    idIsSet_ = false;
    identifier_ = "";
    identifierIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    close_ = 0;
    closeIsSet_ = false;
    role_ = 0;
    roleIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    archive_ = false;
    archiveIsSet_ = false;
    memCount_ = 0;
    memCountIsSet_ = false;
}

BatchUpdateResponse_result_project::~BatchUpdateResponse_result_project() = default;

void BatchUpdateResponse_result_project::validate()
{
}

web::json::value BatchUpdateResponse_result_project::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(identifierIsSet_) {
        val[utility::conversions::to_string_t("identifier")] = ModelBase::toJson(identifier_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(closeIsSet_) {
        val[utility::conversions::to_string_t("close")] = ModelBase::toJson(close_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(archiveIsSet_) {
        val[utility::conversions::to_string_t("archive")] = ModelBase::toJson(archive_);
    }
    if(memCountIsSet_) {
        val[utility::conversions::to_string_t("mem_count")] = ModelBase::toJson(memCount_);
    }

    return val;
}
bool BatchUpdateResponse_result_project::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentifier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("close"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("close"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClose(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("archive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("archive"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemCount(refVal);
        }
    }
    return ok;
}


int32_t BatchUpdateResponse_result_project::getId() const
{
    return id_;
}

void BatchUpdateResponse_result_project::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchUpdateResponse_result_project::idIsSet() const
{
    return idIsSet_;
}

void BatchUpdateResponse_result_project::unsetid()
{
    idIsSet_ = false;
}

std::string BatchUpdateResponse_result_project::getIdentifier() const
{
    return identifier_;
}

void BatchUpdateResponse_result_project::setIdentifier(const std::string& value)
{
    identifier_ = value;
    identifierIsSet_ = true;
}

bool BatchUpdateResponse_result_project::identifierIsSet() const
{
    return identifierIsSet_;
}

void BatchUpdateResponse_result_project::unsetidentifier()
{
    identifierIsSet_ = false;
}

int32_t BatchUpdateResponse_result_project::getTotal() const
{
    return total_;
}

void BatchUpdateResponse_result_project::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool BatchUpdateResponse_result_project::totalIsSet() const
{
    return totalIsSet_;
}

void BatchUpdateResponse_result_project::unsettotal()
{
    totalIsSet_ = false;
}

int32_t BatchUpdateResponse_result_project::getClose() const
{
    return close_;
}

void BatchUpdateResponse_result_project::setClose(int32_t value)
{
    close_ = value;
    closeIsSet_ = true;
}

bool BatchUpdateResponse_result_project::closeIsSet() const
{
    return closeIsSet_;
}

void BatchUpdateResponse_result_project::unsetclose()
{
    closeIsSet_ = false;
}

int32_t BatchUpdateResponse_result_project::getRole() const
{
    return role_;
}

void BatchUpdateResponse_result_project::setRole(int32_t value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool BatchUpdateResponse_result_project::roleIsSet() const
{
    return roleIsSet_;
}

void BatchUpdateResponse_result_project::unsetrole()
{
    roleIsSet_ = false;
}

std::string BatchUpdateResponse_result_project::getType() const
{
    return type_;
}

void BatchUpdateResponse_result_project::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BatchUpdateResponse_result_project::typeIsSet() const
{
    return typeIsSet_;
}

void BatchUpdateResponse_result_project::unsettype()
{
    typeIsSet_ = false;
}

bool BatchUpdateResponse_result_project::isArchive() const
{
    return archive_;
}

void BatchUpdateResponse_result_project::setArchive(bool value)
{
    archive_ = value;
    archiveIsSet_ = true;
}

bool BatchUpdateResponse_result_project::archiveIsSet() const
{
    return archiveIsSet_;
}

void BatchUpdateResponse_result_project::unsetarchive()
{
    archiveIsSet_ = false;
}

int32_t BatchUpdateResponse_result_project::getMemCount() const
{
    return memCount_;
}

void BatchUpdateResponse_result_project::setMemCount(int32_t value)
{
    memCount_ = value;
    memCountIsSet_ = true;
}

bool BatchUpdateResponse_result_project::memCountIsSet() const
{
    return memCountIsSet_;
}

void BatchUpdateResponse_result_project::unsetmemCount()
{
    memCountIsSet_ = false;
}

}
}
}
}
}


