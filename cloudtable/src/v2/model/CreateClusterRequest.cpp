

#include "huaweicloud/cloudtable/v2/model/CreateClusterRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




CreateClusterRequest::CreateClusterRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateClusterRequest::~CreateClusterRequest() = default;

void CreateClusterRequest::validate()
{
}

web::json::value CreateClusterRequest::toJson() const
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

bool CreateClusterRequest::fromJson(const web::json::value& val)
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
            CreateClusterRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateClusterRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateClusterRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateClusterRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateClusterRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateClusterRequestBody CreateClusterRequest::getBody() const
{
    return body_;
}

void CreateClusterRequest::setBody(const CreateClusterRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateClusterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateClusterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


