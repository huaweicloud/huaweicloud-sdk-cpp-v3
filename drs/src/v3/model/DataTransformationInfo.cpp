

#include "huaweicloud/drs/v3/model/DataTransformationInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




DataTransformationInfo::DataTransformationInfo()
{
    transformationInfoIsSet_ = false;
    configTransformationIsSet_ = false;
    dataTransformationObjectInfosIsSet_ = false;
}

DataTransformationInfo::~DataTransformationInfo() = default;

void DataTransformationInfo::validate()
{
}

web::json::value DataTransformationInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(transformationInfoIsSet_) {
        val[utility::conversions::to_string_t("transformation_info")] = ModelBase::toJson(transformationInfo_);
    }
    if(configTransformationIsSet_) {
        val[utility::conversions::to_string_t("config_transformation")] = ModelBase::toJson(configTransformation_);
    }
    if(dataTransformationObjectInfosIsSet_) {
        val[utility::conversions::to_string_t("data_transformation_object_infos")] = ModelBase::toJson(dataTransformationObjectInfos_);
    }

    return val;
}
bool DataTransformationInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("data_transformation_object_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_transformation_object_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<DataTransformationObjectVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataTransformationObjectInfos(refVal);
        }
    }
    return ok;
}


TransformationInfo DataTransformationInfo::getTransformationInfo() const
{
    return transformationInfo_;
}

void DataTransformationInfo::setTransformationInfo(const TransformationInfo& value)
{
    transformationInfo_ = value;
    transformationInfoIsSet_ = true;
}

bool DataTransformationInfo::transformationInfoIsSet() const
{
    return transformationInfoIsSet_;
}

void DataTransformationInfo::unsettransformationInfo()
{
    transformationInfoIsSet_ = false;
}

ConfigTransformationVo DataTransformationInfo::getConfigTransformation() const
{
    return configTransformation_;
}

void DataTransformationInfo::setConfigTransformation(const ConfigTransformationVo& value)
{
    configTransformation_ = value;
    configTransformationIsSet_ = true;
}

bool DataTransformationInfo::configTransformationIsSet() const
{
    return configTransformationIsSet_;
}

void DataTransformationInfo::unsetconfigTransformation()
{
    configTransformationIsSet_ = false;
}

std::vector<DataTransformationObjectVO>& DataTransformationInfo::getDataTransformationObjectInfos()
{
    return dataTransformationObjectInfos_;
}

void DataTransformationInfo::setDataTransformationObjectInfos(const std::vector<DataTransformationObjectVO>& value)
{
    dataTransformationObjectInfos_ = value;
    dataTransformationObjectInfosIsSet_ = true;
}

bool DataTransformationInfo::dataTransformationObjectInfosIsSet() const
{
    return dataTransformationObjectInfosIsSet_;
}

void DataTransformationInfo::unsetdataTransformationObjectInfos()
{
    dataTransformationObjectInfosIsSet_ = false;
}

}
}
}
}
}


