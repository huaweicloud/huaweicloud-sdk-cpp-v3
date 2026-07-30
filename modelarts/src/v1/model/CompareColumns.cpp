

#include "huaweicloud/modelarts/v1/model/CompareColumns.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CompareColumns::CompareColumns()
{
    parametersIsSet_ = false;
    metricsIsSet_ = false;
}

CompareColumns::~CompareColumns() = default;

void CompareColumns::validate()
{
}

web::json::value CompareColumns::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }
    if(metricsIsSet_) {
        val[utility::conversions::to_string_t("metrics")] = ModelBase::toJson(metrics_);
    }

    return val;
}
bool CompareColumns::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metrics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metrics"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetrics(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& CompareColumns::getParameters()
{
    return parameters_;
}

void CompareColumns::setParameters(const std::vector<std::string>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool CompareColumns::parametersIsSet() const
{
    return parametersIsSet_;
}

void CompareColumns::unsetparameters()
{
    parametersIsSet_ = false;
}

std::vector<std::string>& CompareColumns::getMetrics()
{
    return metrics_;
}

void CompareColumns::setMetrics(const std::vector<std::string>& value)
{
    metrics_ = value;
    metricsIsSet_ = true;
}

bool CompareColumns::metricsIsSet() const
{
    return metricsIsSet_;
}

void CompareColumns::unsetmetrics()
{
    metricsIsSet_ = false;
}

}
}
}
}
}


