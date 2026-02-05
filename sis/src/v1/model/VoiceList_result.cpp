

#include "huaweicloud/sis/v1/model/VoiceList_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




VoiceList_result::VoiceList_result()
{
    voicesIsSet_ = false;
}

VoiceList_result::~VoiceList_result() = default;

void VoiceList_result::validate()
{
}

web::json::value VoiceList_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(voicesIsSet_) {
        val[utility::conversions::to_string_t("voices")] = ModelBase::toJson(voices_);
    }

    return val;
}
bool VoiceList_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("voices"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voices"));
        if(!fieldValue.is_null())
        {
            std::vector<VoiceList_result_voices> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoices(refVal);
        }
    }
    return ok;
}


std::vector<VoiceList_result_voices>& VoiceList_result::getVoices()
{
    return voices_;
}

void VoiceList_result::setVoices(const std::vector<VoiceList_result_voices>& value)
{
    voices_ = value;
    voicesIsSet_ = true;
}

bool VoiceList_result::voicesIsSet() const
{
    return voicesIsSet_;
}

void VoiceList_result::unsetvoices()
{
    voicesIsSet_ = false;
}

}
}
}
}
}


