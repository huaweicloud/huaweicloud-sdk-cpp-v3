

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteDbCacheMappingRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteDbCacheMappingRequestBody::DeleteDbCacheMappingRequestBody()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteDbCacheMappingRequestBody::~DeleteDbCacheMappingRequestBody() = default;

void DeleteDbCacheMappingRequestBody::validate()
{
}

web::json::value DeleteDbCacheMappingRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteDbCacheMappingRequestBody::fromJson(const web::json::value& val)
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


std::string DeleteDbCacheMappingRequestBody::getId() const
{
    return id_;
}

void DeleteDbCacheMappingRequestBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteDbCacheMappingRequestBody::idIsSet() const
{
    return idIsSet_;
}

void DeleteDbCacheMappingRequestBody::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


