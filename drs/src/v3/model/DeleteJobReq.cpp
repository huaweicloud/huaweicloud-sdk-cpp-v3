

#include "huaweicloud/drs/v3/model/DeleteJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




DeleteJobReq::DeleteJobReq()
{
    deleteType_ = "";
    deleteTypeIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteJobReq::~DeleteJobReq() = default;

void DeleteJobReq::validate()
{
}

web::json::value DeleteJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deleteTypeIsSet_) {
        val[utility::conversions::to_string_t("delete_type")] = ModelBase::toJson(deleteType_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delete_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteType(refVal);
        }
    }
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


std::string DeleteJobReq::getDeleteType() const
{
    return deleteType_;
}

void DeleteJobReq::setDeleteType(const std::string& value)
{
    deleteType_ = value;
    deleteTypeIsSet_ = true;
}

bool DeleteJobReq::deleteTypeIsSet() const
{
    return deleteTypeIsSet_;
}

void DeleteJobReq::unsetdeleteType()
{
    deleteTypeIsSet_ = false;
}

std::string DeleteJobReq::getJobId() const
{
    return jobId_;
}

void DeleteJobReq::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteJobReq::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteJobReq::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


