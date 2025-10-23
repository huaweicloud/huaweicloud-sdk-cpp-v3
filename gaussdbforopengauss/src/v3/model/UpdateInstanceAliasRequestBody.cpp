

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceAliasRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateInstanceAliasRequestBody::UpdateInstanceAliasRequestBody()
{
    alias_ = "";
    aliasIsSet_ = false;
}

UpdateInstanceAliasRequestBody::~UpdateInstanceAliasRequestBody() = default;

void UpdateInstanceAliasRequestBody::validate()
{
}

web::json::value UpdateInstanceAliasRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }

    return val;
}
bool UpdateInstanceAliasRequestBody::fromJson(const web::json::value& val)
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


std::string UpdateInstanceAliasRequestBody::getAlias() const
{
    return alias_;
}

void UpdateInstanceAliasRequestBody::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool UpdateInstanceAliasRequestBody::aliasIsSet() const
{
    return aliasIsSet_;
}

void UpdateInstanceAliasRequestBody::unsetalias()
{
    aliasIsSet_ = false;
}

}
}
}
}
}


