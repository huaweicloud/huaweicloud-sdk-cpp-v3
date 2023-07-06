

#include "huaweicloud/sdrs/v1/model/ShowProtectedInstanceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ShowProtectedInstanceRequest::ShowProtectedInstanceRequest()
{
    protectedInstanceId_ = "";
    protectedInstanceIdIsSet_ = false;
}

ShowProtectedInstanceRequest::~ShowProtectedInstanceRequest() = default;

void ShowProtectedInstanceRequest::validate()
{
}

web::json::value ShowProtectedInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("protected_instance_id")] = ModelBase::toJson(protectedInstanceId_);
    }

    return val;
}

bool ShowProtectedInstanceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protected_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstanceId(refVal);
        }
    }
    return ok;
}

std::string ShowProtectedInstanceRequest::getProtectedInstanceId() const
{
    return protectedInstanceId_;
}

void ShowProtectedInstanceRequest::setProtectedInstanceId(const std::string& value)
{
    protectedInstanceId_ = value;
    protectedInstanceIdIsSet_ = true;
}

bool ShowProtectedInstanceRequest::protectedInstanceIdIsSet() const
{
    return protectedInstanceIdIsSet_;
}

void ShowProtectedInstanceRequest::unsetprotectedInstanceId()
{
    protectedInstanceIdIsSet_ = false;
}

}
}
}
}
}


