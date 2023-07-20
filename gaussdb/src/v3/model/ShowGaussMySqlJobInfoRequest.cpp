

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlJobInfoRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlJobInfoRequest::ShowGaussMySqlJobInfoRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ShowGaussMySqlJobInfoRequest::~ShowGaussMySqlJobInfoRequest() = default;

void ShowGaussMySqlJobInfoRequest::validate()
{
}

web::json::value ShowGaussMySqlJobInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool ShowGaussMySqlJobInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}

std::string ShowGaussMySqlJobInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowGaussMySqlJobInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowGaussMySqlJobInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowGaussMySqlJobInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowGaussMySqlJobInfoRequest::getId() const
{
    return id_;
}

void ShowGaussMySqlJobInfoRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowGaussMySqlJobInfoRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowGaussMySqlJobInfoRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


