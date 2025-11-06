

#include "huaweicloud/codeartsrepo/v4/model/DeleteProtectedTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DeleteProtectedTagResponse::DeleteProtectedTagResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

DeleteProtectedTagResponse::~DeleteProtectedTagResponse() = default;

void DeleteProtectedTagResponse::validate()
{
}

web::json::value DeleteProtectedTagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteProtectedTagResponse::fromJson(const web::json::value& val)
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


std::string DeleteProtectedTagResponse::getStatus() const
{
    return status_;
}

void DeleteProtectedTagResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteProtectedTagResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteProtectedTagResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


