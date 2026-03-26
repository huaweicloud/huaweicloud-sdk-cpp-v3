

#include "huaweicloud/gaussdb/v3/model/DeleteHtapProcessListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteHtapProcessListRequest::DeleteHtapProcessListRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteHtapProcessListRequest::~DeleteHtapProcessListRequest() = default;

void DeleteHtapProcessListRequest::validate()
{
}

web::json::value DeleteHtapProcessListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteHtapProcessListRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteHtapProcessReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteHtapProcessListRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteHtapProcessListRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteHtapProcessListRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteHtapProcessListRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteHtapProcessListRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteHtapProcessListRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteHtapProcessListRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteHtapProcessListRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteHtapProcessReq DeleteHtapProcessListRequest::getBody() const
{
    return body_;
}

void DeleteHtapProcessListRequest::setBody(const DeleteHtapProcessReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteHtapProcessListRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteHtapProcessListRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


