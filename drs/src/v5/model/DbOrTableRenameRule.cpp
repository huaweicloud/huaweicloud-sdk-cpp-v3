

#include "huaweicloud/drs/v5/model/DbOrTableRenameRule.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DbOrTableRenameRule::DbOrTableRenameRule()
{
    prefixName_ = "";
    prefixNameIsSet_ = false;
    suffixName_ = "";
    suffixNameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

DbOrTableRenameRule::~DbOrTableRenameRule() = default;

void DbOrTableRenameRule::validate()
{
}

web::json::value DbOrTableRenameRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(prefixNameIsSet_) {
        val[utility::conversions::to_string_t("prefix_name")] = ModelBase::toJson(prefixName_);
    }
    if(suffixNameIsSet_) {
        val[utility::conversions::to_string_t("suffix_name")] = ModelBase::toJson(suffixName_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool DbOrTableRenameRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("prefix_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prefix_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrefixName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suffix_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suffix_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuffixName(refVal);
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

std::string DbOrTableRenameRule::getPrefixName() const
{
    return prefixName_;
}

void DbOrTableRenameRule::setPrefixName(const std::string& value)
{
    prefixName_ = value;
    prefixNameIsSet_ = true;
}

bool DbOrTableRenameRule::prefixNameIsSet() const
{
    return prefixNameIsSet_;
}

void DbOrTableRenameRule::unsetprefixName()
{
    prefixNameIsSet_ = false;
}

std::string DbOrTableRenameRule::getSuffixName() const
{
    return suffixName_;
}

void DbOrTableRenameRule::setSuffixName(const std::string& value)
{
    suffixName_ = value;
    suffixNameIsSet_ = true;
}

bool DbOrTableRenameRule::suffixNameIsSet() const
{
    return suffixNameIsSet_;
}

void DbOrTableRenameRule::unsetsuffixName()
{
    suffixNameIsSet_ = false;
}

std::string DbOrTableRenameRule::getType() const
{
    return type_;
}

void DbOrTableRenameRule::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DbOrTableRenameRule::typeIsSet() const
{
    return typeIsSet_;
}

void DbOrTableRenameRule::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


