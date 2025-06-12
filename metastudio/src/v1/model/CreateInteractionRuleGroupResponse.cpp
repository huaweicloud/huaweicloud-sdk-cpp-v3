

#include "huaweicloud/metastudio/v1/model/CreateInteractionRuleGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateInteractionRuleGroupResponse::CreateInteractionRuleGroupResponse()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateInteractionRuleGroupResponse::~CreateInteractionRuleGroupResponse() = default;

void CreateInteractionRuleGroupResponse::validate()
{
}

web::json::value CreateInteractionRuleGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateInteractionRuleGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string CreateInteractionRuleGroupResponse::getGroupId() const
{
    return groupId_;
}

void CreateInteractionRuleGroupResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CreateInteractionRuleGroupResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CreateInteractionRuleGroupResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string CreateInteractionRuleGroupResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateInteractionRuleGroupResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateInteractionRuleGroupResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateInteractionRuleGroupResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


