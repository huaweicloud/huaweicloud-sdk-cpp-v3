

#include "huaweicloud/smn/v2/model/DeleteKmsKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteKmsKeyResponse::DeleteKmsKeyResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
}

DeleteKmsKeyResponse::~DeleteKmsKeyResponse() = default;

void DeleteKmsKeyResponse::validate()
{
}

web::json::value DeleteKmsKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool DeleteKmsKeyResponse::fromJson(const web::json::value& val)
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


std::string DeleteKmsKeyResponse::getRequestId() const
{
    return requestId_;
}

void DeleteKmsKeyResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DeleteKmsKeyResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DeleteKmsKeyResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


