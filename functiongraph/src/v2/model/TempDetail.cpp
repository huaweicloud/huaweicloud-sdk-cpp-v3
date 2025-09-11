

#include "huaweicloud/functiongraph/v2/model/TempDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




TempDetail::TempDetail()
{
    input_ = "";
    inputIsSet_ = false;
    output_ = "";
    outputIsSet_ = false;
    warning_ = "";
    warningIsSet_ = false;
}

TempDetail::~TempDetail() = default;

void TempDetail::validate()
{
}

web::json::value TempDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(warningIsSet_) {
        val[utility::conversions::to_string_t("warning")] = ModelBase::toJson(warning_);
    }

    return val;
}
bool TempDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("warning"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("warning"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWarning(refVal);
        }
    }
    return ok;
}


std::string TempDetail::getInput() const
{
    return input_;
}

void TempDetail::setInput(const std::string& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool TempDetail::inputIsSet() const
{
    return inputIsSet_;
}

void TempDetail::unsetinput()
{
    inputIsSet_ = false;
}

std::string TempDetail::getOutput() const
{
    return output_;
}

void TempDetail::setOutput(const std::string& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool TempDetail::outputIsSet() const
{
    return outputIsSet_;
}

void TempDetail::unsetoutput()
{
    outputIsSet_ = false;
}

std::string TempDetail::getWarning() const
{
    return warning_;
}

void TempDetail::setWarning(const std::string& value)
{
    warning_ = value;
    warningIsSet_ = true;
}

bool TempDetail::warningIsSet() const
{
    return warningIsSet_;
}

void TempDetail::unsetwarning()
{
    warningIsSet_ = false;
}

}
}
}
}
}


