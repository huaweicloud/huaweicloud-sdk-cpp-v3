

#include "huaweicloud/rds/v3/model/ListInstancesInfoDiagnosisRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstancesInfoDiagnosisRequest::ListInstancesInfoDiagnosisRequest()
{
    engine_ = "";
    engineIsSet_ = false;
    diagnosis_ = "";
    diagnosisIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListInstancesInfoDiagnosisRequest::~ListInstancesInfoDiagnosisRequest() = default;

void ListInstancesInfoDiagnosisRequest::validate()
{
}

web::json::value ListInstancesInfoDiagnosisRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }
    if(diagnosisIsSet_) {
        val[utility::conversions::to_string_t("diagnosis")] = ModelBase::toJson(diagnosis_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListInstancesInfoDiagnosisRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diagnosis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diagnosis"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiagnosis(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListInstancesInfoDiagnosisRequest::getEngine() const
{
    return engine_;
}

void ListInstancesInfoDiagnosisRequest::setEngine(const std::string& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool ListInstancesInfoDiagnosisRequest::engineIsSet() const
{
    return engineIsSet_;
}

void ListInstancesInfoDiagnosisRequest::unsetengine()
{
    engineIsSet_ = false;
}

std::string ListInstancesInfoDiagnosisRequest::getDiagnosis() const
{
    return diagnosis_;
}

void ListInstancesInfoDiagnosisRequest::setDiagnosis(const std::string& value)
{
    diagnosis_ = value;
    diagnosisIsSet_ = true;
}

bool ListInstancesInfoDiagnosisRequest::diagnosisIsSet() const
{
    return diagnosisIsSet_;
}

void ListInstancesInfoDiagnosisRequest::unsetdiagnosis()
{
    diagnosisIsSet_ = false;
}

int32_t ListInstancesInfoDiagnosisRequest::getOffset() const
{
    return offset_;
}

void ListInstancesInfoDiagnosisRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstancesInfoDiagnosisRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstancesInfoDiagnosisRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInstancesInfoDiagnosisRequest::getLimit() const
{
    return limit_;
}

void ListInstancesInfoDiagnosisRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstancesInfoDiagnosisRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstancesInfoDiagnosisRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


