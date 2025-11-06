

#include "huaweicloud/codeartsrepo/v4/model/DeleteFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DeleteFileResponse::DeleteFileResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

DeleteFileResponse::~DeleteFileResponse() = default;

void DeleteFileResponse::validate()
{
}

web::json::value DeleteFileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteFileResponse::fromJson(const web::json::value& val)
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


std::string DeleteFileResponse::getStatus() const
{
    return status_;
}

void DeleteFileResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteFileResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteFileResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


