

#include "huaweicloud/drs/v3/model/QueryAvailableNodeTypeReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryAvailableNodeTypeReq::QueryAvailableNodeTypeReq()
{
    engineType_ = "";
    engineTypeIsSet_ = false;
    dbUseType_ = "";
    dbUseTypeIsSet_ = false;
    jobDirection_ = "";
    jobDirectionIsSet_ = false;
    nodeType_ = "";
    nodeTypeIsSet_ = false;
    multiWrite_ = "";
    multiWriteIsSet_ = false;
}

QueryAvailableNodeTypeReq::~QueryAvailableNodeTypeReq() = default;

void QueryAvailableNodeTypeReq::validate()
{
}

web::json::value QueryAvailableNodeTypeReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }
    if(dbUseTypeIsSet_) {
        val[utility::conversions::to_string_t("db_use_type")] = ModelBase::toJson(dbUseType_);
    }
    if(jobDirectionIsSet_) {
        val[utility::conversions::to_string_t("job_direction")] = ModelBase::toJson(jobDirection_);
    }
    if(nodeTypeIsSet_) {
        val[utility::conversions::to_string_t("node_type")] = ModelBase::toJson(nodeType_);
    }
    if(multiWriteIsSet_) {
        val[utility::conversions::to_string_t("multi_write")] = ModelBase::toJson(multiWrite_);
    }

    return val;
}

bool QueryAvailableNodeTypeReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_use_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_use_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUseType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multi_write"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multi_write"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiWrite(refVal);
        }
    }
    return ok;
}

std::string QueryAvailableNodeTypeReq::getEngineType() const
{
    return engineType_;
}

void QueryAvailableNodeTypeReq::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool QueryAvailableNodeTypeReq::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void QueryAvailableNodeTypeReq::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string QueryAvailableNodeTypeReq::getDbUseType() const
{
    return dbUseType_;
}

void QueryAvailableNodeTypeReq::setDbUseType(const std::string& value)
{
    dbUseType_ = value;
    dbUseTypeIsSet_ = true;
}

bool QueryAvailableNodeTypeReq::dbUseTypeIsSet() const
{
    return dbUseTypeIsSet_;
}

void QueryAvailableNodeTypeReq::unsetdbUseType()
{
    dbUseTypeIsSet_ = false;
}

std::string QueryAvailableNodeTypeReq::getJobDirection() const
{
    return jobDirection_;
}

void QueryAvailableNodeTypeReq::setJobDirection(const std::string& value)
{
    jobDirection_ = value;
    jobDirectionIsSet_ = true;
}

bool QueryAvailableNodeTypeReq::jobDirectionIsSet() const
{
    return jobDirectionIsSet_;
}

void QueryAvailableNodeTypeReq::unsetjobDirection()
{
    jobDirectionIsSet_ = false;
}

std::string QueryAvailableNodeTypeReq::getNodeType() const
{
    return nodeType_;
}

void QueryAvailableNodeTypeReq::setNodeType(const std::string& value)
{
    nodeType_ = value;
    nodeTypeIsSet_ = true;
}

bool QueryAvailableNodeTypeReq::nodeTypeIsSet() const
{
    return nodeTypeIsSet_;
}

void QueryAvailableNodeTypeReq::unsetnodeType()
{
    nodeTypeIsSet_ = false;
}

std::string QueryAvailableNodeTypeReq::getMultiWrite() const
{
    return multiWrite_;
}

void QueryAvailableNodeTypeReq::setMultiWrite(const std::string& value)
{
    multiWrite_ = value;
    multiWriteIsSet_ = true;
}

bool QueryAvailableNodeTypeReq::multiWriteIsSet() const
{
    return multiWriteIsSet_;
}

void QueryAvailableNodeTypeReq::unsetmultiWrite()
{
    multiWriteIsSet_ = false;
}

}
}
}
}
}


