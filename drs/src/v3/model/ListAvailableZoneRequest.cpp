

#include "huaweicloud/drs/v3/model/ListAvailableZoneRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListAvailableZoneRequest::ListAvailableZoneRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ListAvailableZoneRequest::~ListAvailableZoneRequest() = default;

void ListAvailableZoneRequest::validate()
{
}

web::json::value ListAvailableZoneRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ListAvailableZoneRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            QueryAvailableNodeTypeReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ListAvailableZoneRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListAvailableZoneRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListAvailableZoneRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListAvailableZoneRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

QueryAvailableNodeTypeReq ListAvailableZoneRequest::getBody() const
{
    return body_;
}

void ListAvailableZoneRequest::setBody(const QueryAvailableNodeTypeReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAvailableZoneRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAvailableZoneRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


