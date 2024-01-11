

#include "huaweicloud/drs/v5/model/ListJobParametersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListJobParametersResponse::ListJobParametersResponse()
{
    count_ = 0;
    countIsSet_ = false;
    parameterConfigListIsSet_ = false;
}

ListJobParametersResponse::~ListJobParametersResponse() = default;

void ListJobParametersResponse::validate()
{
}

web::json::value ListJobParametersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(parameterConfigListIsSet_) {
        val[utility::conversions::to_string_t("parameter_config_list")] = ModelBase::toJson(parameterConfigList_);
    }

    return val;
}
bool ListJobParametersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameter_config_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter_config_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ParameterConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameterConfigList(refVal);
        }
    }
    return ok;
}


int32_t ListJobParametersResponse::getCount() const
{
    return count_;
}

void ListJobParametersResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListJobParametersResponse::countIsSet() const
{
    return countIsSet_;
}

void ListJobParametersResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ParameterConfig>& ListJobParametersResponse::getParameterConfigList()
{
    return parameterConfigList_;
}

void ListJobParametersResponse::setParameterConfigList(const std::vector<ParameterConfig>& value)
{
    parameterConfigList_ = value;
    parameterConfigListIsSet_ = true;
}

bool ListJobParametersResponse::parameterConfigListIsSet() const
{
    return parameterConfigListIsSet_;
}

void ListJobParametersResponse::unsetparameterConfigList()
{
    parameterConfigListIsSet_ = false;
}

}
}
}
}
}


