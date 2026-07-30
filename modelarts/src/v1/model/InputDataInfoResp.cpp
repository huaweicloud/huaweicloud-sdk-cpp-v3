

#include "huaweicloud/modelarts/v1/model/InputDataInfoResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




InputDataInfoResp::InputDataInfoResp()
{
    datasetIsSet_ = false;
    obsIsSet_ = false;
}

InputDataInfoResp::~InputDataInfoResp() = default;

void InputDataInfoResp::validate()
{
}

web::json::value InputDataInfoResp::toJson() const
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
bool InputDataInfoResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dataset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset"));
        if(!fieldValue.is_null())
        {
            InputDataInfoResp_dataset refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs"));
        if(!fieldValue.is_null())
        {
            InputDataInfoResp_obs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObs(refVal);
        }
    }
    return ok;
}


InputDataInfoResp_dataset InputDataInfoResp::getDataset() const
{
    return dataset_;
}

void InputDataInfoResp::setDataset(const InputDataInfoResp_dataset& value)
{
    dataset_ = value;
    datasetIsSet_ = true;
}

bool InputDataInfoResp::datasetIsSet() const
{
    return datasetIsSet_;
}

void InputDataInfoResp::unsetdataset()
{
    datasetIsSet_ = false;
}

InputDataInfoResp_obs InputDataInfoResp::getObs() const
{
    return obs_;
}

void InputDataInfoResp::setObs(const InputDataInfoResp_obs& value)
{
    obs_ = value;
    obsIsSet_ = true;
}

bool InputDataInfoResp::obsIsSet() const
{
    return obsIsSet_;
}

void InputDataInfoResp::unsetobs()
{
    obsIsSet_ = false;
}

}
}
}
}
}


