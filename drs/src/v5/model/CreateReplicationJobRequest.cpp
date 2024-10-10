

#include "huaweicloud/drs/v5/model/CreateReplicationJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CreateReplicationJobRequest::CreateReplicationJobRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateReplicationJobRequest::~CreateReplicationJobRequest() = default;

void CreateReplicationJobRequest::validate()
{
}

web::json::value CreateReplicationJobRequest::toJson() const
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
bool CreateReplicationJobRequest::fromJson(const web::json::value& val)
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
            CreateOfflineTaskReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateReplicationJobRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateReplicationJobRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateReplicationJobRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateReplicationJobRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateOfflineTaskReq CreateReplicationJobRequest::getBody() const
{
    return body_;
}

void CreateReplicationJobRequest::setBody(const CreateOfflineTaskReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateReplicationJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateReplicationJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


