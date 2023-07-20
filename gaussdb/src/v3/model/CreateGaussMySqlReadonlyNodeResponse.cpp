

#include "huaweicloud/gaussdb/v3/model/CreateGaussMySqlReadonlyNodeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateGaussMySqlReadonlyNodeResponse::CreateGaussMySqlReadonlyNodeResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeNamesIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

CreateGaussMySqlReadonlyNodeResponse::~CreateGaussMySqlReadonlyNodeResponse() = default;

void CreateGaussMySqlReadonlyNodeResponse::validate()
{
}

web::json::value CreateGaussMySqlReadonlyNodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeNamesIsSet_) {
        val[utility::conversions::to_string_t("node_names")] = ModelBase::toJson(nodeNames_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}

bool CreateGaussMySqlReadonlyNodeResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("node_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    return ok;
}

std::string CreateGaussMySqlReadonlyNodeResponse::getInstanceId() const
{
    return instanceId_;
}

void CreateGaussMySqlReadonlyNodeResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateGaussMySqlReadonlyNodeResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateGaussMySqlReadonlyNodeResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::vector<std::string>& CreateGaussMySqlReadonlyNodeResponse::getNodeNames()
{
    return nodeNames_;
}

void CreateGaussMySqlReadonlyNodeResponse::setNodeNames(const std::vector<std::string>& value)
{
    nodeNames_ = value;
    nodeNamesIsSet_ = true;
}

bool CreateGaussMySqlReadonlyNodeResponse::nodeNamesIsSet() const
{
    return nodeNamesIsSet_;
}

void CreateGaussMySqlReadonlyNodeResponse::unsetnodeNames()
{
    nodeNamesIsSet_ = false;
}

std::string CreateGaussMySqlReadonlyNodeResponse::getJobId() const
{
    return jobId_;
}

void CreateGaussMySqlReadonlyNodeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateGaussMySqlReadonlyNodeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateGaussMySqlReadonlyNodeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateGaussMySqlReadonlyNodeResponse::getOrderId() const
{
    return orderId_;
}

void CreateGaussMySqlReadonlyNodeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateGaussMySqlReadonlyNodeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateGaussMySqlReadonlyNodeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


