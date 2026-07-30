

#include "huaweicloud/modelarts/v1/model/OutputModel.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




OutputModel::OutputModel()
{
    obsIsSet_ = false;
}

OutputModel::~OutputModel() = default;

void OutputModel::validate()
{
}

web::json::value OutputModel::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsIsSet_) {
        val[utility::conversions::to_string_t("obs")] = ModelBase::toJson(obs_);
    }

    return val;
}
bool OutputModel::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs"));
        if(!fieldValue.is_null())
        {
            ObsModel refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObs(refVal);
        }
    }
    return ok;
}


ObsModel OutputModel::getObs() const
{
    return obs_;
}

void OutputModel::setObs(const ObsModel& value)
{
    obs_ = value;
    obsIsSet_ = true;
}

bool OutputModel::obsIsSet() const
{
    return obsIsSet_;
}

void OutputModel::unsetobs()
{
    obsIsSet_ = false;
}

}
}
}
}
}


