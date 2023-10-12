

#include "huaweicloud/smn/v2/model/DeleteApplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteApplicationResponse::DeleteApplicationResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

DeleteApplicationResponse::~DeleteApplicationResponse() = default;

void DeleteApplicationResponse::validate()
{
}

web::json::value DeleteApplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool DeleteApplicationResponse::fromJson(const web::json::value& val)
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


std::string DeleteApplicationResponse::getRequestId() const
{
    return requestId_;
}

void DeleteApplicationResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DeleteApplicationResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DeleteApplicationResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


