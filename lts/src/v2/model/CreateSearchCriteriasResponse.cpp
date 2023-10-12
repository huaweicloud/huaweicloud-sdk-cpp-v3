

#include "huaweicloud/lts/v2/model/CreateSearchCriteriasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateSearchCriteriasResponse::CreateSearchCriteriasResponse()
{
    id_ = "";
    idIsSet_ = false;
}

CreateSearchCriteriasResponse::~CreateSearchCriteriasResponse() = default;

void CreateSearchCriteriasResponse::validate()
{
}

web::json::value CreateSearchCriteriasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool CreateSearchCriteriasResponse::fromJson(const web::json::value& val)
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


std::string CreateSearchCriteriasResponse::getId() const
{
    return id_;
}

void CreateSearchCriteriasResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateSearchCriteriasResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateSearchCriteriasResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


