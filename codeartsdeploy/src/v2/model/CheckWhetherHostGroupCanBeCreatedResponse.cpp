

#include "huaweicloud/codeartsdeploy/v2/model/CheckWhetherHostGroupCanBeCreatedResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CheckWhetherHostGroupCanBeCreatedResponse::CheckWhetherHostGroupCanBeCreatedResponse()
{
    canCreated_ = false;
    canCreatedIsSet_ = false;
}

CheckWhetherHostGroupCanBeCreatedResponse::~CheckWhetherHostGroupCanBeCreatedResponse() = default;

void CheckWhetherHostGroupCanBeCreatedResponse::validate()
{
}

web::json::value CheckWhetherHostGroupCanBeCreatedResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(canCreatedIsSet_) {
        val[utility::conversions::to_string_t("can_created")] = ModelBase::toJson(canCreated_);
    }

    return val;
}
bool CheckWhetherHostGroupCanBeCreatedResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("can_created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_created"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanCreated(refVal);
        }
    }
    return ok;
}


bool CheckWhetherHostGroupCanBeCreatedResponse::isCanCreated() const
{
    return canCreated_;
}

void CheckWhetherHostGroupCanBeCreatedResponse::setCanCreated(bool value)
{
    canCreated_ = value;
    canCreatedIsSet_ = true;
}

bool CheckWhetherHostGroupCanBeCreatedResponse::canCreatedIsSet() const
{
    return canCreatedIsSet_;
}

void CheckWhetherHostGroupCanBeCreatedResponse::unsetcanCreated()
{
    canCreatedIsSet_ = false;
}

}
}
}
}
}


