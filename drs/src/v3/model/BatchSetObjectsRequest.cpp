

#include "huaweicloud/drs/v3/model/BatchSetObjectsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchSetObjectsRequest::BatchSetObjectsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchSetObjectsRequest::~BatchSetObjectsRequest() = default;

void BatchSetObjectsRequest::validate()
{
}

web::json::value BatchSetObjectsRequest::toJson() const
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
bool BatchSetObjectsRequest::fromJson(const web::json::value& val)
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
            BatchUpdateDatabaseObjectReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchSetObjectsRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchSetObjectsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchSetObjectsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchSetObjectsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchUpdateDatabaseObjectReq BatchSetObjectsRequest::getBody() const
{
    return body_;
}

void BatchSetObjectsRequest::setBody(const BatchUpdateDatabaseObjectReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchSetObjectsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchSetObjectsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


