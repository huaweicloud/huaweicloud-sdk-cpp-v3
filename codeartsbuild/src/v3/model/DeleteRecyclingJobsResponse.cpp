

#include "huaweicloud/codeartsbuild/v3/model/DeleteRecyclingJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DeleteRecyclingJobsResponse::DeleteRecyclingJobsResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

DeleteRecyclingJobsResponse::~DeleteRecyclingJobsResponse() = default;

void DeleteRecyclingJobsResponse::validate()
{
}

web::json::value DeleteRecyclingJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteRecyclingJobsResponse::fromJson(const web::json::value& val)
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


std::string DeleteRecyclingJobsResponse::getStatus() const
{
    return status_;
}

void DeleteRecyclingJobsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteRecyclingJobsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteRecyclingJobsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


