

#include "huaweicloud/modelarts/v1/model/UpdateIntranetConnectionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateIntranetConnectionRequestBody::UpdateIntranetConnectionRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
}

UpdateIntranetConnectionRequestBody::~UpdateIntranetConnectionRequestBody() = default;

void UpdateIntranetConnectionRequestBody::validate()
{
}

web::json::value UpdateIntranetConnectionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }

    return val;
}
bool UpdateIntranetConnectionRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    return ok;
}


std::string UpdateIntranetConnectionRequestBody::getAction() const
{
    return action_;
}

void UpdateIntranetConnectionRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool UpdateIntranetConnectionRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void UpdateIntranetConnectionRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::string UpdateIntranetConnectionRequestBody::getReason() const
{
    return reason_;
}

void UpdateIntranetConnectionRequestBody::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool UpdateIntranetConnectionRequestBody::reasonIsSet() const
{
    return reasonIsSet_;
}

void UpdateIntranetConnectionRequestBody::unsetreason()
{
    reasonIsSet_ = false;
}

}
}
}
}
}


