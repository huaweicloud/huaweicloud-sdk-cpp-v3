

#include "huaweicloud/rds/v3/model/DiagnosisInstancesInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DiagnosisInstancesInfoResult::DiagnosisInstancesInfoResult()
{
    id_ = "";
    idIsSet_ = false;
}

DiagnosisInstancesInfoResult::~DiagnosisInstancesInfoResult() = default;

void DiagnosisInstancesInfoResult::validate()
{
}

web::json::value DiagnosisInstancesInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DiagnosisInstancesInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string DiagnosisInstancesInfoResult::getId() const
{
    return id_;
}

void DiagnosisInstancesInfoResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DiagnosisInstancesInfoResult::idIsSet() const
{
    return idIsSet_;
}

void DiagnosisInstancesInfoResult::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


