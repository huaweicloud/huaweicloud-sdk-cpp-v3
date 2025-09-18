

#include "huaweicloud/projectman/v4/model/IssueItemSfV4_tracker.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueItemSfV4_tracker::IssueItemSfV4_tracker()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

IssueItemSfV4_tracker::~IssueItemSfV4_tracker() = default;

void IssueItemSfV4_tracker::validate()
{
}

web::json::value IssueItemSfV4_tracker::toJson() const
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
bool IssueItemSfV4_tracker::fromJson(const web::json::value& val)
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


int32_t IssueItemSfV4_tracker::getId() const
{
    return id_;
}

void IssueItemSfV4_tracker::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueItemSfV4_tracker::idIsSet() const
{
    return idIsSet_;
}

void IssueItemSfV4_tracker::unsetid()
{
    idIsSet_ = false;
}

std::string IssueItemSfV4_tracker::getName() const
{
    return name_;
}

void IssueItemSfV4_tracker::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IssueItemSfV4_tracker::nameIsSet() const
{
    return nameIsSet_;
}

void IssueItemSfV4_tracker::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


