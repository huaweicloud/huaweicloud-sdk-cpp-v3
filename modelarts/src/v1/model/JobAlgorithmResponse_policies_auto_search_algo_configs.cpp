

#include "huaweicloud/modelarts/v1/model/JobAlgorithmResponse_policies_auto_search_algo_configs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobAlgorithmResponse_policies_auto_search_algo_configs::JobAlgorithmResponse_policies_auto_search_algo_configs()
{
    name_ = "";
    nameIsSet_ = false;
    paramsIsSet_ = false;
}

JobAlgorithmResponse_policies_auto_search_algo_configs::~JobAlgorithmResponse_policies_auto_search_algo_configs() = default;

void JobAlgorithmResponse_policies_auto_search_algo_configs::validate()
{
}

web::json::value JobAlgorithmResponse_policies_auto_search_algo_configs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool JobAlgorithmResponse_policies_auto_search_algo_configs::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            std::vector<AutoSearchAlgoConfigParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string JobAlgorithmResponse_policies_auto_search_algo_configs::getName() const
{
    return name_;
}

void JobAlgorithmResponse_policies_auto_search_algo_configs::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool JobAlgorithmResponse_policies_auto_search_algo_configs::nameIsSet() const
{
    return nameIsSet_;
}

void JobAlgorithmResponse_policies_auto_search_algo_configs::unsetname()
{
    nameIsSet_ = false;
}

std::vector<AutoSearchAlgoConfigParameter>& JobAlgorithmResponse_policies_auto_search_algo_configs::getParams()
{
    return params_;
}

void JobAlgorithmResponse_policies_auto_search_algo_configs::setParams(const std::vector<AutoSearchAlgoConfigParameter>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool JobAlgorithmResponse_policies_auto_search_algo_configs::paramsIsSet() const
{
    return paramsIsSet_;
}

void JobAlgorithmResponse_policies_auto_search_algo_configs::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


