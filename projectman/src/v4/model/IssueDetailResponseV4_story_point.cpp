

#include "huaweicloud/projectman/v4/model/IssueDetailResponseV4_story_point.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueDetailResponseV4_story_point::IssueDetailResponseV4_story_point()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

IssueDetailResponseV4_story_point::~IssueDetailResponseV4_story_point() = default;

void IssueDetailResponseV4_story_point::validate()
{
}

web::json::value IssueDetailResponseV4_story_point::toJson() const
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
bool IssueDetailResponseV4_story_point::fromJson(const web::json::value& val)
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


int32_t IssueDetailResponseV4_story_point::getId() const
{
    return id_;
}

void IssueDetailResponseV4_story_point::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueDetailResponseV4_story_point::idIsSet() const
{
    return idIsSet_;
}

void IssueDetailResponseV4_story_point::unsetid()
{
    idIsSet_ = false;
}

std::string IssueDetailResponseV4_story_point::getName() const
{
    return name_;
}

void IssueDetailResponseV4_story_point::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IssueDetailResponseV4_story_point::nameIsSet() const
{
    return nameIsSet_;
}

void IssueDetailResponseV4_story_point::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


