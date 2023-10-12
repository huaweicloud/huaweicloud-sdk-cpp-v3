

#include "huaweicloud/smn/v2/model/UpdateLogtankResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateLogtankResponse::UpdateLogtankResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    logtankIsSet_ = false;
}

UpdateLogtankResponse::~UpdateLogtankResponse() = default;

void UpdateLogtankResponse::validate()
{
}

web::json::value UpdateLogtankResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(logtankIsSet_) {
        val[utility::conversions::to_string_t("logtank")] = ModelBase::toJson(logtank_);
    }

    return val;
}
bool UpdateLogtankResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logtank"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logtank"));
        if(!fieldValue.is_null())
        {
            LogtankItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogtank(refVal);
        }
    }
    return ok;
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

LogtankItem UpdateLogtankResponse::getLogtank() const
{
    return logtank_;
}

void UpdateLogtankResponse::setLogtank(const LogtankItem& value)
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

}
}
}
}
}


