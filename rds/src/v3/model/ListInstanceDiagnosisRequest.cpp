

#include "huaweicloud/rds/v3/model/ListInstanceDiagnosisRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstanceDiagnosisRequest::ListInstanceDiagnosisRequest()
{
    engine_ = "";
    engineIsSet_ = false;
}

ListInstanceDiagnosisRequest::~ListInstanceDiagnosisRequest() = default;

void ListInstanceDiagnosisRequest::validate()
{
}

web::json::value ListInstanceDiagnosisRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }

    return val;
}
bool ListInstanceDiagnosisRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListInstanceDiagnosisRequest::getEngine() const
{
    return engine_;
}

void ListInstanceDiagnosisRequest::setEngine(const std::string& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool ListInstanceDiagnosisRequest::engineIsSet() const
{
    return engineIsSet_;
}

void ListInstanceDiagnosisRequest::unsetengine()
{
    engineIsSet_ = false;
}

}
}
}
}
}


