

#include "huaweicloud/gaussdb/v3/model/ModifyAliasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyAliasRequest::ModifyAliasRequest()
{
    alias_ = "";
    aliasIsSet_ = false;
}

ModifyAliasRequest::~ModifyAliasRequest() = default;

void ModifyAliasRequest::validate()
{
}

web::json::value ModifyAliasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }

    return val;
}
bool ModifyAliasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
        }
    }
    return ok;
}


std::string ModifyAliasRequest::getAlias() const
{
    return alias_;
}

void ModifyAliasRequest::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool ModifyAliasRequest::aliasIsSet() const
{
    return aliasIsSet_;
}

void ModifyAliasRequest::unsetalias()
{
    aliasIsSet_ = false;
}

}
}
}
}
}


