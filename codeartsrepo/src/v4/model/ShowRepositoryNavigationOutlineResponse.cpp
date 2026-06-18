

#include "huaweicloud/codeartsrepo/v4/model/ShowRepositoryNavigationOutlineResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRepositoryNavigationOutlineResponse::ShowRepositoryNavigationOutlineResponse()
{
    result_ = "";
    resultIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    revision_ = "";
    revisionIsSet_ = false;
    symbolsIsSet_ = false;
}

ShowRepositoryNavigationOutlineResponse::~ShowRepositoryNavigationOutlineResponse() = default;

void ShowRepositoryNavigationOutlineResponse::validate()
{
}

web::json::value ShowRepositoryNavigationOutlineResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(revisionIsSet_) {
        val[utility::conversions::to_string_t("revision")] = ModelBase::toJson(revision_);
    }
    if(symbolsIsSet_) {
        val[utility::conversions::to_string_t("symbols")] = ModelBase::toJson(symbols_);
    }

    return val;
}
bool ShowRepositoryNavigationOutlineResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("revision"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("revision"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRevision(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("symbols"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("symbols"));
        if(!fieldValue.is_null())
        {
            std::vector<SymbolNodeDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSymbols(refVal);
        }
    }
    return ok;
}


std::string ShowRepositoryNavigationOutlineResponse::getResult() const
{
    return result_;
}

void ShowRepositoryNavigationOutlineResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowRepositoryNavigationOutlineResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowRepositoryNavigationOutlineResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowRepositoryNavigationOutlineResponse::getMessage() const
{
    return message_;
}

void ShowRepositoryNavigationOutlineResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowRepositoryNavigationOutlineResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowRepositoryNavigationOutlineResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ShowRepositoryNavigationOutlineResponse::getFilePath() const
{
    return filePath_;
}

void ShowRepositoryNavigationOutlineResponse::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool ShowRepositoryNavigationOutlineResponse::filePathIsSet() const
{
    return filePathIsSet_;
}

void ShowRepositoryNavigationOutlineResponse::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string ShowRepositoryNavigationOutlineResponse::getRevision() const
{
    return revision_;
}

void ShowRepositoryNavigationOutlineResponse::setRevision(const std::string& value)
{
    revision_ = value;
    revisionIsSet_ = true;
}

bool ShowRepositoryNavigationOutlineResponse::revisionIsSet() const
{
    return revisionIsSet_;
}

void ShowRepositoryNavigationOutlineResponse::unsetrevision()
{
    revisionIsSet_ = false;
}

std::vector<SymbolNodeDto>& ShowRepositoryNavigationOutlineResponse::getSymbols()
{
    return symbols_;
}

void ShowRepositoryNavigationOutlineResponse::setSymbols(const std::vector<SymbolNodeDto>& value)
{
    symbols_ = value;
    symbolsIsSet_ = true;
}

bool ShowRepositoryNavigationOutlineResponse::symbolsIsSet() const
{
    return symbolsIsSet_;
}

void ShowRepositoryNavigationOutlineResponse::unsetsymbols()
{
    symbolsIsSet_ = false;
}

}
}
}
}
}


