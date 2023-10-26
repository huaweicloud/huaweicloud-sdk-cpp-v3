

#include "huaweicloud/rds/v3/model/ListInstanceDiagnosisResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstanceDiagnosisResponse::ListInstanceDiagnosisResponse()
{
    diagnosisIsSet_ = false;
}

ListInstanceDiagnosisResponse::~ListInstanceDiagnosisResponse() = default;

void ListInstanceDiagnosisResponse::validate()
{
}

web::json::value ListInstanceDiagnosisResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(diagnosisIsSet_) {
        val[utility::conversions::to_string_t("diagnosis")] = ModelBase::toJson(diagnosis_);
    }

    return val;
}
bool ListInstanceDiagnosisResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("diagnosis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diagnosis"));
        if(!fieldValue.is_null())
        {
            std::vector<DiagnosisItemResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiagnosis(refVal);
        }
    }
    return ok;
}


std::vector<DiagnosisItemResult>& ListInstanceDiagnosisResponse::getDiagnosis()
{
    return diagnosis_;
}

void ListInstanceDiagnosisResponse::setDiagnosis(const std::vector<DiagnosisItemResult>& value)
{
    diagnosis_ = value;
    diagnosisIsSet_ = true;
}

bool ListInstanceDiagnosisResponse::diagnosisIsSet() const
{
    return diagnosisIsSet_;
}

void ListInstanceDiagnosisResponse::unsetdiagnosis()
{
    diagnosisIsSet_ = false;
}

}
}
}
}
}


