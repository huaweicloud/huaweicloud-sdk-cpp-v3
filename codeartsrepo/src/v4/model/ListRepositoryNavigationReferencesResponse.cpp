

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryNavigationReferencesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryNavigationReferencesResponse::ListRepositoryNavigationReferencesResponse()
{
    result_ = "";
    resultIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    defsIsSet_ = false;
    refsIsSet_ = false;
}

ListRepositoryNavigationReferencesResponse::~ListRepositoryNavigationReferencesResponse() = default;

void ListRepositoryNavigationReferencesResponse::validate()
{
}

web::json::value ListRepositoryNavigationReferencesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(defsIsSet_) {
        val[utility::conversions::to_string_t("defs")] = ModelBase::toJson(defs_);
    }
    if(refsIsSet_) {
        val[utility::conversions::to_string_t("refs")] = ModelBase::toJson(refs_);
    }

    return val;
}
bool ListRepositoryNavigationReferencesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("defs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defs"));
        if(!fieldValue.is_null())
        {
            std::vector<DefEntryDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("refs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("refs"));
        if(!fieldValue.is_null())
        {
            std::vector<RefEntryDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefs(refVal);
        }
    }
    return ok;
}


std::string ListRepositoryNavigationReferencesResponse::getResult() const
{
    return result_;
}

void ListRepositoryNavigationReferencesResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListRepositoryNavigationReferencesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListRepositoryNavigationReferencesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListRepositoryNavigationReferencesResponse::getMessage() const
{
    return message_;
}

void ListRepositoryNavigationReferencesResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ListRepositoryNavigationReferencesResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ListRepositoryNavigationReferencesResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<DefEntryDto>& ListRepositoryNavigationReferencesResponse::getDefs()
{
    return defs_;
}

void ListRepositoryNavigationReferencesResponse::setDefs(const std::vector<DefEntryDto>& value)
{
    defs_ = value;
    defsIsSet_ = true;
}

bool ListRepositoryNavigationReferencesResponse::defsIsSet() const
{
    return defsIsSet_;
}

void ListRepositoryNavigationReferencesResponse::unsetdefs()
{
    defsIsSet_ = false;
}

std::vector<RefEntryDto>& ListRepositoryNavigationReferencesResponse::getRefs()
{
    return refs_;
}

void ListRepositoryNavigationReferencesResponse::setRefs(const std::vector<RefEntryDto>& value)
{
    refs_ = value;
    refsIsSet_ = true;
}

bool ListRepositoryNavigationReferencesResponse::refsIsSet() const
{
    return refsIsSet_;
}

void ListRepositoryNavigationReferencesResponse::unsetrefs()
{
    refsIsSet_ = false;
}

}
}
}
}
}


