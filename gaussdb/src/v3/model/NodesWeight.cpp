

#include "huaweicloud/gaussdb/v3/model/NodesWeight.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




NodesWeight::NodesWeight()
{
    id_ = "";
    idIsSet_ = false;
    weight_ = 0;
    weightIsSet_ = false;
}

NodesWeight::~NodesWeight() = default;

void NodesWeight::validate()
{
}

web::json::value NodesWeight::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }

    return val;
}

bool NodesWeight::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
        }
    }
    return ok;
}

std::string NodesWeight::getId() const
{
    return id_;
}

void NodesWeight::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NodesWeight::idIsSet() const
{
    return idIsSet_;
}

void NodesWeight::unsetid()
{
    idIsSet_ = false;
}

int32_t NodesWeight::getWeight() const
{
    return weight_;
}

void NodesWeight::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool NodesWeight::weightIsSet() const
{
    return weightIsSet_;
}

void NodesWeight::unsetweight()
{
    weightIsSet_ = false;
}

}
}
}
}
}


