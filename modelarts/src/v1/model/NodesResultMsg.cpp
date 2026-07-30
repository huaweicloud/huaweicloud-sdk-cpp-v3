

#include "huaweicloud/modelarts/v1/model/NodesResultMsg.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodesResultMsg::NodesResultMsg()
{
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

NodesResultMsg::~NodesResultMsg() = default;

void NodesResultMsg::validate()
{
}

web::json::value NodesResultMsg::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool NodesResultMsg::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string NodesResultMsg::getName() const
{
    return name_;
}

void NodesResultMsg::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NodesResultMsg::nameIsSet() const
{
    return nameIsSet_;
}

void NodesResultMsg::unsetname()
{
    nameIsSet_ = false;
}

std::string NodesResultMsg::getStatus() const
{
    return status_;
}

void NodesResultMsg::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NodesResultMsg::statusIsSet() const
{
    return statusIsSet_;
}

void NodesResultMsg::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


