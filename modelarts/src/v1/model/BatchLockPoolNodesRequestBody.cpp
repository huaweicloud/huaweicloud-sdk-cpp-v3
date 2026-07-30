

#include "huaweicloud/modelarts/v1/model/BatchLockPoolNodesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchLockPoolNodesRequestBody::BatchLockPoolNodesRequestBody()
{
    nodeNamesIsSet_ = false;
    actionsIsSet_ = false;
}

BatchLockPoolNodesRequestBody::~BatchLockPoolNodesRequestBody() = default;

void BatchLockPoolNodesRequestBody::validate()
{
}

web::json::value BatchLockPoolNodesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNamesIsSet_) {
        val[utility::conversions::to_string_t("nodeNames")] = ModelBase::toJson(nodeNames_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }

    return val;
}
bool BatchLockPoolNodesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodeNames"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeNames"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchLockPoolNodesRequestBody::getNodeNames()
{
    return nodeNames_;
}

void BatchLockPoolNodesRequestBody::setNodeNames(const std::vector<std::string>& value)
{
    nodeNames_ = value;
    nodeNamesIsSet_ = true;
}

bool BatchLockPoolNodesRequestBody::nodeNamesIsSet() const
{
    return nodeNamesIsSet_;
}

void BatchLockPoolNodesRequestBody::unsetnodeNames()
{
    nodeNamesIsSet_ = false;
}

std::vector<std::string>& BatchLockPoolNodesRequestBody::getActions()
{
    return actions_;
}

void BatchLockPoolNodesRequestBody::setActions(const std::vector<std::string>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool BatchLockPoolNodesRequestBody::actionsIsSet() const
{
    return actionsIsSet_;
}

void BatchLockPoolNodesRequestBody::unsetactions()
{
    actionsIsSet_ = false;
}

}
}
}
}
}


