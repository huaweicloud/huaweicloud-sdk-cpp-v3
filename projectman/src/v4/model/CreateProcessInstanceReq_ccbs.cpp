

#include "huaweicloud/projectman/v4/model/CreateProcessInstanceReq_ccbs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateProcessInstanceReq_ccbs::CreateProcessInstanceReq_ccbs()
{
    userId_ = "";
    userIdIsSet_ = false;
}

CreateProcessInstanceReq_ccbs::~CreateProcessInstanceReq_ccbs() = default;

void CreateProcessInstanceReq_ccbs::validate()
{
}

web::json::value CreateProcessInstanceReq_ccbs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool CreateProcessInstanceReq_ccbs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    return ok;
}


std::string CreateProcessInstanceReq_ccbs::getUserId() const
{
    return userId_;
}

void CreateProcessInstanceReq_ccbs::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool CreateProcessInstanceReq_ccbs::userIdIsSet() const
{
    return userIdIsSet_;
}

void CreateProcessInstanceReq_ccbs::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


