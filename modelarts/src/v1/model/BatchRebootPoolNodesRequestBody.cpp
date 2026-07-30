

#include "huaweicloud/modelarts/v1/model/BatchRebootPoolNodesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchRebootPoolNodesRequestBody::BatchRebootPoolNodesRequestBody()
{
    nodeNamesIsSet_ = false;
}

BatchRebootPoolNodesRequestBody::~BatchRebootPoolNodesRequestBody() = default;

void BatchRebootPoolNodesRequestBody::validate()
{
}

web::json::value BatchRebootPoolNodesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNamesIsSet_) {
        val[utility::conversions::to_string_t("nodeNames")] = ModelBase::toJson(nodeNames_);
    }

    return val;
}
bool BatchRebootPoolNodesRequestBody::fromJson(const web::json::value& val)
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


std::vector<std::string>& BatchRebootPoolNodesRequestBody::getNodeNames()
{
    return nodeNames_;
}

void BatchRebootPoolNodesRequestBody::setNodeNames(const std::vector<std::string>& value)
{
    nodeNames_ = value;
    nodeNamesIsSet_ = true;
}

bool BatchRebootPoolNodesRequestBody::nodeNamesIsSet() const
{
    return nodeNamesIsSet_;
}

void BatchRebootPoolNodesRequestBody::unsetnodeNames()
{
    nodeNamesIsSet_ = false;
}

}
}
}
}
}


