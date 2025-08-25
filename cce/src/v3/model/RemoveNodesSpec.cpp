

#include "huaweicloud/cce/v3/model/RemoveNodesSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




RemoveNodesSpec::RemoveNodesSpec()
{
    loginIsSet_ = false;
    nodesIsSet_ = false;
}

RemoveNodesSpec::~RemoveNodesSpec() = default;

void RemoveNodesSpec::validate()
{
}

web::json::value RemoveNodesSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(loginIsSet_) {
        val[utility::conversions::to_string_t("login")] = ModelBase::toJson(login_);
    }
    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }

    return val;
}
bool RemoveNodesSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("login"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("login"));
        if(!fieldValue.is_null())
        {
            Login refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    return ok;
}


Login RemoveNodesSpec::getLogin() const
{
    return login_;
}

void RemoveNodesSpec::setLogin(const Login& value)
{
    login_ = value;
    loginIsSet_ = true;
}

bool RemoveNodesSpec::loginIsSet() const
{
    return loginIsSet_;
}

void RemoveNodesSpec::unsetlogin()
{
    loginIsSet_ = false;
}

std::vector<NodeItem>& RemoveNodesSpec::getNodes()
{
    return nodes_;
}

void RemoveNodesSpec::setNodes(const std::vector<NodeItem>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool RemoveNodesSpec::nodesIsSet() const
{
    return nodesIsSet_;
}

void RemoveNodesSpec::unsetnodes()
{
    nodesIsSet_ = false;
}

}
}
}
}
}


