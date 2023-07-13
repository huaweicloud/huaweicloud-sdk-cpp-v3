

#include "huaweicloud/sdrs/v1/model/BatchDeleteProtectedInstancesRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




BatchDeleteProtectedInstancesRequestBody::BatchDeleteProtectedInstancesRequestBody()
{
    protectedInstancesIsSet_ = false;
    deleteTargetServer_ = false;
    deleteTargetServerIsSet_ = false;
    deleteTargetEip_ = false;
    deleteTargetEipIsSet_ = false;
}

BatchDeleteProtectedInstancesRequestBody::~BatchDeleteProtectedInstancesRequestBody() = default;

void BatchDeleteProtectedInstancesRequestBody::validate()
{
}

web::json::value BatchDeleteProtectedInstancesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedInstancesIsSet_) {
        val[utility::conversions::to_string_t("protected_instances")] = ModelBase::toJson(protectedInstances_);
    }
    if(deleteTargetServerIsSet_) {
        val[utility::conversions::to_string_t("delete_target_server")] = ModelBase::toJson(deleteTargetServer_);
    }
    if(deleteTargetEipIsSet_) {
        val[utility::conversions::to_string_t("delete_target_eip")] = ModelBase::toJson(deleteTargetEip_);
    }

    return val;
}

bool BatchDeleteProtectedInstancesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protected_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceId> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstances(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_target_server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_target_server"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteTargetServer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_target_eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_target_eip"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteTargetEip(refVal);
        }
    }
    return ok;
}

std::vector<ResourceId>& BatchDeleteProtectedInstancesRequestBody::getProtectedInstances()
{
    return protectedInstances_;
}

void BatchDeleteProtectedInstancesRequestBody::setProtectedInstances(const std::vector<ResourceId>& value)
{
    protectedInstances_ = value;
    protectedInstancesIsSet_ = true;
}

bool BatchDeleteProtectedInstancesRequestBody::protectedInstancesIsSet() const
{
    return protectedInstancesIsSet_;
}

void BatchDeleteProtectedInstancesRequestBody::unsetprotectedInstances()
{
    protectedInstancesIsSet_ = false;
}

bool BatchDeleteProtectedInstancesRequestBody::isDeleteTargetServer() const
{
    return deleteTargetServer_;
}

void BatchDeleteProtectedInstancesRequestBody::setDeleteTargetServer(bool value)
{
    deleteTargetServer_ = value;
    deleteTargetServerIsSet_ = true;
}

bool BatchDeleteProtectedInstancesRequestBody::deleteTargetServerIsSet() const
{
    return deleteTargetServerIsSet_;
}

void BatchDeleteProtectedInstancesRequestBody::unsetdeleteTargetServer()
{
    deleteTargetServerIsSet_ = false;
}

bool BatchDeleteProtectedInstancesRequestBody::isDeleteTargetEip() const
{
    return deleteTargetEip_;
}

void BatchDeleteProtectedInstancesRequestBody::setDeleteTargetEip(bool value)
{
    deleteTargetEip_ = value;
    deleteTargetEipIsSet_ = true;
}

bool BatchDeleteProtectedInstancesRequestBody::deleteTargetEipIsSet() const
{
    return deleteTargetEipIsSet_;
}

void BatchDeleteProtectedInstancesRequestBody::unsetdeleteTargetEip()
{
    deleteTargetEipIsSet_ = false;
}

}
}
}
}
}


