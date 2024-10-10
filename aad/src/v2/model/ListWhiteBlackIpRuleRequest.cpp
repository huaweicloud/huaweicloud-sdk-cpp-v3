

#include "huaweicloud/aad/v2/model/ListWhiteBlackIpRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListWhiteBlackIpRuleRequest::ListWhiteBlackIpRuleRequest()
{
    type_ = "";
    typeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListWhiteBlackIpRuleRequest::~ListWhiteBlackIpRuleRequest() = default;

void ListWhiteBlackIpRuleRequest::validate()
{
}

web::json::value ListWhiteBlackIpRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListWhiteBlackIpRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListWhiteBlackIpRuleRequest::getType() const
{
    return type_;
}

void ListWhiteBlackIpRuleRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListWhiteBlackIpRuleRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListWhiteBlackIpRuleRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListWhiteBlackIpRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void ListWhiteBlackIpRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListWhiteBlackIpRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListWhiteBlackIpRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


