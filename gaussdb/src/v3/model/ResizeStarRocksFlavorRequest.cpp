

#include "huaweicloud/gaussdb/v3/model/ResizeStarRocksFlavorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ResizeStarRocksFlavorRequest::ResizeStarRocksFlavorRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ResizeStarRocksFlavorRequest::~ResizeStarRocksFlavorRequest() = default;

void ResizeStarRocksFlavorRequest::validate()
{
}

web::json::value ResizeStarRocksFlavorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ResizeStarRocksFlavorRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SrFlavorResizeReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResizeStarRocksFlavorRequest::getInstanceId() const
{
    return instanceId_;
}

void ResizeStarRocksFlavorRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResizeStarRocksFlavorRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResizeStarRocksFlavorRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ResizeStarRocksFlavorRequest::getXLanguage() const
{
    return xLanguage_;
}

void ResizeStarRocksFlavorRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ResizeStarRocksFlavorRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ResizeStarRocksFlavorRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

SrFlavorResizeReq ResizeStarRocksFlavorRequest::getBody() const
{
    return body_;
}

void ResizeStarRocksFlavorRequest::setBody(const SrFlavorResizeReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResizeStarRocksFlavorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResizeStarRocksFlavorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


