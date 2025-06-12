

#include "huaweicloud/metastudio/v1/model/ShowHotWordsSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowHotWordsSwitchResponse::ShowHotWordsSwitchResponse()
{
    enableHotWords_ = false;
    enableHotWordsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowHotWordsSwitchResponse::~ShowHotWordsSwitchResponse() = default;

void ShowHotWordsSwitchResponse::validate()
{
}

web::json::value ShowHotWordsSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableHotWordsIsSet_) {
        val[utility::conversions::to_string_t("enable_hot_words")] = ModelBase::toJson(enableHotWords_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowHotWordsSwitchResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable_hot_words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_hot_words"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableHotWords(refVal);
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


bool ShowHotWordsSwitchResponse::isEnableHotWords() const
{
    return enableHotWords_;
}

void ShowHotWordsSwitchResponse::setEnableHotWords(bool value)
{
    enableHotWords_ = value;
    enableHotWordsIsSet_ = true;
}

bool ShowHotWordsSwitchResponse::enableHotWordsIsSet() const
{
    return enableHotWordsIsSet_;
}

void ShowHotWordsSwitchResponse::unsetenableHotWords()
{
    enableHotWordsIsSet_ = false;
}

std::string ShowHotWordsSwitchResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowHotWordsSwitchResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowHotWordsSwitchResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowHotWordsSwitchResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


