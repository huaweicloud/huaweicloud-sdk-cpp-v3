

#include "huaweicloud/modelarts/v1/model/HyperGroup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




HyperGroup::HyperGroup()
{
    id_ = "";
    idIsSet_ = false;
}

HyperGroup::~HyperGroup() = default;

void HyperGroup::validate()
{
}

web::json::value HyperGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool HyperGroup::fromJson(const web::json::value& val)
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


std::string HyperGroup::getId() const
{
    return id_;
}

void HyperGroup::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HyperGroup::idIsSet() const
{
    return idIsSet_;
}

void HyperGroup::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


