

#include "huaweicloud/gaussdbforopengauss/v3/model/ModifyHotfixesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ModifyHotfixesRequestBody::ModifyHotfixesRequestBody()
{
    hotfixesIsSet_ = false;
}

ModifyHotfixesRequestBody::~ModifyHotfixesRequestBody() = default;

void ModifyHotfixesRequestBody::validate()
{
}

web::json::value ModifyHotfixesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hotfixesIsSet_) {
        val[utility::conversions::to_string_t("hotfixes")] = ModelBase::toJson(hotfixes_);
    }

    return val;
}
bool ModifyHotfixesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hotfixes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hotfixes"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotfixes(refVal);
        }
    }
    return ok;
}


Object ModifyHotfixesRequestBody::getHotfixes() const
{
    return hotfixes_;
}

void ModifyHotfixesRequestBody::setHotfixes(const Object& value)
{
    hotfixes_ = value;
    hotfixesIsSet_ = true;
}

bool ModifyHotfixesRequestBody::hotfixesIsSet() const
{
    return hotfixesIsSet_;
}

void ModifyHotfixesRequestBody::unsethotfixes()
{
    hotfixesIsSet_ = false;
}

}
}
}
}
}


