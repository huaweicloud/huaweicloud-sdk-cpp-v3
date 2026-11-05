

#include "huaweicloud/rds/v3/model/SupabaseMailerItemTemplateReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseMailerItemTemplateReq::SupabaseMailerItemTemplateReq()
{
    subject_ = "";
    subjectIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

SupabaseMailerItemTemplateReq::~SupabaseMailerItemTemplateReq() = default;

void SupabaseMailerItemTemplateReq::validate()
{
}

web::json::value SupabaseMailerItemTemplateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}
bool SupabaseMailerItemTemplateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    return ok;
}


std::string SupabaseMailerItemTemplateReq::getSubject() const
{
    return subject_;
}

void SupabaseMailerItemTemplateReq::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool SupabaseMailerItemTemplateReq::subjectIsSet() const
{
    return subjectIsSet_;
}

void SupabaseMailerItemTemplateReq::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string SupabaseMailerItemTemplateReq::getUrl() const
{
    return url_;
}

void SupabaseMailerItemTemplateReq::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool SupabaseMailerItemTemplateReq::urlIsSet() const
{
    return urlIsSet_;
}

void SupabaseMailerItemTemplateReq::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


