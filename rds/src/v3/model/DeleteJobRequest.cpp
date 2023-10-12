

#include "huaweicloud/rds/v3/model/DeleteJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteJobRequest::DeleteJobRequest()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteJobRequest::~DeleteJobRequest() = default;

void DeleteJobRequest::validate()
{
}

web::json::value DeleteJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteJobRequest::fromJson(const web::json::value& val)
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


std::string DeleteJobRequest::getId() const
{
    return id_;
}

void DeleteJobRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteJobRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteJobRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


