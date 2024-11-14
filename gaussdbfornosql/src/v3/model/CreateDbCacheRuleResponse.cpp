

#include "huaweicloud/gaussdbfornosql/v3/model/CreateDbCacheRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateDbCacheRuleResponse::CreateDbCacheRuleResponse()
{
    id_ = "";
    idIsSet_ = false;
}

CreateDbCacheRuleResponse::~CreateDbCacheRuleResponse() = default;

void CreateDbCacheRuleResponse::validate()
{
}

web::json::value CreateDbCacheRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool CreateDbCacheRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string CreateDbCacheRuleResponse::getId() const
{
    return id_;
}

void CreateDbCacheRuleResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateDbCacheRuleResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateDbCacheRuleResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


