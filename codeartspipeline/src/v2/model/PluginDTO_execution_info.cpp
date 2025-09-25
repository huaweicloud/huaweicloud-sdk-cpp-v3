

#include "huaweicloud/codeartspipeline/v2/model/PluginDTO_execution_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PluginDTO_execution_info::PluginDTO_execution_info()
{
    innerExecutionInfoIsSet_ = false;
}

PluginDTO_execution_info::~PluginDTO_execution_info() = default;

void PluginDTO_execution_info::validate()
{
}

web::json::value PluginDTO_execution_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(innerExecutionInfoIsSet_) {
        val[utility::conversions::to_string_t("inner_execution_info")] = ModelBase::toJson(innerExecutionInfo_);
    }

    return val;
}
bool PluginDTO_execution_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("inner_execution_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inner_execution_info"));
        if(!fieldValue.is_null())
        {
            PluginDTO_execution_info_inner_execution_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInnerExecutionInfo(refVal);
        }
    }
    return ok;
}


PluginDTO_execution_info_inner_execution_info PluginDTO_execution_info::getInnerExecutionInfo() const
{
    return innerExecutionInfo_;
}

void PluginDTO_execution_info::setInnerExecutionInfo(const PluginDTO_execution_info_inner_execution_info& value)
{
    innerExecutionInfo_ = value;
    innerExecutionInfoIsSet_ = true;
}

bool PluginDTO_execution_info::innerExecutionInfoIsSet() const
{
    return innerExecutionInfoIsSet_;
}

void PluginDTO_execution_info::unsetinnerExecutionInfo()
{
    innerExecutionInfoIsSet_ = false;
}

}
}
}
}
}


