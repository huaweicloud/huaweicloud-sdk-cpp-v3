

#include "huaweicloud/rds/v3/model/ListInstancesInfoDiagnosisResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstancesInfoDiagnosisResponse::ListInstancesInfoDiagnosisResponse()
{
    diagnosis_ = "";
    diagnosisIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    instancesIsSet_ = false;
}

ListInstancesInfoDiagnosisResponse::~ListInstancesInfoDiagnosisResponse() = default;

void ListInstancesInfoDiagnosisResponse::validate()
{
}

web::json::value ListInstancesInfoDiagnosisResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(diagnosisIsSet_) {
        val[utility::conversions::to_string_t("diagnosis")] = ModelBase::toJson(diagnosis_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }

    return val;
}
bool ListInstancesInfoDiagnosisResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("diagnosis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diagnosis"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiagnosis(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<DiagnosisInstancesInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


std::string ListInstancesInfoDiagnosisResponse::getDiagnosis() const
{
    return diagnosis_;
}

void ListInstancesInfoDiagnosisResponse::setDiagnosis(const std::string& value)
{
    diagnosis_ = value;
    diagnosisIsSet_ = true;
}

bool ListInstancesInfoDiagnosisResponse::diagnosisIsSet() const
{
    return diagnosisIsSet_;
}

void ListInstancesInfoDiagnosisResponse::unsetdiagnosis()
{
    diagnosisIsSet_ = false;
}

int32_t ListInstancesInfoDiagnosisResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInstancesInfoDiagnosisResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInstancesInfoDiagnosisResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInstancesInfoDiagnosisResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<DiagnosisInstancesInfoResult>& ListInstancesInfoDiagnosisResponse::getInstances()
{
    return instances_;
}

void ListInstancesInfoDiagnosisResponse::setInstances(const std::vector<DiagnosisInstancesInfoResult>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListInstancesInfoDiagnosisResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListInstancesInfoDiagnosisResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


