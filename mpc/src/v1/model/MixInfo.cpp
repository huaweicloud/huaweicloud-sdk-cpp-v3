

#include "huaweicloud/mpc/v1/model/MixInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




MixInfo::MixInfo()
{
    inputsIsSet_ = false;
    layoutIsSet_ = false;
}

MixInfo::~MixInfo() = default;

void MixInfo::validate()
{
}

web::json::value MixInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputsIsSet_) {
        val[utility::conversions::to_string_t("inputs")] = ModelBase::toJson(inputs_);
    }
    if(layoutIsSet_) {
        val[utility::conversions::to_string_t("layout")] = ModelBase::toJson(layout_);
    }

    return val;
}

bool MixInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            std::vector<InputSetting> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("layout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("layout"));
        if(!fieldValue.is_null())
        {
            MixInfo_layout refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLayout(refVal);
        }
    }
    return ok;
}

std::vector<InputSetting>& MixInfo::getInputs()
{
    return inputs_;
}

void MixInfo::setInputs(const std::vector<InputSetting>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool MixInfo::inputsIsSet() const
{
    return inputsIsSet_;
}

void MixInfo::unsetinputs()
{
    inputsIsSet_ = false;
}

MixInfo_layout MixInfo::getLayout() const
{
    return layout_;
}

void MixInfo::setLayout(const MixInfo_layout& value)
{
    layout_ = value;
    layoutIsSet_ = true;
}

bool MixInfo::layoutIsSet() const
{
    return layoutIsSet_;
}

void MixInfo::unsetlayout()
{
    layoutIsSet_ = false;
}

}
}
}
}
}


