

#include "huaweicloud/projectman/v4/model/CreateIssueResponseV4_parent_issue.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateIssueResponseV4_parent_issue::CreateIssueResponseV4_parent_issue()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

CreateIssueResponseV4_parent_issue::~CreateIssueResponseV4_parent_issue() = default;

void CreateIssueResponseV4_parent_issue::validate()
{
}

web::json::value CreateIssueResponseV4_parent_issue::toJson() const
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
bool CreateIssueResponseV4_parent_issue::fromJson(const web::json::value& val)
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


int32_t CreateIssueResponseV4_parent_issue::getId() const
{
    return id_;
}

void CreateIssueResponseV4_parent_issue::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateIssueResponseV4_parent_issue::idIsSet() const
{
    return idIsSet_;
}

void CreateIssueResponseV4_parent_issue::unsetid()
{
    idIsSet_ = false;
}

std::string CreateIssueResponseV4_parent_issue::getName() const
{
    return name_;
}

void CreateIssueResponseV4_parent_issue::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateIssueResponseV4_parent_issue::nameIsSet() const
{
    return nameIsSet_;
}

void CreateIssueResponseV4_parent_issue::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


