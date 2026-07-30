

#include "huaweicloud/modelarts/v1/model/DataSource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DataSource::DataSource()
{
    jobIsSet_ = false;
    nfsIsSet_ = false;
}

DataSource::~DataSource() = default;

void DataSource::validate()
{
}

web::json::value DataSource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIsSet_) {
        val[utility::conversions::to_string_t("job")] = ModelBase::toJson(job_);
    }
    if(nfsIsSet_) {
        val[utility::conversions::to_string_t("nfs")] = ModelBase::toJson(nfs_);
    }

    return val;
}
bool DataSource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job"));
        if(!fieldValue.is_null())
        {
            JobSummary refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJob(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nfs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nfs"));
        if(!fieldValue.is_null())
        {
            NFSSummary refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNfs(refVal);
        }
    }
    return ok;
}


JobSummary DataSource::getJob() const
{
    return job_;
}

void DataSource::setJob(const JobSummary& value)
{
    job_ = value;
    jobIsSet_ = true;
}

bool DataSource::jobIsSet() const
{
    return jobIsSet_;
}

void DataSource::unsetjob()
{
    jobIsSet_ = false;
}

NFSSummary DataSource::getNfs() const
{
    return nfs_;
}

void DataSource::setNfs(const NFSSummary& value)
{
    nfs_ = value;
    nfsIsSet_ = true;
}

bool DataSource::nfsIsSet() const
{
    return nfsIsSet_;
}

void DataSource::unsetnfs()
{
    nfsIsSet_ = false;
}

}
}
}
}
}


