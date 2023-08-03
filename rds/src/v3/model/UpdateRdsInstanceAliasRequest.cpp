

#include "huaweicloud/rds/v3/model/UpdateRdsInstanceAliasRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateRdsInstanceAliasRequest::UpdateRdsInstanceAliasRequest()
{
    alias_ = "";
    aliasIsSet_ = false;
}

UpdateRdsInstanceAliasRequest::~UpdateRdsInstanceAliasRequest() = default;

void UpdateRdsInstanceAliasRequest::validate()
{
}

web::json::value UpdateRdsInstanceAliasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }

    return val;
}

bool UpdateRdsInstanceAliasRequest::fromJson(const web::json::value& val)
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

std::string UpdateRdsInstanceAliasRequest::getAlias() const
{
    return alias_;
}

void UpdateRdsInstanceAliasRequest::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool UpdateRdsInstanceAliasRequest::aliasIsSet() const
{
    return aliasIsSet_;
}

void UpdateRdsInstanceAliasRequest::unsetalias()
{
    aliasIsSet_ = false;
}

}
}
}
}
}


