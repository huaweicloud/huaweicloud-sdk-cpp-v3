

#include "huaweicloud/projectman/v4/model/IssueOrder.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueOrder::IssueOrder()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

IssueOrder::~IssueOrder() = default;

void IssueOrder::validate()
{
}

web::json::value IssueOrder::toJson() const
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
bool IssueOrder::fromJson(const web::json::value& val)
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


int32_t IssueOrder::getId() const
{
    return id_;
}

void IssueOrder::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueOrder::idIsSet() const
{
    return idIsSet_;
}

void IssueOrder::unsetid()
{
    idIsSet_ = false;
}

std::string IssueOrder::getName() const
{
    return name_;
}

void IssueOrder::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IssueOrder::nameIsSet() const
{
    return nameIsSet_;
}

void IssueOrder::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


