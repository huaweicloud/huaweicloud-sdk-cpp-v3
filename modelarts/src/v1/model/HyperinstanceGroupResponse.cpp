

#include "huaweicloud/modelarts/v1/model/HyperinstanceGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




HyperinstanceGroupResponse::HyperinstanceGroupResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    npuCountLimit_ = "";
    npuCountLimitIsSet_ = false;
    npuCount_ = "";
    npuCountIsSet_ = false;
    hyperinstanceClusterId_ = "";
    hyperinstanceClusterIdIsSet_ = false;
    createdAt_ = 0L;
    createdAtIsSet_ = false;
    updatedAt_ = 0L;
    updatedAtIsSet_ = false;
}

HyperinstanceGroupResponse::~HyperinstanceGroupResponse() = default;

void HyperinstanceGroupResponse::validate()
{
}

web::json::value HyperinstanceGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(npuCountLimitIsSet_) {
        val[utility::conversions::to_string_t("npu_count_limit")] = ModelBase::toJson(npuCountLimit_);
    }
    if(npuCountIsSet_) {
        val[utility::conversions::to_string_t("npu_count")] = ModelBase::toJson(npuCount_);
    }
    if(hyperinstanceClusterIdIsSet_) {
        val[utility::conversions::to_string_t("hyperinstance_cluster_id")] = ModelBase::toJson(hyperinstanceClusterId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool HyperinstanceGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("npu_count_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("npu_count_limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNpuCountLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("npu_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("npu_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNpuCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hyperinstance_cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hyperinstance_cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHyperinstanceClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string HyperinstanceGroupResponse::getId() const
{
    return id_;
}

void HyperinstanceGroupResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HyperinstanceGroupResponse::idIsSet() const
{
    return idIsSet_;
}

void HyperinstanceGroupResponse::unsetid()
{
    idIsSet_ = false;
}

std::string HyperinstanceGroupResponse::getName() const
{
    return name_;
}

void HyperinstanceGroupResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HyperinstanceGroupResponse::nameIsSet() const
{
    return nameIsSet_;
}

void HyperinstanceGroupResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string HyperinstanceGroupResponse::getNpuCountLimit() const
{
    return npuCountLimit_;
}

void HyperinstanceGroupResponse::setNpuCountLimit(const std::string& value)
{
    npuCountLimit_ = value;
    npuCountLimitIsSet_ = true;
}

bool HyperinstanceGroupResponse::npuCountLimitIsSet() const
{
    return npuCountLimitIsSet_;
}

void HyperinstanceGroupResponse::unsetnpuCountLimit()
{
    npuCountLimitIsSet_ = false;
}

std::string HyperinstanceGroupResponse::getNpuCount() const
{
    return npuCount_;
}

void HyperinstanceGroupResponse::setNpuCount(const std::string& value)
{
    npuCount_ = value;
    npuCountIsSet_ = true;
}

bool HyperinstanceGroupResponse::npuCountIsSet() const
{
    return npuCountIsSet_;
}

void HyperinstanceGroupResponse::unsetnpuCount()
{
    npuCountIsSet_ = false;
}

std::string HyperinstanceGroupResponse::getHyperinstanceClusterId() const
{
    return hyperinstanceClusterId_;
}

void HyperinstanceGroupResponse::setHyperinstanceClusterId(const std::string& value)
{
    hyperinstanceClusterId_ = value;
    hyperinstanceClusterIdIsSet_ = true;
}

bool HyperinstanceGroupResponse::hyperinstanceClusterIdIsSet() const
{
    return hyperinstanceClusterIdIsSet_;
}

void HyperinstanceGroupResponse::unsethyperinstanceClusterId()
{
    hyperinstanceClusterIdIsSet_ = false;
}

int64_t HyperinstanceGroupResponse::getCreatedAt() const
{
    return createdAt_;
}

void HyperinstanceGroupResponse::setCreatedAt(int64_t value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool HyperinstanceGroupResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void HyperinstanceGroupResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

int64_t HyperinstanceGroupResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void HyperinstanceGroupResponse::setUpdatedAt(int64_t value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool HyperinstanceGroupResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void HyperinstanceGroupResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


