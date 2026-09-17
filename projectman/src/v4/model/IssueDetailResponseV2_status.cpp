

#include "huaweicloud/projectman/v4/model/IssueDetailResponseV2_status.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueDetailResponseV2_status::IssueDetailResponseV2_status()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

IssueDetailResponseV2_status::~IssueDetailResponseV2_status() = default;

void IssueDetailResponseV2_status::validate()
{
}

web::json::value IssueDetailResponseV2_status::toJson() const
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
bool IssueDetailResponseV2_status::fromJson(const web::json::value& val)
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


int32_t IssueDetailResponseV2_status::getId() const
{
    return id_;
}

void IssueDetailResponseV2_status::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueDetailResponseV2_status::idIsSet() const
{
    return idIsSet_;
}

void IssueDetailResponseV2_status::unsetid()
{
    idIsSet_ = false;
}

std::string IssueDetailResponseV2_status::getName() const
{
    return name_;
}

void IssueDetailResponseV2_status::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IssueDetailResponseV2_status::nameIsSet() const
{
    return nameIsSet_;
}

void IssueDetailResponseV2_status::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


