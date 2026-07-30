

#include "huaweicloud/modelarts/v1/model/InputDataInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




InputDataInfo::InputDataInfo()
{
    datasetIsSet_ = false;
    obsIsSet_ = false;
}

InputDataInfo::~InputDataInfo() = default;

void InputDataInfo::validate()
{
}

web::json::value InputDataInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datasetIsSet_) {
        val[utility::conversions::to_string_t("dataset")] = ModelBase::toJson(dataset_);
    }
    if(obsIsSet_) {
        val[utility::conversions::to_string_t("obs")] = ModelBase::toJson(obs_);
    }

    return val;
}
bool InputDataInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dataset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset"));
        if(!fieldValue.is_null())
        {
            InputDataInfo_dataset refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs"));
        if(!fieldValue.is_null())
        {
            InputDataInfo_obs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObs(refVal);
        }
    }
    return ok;
}


InputDataInfo_dataset InputDataInfo::getDataset() const
{
    return dataset_;
}

void InputDataInfo::setDataset(const InputDataInfo_dataset& value)
{
    dataset_ = value;
    datasetIsSet_ = true;
}

bool InputDataInfo::datasetIsSet() const
{
    return datasetIsSet_;
}

void InputDataInfo::unsetdataset()
{
    datasetIsSet_ = false;
}

InputDataInfo_obs InputDataInfo::getObs() const
{
    return obs_;
}

void InputDataInfo::setObs(const InputDataInfo_obs& value)
{
    obs_ = value;
    obsIsSet_ = true;
}

bool InputDataInfo::obsIsSet() const
{
    return obsIsSet_;
}

void InputDataInfo::unsetobs()
{
    obsIsSet_ = false;
}

}
}
}
}
}


