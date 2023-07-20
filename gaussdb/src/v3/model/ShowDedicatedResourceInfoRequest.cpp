

#include "huaweicloud/gaussdb/v3/model/ShowDedicatedResourceInfoRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowDedicatedResourceInfoRequest::ShowDedicatedResourceInfoRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    dedicatedResourceId_ = "";
    dedicatedResourceIdIsSet_ = false;
}

ShowDedicatedResourceInfoRequest::~ShowDedicatedResourceInfoRequest() = default;

void ShowDedicatedResourceInfoRequest::validate()
{
}

web::json::value ShowDedicatedResourceInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(dedicatedResourceIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_resource_id")] = ModelBase::toJson(dedicatedResourceId_);
    }

    return val;
}

bool ShowDedicatedResourceInfoRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("dedicated_resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedResourceId(refVal);
        }
    }
    return ok;
}

std::string ShowDedicatedResourceInfoRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowDedicatedResourceInfoRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowDedicatedResourceInfoRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowDedicatedResourceInfoRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowDedicatedResourceInfoRequest::getDedicatedResourceId() const
{
    return dedicatedResourceId_;
}

void ShowDedicatedResourceInfoRequest::setDedicatedResourceId(const std::string& value)
{
    dedicatedResourceId_ = value;
    dedicatedResourceIdIsSet_ = true;
}

bool ShowDedicatedResourceInfoRequest::dedicatedResourceIdIsSet() const
{
    return dedicatedResourceIdIsSet_;
}

void ShowDedicatedResourceInfoRequest::unsetdedicatedResourceId()
{
    dedicatedResourceIdIsSet_ = false;
}

}
}
}
}
}


