

#include "huaweicloud/modelarts/v1/model/PoolSpecModel_network.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolSpecModel_network::PoolSpecModel_network()
{
    name_ = "";
    nameIsSet_ = false;
}

PoolSpecModel_network::~PoolSpecModel_network() = default;

void PoolSpecModel_network::validate()
{
}

web::json::value PoolSpecModel_network::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool PoolSpecModel_network::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string PoolSpecModel_network::getName() const
{
    return name_;
}

void PoolSpecModel_network::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PoolSpecModel_network::nameIsSet() const
{
    return nameIsSet_;
}

void PoolSpecModel_network::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


