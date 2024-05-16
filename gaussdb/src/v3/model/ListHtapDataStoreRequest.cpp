

#include "huaweicloud/gaussdb/v3/model/ListHtapDataStoreRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListHtapDataStoreRequest::ListHtapDataStoreRequest()
{
    engineName_ = "";
    engineNameIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListHtapDataStoreRequest::~ListHtapDataStoreRequest() = default;

void ListHtapDataStoreRequest::validate()
{
}

web::json::value ListHtapDataStoreRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListHtapDataStoreRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ListHtapDataStoreRequest::getEngineName() const
{
    return engineName_;
}

void ListHtapDataStoreRequest::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool ListHtapDataStoreRequest::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void ListHtapDataStoreRequest::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string ListHtapDataStoreRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListHtapDataStoreRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListHtapDataStoreRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListHtapDataStoreRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


