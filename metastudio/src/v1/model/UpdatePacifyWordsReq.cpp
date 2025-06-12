

#include "huaweicloud/metastudio/v1/model/UpdatePacifyWordsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdatePacifyWordsReq::UpdatePacifyWordsReq()
{
    pacifyWords_ = "";
    pacifyWordsIsSet_ = false;
}

UpdatePacifyWordsReq::~UpdatePacifyWordsReq() = default;

void UpdatePacifyWordsReq::validate()
{
}

web::json::value UpdatePacifyWordsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pacifyWordsIsSet_) {
        val[utility::conversions::to_string_t("pacify_words")] = ModelBase::toJson(pacifyWords_);
    }

    return val;
}
bool UpdatePacifyWordsReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pacify_words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pacify_words"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPacifyWords(refVal);
        }
    }
    return ok;
}


std::string UpdatePacifyWordsReq::getPacifyWords() const
{
    return pacifyWords_;
}

void UpdatePacifyWordsReq::setPacifyWords(const std::string& value)
{
    pacifyWords_ = value;
    pacifyWordsIsSet_ = true;
}

bool UpdatePacifyWordsReq::pacifyWordsIsSet() const
{
    return pacifyWordsIsSet_;
}

void UpdatePacifyWordsReq::unsetpacifyWords()
{
    pacifyWordsIsSet_ = false;
}

}
}
}
}
}


