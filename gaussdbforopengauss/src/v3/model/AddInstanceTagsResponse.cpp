

#include "huaweicloud/gaussdbforopengauss/v3/model/AddInstanceTagsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




AddInstanceTagsResponse::AddInstanceTagsResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
}

AddInstanceTagsResponse::~AddInstanceTagsResponse() = default;

void AddInstanceTagsResponse::validate()
{
}

web::json::value AddInstanceTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }

    return val;
}

bool AddInstanceTagsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    return ok;
}

std::string AddInstanceTagsResponse::getInstanceId() const
{
    return instanceId_;
}

void AddInstanceTagsResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddInstanceTagsResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddInstanceTagsResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string AddInstanceTagsResponse::getInstanceName() const
{
    return instanceName_;
}

void AddInstanceTagsResponse::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool AddInstanceTagsResponse::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void AddInstanceTagsResponse::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

}
}
}
}
}


