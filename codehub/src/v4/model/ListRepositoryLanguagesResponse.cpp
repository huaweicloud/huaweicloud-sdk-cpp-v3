

#include "huaweicloud/codehub/v4/model/ListRepositoryLanguagesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryLanguagesResponse::ListRepositoryLanguagesResponse()
{
    languagesIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListRepositoryLanguagesResponse::~ListRepositoryLanguagesResponse() = default;

void ListRepositoryLanguagesResponse::validate()
{
}

web::json::value ListRepositoryLanguagesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(languagesIsSet_) {
        val[utility::conversions::to_string_t("languages")] = ModelBase::toJson(languages_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ListRepositoryLanguagesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("languages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("languages"));
        if(!fieldValue.is_null())
        {
            std::vector<LanguagesDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
        }
    }
    return ok;
}


std::vector<LanguagesDto>& ListRepositoryLanguagesResponse::getLanguages()
{
    return languages_;
}

void ListRepositoryLanguagesResponse::setLanguages(const std::vector<LanguagesDto>& value)
{
    languages_ = value;
    languagesIsSet_ = true;
}

bool ListRepositoryLanguagesResponse::languagesIsSet() const
{
    return languagesIsSet_;
}

void ListRepositoryLanguagesResponse::unsetlanguages()
{
    languagesIsSet_ = false;
}

std::string ListRepositoryLanguagesResponse::getStatus() const
{
    return status_;
}

void ListRepositoryLanguagesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListRepositoryLanguagesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListRepositoryLanguagesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListRepositoryLanguagesResponse::getXTotal() const
{
    return xTotal_;
}

void ListRepositoryLanguagesResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListRepositoryLanguagesResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListRepositoryLanguagesResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


