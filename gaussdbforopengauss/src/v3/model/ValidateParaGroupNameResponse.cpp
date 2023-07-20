

#include "huaweicloud/gaussdbforopengauss/v3/model/ValidateParaGroupNameResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ValidateParaGroupNameResponse::ValidateParaGroupNameResponse()
{
    exist_ = false;
    existIsSet_ = false;
}

ValidateParaGroupNameResponse::~ValidateParaGroupNameResponse() = default;

void ValidateParaGroupNameResponse::validate()
{
}

web::json::value ValidateParaGroupNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(existIsSet_) {
        val[utility::conversions::to_string_t("exist")] = ModelBase::toJson(exist_);
    }

    return val;
}

bool ValidateParaGroupNameResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("exist"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exist"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExist(refVal);
        }
    }
    return ok;
}

bool ValidateParaGroupNameResponse::isExist() const
{
    return exist_;
}

void ValidateParaGroupNameResponse::setExist(bool value)
{
    exist_ = value;
    existIsSet_ = true;
}

bool ValidateParaGroupNameResponse::existIsSet() const
{
    return existIsSet_;
}

void ValidateParaGroupNameResponse::unsetexist()
{
    existIsSet_ = false;
}

}
}
}
}
}


