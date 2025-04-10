

#include "huaweicloud/gaussdbforopengauss/v3/model/ResetDrConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ResetDrConfigRequestBody::ResetDrConfigRequestBody()
{
    oppositeDataCidr_ = "";
    oppositeDataCidrIsSet_ = false;
}

ResetDrConfigRequestBody::~ResetDrConfigRequestBody() = default;

void ResetDrConfigRequestBody::validate()
{
}

web::json::value ResetDrConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(oppositeDataCidrIsSet_) {
        val[utility::conversions::to_string_t("opposite_data_cidr")] = ModelBase::toJson(oppositeDataCidr_);
    }

    return val;
}
bool ResetDrConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("opposite_data_cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opposite_data_cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOppositeDataCidr(refVal);
        }
    }
    return ok;
}


std::string ResetDrConfigRequestBody::getOppositeDataCidr() const
{
    return oppositeDataCidr_;
}

void ResetDrConfigRequestBody::setOppositeDataCidr(const std::string& value)
{
    oppositeDataCidr_ = value;
    oppositeDataCidrIsSet_ = true;
}

bool ResetDrConfigRequestBody::oppositeDataCidrIsSet() const
{
    return oppositeDataCidrIsSet_;
}

void ResetDrConfigRequestBody::unsetoppositeDataCidr()
{
    oppositeDataCidrIsSet_ = false;
}

}
}
}
}
}


