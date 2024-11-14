

#include "huaweicloud/gaussdbfornosql/v3/model/CreateDbCacheMappingRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateDbCacheMappingRequestBody::CreateDbCacheMappingRequestBody()
{
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
    targetInstanceId_ = "";
    targetInstanceIdIsSet_ = false;
}

CreateDbCacheMappingRequestBody::~CreateDbCacheMappingRequestBody() = default;

void CreateDbCacheMappingRequestBody::validate()
{
}

web::json::value CreateDbCacheMappingRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("source_instance_id")] = ModelBase::toJson(sourceInstanceId_);
    }
    if(targetInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("target_instance_id")] = ModelBase::toJson(targetInstanceId_);
    }

    return val;
}
bool CreateDbCacheMappingRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetInstanceId(refVal);
        }
    }
    return ok;
}


std::string CreateDbCacheMappingRequestBody::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void CreateDbCacheMappingRequestBody::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool CreateDbCacheMappingRequestBody::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void CreateDbCacheMappingRequestBody::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::string CreateDbCacheMappingRequestBody::getTargetInstanceId() const
{
    return targetInstanceId_;
}

void CreateDbCacheMappingRequestBody::setTargetInstanceId(const std::string& value)
{
    targetInstanceId_ = value;
    targetInstanceIdIsSet_ = true;
}

bool CreateDbCacheMappingRequestBody::targetInstanceIdIsSet() const
{
    return targetInstanceIdIsSet_;
}

void CreateDbCacheMappingRequestBody::unsettargetInstanceId()
{
    targetInstanceIdIsSet_ = false;
}

}
}
}
}
}


