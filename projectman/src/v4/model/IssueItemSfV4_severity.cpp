

#include "huaweicloud/projectman/v4/model/IssueItemSfV4_severity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueItemSfV4_severity::IssueItemSfV4_severity()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

IssueItemSfV4_severity::~IssueItemSfV4_severity() = default;

void IssueItemSfV4_severity::validate()
{
}

web::json::value IssueItemSfV4_severity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool IssueItemSfV4_severity::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


int32_t IssueItemSfV4_severity::getId() const
{
    return id_;
}

void IssueItemSfV4_severity::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueItemSfV4_severity::idIsSet() const
{
    return idIsSet_;
}

void IssueItemSfV4_severity::unsetid()
{
    idIsSet_ = false;
}

std::string IssueItemSfV4_severity::getName() const
{
    return name_;
}

void IssueItemSfV4_severity::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IssueItemSfV4_severity::nameIsSet() const
{
    return nameIsSet_;
}

void IssueItemSfV4_severity::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


