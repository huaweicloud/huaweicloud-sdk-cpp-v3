

#include "huaweicloud/smnglobal/v2/model/UpdateSubscriptionUserRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {
namespace Model {




UpdateSubscriptionUserRequestBody::UpdateSubscriptionUserRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    groupIsSet_ = false;
}

UpdateSubscriptionUserRequestBody::~UpdateSubscriptionUserRequestBody() = default;

void UpdateSubscriptionUserRequestBody::validate()
{
}

web::json::value UpdateSubscriptionUserRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(groupIsSet_) {
        val[utility::conversions::to_string_t("group")] = ModelBase::toJson(group_);
    }

    return val;
}
bool UpdateSubscriptionUserRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroup(refVal);
        }
    }
    return ok;
}


std::string UpdateSubscriptionUserRequestBody::getName() const
{
    return name_;
}

void UpdateSubscriptionUserRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateSubscriptionUserRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateSubscriptionUserRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& UpdateSubscriptionUserRequestBody::getGroup()
{
    return group_;
}

void UpdateSubscriptionUserRequestBody::setGroup(const std::vector<std::string>& value)
{
    group_ = value;
    groupIsSet_ = true;
}

bool UpdateSubscriptionUserRequestBody::groupIsSet() const
{
    return groupIsSet_;
}

void UpdateSubscriptionUserRequestBody::unsetgroup()
{
    groupIsSet_ = false;
}

}
}
}
}
}


