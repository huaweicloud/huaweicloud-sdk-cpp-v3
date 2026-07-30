

#include "huaweicloud/modelarts/v1/model/BatchMigratePoolNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchMigratePoolNodesRequest::BatchMigratePoolNodesRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    bodyIsSet_ = false;
}

BatchMigratePoolNodesRequest::~BatchMigratePoolNodesRequest() = default;

void BatchMigratePoolNodesRequest::validate()
{
}

web::json::value BatchMigratePoolNodesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchMigratePoolNodesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NodeBatchMigrationRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchMigratePoolNodesRequest::getPoolName() const
{
    return poolName_;
}

void BatchMigratePoolNodesRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool BatchMigratePoolNodesRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void BatchMigratePoolNodesRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

NodeBatchMigrationRequest BatchMigratePoolNodesRequest::getBody() const
{
    return body_;
}

void BatchMigratePoolNodesRequest::setBody(const NodeBatchMigrationRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchMigratePoolNodesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchMigratePoolNodesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


