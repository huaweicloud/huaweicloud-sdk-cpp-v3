

#include "huaweicloud/gaussdbfornosql/v3/model/SetInstanceDataDumpRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SetInstanceDataDumpRequestBody::SetInstanceDataDumpRequestBody()
{
    bucketName_ = "";
    bucketNameIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

SetInstanceDataDumpRequestBody::~SetInstanceDataDumpRequestBody() = default;

void SetInstanceDataDumpRequestBody::validate()
{
}

web::json::value SetInstanceDataDumpRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}
bool SetInstanceDataDumpRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}


std::string SetInstanceDataDumpRequestBody::getBucketName() const
{
    return bucketName_;
}

void SetInstanceDataDumpRequestBody::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool SetInstanceDataDumpRequestBody::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void SetInstanceDataDumpRequestBody::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string SetInstanceDataDumpRequestBody::getAction() const
{
    return action_;
}

void SetInstanceDataDumpRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool SetInstanceDataDumpRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void SetInstanceDataDumpRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


