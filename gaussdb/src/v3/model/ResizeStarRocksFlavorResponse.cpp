

#include "huaweicloud/gaussdb/v3/model/ResizeStarRocksFlavorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ResizeStarRocksFlavorResponse::ResizeStarRocksFlavorResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ResizeStarRocksFlavorResponse::~ResizeStarRocksFlavorResponse() = default;

void ResizeStarRocksFlavorResponse::validate()
{
}

web::json::value ResizeStarRocksFlavorResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ResizeStarRocksFlavorResponse::fromJson(const web::json::value& val)
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


std::string ResizeStarRocksFlavorResponse::getJobId() const
{
    return jobId_;
}

void ResizeStarRocksFlavorResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ResizeStarRocksFlavorResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ResizeStarRocksFlavorResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


