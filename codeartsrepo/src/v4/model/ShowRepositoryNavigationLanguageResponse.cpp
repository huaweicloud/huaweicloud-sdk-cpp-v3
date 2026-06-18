

#include "huaweicloud/codeartsrepo/v4/model/ShowRepositoryNavigationLanguageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRepositoryNavigationLanguageResponse::ShowRepositoryNavigationLanguageResponse()
{
    result_ = "";
    resultIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    languageListIsSet_ = false;
}

ShowRepositoryNavigationLanguageResponse::~ShowRepositoryNavigationLanguageResponse() = default;

void ShowRepositoryNavigationLanguageResponse::validate()
{
}

web::json::value ShowRepositoryNavigationLanguageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(languageListIsSet_) {
        val[utility::conversions::to_string_t("language_list")] = ModelBase::toJson(languageList_);
    }

    return val;
}
bool ShowRepositoryNavigationLanguageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language_list"));
        if(!fieldValue.is_null())
        {
            std::vector<LanguageDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguageList(refVal);
        }
    }
    return ok;
}


std::string ShowRepositoryNavigationLanguageResponse::getResult() const
{
    return result_;
}

void ShowRepositoryNavigationLanguageResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowRepositoryNavigationLanguageResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowRepositoryNavigationLanguageResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowRepositoryNavigationLanguageResponse::getMessage() const
{
    return message_;
}

void ShowRepositoryNavigationLanguageResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowRepositoryNavigationLanguageResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowRepositoryNavigationLanguageResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<LanguageDto>& ShowRepositoryNavigationLanguageResponse::getLanguageList()
{
    return languageList_;
}

void ShowRepositoryNavigationLanguageResponse::setLanguageList(const std::vector<LanguageDto>& value)
{
    languageList_ = value;
    languageListIsSet_ = true;
}

bool ShowRepositoryNavigationLanguageResponse::languageListIsSet() const
{
    return languageListIsSet_;
}

void ShowRepositoryNavigationLanguageResponse::unsetlanguageList()
{
    languageListIsSet_ = false;
}

}
}
}
}
}


