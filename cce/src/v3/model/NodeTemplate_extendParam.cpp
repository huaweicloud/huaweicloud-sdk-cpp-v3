

#include "huaweicloud/cce/v3/model/NodeTemplate_extendParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeTemplate_extendParam::NodeTemplate_extendParam()
{
    userID_ = "";
    userIDIsSet_ = false;
}

NodeTemplate_extendParam::~NodeTemplate_extendParam() = default;

void NodeTemplate_extendParam::validate()
{
}

web::json::value NodeTemplate_extendParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIDIsSet_) {
        val[utility::conversions::to_string_t("userID")] = ModelBase::toJson(userID_);
    }

    return val;
}
bool NodeTemplate_extendParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("userID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserID(refVal);
        }
    }
    return ok;
}


std::string NodeTemplate_extendParam::getUserID() const
{
    return userID_;
}

void NodeTemplate_extendParam::setUserID(const std::string& value)
{
    userID_ = value;
    userIDIsSet_ = true;
}

bool NodeTemplate_extendParam::userIDIsSet() const
{
    return userIDIsSet_;
}

void NodeTemplate_extendParam::unsetuserID()
{
    userIDIsSet_ = false;
}

}
}
}
}
}


