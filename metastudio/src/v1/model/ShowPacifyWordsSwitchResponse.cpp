

#include "huaweicloud/metastudio/v1/model/ShowPacifyWordsSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowPacifyWordsSwitchResponse::ShowPacifyWordsSwitchResponse()
{
    enablePacifyWords_ = false;
    enablePacifyWordsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowPacifyWordsSwitchResponse::~ShowPacifyWordsSwitchResponse() = default;

void ShowPacifyWordsSwitchResponse::validate()
{
}

web::json::value ShowPacifyWordsSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enablePacifyWordsIsSet_) {
        val[utility::conversions::to_string_t("enable_pacify_words")] = ModelBase::toJson(enablePacifyWords_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowPacifyWordsSwitchResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable_pacify_words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_pacify_words"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnablePacifyWords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


bool ShowPacifyWordsSwitchResponse::isEnablePacifyWords() const
{
    return enablePacifyWords_;
}

void ShowPacifyWordsSwitchResponse::setEnablePacifyWords(bool value)
{
    enablePacifyWords_ = value;
    enablePacifyWordsIsSet_ = true;
}

bool ShowPacifyWordsSwitchResponse::enablePacifyWordsIsSet() const
{
    return enablePacifyWordsIsSet_;
}

void ShowPacifyWordsSwitchResponse::unsetenablePacifyWords()
{
    enablePacifyWordsIsSet_ = false;
}

std::string ShowPacifyWordsSwitchResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowPacifyWordsSwitchResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowPacifyWordsSwitchResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowPacifyWordsSwitchResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


