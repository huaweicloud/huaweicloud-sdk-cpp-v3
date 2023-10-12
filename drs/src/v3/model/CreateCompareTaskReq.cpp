

#include "huaweicloud/drs/v3/model/CreateCompareTaskReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CreateCompareTaskReq::CreateCompareTaskReq()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    objectLevelCompareType_ = "";
    objectLevelCompareTypeIsSet_ = false;
    dataLevelCompareInfoIsSet_ = false;
}

CreateCompareTaskReq::~CreateCompareTaskReq() = default;

void CreateCompareTaskReq::validate()
{
}

web::json::value CreateCompareTaskReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(objectLevelCompareTypeIsSet_) {
        val[utility::conversions::to_string_t("object_level_compare_type")] = ModelBase::toJson(objectLevelCompareType_);
    }
    if(dataLevelCompareInfoIsSet_) {
        val[utility::conversions::to_string_t("data_level_compare_info")] = ModelBase::toJson(dataLevelCompareInfo_);
    }

    return val;
}
bool CreateCompareTaskReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("object_level_compare_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_level_compare_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectLevelCompareType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_level_compare_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_level_compare_info"));
        if(!fieldValue.is_null())
        {
            CreateDataLevelCompareReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataLevelCompareInfo(refVal);
        }
    }
    return ok;
}


std::string CreateCompareTaskReq::getJobId() const
{
    return jobId_;
}

void CreateCompareTaskReq::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateCompareTaskReq::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateCompareTaskReq::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateCompareTaskReq::getObjectLevelCompareType() const
{
    return objectLevelCompareType_;
}

void CreateCompareTaskReq::setObjectLevelCompareType(const std::string& value)
{
    objectLevelCompareType_ = value;
    objectLevelCompareTypeIsSet_ = true;
}

bool CreateCompareTaskReq::objectLevelCompareTypeIsSet() const
{
    return objectLevelCompareTypeIsSet_;
}

void CreateCompareTaskReq::unsetobjectLevelCompareType()
{
    objectLevelCompareTypeIsSet_ = false;
}

CreateDataLevelCompareReq CreateCompareTaskReq::getDataLevelCompareInfo() const
{
    return dataLevelCompareInfo_;
}

void CreateCompareTaskReq::setDataLevelCompareInfo(const CreateDataLevelCompareReq& value)
{
    dataLevelCompareInfo_ = value;
    dataLevelCompareInfoIsSet_ = true;
}

bool CreateCompareTaskReq::dataLevelCompareInfoIsSet() const
{
    return dataLevelCompareInfoIsSet_;
}

void CreateCompareTaskReq::unsetdataLevelCompareInfo()
{
    dataLevelCompareInfoIsSet_ = false;
}

}
}
}
}
}


