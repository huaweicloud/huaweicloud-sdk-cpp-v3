

#include "huaweicloud/ga/v1/model/CreateLogtankResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateLogtankResponse::CreateLogtankResponse()
{
    logtankIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

CreateLogtankResponse::~CreateLogtankResponse() = default;

void CreateLogtankResponse::validate()
{
}

web::json::value CreateLogtankResponse::toJson() const
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
bool CreateLogtankResponse::fromJson(const web::json::value& val)
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


LogtankDetail CreateLogtankResponse::getLogtank() const
{
    return logtank_;
}

void CreateLogtankResponse::setLogtank(const LogtankDetail& value)
{
    logtank_ = value;
    logtankIsSet_ = true;
}

bool CreateLogtankResponse::logtankIsSet() const
{
    return logtankIsSet_;
}

void CreateLogtankResponse::unsetlogtank()
{
    logtankIsSet_ = false;
}

std::string CreateLogtankResponse::getRequestId() const
{
    return requestId_;
}

void CreateLogtankResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateLogtankResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateLogtankResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


