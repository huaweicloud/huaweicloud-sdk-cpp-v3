

#include "huaweicloud/dds/v3/model/ValidateConfigurationNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ValidateConfigurationNameResponse::ValidateConfigurationNameResponse()
{
    isExisted_ = false;
    isExistedIsSet_ = false;
}

ValidateConfigurationNameResponse::~ValidateConfigurationNameResponse() = default;

void ValidateConfigurationNameResponse::validate()
{
}

web::json::value ValidateConfigurationNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isExistedIsSet_) {
        val[utility::conversions::to_string_t("is_existed")] = ModelBase::toJson(isExisted_);
    }

    return val;
}
bool ValidateConfigurationNameResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_existed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_existed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsExisted(refVal);
        }
    }
    return ok;
}


bool ValidateConfigurationNameResponse::isIsExisted() const
{
    return isExisted_;
}

void ValidateConfigurationNameResponse::setIsExisted(bool value)
{
    isExisted_ = value;
    isExistedIsSet_ = true;
}

bool ValidateConfigurationNameResponse::isExistedIsSet() const
{
    return isExistedIsSet_;
}

void ValidateConfigurationNameResponse::unsetisExisted()
{
    isExistedIsSet_ = false;
}

}
}
}
}
}


