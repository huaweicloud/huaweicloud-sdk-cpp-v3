

#include "huaweicloud/gaussdbforopengauss/v3/model/RedistributionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RedistributionRequestBody::RedistributionRequestBody()
{
    redisJoinTablesIsSet_ = false;
    redisParallelJobs_ = 0;
    redisParallelJobsIsSet_ = false;
    redisResourceLevel_ = "";
    redisResourceLevelIsSet_ = false;
}

RedistributionRequestBody::~RedistributionRequestBody() = default;

void RedistributionRequestBody::validate()
{
}

web::json::value RedistributionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(redisJoinTablesIsSet_) {
        val[utility::conversions::to_string_t("redis_join_tables")] = ModelBase::toJson(redisJoinTables_);
    }
    if(redisParallelJobsIsSet_) {
        val[utility::conversions::to_string_t("redis_parallel_jobs")] = ModelBase::toJson(redisParallelJobs_);
    }
    if(redisResourceLevelIsSet_) {
        val[utility::conversions::to_string_t("redis_resource_level")] = ModelBase::toJson(redisResourceLevel_);
    }

    return val;
}
bool RedistributionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("redis_join_tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redis_join_tables"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<std::string>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRedisJoinTables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("redis_parallel_jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redis_parallel_jobs"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRedisParallelJobs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("redis_resource_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redis_resource_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRedisResourceLevel(refVal);
        }
    }
    return ok;
}


std::vector<std::vector<std::string>>& RedistributionRequestBody::getRedisJoinTables()
{
    return redisJoinTables_;
}

void RedistributionRequestBody::setRedisJoinTables(const std::vector<std::vector<std::string>>& value)
{
    redisJoinTables_ = value;
    redisJoinTablesIsSet_ = true;
}

bool RedistributionRequestBody::redisJoinTablesIsSet() const
{
    return redisJoinTablesIsSet_;
}

void RedistributionRequestBody::unsetredisJoinTables()
{
    redisJoinTablesIsSet_ = false;
}

int32_t RedistributionRequestBody::getRedisParallelJobs() const
{
    return redisParallelJobs_;
}

void RedistributionRequestBody::setRedisParallelJobs(int32_t value)
{
    redisParallelJobs_ = value;
    redisParallelJobsIsSet_ = true;
}

bool RedistributionRequestBody::redisParallelJobsIsSet() const
{
    return redisParallelJobsIsSet_;
}

void RedistributionRequestBody::unsetredisParallelJobs()
{
    redisParallelJobsIsSet_ = false;
}

std::string RedistributionRequestBody::getRedisResourceLevel() const
{
    return redisResourceLevel_;
}

void RedistributionRequestBody::setRedisResourceLevel(const std::string& value)
{
    redisResourceLevel_ = value;
    redisResourceLevelIsSet_ = true;
}

bool RedistributionRequestBody::redisResourceLevelIsSet() const
{
    return redisResourceLevelIsSet_;
}

void RedistributionRequestBody::unsetredisResourceLevel()
{
    redisResourceLevelIsSet_ = false;
}

}
}
}
}
}


