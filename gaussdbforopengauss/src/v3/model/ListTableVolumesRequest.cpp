

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTableVolumesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTableVolumesRequest::ListTableVolumesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListTableVolumesRequest::~ListTableVolumesRequest() = default;

void ListTableVolumesRequest::validate()
{
}

web::json::value ListTableVolumesRequest::toJson() const
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
bool ListTableVolumesRequest::fromJson(const web::json::value& val)
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
            ListTableVolumesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListTableVolumesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListTableVolumesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListTableVolumesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListTableVolumesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListTableVolumesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListTableVolumesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListTableVolumesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListTableVolumesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListTableVolumesRequestBody ListTableVolumesRequest::getBody() const
{
    return body_;
}

void ListTableVolumesRequest::setBody(const ListTableVolumesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTableVolumesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTableVolumesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


