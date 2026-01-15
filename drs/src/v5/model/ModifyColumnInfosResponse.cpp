

#include "huaweicloud/drs/v5/model/ModifyColumnInfosResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ModifyColumnInfosResponse::ModifyColumnInfosResponse()
{
    modifyResult_ = false;
    modifyResultIsSet_ = false;
}

ModifyColumnInfosResponse::~ModifyColumnInfosResponse() = default;

void ModifyColumnInfosResponse::validate()
{
}

web::json::value ModifyColumnInfosResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modifyResultIsSet_) {
        val[utility::conversions::to_string_t("modify_result")] = ModelBase::toJson(modifyResult_);
    }

    return val;
}
bool ModifyColumnInfosResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("modify_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modify_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifyResult(refVal);
        }
    }
    return ok;
}


bool ModifyColumnInfosResponse::isModifyResult() const
{
    return modifyResult_;
}

void ModifyColumnInfosResponse::setModifyResult(bool value)
{
    modifyResult_ = value;
    modifyResultIsSet_ = true;
}

bool ModifyColumnInfosResponse::modifyResultIsSet() const
{
    return modifyResultIsSet_;
}

void ModifyColumnInfosResponse::unsetmodifyResult()
{
    modifyResultIsSet_ = false;
}

}
}
}
}
}


