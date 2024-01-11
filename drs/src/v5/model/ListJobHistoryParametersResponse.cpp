

#include "huaweicloud/drs/v5/model/ListJobHistoryParametersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListJobHistoryParametersResponse::ListJobHistoryParametersResponse()
{
    count_ = 0;
    countIsSet_ = false;
    parameterHistoryConfigListIsSet_ = false;
}

ListJobHistoryParametersResponse::~ListJobHistoryParametersResponse() = default;

void ListJobHistoryParametersResponse::validate()
{
}

web::json::value ListJobHistoryParametersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(parameterHistoryConfigListIsSet_) {
        val[utility::conversions::to_string_t("parameter_history_config_list")] = ModelBase::toJson(parameterHistoryConfigList_);
    }

    return val;
}
bool ListJobHistoryParametersResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("parameter_history_config_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter_history_config_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ListJobHistoryParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameterHistoryConfigList(refVal);
        }
    }
    return ok;
}


int32_t ListJobHistoryParametersResponse::getCount() const
{
    return count_;
}

void ListJobHistoryParametersResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListJobHistoryParametersResponse::countIsSet() const
{
    return countIsSet_;
}

void ListJobHistoryParametersResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ListJobHistoryParameter>& ListJobHistoryParametersResponse::getParameterHistoryConfigList()
{
    return parameterHistoryConfigList_;
}

void ListJobHistoryParametersResponse::setParameterHistoryConfigList(const std::vector<ListJobHistoryParameter>& value)
{
    parameterHistoryConfigList_ = value;
    parameterHistoryConfigListIsSet_ = true;
}

bool ListJobHistoryParametersResponse::parameterHistoryConfigListIsSet() const
{
    return parameterHistoryConfigListIsSet_;
}

void ListJobHistoryParametersResponse::unsetparameterHistoryConfigList()
{
    parameterHistoryConfigListIsSet_ = false;
}

}
}
}
}
}


