

#include "huaweicloud/modelarts/v1/model/DeleteAuthorizationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteAuthorizationsRequest::DeleteAuthorizationsRequest()
{
    userId_ = "";
    userIdIsSet_ = false;
}

DeleteAuthorizationsRequest::~DeleteAuthorizationsRequest() = default;

void DeleteAuthorizationsRequest::validate()
{
}

web::json::value DeleteAuthorizationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool DeleteAuthorizationsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    return ok;
}


std::string DeleteAuthorizationsRequest::getUserId() const
{
    return userId_;
}

void DeleteAuthorizationsRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool DeleteAuthorizationsRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void DeleteAuthorizationsRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


