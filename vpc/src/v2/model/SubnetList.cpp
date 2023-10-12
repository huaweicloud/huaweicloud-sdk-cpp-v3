

#include "huaweicloud/vpc/v2/model/SubnetList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




SubnetList::SubnetList()
{
    id_ = "";
    idIsSet_ = false;
}

SubnetList::~SubnetList() = default;

void SubnetList::validate()
{
}

web::json::value SubnetList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool SubnetList::fromJson(const web::json::value& val)
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


std::string SubnetList::getId() const
{
    return id_;
}

void SubnetList::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SubnetList::idIsSet() const
{
    return idIsSet_;
}

void SubnetList::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


