

#include "huaweicloud/projectman/v4/model/CheckProjectNameV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CheckProjectNameV4Response::CheckProjectNameV4Response()
{
    exist_ = false;
    existIsSet_ = false;
}

CheckProjectNameV4Response::~CheckProjectNameV4Response() = default;

void CheckProjectNameV4Response::validate()
{
}

web::json::value CheckProjectNameV4Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(existIsSet_) {
        val[utility::conversions::to_string_t("exist")] = ModelBase::toJson(exist_);
    }

    return val;
}
bool CheckProjectNameV4Response::fromJson(const web::json::value& val)
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


bool CheckProjectNameV4Response::isExist() const
{
    return exist_;
}

void CheckProjectNameV4Response::setExist(bool value)
{
    exist_ = value;
    existIsSet_ = true;
}

bool CheckProjectNameV4Response::existIsSet() const
{
    return existIsSet_;
}

void CheckProjectNameV4Response::unsetexist()
{
    existIsSet_ = false;
}

}
}
}
}
}


