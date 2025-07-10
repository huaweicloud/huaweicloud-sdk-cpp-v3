

#include "huaweicloud/rds/v3/model/GetJobInfoResponseBody_job_entities_instance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GetJobInfoResponseBody_job_entities_instance::GetJobInfoResponseBody_job_entities_instance()
{
    endpoint_ = "";
    endpointIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    datastoreIsSet_ = false;
    replicaOf_ = "";
    replicaOfIsSet_ = false;
}

GetJobInfoResponseBody_job_entities_instance::~GetJobInfoResponseBody_job_entities_instance() = default;

void GetJobInfoResponseBody_job_entities_instance::validate()
{
}

web::json::value GetJobInfoResponseBody_job_entities_instance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(replicaOfIsSet_) {
        val[utility::conversions::to_string_t("replica_of")] = ModelBase::toJson(replicaOf_);
    }

    return val;
}
bool GetJobInfoResponseBody_job_entities_instance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            GetJobInfoResponseBody_job_entities_instance_datastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replica_of"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replica_of"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicaOf(refVal);
        }
    }
    return ok;
}


std::string GetJobInfoResponseBody_job_entities_instance::getEndpoint() const
{
    return endpoint_;
}

void GetJobInfoResponseBody_job_entities_instance::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool GetJobInfoResponseBody_job_entities_instance::endpointIsSet() const
{
    return endpointIsSet_;
}

void GetJobInfoResponseBody_job_entities_instance::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::string GetJobInfoResponseBody_job_entities_instance::getType() const
{
    return type_;
}

void GetJobInfoResponseBody_job_entities_instance::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool GetJobInfoResponseBody_job_entities_instance::typeIsSet() const
{
    return typeIsSet_;
}

void GetJobInfoResponseBody_job_entities_instance::unsettype()
{
    typeIsSet_ = false;
}

GetJobInfoResponseBody_job_entities_instance_datastore GetJobInfoResponseBody_job_entities_instance::getDatastore() const
{
    return datastore_;
}

void GetJobInfoResponseBody_job_entities_instance::setDatastore(const GetJobInfoResponseBody_job_entities_instance_datastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool GetJobInfoResponseBody_job_entities_instance::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void GetJobInfoResponseBody_job_entities_instance::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string GetJobInfoResponseBody_job_entities_instance::getReplicaOf() const
{
    return replicaOf_;
}

void GetJobInfoResponseBody_job_entities_instance::setReplicaOf(const std::string& value)
{
    replicaOf_ = value;
    replicaOfIsSet_ = true;
}

bool GetJobInfoResponseBody_job_entities_instance::replicaOfIsSet() const
{
    return replicaOfIsSet_;
}

void GetJobInfoResponseBody_job_entities_instance::unsetreplicaOf()
{
    replicaOfIsSet_ = false;
}

}
}
}
}
}


