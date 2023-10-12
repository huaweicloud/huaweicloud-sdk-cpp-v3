

#include "huaweicloud/live/v2/model/TranscodeData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




TranscodeData::TranscodeData()
{
    specListIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
}

TranscodeData::~TranscodeData() = default;

void TranscodeData::validate()
{
}

web::json::value TranscodeData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(specListIsSet_) {
        val[utility::conversions::to_string_t("spec_list")] = ModelBase::toJson(specList_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}
bool TranscodeData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spec_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TranscodeSpec> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    return ok;
}


std::vector<TranscodeSpec>& TranscodeData::getSpecList()
{
    return specList_;
}

void TranscodeData::setSpecList(const std::vector<TranscodeSpec>& value)
{
    specList_ = value;
    specListIsSet_ = true;
}

bool TranscodeData::specListIsSet() const
{
    return specListIsSet_;
}

void TranscodeData::unsetspecList()
{
    specListIsSet_ = false;
}

std::string TranscodeData::getTime() const
{
    return time_;
}

void TranscodeData::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool TranscodeData::timeIsSet() const
{
    return timeIsSet_;
}

void TranscodeData::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


