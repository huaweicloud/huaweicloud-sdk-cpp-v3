

#include "huaweicloud/codeartsbuild/v3/model/ResumeBuildJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ResumeBuildJobResponse::ResumeBuildJobResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

ResumeBuildJobResponse::~ResumeBuildJobResponse() = default;

void ResumeBuildJobResponse::validate()
{
}

web::json::value ResumeBuildJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ResumeBuildJobResponse::fromJson(const web::json::value& val)
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


std::string ResumeBuildJobResponse::getStatus() const
{
    return status_;
}

void ResumeBuildJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ResumeBuildJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ResumeBuildJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


