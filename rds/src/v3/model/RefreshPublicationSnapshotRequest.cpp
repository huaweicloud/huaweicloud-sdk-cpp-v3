

#include "huaweicloud/rds/v3/model/RefreshPublicationSnapshotRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RefreshPublicationSnapshotRequest::RefreshPublicationSnapshotRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    publicationId_ = "";
    publicationIdIsSet_ = false;
}

RefreshPublicationSnapshotRequest::~RefreshPublicationSnapshotRequest() = default;

void RefreshPublicationSnapshotRequest::validate()
{
}

web::json::value RefreshPublicationSnapshotRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(publicationIdIsSet_) {
        val[utility::conversions::to_string_t("publication_id")] = ModelBase::toJson(publicationId_);
    }

    return val;
}
bool RefreshPublicationSnapshotRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("publication_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationId(refVal);
        }
    }
    return ok;
}


std::string RefreshPublicationSnapshotRequest::getXLanguage() const
{
    return xLanguage_;
}

void RefreshPublicationSnapshotRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RefreshPublicationSnapshotRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RefreshPublicationSnapshotRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string RefreshPublicationSnapshotRequest::getInstanceId() const
{
    return instanceId_;
}

void RefreshPublicationSnapshotRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RefreshPublicationSnapshotRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RefreshPublicationSnapshotRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RefreshPublicationSnapshotRequest::getPublicationId() const
{
    return publicationId_;
}

void RefreshPublicationSnapshotRequest::setPublicationId(const std::string& value)
{
    publicationId_ = value;
    publicationIdIsSet_ = true;
}

bool RefreshPublicationSnapshotRequest::publicationIdIsSet() const
{
    return publicationIdIsSet_;
}

void RefreshPublicationSnapshotRequest::unsetpublicationId()
{
    publicationIdIsSet_ = false;
}

}
}
}
}
}


