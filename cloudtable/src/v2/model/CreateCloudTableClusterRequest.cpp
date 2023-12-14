

#include "huaweicloud/cloudtable/v2/model/CreateCloudTableClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




CreateCloudTableClusterRequest::CreateCloudTableClusterRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateCloudTableClusterRequest::~CreateCloudTableClusterRequest() = default;

void CreateCloudTableClusterRequest::validate()
{
}

web::json::value CreateCloudTableClusterRequest::toJson() const
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
bool CreateCloudTableClusterRequest::fromJson(const web::json::value& val)
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


std::string CreateCloudTableClusterRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateCloudTableClusterRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateCloudTableClusterRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateCloudTableClusterRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateClusterRequestBody CreateCloudTableClusterRequest::getBody() const
{
    return body_;
}

void CreateCloudTableClusterRequest::setBody(const CreateClusterRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateCloudTableClusterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateCloudTableClusterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


