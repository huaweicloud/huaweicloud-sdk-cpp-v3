

#include "huaweicloud/csms/v1/model/BatchGetSecretValueResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




BatchGetSecretValueResponse::BatchGetSecretValueResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    versionsIsSet_ = false;
}

BatchGetSecretValueResponse::~BatchGetSecretValueResponse() = default;

void BatchGetSecretValueResponse::validate()
{
}

web::json::value BatchGetSecretValueResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(versionsIsSet_) {
        val[utility::conversions::to_string_t("versions")] = ModelBase::toJson(versions_);
    }

    return val;
}
bool BatchGetSecretValueResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("versions"));
        if(!fieldValue.is_null())
        {
            std::vector<Version> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersions(refVal);
        }
    }
    return ok;
}


int32_t BatchGetSecretValueResponse::getTotalCount() const
{
    return totalCount_;
}

void BatchGetSecretValueResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool BatchGetSecretValueResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void BatchGetSecretValueResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<Version>& BatchGetSecretValueResponse::getVersions()
{
    return versions_;
}

void BatchGetSecretValueResponse::setVersions(const std::vector<Version>& value)
{
    versions_ = value;
    versionsIsSet_ = true;
}

bool BatchGetSecretValueResponse::versionsIsSet() const
{
    return versionsIsSet_;
}

void BatchGetSecretValueResponse::unsetversions()
{
    versionsIsSet_ = false;
}

}
}
}
}
}


