

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowFullSqlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowFullSqlResponse::ShowFullSqlResponse()
{
    traceStatisticsIsSet_ = false;
    componentsIsSet_ = false;
}

ShowFullSqlResponse::~ShowFullSqlResponse() = default;

void ShowFullSqlResponse::validate()
{
}

web::json::value ShowFullSqlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(traceStatisticsIsSet_) {
        val[utility::conversions::to_string_t("trace_statistics")] = ModelBase::toJson(traceStatistics_);
    }
    if(componentsIsSet_) {
        val[utility::conversions::to_string_t("components")] = ModelBase::toJson(components_);
    }

    return val;
}
bool ShowFullSqlResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trace_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_statistics"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceStatistics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("components"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("components"));
        if(!fieldValue.is_null())
        {
            std::vector<FullSqlComponetResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponents(refVal);
        }
    }
    return ok;
}


Object ShowFullSqlResponse::getTraceStatistics() const
{
    return traceStatistics_;
}

void ShowFullSqlResponse::setTraceStatistics(const Object& value)
{
    traceStatistics_ = value;
    traceStatisticsIsSet_ = true;
}

bool ShowFullSqlResponse::traceStatisticsIsSet() const
{
    return traceStatisticsIsSet_;
}

void ShowFullSqlResponse::unsettraceStatistics()
{
    traceStatisticsIsSet_ = false;
}

std::vector<FullSqlComponetResult>& ShowFullSqlResponse::getComponents()
{
    return components_;
}

void ShowFullSqlResponse::setComponents(const std::vector<FullSqlComponetResult>& value)
{
    components_ = value;
    componentsIsSet_ = true;
}

bool ShowFullSqlResponse::componentsIsSet() const
{
    return componentsIsSet_;
}

void ShowFullSqlResponse::unsetcomponents()
{
    componentsIsSet_ = false;
}

}
}
}
}
}


