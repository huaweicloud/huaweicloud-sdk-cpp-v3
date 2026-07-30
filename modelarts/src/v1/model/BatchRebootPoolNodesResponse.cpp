

#include "huaweicloud/modelarts/v1/model/BatchRebootPoolNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchRebootPoolNodesResponse::BatchRebootPoolNodesResponse()
{
    nodeNamesIsSet_ = false;
}

BatchRebootPoolNodesResponse::~BatchRebootPoolNodesResponse() = default;

void BatchRebootPoolNodesResponse::validate()
{
}

web::json::value BatchRebootPoolNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNamesIsSet_) {
        val[utility::conversions::to_string_t("nodeNames")] = ModelBase::toJson(nodeNames_);
    }

    return val;
}
bool BatchRebootPoolNodesResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::vector<std::string>& BatchRebootPoolNodesResponse::getNodeNames()
{
    return nodeNames_;
}

void BatchRebootPoolNodesResponse::setNodeNames(const std::vector<std::string>& value)
{
    nodeNames_ = value;
    nodeNamesIsSet_ = true;
}

bool BatchRebootPoolNodesResponse::nodeNamesIsSet() const
{
    return nodeNamesIsSet_;
}

void BatchRebootPoolNodesResponse::unsetnodeNames()
{
    nodeNamesIsSet_ = false;
}

}
}
}
}
}


