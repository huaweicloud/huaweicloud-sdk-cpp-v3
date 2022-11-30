

#include "huaweicloud/ecs/v2/model/BatchDeleteServerNicOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchDeleteServerNicOption::BatchDeleteServerNicOption()
{
    id_ = "";
    idIsSet_ = false;
}

BatchDeleteServerNicOption::~BatchDeleteServerNicOption() = default;

void BatchDeleteServerNicOption::validate()
{
}

web::json::value BatchDeleteServerNicOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool BatchDeleteServerNicOption::fromJson(const web::json::value& val)
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


std::string BatchDeleteServerNicOption::getId() const
{
    return id_;
}

void BatchDeleteServerNicOption::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchDeleteServerNicOption::idIsSet() const
{
    return idIsSet_;
}

void BatchDeleteServerNicOption::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


