

#include "huaweicloud/gaussdb/v3/model/UpdateParamInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateParamInfo::UpdateParamInfo()
{
    nodeType_ = "";
    nodeTypeIsSet_ = false;
    parameterValuesIsSet_ = false;
}

UpdateParamInfo::~UpdateParamInfo() = default;

void UpdateParamInfo::validate()
{
}

web::json::value UpdateParamInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeTypeIsSet_) {
        val[utility::conversions::to_string_t("node_type")] = ModelBase::toJson(nodeType_);
    }
    if(parameterValuesIsSet_) {
        val[utility::conversions::to_string_t("parameter_values")] = ModelBase::toJson(parameterValues_);
    }

    return val;
}
bool UpdateParamInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameter_values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter_values"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameterValues(refVal);
        }
    }
    return ok;
}


std::string UpdateParamInfo::getNodeType() const
{
    return nodeType_;
}

void UpdateParamInfo::setNodeType(const std::string& value)
{
    nodeType_ = value;
    nodeTypeIsSet_ = true;
}

bool UpdateParamInfo::nodeTypeIsSet() const
{
    return nodeTypeIsSet_;
}

void UpdateParamInfo::unsetnodeType()
{
    nodeTypeIsSet_ = false;
}

std::map<std::string, std::string>& UpdateParamInfo::getParameterValues()
{
    return parameterValues_;
}

void UpdateParamInfo::setParameterValues(const std::map<std::string, std::string>& value)
{
    parameterValues_ = value;
    parameterValuesIsSet_ = true;
}

bool UpdateParamInfo::parameterValuesIsSet() const
{
    return parameterValuesIsSet_;
}

void UpdateParamInfo::unsetparameterValues()
{
    parameterValuesIsSet_ = false;
}

}
}
}
}
}


