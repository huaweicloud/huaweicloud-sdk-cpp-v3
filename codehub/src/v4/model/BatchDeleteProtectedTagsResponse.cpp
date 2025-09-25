

#include "huaweicloud/codehub/v4/model/BatchDeleteProtectedTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BatchDeleteProtectedTagsResponse::BatchDeleteProtectedTagsResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

BatchDeleteProtectedTagsResponse::~BatchDeleteProtectedTagsResponse() = default;

void BatchDeleteProtectedTagsResponse::validate()
{
}

web::json::value BatchDeleteProtectedTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool BatchDeleteProtectedTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteProtectedTagsResponse::getStatus() const
{
    return status_;
}

void BatchDeleteProtectedTagsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchDeleteProtectedTagsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchDeleteProtectedTagsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


