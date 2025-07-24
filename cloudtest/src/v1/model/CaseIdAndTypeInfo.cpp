

#include "huaweicloud/cloudtest/v1/model/CaseIdAndTypeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CaseIdAndTypeInfo::CaseIdAndTypeInfo()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

CaseIdAndTypeInfo::~CaseIdAndTypeInfo() = default;

void CaseIdAndTypeInfo::validate()
{
}

web::json::value CaseIdAndTypeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool CaseIdAndTypeInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CaseIdAndTypeInfo::getId() const
{
    return id_;
}

void CaseIdAndTypeInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CaseIdAndTypeInfo::idIsSet() const
{
    return idIsSet_;
}

void CaseIdAndTypeInfo::unsetid()
{
    idIsSet_ = false;
}

std::string CaseIdAndTypeInfo::getType() const
{
    return type_;
}

void CaseIdAndTypeInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CaseIdAndTypeInfo::typeIsSet() const
{
    return typeIsSet_;
}

void CaseIdAndTypeInfo::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


