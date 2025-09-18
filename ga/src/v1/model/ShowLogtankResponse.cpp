

#include "huaweicloud/ga/v1/model/ShowLogtankResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ShowLogtankResponse::ShowLogtankResponse()
{
    logtankIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ShowLogtankResponse::~ShowLogtankResponse() = default;

void ShowLogtankResponse::validate()
{
}

web::json::value ShowLogtankResponse::toJson() const
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
bool ShowLogtankResponse::fromJson(const web::json::value& val)
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


LogtankDetail ShowLogtankResponse::getLogtank() const
{
    return logtank_;
}

void ShowLogtankResponse::setLogtank(const LogtankDetail& value)
{
    logtank_ = value;
    logtankIsSet_ = true;
}

bool ShowLogtankResponse::logtankIsSet() const
{
    return logtankIsSet_;
}

void ShowLogtankResponse::unsetlogtank()
{
    logtankIsSet_ = false;
}

std::string ShowLogtankResponse::getRequestId() const
{
    return requestId_;
}

void ShowLogtankResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowLogtankResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowLogtankResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


