

#include "huaweicloud/modelarts/v1/model/CreateOrderRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateOrderRequestBody::CreateOrderRequestBody()
{
    actionType_ = "";
    actionTypeIsSet_ = false;
}

CreateOrderRequestBody::~CreateOrderRequestBody() = default;

void CreateOrderRequestBody::validate()
{
}

web::json::value CreateOrderRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionTypeIsSet_) {
        val[utility::conversions::to_string_t("actionType")] = ModelBase::toJson(actionType_);
    }

    return val;
}
bool CreateOrderRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("actionType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actionType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionType(refVal);
        }
    }
    return ok;
}


std::string CreateOrderRequestBody::getActionType() const
{
    return actionType_;
}

void CreateOrderRequestBody::setActionType(const std::string& value)
{
    actionType_ = value;
    actionTypeIsSet_ = true;
}

bool CreateOrderRequestBody::actionTypeIsSet() const
{
    return actionTypeIsSet_;
}

void CreateOrderRequestBody::unsetactionType()
{
    actionTypeIsSet_ = false;
}

}
}
}
}
}


