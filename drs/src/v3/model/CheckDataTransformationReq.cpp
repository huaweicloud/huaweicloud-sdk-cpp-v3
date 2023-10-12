

#include "huaweicloud/drs/v3/model/CheckDataTransformationReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CheckDataTransformationReq::CheckDataTransformationReq()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    objectInfoIsSet_ = false;
    transformationInfoIsSet_ = false;
    configTransformationIsSet_ = false;
}

CheckDataTransformationReq::~CheckDataTransformationReq() = default;

void CheckDataTransformationReq::validate()
{
}

web::json::value CheckDataTransformationReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(objectInfoIsSet_) {
        val[utility::conversions::to_string_t("object_info")] = ModelBase::toJson(objectInfo_);
    }
    if(transformationInfoIsSet_) {
        val[utility::conversions::to_string_t("transformation_info")] = ModelBase::toJson(transformationInfo_);
    }
    if(configTransformationIsSet_) {
        val[utility::conversions::to_string_t("config_transformation")] = ModelBase::toJson(configTransformation_);
    }

    return val;
}
bool CheckDataTransformationReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("object_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_info"));
        if(!fieldValue.is_null())
        {
            std::vector<DatabaseObjectVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transformation_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transformation_info"));
        if(!fieldValue.is_null())
        {
            TransformationInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransformationInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_transformation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_transformation"));
        if(!fieldValue.is_null())
        {
            ConfigTransformationVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigTransformation(refVal);
        }
    }
    return ok;
}


std::string CheckDataTransformationReq::getJobId() const
{
    return jobId_;
}

void CheckDataTransformationReq::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CheckDataTransformationReq::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CheckDataTransformationReq::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::vector<DatabaseObjectVO>& CheckDataTransformationReq::getObjectInfo()
{
    return objectInfo_;
}

void CheckDataTransformationReq::setObjectInfo(const std::vector<DatabaseObjectVO>& value)
{
    objectInfo_ = value;
    objectInfoIsSet_ = true;
}

bool CheckDataTransformationReq::objectInfoIsSet() const
{
    return objectInfoIsSet_;
}

void CheckDataTransformationReq::unsetobjectInfo()
{
    objectInfoIsSet_ = false;
}

TransformationInfo CheckDataTransformationReq::getTransformationInfo() const
{
    return transformationInfo_;
}

void CheckDataTransformationReq::setTransformationInfo(const TransformationInfo& value)
{
    transformationInfo_ = value;
    transformationInfoIsSet_ = true;
}

bool CheckDataTransformationReq::transformationInfoIsSet() const
{
    return transformationInfoIsSet_;
}

void CheckDataTransformationReq::unsettransformationInfo()
{
    transformationInfoIsSet_ = false;
}

ConfigTransformationVo CheckDataTransformationReq::getConfigTransformation() const
{
    return configTransformation_;
}

void CheckDataTransformationReq::setConfigTransformation(const ConfigTransformationVo& value)
{
    configTransformation_ = value;
    configTransformationIsSet_ = true;
}

bool CheckDataTransformationReq::configTransformationIsSet() const
{
    return configTransformationIsSet_;
}

void CheckDataTransformationReq::unsetconfigTransformation()
{
    configTransformationIsSet_ = false;
}

}
}
}
}
}


