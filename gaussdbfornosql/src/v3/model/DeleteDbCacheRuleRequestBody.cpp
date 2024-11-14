

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteDbCacheRuleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteDbCacheRuleRequestBody::DeleteDbCacheRuleRequestBody()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteDbCacheRuleRequestBody::~DeleteDbCacheRuleRequestBody() = default;

void DeleteDbCacheRuleRequestBody::validate()
{
}

web::json::value DeleteDbCacheRuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteDbCacheRuleRequestBody::fromJson(const web::json::value& val)
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


std::string DeleteDbCacheRuleRequestBody::getId() const
{
    return id_;
}

void DeleteDbCacheRuleRequestBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteDbCacheRuleRequestBody::idIsSet() const
{
    return idIsSet_;
}

void DeleteDbCacheRuleRequestBody::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


