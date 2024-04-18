

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteInstanceTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteInstanceTagResponse::DeleteInstanceTagResponse()
{
    result_ = "";
    resultIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
}

DeleteInstanceTagResponse::~DeleteInstanceTagResponse() = default;

void DeleteInstanceTagResponse::validate()
{
}

web::json::value DeleteInstanceTagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }

    return val;
}
bool DeleteInstanceTagResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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


std::string DeleteInstanceTagResponse::getResult() const
{
    return result_;
}

void DeleteInstanceTagResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteInstanceTagResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteInstanceTagResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string DeleteInstanceTagResponse::getInstanceId() const
{
    return instanceId_;
}

void DeleteInstanceTagResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteInstanceTagResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteInstanceTagResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteInstanceTagResponse::getInstanceName() const
{
    return instanceName_;
}

void DeleteInstanceTagResponse::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool DeleteInstanceTagResponse::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void DeleteInstanceTagResponse::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

}
}
}
}
}


