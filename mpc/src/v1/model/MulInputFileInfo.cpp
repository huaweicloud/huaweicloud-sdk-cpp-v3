

#include "huaweicloud/mpc/v1/model/MulInputFileInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




MulInputFileInfo::MulInputFileInfo()
{
    language_ = "";
    languageIsSet_ = false;
    inputIsSet_ = false;
}

MulInputFileInfo::~MulInputFileInfo() = default;

void MulInputFileInfo::validate()
{
}

web::json::value MulInputFileInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }

    return val;
}

bool MulInputFileInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    return ok;
}

std::string MulInputFileInfo::getLanguage() const
{
    return language_;
}

void MulInputFileInfo::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool MulInputFileInfo::languageIsSet() const
{
    return languageIsSet_;
}

void MulInputFileInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

ObsObjInfo MulInputFileInfo::getInput() const
{
    return input_;
}

void MulInputFileInfo::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool MulInputFileInfo::inputIsSet() const
{
    return inputIsSet_;
}

void MulInputFileInfo::unsetinput()
{
    inputIsSet_ = false;
}

}
}
}
}
}


