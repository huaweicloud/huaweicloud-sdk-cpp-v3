

#include "huaweicloud/projectman/v4/model/IssueResponseV4_order.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueResponseV4_order::IssueResponseV4_order()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

IssueResponseV4_order::~IssueResponseV4_order() = default;

void IssueResponseV4_order::validate()
{
}

web::json::value IssueResponseV4_order::toJson() const
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
bool IssueResponseV4_order::fromJson(const web::json::value& val)
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


int32_t IssueResponseV4_order::getId() const
{
    return id_;
}

void IssueResponseV4_order::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueResponseV4_order::idIsSet() const
{
    return idIsSet_;
}

void IssueResponseV4_order::unsetid()
{
    idIsSet_ = false;
}

std::string IssueResponseV4_order::getName() const
{
    return name_;
}

void IssueResponseV4_order::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IssueResponseV4_order::nameIsSet() const
{
    return nameIsSet_;
}

void IssueResponseV4_order::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


