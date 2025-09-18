

#include "huaweicloud/projectman/v4/model/CreateIterationV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateIterationV4Response::CreateIterationV4Response()
{
    id_ = 0;
    idIsSet_ = false;
}

CreateIterationV4Response::~CreateIterationV4Response() = default;

void CreateIterationV4Response::validate()
{
}

web::json::value CreateIterationV4Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool CreateIterationV4Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


int32_t CreateIterationV4Response::getId() const
{
    return id_;
}

void CreateIterationV4Response::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateIterationV4Response::idIsSet() const
{
    return idIsSet_;
}

void CreateIterationV4Response::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


