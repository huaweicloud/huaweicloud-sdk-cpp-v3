

#include "huaweicloud/modelarts/v1/model/GetHyperinstanceGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetHyperinstanceGroupResponse::GetHyperinstanceGroupResponse()
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

GetHyperinstanceGroupResponse::~GetHyperinstanceGroupResponse() = default;

void GetHyperinstanceGroupResponse::validate()
{
}

web::json::value GetHyperinstanceGroupResponse::toJson() const
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
bool GetHyperinstanceGroupResponse::fromJson(const web::json::value& val)
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


std::string GetHyperinstanceGroupResponse::getId() const
{
    return id_;
}

void GetHyperinstanceGroupResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetHyperinstanceGroupResponse::idIsSet() const
{
    return idIsSet_;
}

void GetHyperinstanceGroupResponse::unsetid()
{
    idIsSet_ = false;
}

std::string GetHyperinstanceGroupResponse::getName() const
{
    return name_;
}

void GetHyperinstanceGroupResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GetHyperinstanceGroupResponse::nameIsSet() const
{
    return nameIsSet_;
}

void GetHyperinstanceGroupResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string GetHyperinstanceGroupResponse::getNpuCountLimit() const
{
    return npuCountLimit_;
}

void GetHyperinstanceGroupResponse::setNpuCountLimit(const std::string& value)
{
    npuCountLimit_ = value;
    npuCountLimitIsSet_ = true;
}

bool GetHyperinstanceGroupResponse::npuCountLimitIsSet() const
{
    return npuCountLimitIsSet_;
}

void GetHyperinstanceGroupResponse::unsetnpuCountLimit()
{
    npuCountLimitIsSet_ = false;
}

std::string GetHyperinstanceGroupResponse::getNpuCount() const
{
    return npuCount_;
}

void GetHyperinstanceGroupResponse::setNpuCount(const std::string& value)
{
    npuCount_ = value;
    npuCountIsSet_ = true;
}

bool GetHyperinstanceGroupResponse::npuCountIsSet() const
{
    return npuCountIsSet_;
}

void GetHyperinstanceGroupResponse::unsetnpuCount()
{
    npuCountIsSet_ = false;
}

std::string GetHyperinstanceGroupResponse::getHyperinstanceClusterId() const
{
    return hyperinstanceClusterId_;
}

void GetHyperinstanceGroupResponse::setHyperinstanceClusterId(const std::string& value)
{
    hyperinstanceClusterId_ = value;
    hyperinstanceClusterIdIsSet_ = true;
}

bool GetHyperinstanceGroupResponse::hyperinstanceClusterIdIsSet() const
{
    return hyperinstanceClusterIdIsSet_;
}

void GetHyperinstanceGroupResponse::unsethyperinstanceClusterId()
{
    hyperinstanceClusterIdIsSet_ = false;
}

int64_t GetHyperinstanceGroupResponse::getCreatedAt() const
{
    return createdAt_;
}

void GetHyperinstanceGroupResponse::setCreatedAt(int64_t value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool GetHyperinstanceGroupResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void GetHyperinstanceGroupResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

int64_t GetHyperinstanceGroupResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void GetHyperinstanceGroupResponse::setUpdatedAt(int64_t value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool GetHyperinstanceGroupResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void GetHyperinstanceGroupResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


