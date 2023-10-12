

#include "huaweicloud/rds/v3/model/ListJobInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListJobInfoRequest::ListJobInfoRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ListJobInfoRequest::~ListJobInfoRequest() = default;

void ListJobInfoRequest::validate()
{
}

web::json::value ListJobInfoRequest::toJson() const
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
bool ListJobInfoRequest::fromJson(const web::json::value& val)
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


std::string ListJobInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListJobInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListJobInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListJobInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListJobInfoRequest::getId() const
{
    return id_;
}

void ListJobInfoRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListJobInfoRequest::idIsSet() const
{
    return idIsSet_;
}

void ListJobInfoRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


