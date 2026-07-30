

#include "huaweicloud/modelarts/v1/model/PoolStatistics_statistics_status.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolStatistics_statistics_status::PoolStatistics_statistics_status()
{
    creating_ = 0;
    creatingIsSet_ = false;
    created_ = 0;
    createdIsSet_ = false;
    failed_ = 0;
    failedIsSet_ = false;
    pending_ = 0;
    pendingIsSet_ = false;
}

PoolStatistics_statistics_status::~PoolStatistics_statistics_status() = default;

void PoolStatistics_statistics_status::validate()
{
}

web::json::value PoolStatistics_statistics_status::toJson() const
{
    web::json::value val = web::json::value::object();

    if(creatingIsSet_) {
        val[utility::conversions::to_string_t("creating")] = ModelBase::toJson(creating_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(failedIsSet_) {
        val[utility::conversions::to_string_t("failed")] = ModelBase::toJson(failed_);
    }
    if(pendingIsSet_) {
        val[utility::conversions::to_string_t("pending")] = ModelBase::toJson(pending_);
    }

    return val;
}
bool PoolStatistics_statistics_status::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("creating"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creating"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreating(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pending"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pending"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPending(refVal);
        }
    }
    return ok;
}


int32_t PoolStatistics_statistics_status::getCreating() const
{
    return creating_;
}

void PoolStatistics_statistics_status::setCreating(int32_t value)
{
    creating_ = value;
    creatingIsSet_ = true;
}

bool PoolStatistics_statistics_status::creatingIsSet() const
{
    return creatingIsSet_;
}

void PoolStatistics_statistics_status::unsetcreating()
{
    creatingIsSet_ = false;
}

int32_t PoolStatistics_statistics_status::getCreated() const
{
    return created_;
}

void PoolStatistics_statistics_status::setCreated(int32_t value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool PoolStatistics_statistics_status::createdIsSet() const
{
    return createdIsSet_;
}

void PoolStatistics_statistics_status::unsetcreated()
{
    createdIsSet_ = false;
}

int32_t PoolStatistics_statistics_status::getFailed() const
{
    return failed_;
}

void PoolStatistics_statistics_status::setFailed(int32_t value)
{
    failed_ = value;
    failedIsSet_ = true;
}

bool PoolStatistics_statistics_status::failedIsSet() const
{
    return failedIsSet_;
}

void PoolStatistics_statistics_status::unsetfailed()
{
    failedIsSet_ = false;
}

int32_t PoolStatistics_statistics_status::getPending() const
{
    return pending_;
}

void PoolStatistics_statistics_status::setPending(int32_t value)
{
    pending_ = value;
    pendingIsSet_ = true;
}

bool PoolStatistics_statistics_status::pendingIsSet() const
{
    return pendingIsSet_;
}

void PoolStatistics_statistics_status::unsetpending()
{
    pendingIsSet_ = false;
}

}
}
}
}
}


