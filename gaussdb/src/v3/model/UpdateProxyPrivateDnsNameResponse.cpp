

#include "huaweicloud/gaussdb/v3/model/UpdateProxyPrivateDnsNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateProxyPrivateDnsNameResponse::UpdateProxyPrivateDnsNameResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateProxyPrivateDnsNameResponse::~UpdateProxyPrivateDnsNameResponse() = default;

void UpdateProxyPrivateDnsNameResponse::validate()
{
}

web::json::value UpdateProxyPrivateDnsNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateProxyPrivateDnsNameResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::string UpdateProxyPrivateDnsNameResponse::getJobId() const
{
    return jobId_;
}

void UpdateProxyPrivateDnsNameResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateProxyPrivateDnsNameResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateProxyPrivateDnsNameResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


