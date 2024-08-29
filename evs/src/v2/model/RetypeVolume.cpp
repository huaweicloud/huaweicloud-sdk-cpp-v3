

#include "huaweicloud/evs/v2/model/RetypeVolume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




RetypeVolume::RetypeVolume()
{
    newType_ = "";
    newTypeIsSet_ = false;
}

RetypeVolume::~RetypeVolume() = default;

void RetypeVolume::validate()
{
}

web::json::value RetypeVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(newTypeIsSet_) {
        val[utility::conversions::to_string_t("new_type")] = ModelBase::toJson(newType_);
    }

    return val;
}
bool RetypeVolume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("new_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewType(refVal);
        }
    }
    return ok;
}


std::string RetypeVolume::getNewType() const
{
    return newType_;
}

void RetypeVolume::setNewType(const std::string& value)
{
    newType_ = value;
    newTypeIsSet_ = true;
}

bool RetypeVolume::newTypeIsSet() const
{
    return newTypeIsSet_;
}

void RetypeVolume::unsetnewType()
{
    newTypeIsSet_ = false;
}

}
}
}
}
}


