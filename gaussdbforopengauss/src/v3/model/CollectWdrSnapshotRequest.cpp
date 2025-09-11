

#include "huaweicloud/gaussdbforopengauss/v3/model/CollectWdrSnapshotRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CollectWdrSnapshotRequest::CollectWdrSnapshotRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CollectWdrSnapshotRequest::~CollectWdrSnapshotRequest() = default;

void CollectWdrSnapshotRequest::validate()
{
}

web::json::value CollectWdrSnapshotRequest::toJson() const
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
bool CollectWdrSnapshotRequest::fromJson(const web::json::value& val)
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
            CollectWdrSnapshotRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CollectWdrSnapshotRequest::getXLanguage() const
{
    return xLanguage_;
}

void CollectWdrSnapshotRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CollectWdrSnapshotRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CollectWdrSnapshotRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CollectWdrSnapshotRequest::getInstanceId() const
{
    return instanceId_;
}

void CollectWdrSnapshotRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CollectWdrSnapshotRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CollectWdrSnapshotRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CollectWdrSnapshotRequestBody CollectWdrSnapshotRequest::getBody() const
{
    return body_;
}

void CollectWdrSnapshotRequest::setBody(const CollectWdrSnapshotRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CollectWdrSnapshotRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CollectWdrSnapshotRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


