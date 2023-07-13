

#include "huaweicloud/live/v1/model/RunRecordResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




RunRecordResponse::RunRecordResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

RunRecordResponse::~RunRecordResponse() = default;

void RunRecordResponse::validate()
{
}

web::json::value RunRecordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}

bool RunRecordResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}

std::string RunRecordResponse::getXRequestId() const
{
    return xRequestId_;
}

void RunRecordResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool RunRecordResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void RunRecordResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


