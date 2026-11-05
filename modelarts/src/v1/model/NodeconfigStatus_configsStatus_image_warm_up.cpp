

#include "huaweicloud/modelarts/v1/model/NodeconfigStatus_configsStatus_image_warm_up.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeconfigStatus_configsStatus_image_warm_up::NodeconfigStatus_configsStatus_image_warm_up()
{
    state_ = "";
    stateIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

NodeconfigStatus_configsStatus_image_warm_up::~NodeconfigStatus_configsStatus_image_warm_up() = default;

void NodeconfigStatus_configsStatus_image_warm_up::validate()
{
}

web::json::value NodeconfigStatus_configsStatus_image_warm_up::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool NodeconfigStatus_configsStatus_image_warm_up::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string NodeconfigStatus_configsStatus_image_warm_up::getState() const
{
    return state_;
}

void NodeconfigStatus_configsStatus_image_warm_up::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool NodeconfigStatus_configsStatus_image_warm_up::stateIsSet() const
{
    return stateIsSet_;
}

void NodeconfigStatus_configsStatus_image_warm_up::unsetstate()
{
    stateIsSet_ = false;
}

std::string NodeconfigStatus_configsStatus_image_warm_up::getMessage() const
{
    return message_;
}

void NodeconfigStatus_configsStatus_image_warm_up::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool NodeconfigStatus_configsStatus_image_warm_up::messageIsSet() const
{
    return messageIsSet_;
}

void NodeconfigStatus_configsStatus_image_warm_up::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


