

#include "huaweicloud/lts/v2/model/DeleteAomMappingRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteAomMappingRulesRequest::DeleteAomMappingRulesRequest()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteAomMappingRulesRequest::~DeleteAomMappingRulesRequest() = default;

void DeleteAomMappingRulesRequest::validate()
{
}

web::json::value DeleteAomMappingRulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteAomMappingRulesRequest::fromJson(const web::json::value& val)
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


std::string DeleteAomMappingRulesRequest::getId() const
{
    return id_;
}

void DeleteAomMappingRulesRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteAomMappingRulesRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteAomMappingRulesRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


