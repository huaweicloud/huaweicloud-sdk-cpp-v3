

#include "huaweicloud/mpc/v1/model/ConcatInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ConcatInfo::ConcatInfo()
{
    inputsIsSet_ = false;
}

ConcatInfo::~ConcatInfo() = default;

void ConcatInfo::validate()
{
}

web::json::value ConcatInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputsIsSet_) {
        val[utility::conversions::to_string_t("inputs")] = ModelBase::toJson(inputs_);
    }

    return val;
}
bool ConcatInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            std::vector<ObsObjInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    return ok;
}


std::vector<ObsObjInfo>& ConcatInfo::getInputs()
{
    return inputs_;
}

void ConcatInfo::setInputs(const std::vector<ObsObjInfo>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool ConcatInfo::inputsIsSet() const
{
    return inputsIsSet_;
}

void ConcatInfo::unsetinputs()
{
    inputsIsSet_ = false;
}

}
}
}
}
}


