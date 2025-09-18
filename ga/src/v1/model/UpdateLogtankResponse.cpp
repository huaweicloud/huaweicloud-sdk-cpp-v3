

#include "huaweicloud/ga/v1/model/UpdateLogtankResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateLogtankResponse::UpdateLogtankResponse()
{
    logtankIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

UpdateLogtankResponse::~UpdateLogtankResponse() = default;

void UpdateLogtankResponse::validate()
{
}

web::json::value UpdateLogtankResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logtankIsSet_) {
        val[utility::conversions::to_string_t("logtank")] = ModelBase::toJson(logtank_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool UpdateLogtankResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("logtank"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logtank"));
        if(!fieldValue.is_null())
        {
            LogtankDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogtank(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


LogtankDetail UpdateLogtankResponse::getLogtank() const
{
    return logtank_;
}

void UpdateLogtankResponse::setLogtank(const LogtankDetail& value)
{
    logtank_ = value;
    logtankIsSet_ = true;
}

bool UpdateLogtankResponse::logtankIsSet() const
{
    return logtankIsSet_;
}

void UpdateLogtankResponse::unsetlogtank()
{
    logtankIsSet_ = false;
}

std::string UpdateLogtankResponse::getRequestId() const
{
    return requestId_;
}

void UpdateLogtankResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateLogtankResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateLogtankResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


