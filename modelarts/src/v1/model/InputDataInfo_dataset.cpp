

#include "huaweicloud/modelarts/v1/model/InputDataInfo_dataset.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




InputDataInfo_dataset::InputDataInfo_dataset()
{
    id_ = "";
    idIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
    obsUrl_ = "";
    obsUrlIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    datasetProportion_ = 0;
    datasetProportionIsSet_ = false;
}

InputDataInfo_dataset::~InputDataInfo_dataset() = default;

void InputDataInfo_dataset::validate()
{
}

web::json::value InputDataInfo_dataset::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }
    if(obsUrlIsSet_) {
        val[utility::conversions::to_string_t("obs_url")] = ModelBase::toJson(obsUrl_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(datasetProportionIsSet_) {
        val[utility::conversions::to_string_t("dataset_proportion")] = ModelBase::toJson(datasetProportion_);
    }

    return val;
}
bool InputDataInfo_dataset::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataset_proportion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_proportion"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetProportion(refVal);
        }
    }
    return ok;
}


std::string InputDataInfo_dataset::getId() const
{
    return id_;
}

void InputDataInfo_dataset::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool InputDataInfo_dataset::idIsSet() const
{
    return idIsSet_;
}

void InputDataInfo_dataset::unsetid()
{
    idIsSet_ = false;
}

std::string InputDataInfo_dataset::getVersionId() const
{
    return versionId_;
}

void InputDataInfo_dataset::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool InputDataInfo_dataset::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void InputDataInfo_dataset::unsetversionId()
{
    versionIdIsSet_ = false;
}

std::string InputDataInfo_dataset::getObsUrl() const
{
    return obsUrl_;
}

void InputDataInfo_dataset::setObsUrl(const std::string& value)
{
    obsUrl_ = value;
    obsUrlIsSet_ = true;
}

bool InputDataInfo_dataset::obsUrlIsSet() const
{
    return obsUrlIsSet_;
}

void InputDataInfo_dataset::unsetobsUrl()
{
    obsUrlIsSet_ = false;
}

std::string InputDataInfo_dataset::getServiceType() const
{
    return serviceType_;
}

void InputDataInfo_dataset::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool InputDataInfo_dataset::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void InputDataInfo_dataset::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string InputDataInfo_dataset::getName() const
{
    return name_;
}

void InputDataInfo_dataset::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InputDataInfo_dataset::nameIsSet() const
{
    return nameIsSet_;
}

void InputDataInfo_dataset::unsetname()
{
    nameIsSet_ = false;
}

int32_t InputDataInfo_dataset::getDatasetProportion() const
{
    return datasetProportion_;
}

void InputDataInfo_dataset::setDatasetProportion(int32_t value)
{
    datasetProportion_ = value;
    datasetProportionIsSet_ = true;
}

bool InputDataInfo_dataset::datasetProportionIsSet() const
{
    return datasetProportionIsSet_;
}

void InputDataInfo_dataset::unsetdatasetProportion()
{
    datasetProportionIsSet_ = false;
}

}
}
}
}
}


