

#include "huaweicloud/cpcs/v1/model/AppResourceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




AppResourceInfo::AppResourceInfo()
{
    appNum_ = 0;
    appNumIsSet_ = false;
}

AppResourceInfo::~AppResourceInfo() = default;

void AppResourceInfo::validate()
{
}

web::json::value AppResourceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appNumIsSet_) {
        val[utility::conversions::to_string_t("app_num")] = ModelBase::toJson(appNum_);
    }

    return val;
}
bool AppResourceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppNum(refVal);
        }
    }
    return ok;
}


int32_t AppResourceInfo::getAppNum() const
{
    return appNum_;
}

void AppResourceInfo::setAppNum(int32_t value)
{
    appNum_ = value;
    appNumIsSet_ = true;
}

bool AppResourceInfo::appNumIsSet() const
{
    return appNumIsSet_;
}

void AppResourceInfo::unsetappNum()
{
    appNumIsSet_ = false;
}

}
}
}
}
}


