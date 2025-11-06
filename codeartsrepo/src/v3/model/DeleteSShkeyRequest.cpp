

#include "huaweicloud/codeartsrepo/v3/model/DeleteSShkeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




DeleteSShkeyRequest::DeleteSShkeyRequest()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteSShkeyRequest::~DeleteSShkeyRequest() = default;

void DeleteSShkeyRequest::validate()
{
}

web::json::value DeleteSShkeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteSShkeyRequest::fromJson(const web::json::value& val)
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


std::string DeleteSShkeyRequest::getId() const
{
    return id_;
}

void DeleteSShkeyRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteSShkeyRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteSShkeyRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


