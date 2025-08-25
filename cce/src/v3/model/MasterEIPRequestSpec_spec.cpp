

#include "huaweicloud/cce/v3/model/MasterEIPRequestSpec_spec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MasterEIPRequestSpec_spec::MasterEIPRequestSpec_spec()
{
    id_ = "";
    idIsSet_ = false;
}

MasterEIPRequestSpec_spec::~MasterEIPRequestSpec_spec() = default;

void MasterEIPRequestSpec_spec::validate()
{
}

web::json::value MasterEIPRequestSpec_spec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool MasterEIPRequestSpec_spec::fromJson(const web::json::value& val)
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


std::string MasterEIPRequestSpec_spec::getId() const
{
    return id_;
}

void MasterEIPRequestSpec_spec::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MasterEIPRequestSpec_spec::idIsSet() const
{
    return idIsSet_;
}

void MasterEIPRequestSpec_spec::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


