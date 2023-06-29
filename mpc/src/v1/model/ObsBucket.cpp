

#include "huaweicloud/mpc/v1/model/ObsBucket.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ObsBucket::ObsBucket()
{
    bucket_ = "";
    bucketIsSet_ = false;
    creationDate_ = "";
    creationDateIsSet_ = false;
    isAuthorized_ = 0;
    isAuthorizedIsSet_ = false;
}

ObsBucket::~ObsBucket() = default;

void ObsBucket::validate()
{
}

web::json::value ObsBucket::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketIsSet_) {
        val[utility::conversions::to_string_t("bucket")] = ModelBase::toJson(bucket_);
    }
    if(creationDateIsSet_) {
        val[utility::conversions::to_string_t("creation_date")] = ModelBase::toJson(creationDate_);
    }
    if(isAuthorizedIsSet_) {
        val[utility::conversions::to_string_t("is_authorized")] = ModelBase::toJson(isAuthorized_);
    }

    return val;
}

bool ObsBucket::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_authorized"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_authorized"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAuthorized(refVal);
        }
    }
    return ok;
}


std::string ObsBucket::getBucket() const
{
    return bucket_;
}

void ObsBucket::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool ObsBucket::bucketIsSet() const
{
    return bucketIsSet_;
}

void ObsBucket::unsetbucket()
{
    bucketIsSet_ = false;
}

std::string ObsBucket::getCreationDate() const
{
    return creationDate_;
}

void ObsBucket::setCreationDate(const std::string& value)
{
    creationDate_ = value;
    creationDateIsSet_ = true;
}

bool ObsBucket::creationDateIsSet() const
{
    return creationDateIsSet_;
}

void ObsBucket::unsetcreationDate()
{
    creationDateIsSet_ = false;
}

int32_t ObsBucket::getIsAuthorized() const
{
    return isAuthorized_;
}

void ObsBucket::setIsAuthorized(int32_t value)
{
    isAuthorized_ = value;
    isAuthorizedIsSet_ = true;
}

bool ObsBucket::isAuthorizedIsSet() const
{
    return isAuthorizedIsSet_;
}

void ObsBucket::unsetisAuthorized()
{
    isAuthorizedIsSet_ = false;
}

}
}
}
}
}


