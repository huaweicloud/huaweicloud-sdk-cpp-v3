

#include "huaweicloud/smn/v2/model/AccessPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




AccessPolicy::AccessPolicy()
{
    version_ = "";
    versionIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    statementIsSet_ = false;
}

AccessPolicy::~AccessPolicy() = default;

void AccessPolicy::validate()
{
}

web::json::value AccessPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("Version")] = ModelBase::toJson(version_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("Id")] = ModelBase::toJson(id_);
    }
    if(statementIsSet_) {
        val[utility::conversions::to_string_t("Statement")] = ModelBase::toJson(statement_);
    }

    return val;
}
bool AccessPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Statement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Statement"));
        if(!fieldValue.is_null())
        {
            std::vector<Statement> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatement(refVal);
        }
    }
    return ok;
}


std::string AccessPolicy::getVersion() const
{
    return version_;
}

void AccessPolicy::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool AccessPolicy::versionIsSet() const
{
    return versionIsSet_;
}

void AccessPolicy::unsetversion()
{
    versionIsSet_ = false;
}

std::string AccessPolicy::getId() const
{
    return id_;
}

void AccessPolicy::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AccessPolicy::idIsSet() const
{
    return idIsSet_;
}

void AccessPolicy::unsetid()
{
    idIsSet_ = false;
}

std::vector<Statement>& AccessPolicy::getStatement()
{
    return statement_;
}

void AccessPolicy::setStatement(const std::vector<Statement>& value)
{
    statement_ = value;
    statementIsSet_ = true;
}

bool AccessPolicy::statementIsSet() const
{
    return statementIsSet_;
}

void AccessPolicy::unsetstatement()
{
    statementIsSet_ = false;
}

}
}
}
}
}


