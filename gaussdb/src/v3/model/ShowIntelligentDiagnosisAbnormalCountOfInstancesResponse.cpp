

#include "huaweicloud/gaussdb/v3/model/ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse::ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse()
{
    diagnosisInfoIsSet_ = false;
}

ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse::~ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse() = default;

void ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse::validate()
{
}

web::json::value ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(diagnosisInfoIsSet_) {
        val[utility::conversions::to_string_t("diagnosis_info")] = ModelBase::toJson(diagnosisInfo_);
    }

    return val;
}
bool ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("diagnosis_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diagnosis_info"));
        if(!fieldValue.is_null())
        {
            std::vector<DiagnosisInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiagnosisInfo(refVal);
        }
    }
    return ok;
}


std::vector<DiagnosisInfo>& ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse::getDiagnosisInfo()
{
    return diagnosisInfo_;
}

void ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse::setDiagnosisInfo(const std::vector<DiagnosisInfo>& value)
{
    diagnosisInfo_ = value;
    diagnosisInfoIsSet_ = true;
}

bool ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse::diagnosisInfoIsSet() const
{
    return diagnosisInfoIsSet_;
}

void ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse::unsetdiagnosisInfo()
{
    diagnosisInfoIsSet_ = false;
}

}
}
}
}
}


