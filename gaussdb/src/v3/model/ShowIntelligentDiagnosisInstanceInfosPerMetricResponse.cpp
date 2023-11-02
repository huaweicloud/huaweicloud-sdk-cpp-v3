

#include "huaweicloud/gaussdb/v3/model/ShowIntelligentDiagnosisInstanceInfosPerMetricResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowIntelligentDiagnosisInstanceInfosPerMetricResponse::ShowIntelligentDiagnosisInstanceInfosPerMetricResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    instanceInfosIsSet_ = false;
}

ShowIntelligentDiagnosisInstanceInfosPerMetricResponse::~ShowIntelligentDiagnosisInstanceInfosPerMetricResponse() = default;

void ShowIntelligentDiagnosisInstanceInfosPerMetricResponse::validate()
{
}

web::json::value ShowIntelligentDiagnosisInstanceInfosPerMetricResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(instanceInfosIsSet_) {
        val[utility::conversions::to_string_t("instance_infos")] = ModelBase::toJson(instanceInfos_);
    }

    return val;
}
bool ShowIntelligentDiagnosisInstanceInfosPerMetricResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceInfoForDiagnosis> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceInfos(refVal);
        }
    }
    return ok;
}


int32_t ShowIntelligentDiagnosisInstanceInfosPerMetricResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowIntelligentDiagnosisInstanceInfosPerMetricResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowIntelligentDiagnosisInstanceInfosPerMetricResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowIntelligentDiagnosisInstanceInfosPerMetricResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<InstanceInfoForDiagnosis>& ShowIntelligentDiagnosisInstanceInfosPerMetricResponse::getInstanceInfos()
{
    return instanceInfos_;
}

void ShowIntelligentDiagnosisInstanceInfosPerMetricResponse::setInstanceInfos(const std::vector<InstanceInfoForDiagnosis>& value)
{
    instanceInfos_ = value;
    instanceInfosIsSet_ = true;
}

bool ShowIntelligentDiagnosisInstanceInfosPerMetricResponse::instanceInfosIsSet() const
{
    return instanceInfosIsSet_;
}

void ShowIntelligentDiagnosisInstanceInfosPerMetricResponse::unsetinstanceInfos()
{
    instanceInfosIsSet_ = false;
}

}
}
}
}
}


