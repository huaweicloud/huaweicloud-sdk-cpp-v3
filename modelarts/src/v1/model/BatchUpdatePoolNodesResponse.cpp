

#include "huaweicloud/modelarts/v1/model/BatchUpdatePoolNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchUpdatePoolNodesResponse::BatchUpdatePoolNodesResponse()
{
    successNodeNamesIsSet_ = false;
    failNodeNamesIsSet_ = false;
}

BatchUpdatePoolNodesResponse::~BatchUpdatePoolNodesResponse() = default;

void BatchUpdatePoolNodesResponse::validate()
{
}

web::json::value BatchUpdatePoolNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successNodeNamesIsSet_) {
        val[utility::conversions::to_string_t("successNodeNames")] = ModelBase::toJson(successNodeNames_);
    }
    if(failNodeNamesIsSet_) {
        val[utility::conversions::to_string_t("failNodeNames")] = ModelBase::toJson(failNodeNames_);
    }

    return val;
}
bool BatchUpdatePoolNodesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("successNodeNames"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("successNodeNames"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessNodeNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failNodeNames"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failNodeNames"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailNodeNames(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchUpdatePoolNodesResponse::getSuccessNodeNames()
{
    return successNodeNames_;
}

void BatchUpdatePoolNodesResponse::setSuccessNodeNames(const std::vector<std::string>& value)
{
    successNodeNames_ = value;
    successNodeNamesIsSet_ = true;
}

bool BatchUpdatePoolNodesResponse::successNodeNamesIsSet() const
{
    return successNodeNamesIsSet_;
}

void BatchUpdatePoolNodesResponse::unsetsuccessNodeNames()
{
    successNodeNamesIsSet_ = false;
}

std::vector<std::string>& BatchUpdatePoolNodesResponse::getFailNodeNames()
{
    return failNodeNames_;
}

void BatchUpdatePoolNodesResponse::setFailNodeNames(const std::vector<std::string>& value)
{
    failNodeNames_ = value;
    failNodeNamesIsSet_ = true;
}

bool BatchUpdatePoolNodesResponse::failNodeNamesIsSet() const
{
    return failNodeNamesIsSet_;
}

void BatchUpdatePoolNodesResponse::unsetfailNodeNames()
{
    failNodeNamesIsSet_ = false;
}

}
}
}
}
}


