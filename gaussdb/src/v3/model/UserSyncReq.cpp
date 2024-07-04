

#include "huaweicloud/gaussdb/v3/model/UserSyncReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UserSyncReq::UserSyncReq()
{
    action_ = "";
    actionIsSet_ = false;
}

UserSyncReq::~UserSyncReq() = default;

void UserSyncReq::validate()
{
}

web::json::value UserSyncReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}
bool UserSyncReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}


std::string UserSyncReq::getAction() const
{
    return action_;
}

void UserSyncReq::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool UserSyncReq::actionIsSet() const
{
    return actionIsSet_;
}

void UserSyncReq::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


