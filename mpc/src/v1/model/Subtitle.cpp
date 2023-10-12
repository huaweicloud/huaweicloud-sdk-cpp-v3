

#include "huaweicloud/mpc/v1/model/Subtitle.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




Subtitle::Subtitle()
{
    inputIsSet_ = false;
    inputsIsSet_ = false;
    subtitleType_ = 0;
    subtitleTypeIsSet_ = false;
}

Subtitle::~Subtitle() = default;

void Subtitle::validate()
{
}

web::json::value Subtitle::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(inputsIsSet_) {
        val[utility::conversions::to_string_t("inputs")] = ModelBase::toJson(inputs_);
    }
    if(subtitleTypeIsSet_) {
        val[utility::conversions::to_string_t("subtitle_type")] = ModelBase::toJson(subtitleType_);
    }

    return val;
}
bool Subtitle::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            std::vector<MulInputFileInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtitle_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtitle_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtitleType(refVal);
        }
    }
    return ok;
}


ObsObjInfo Subtitle::getInput() const
{
    return input_;
}

void Subtitle::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool Subtitle::inputIsSet() const
{
    return inputIsSet_;
}

void Subtitle::unsetinput()
{
    inputIsSet_ = false;
}

std::vector<MulInputFileInfo>& Subtitle::getInputs()
{
    return inputs_;
}

void Subtitle::setInputs(const std::vector<MulInputFileInfo>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool Subtitle::inputsIsSet() const
{
    return inputsIsSet_;
}

void Subtitle::unsetinputs()
{
    inputsIsSet_ = false;
}

int32_t Subtitle::getSubtitleType() const
{
    return subtitleType_;
}

void Subtitle::setSubtitleType(int32_t value)
{
    subtitleType_ = value;
    subtitleTypeIsSet_ = true;
}

bool Subtitle::subtitleTypeIsSet() const
{
    return subtitleTypeIsSet_;
}

void Subtitle::unsetsubtitleType()
{
    subtitleTypeIsSet_ = false;
}

}
}
}
}
}


