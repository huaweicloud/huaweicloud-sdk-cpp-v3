

#include "huaweicloud/projectman/v4/model/BatchUpdateIssuesParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchUpdateIssuesParam::BatchUpdateIssuesParam()
{
    idIsSet_ = false;
    attributeIsSet_ = false;
}

BatchUpdateIssuesParam::~BatchUpdateIssuesParam() = default;

void BatchUpdateIssuesParam::validate()
{
}

web::json::value BatchUpdateIssuesParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(attributeIsSet_) {
        val[utility::conversions::to_string_t("attribute")] = ModelBase::toJson(attribute_);
    }

    return val;
}
bool BatchUpdateIssuesParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attribute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attribute"));
        if(!fieldValue.is_null())
        {
            IssueUpdateAttribute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttribute(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchUpdateIssuesParam::getId()
{
    return id_;
}

void BatchUpdateIssuesParam::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchUpdateIssuesParam::idIsSet() const
{
    return idIsSet_;
}

void BatchUpdateIssuesParam::unsetid()
{
    idIsSet_ = false;
}

IssueUpdateAttribute BatchUpdateIssuesParam::getAttribute() const
{
    return attribute_;
}

void BatchUpdateIssuesParam::setAttribute(const IssueUpdateAttribute& value)
{
    attribute_ = value;
    attributeIsSet_ = true;
}

bool BatchUpdateIssuesParam::attributeIsSet() const
{
    return attributeIsSet_;
}

void BatchUpdateIssuesParam::unsetattribute()
{
    attributeIsSet_ = false;
}

}
}
}
}
}


