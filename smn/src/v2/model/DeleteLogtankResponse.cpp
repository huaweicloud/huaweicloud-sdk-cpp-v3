

#include "huaweicloud/smn/v2/model/DeleteLogtankResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteLogtankResponse::DeleteLogtankResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

DeleteLogtankResponse::~DeleteLogtankResponse() = default;

void DeleteLogtankResponse::validate()
{
}

web::json::value DeleteLogtankResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}

bool DeleteLogtankResponse::fromJson(const web::json::value& val)
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
    return ok;
}

std::string DeleteLogtankResponse::getRequestId() const
{
    return requestId_;
}

void DeleteLogtankResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DeleteLogtankResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DeleteLogtankResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


