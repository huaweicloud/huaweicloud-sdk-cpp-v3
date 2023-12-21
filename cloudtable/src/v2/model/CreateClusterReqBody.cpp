

#include "huaweicloud/cloudtable/v2/model/CreateClusterReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




CreateClusterReqBody::CreateClusterReqBody()
{
    clusterName_ = "";
    clusterNameIsSet_ = false;
    datastoreIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    nicsIsSet_ = false;
    clusterInfoIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    dbuser_ = "";
    dbuserIsSet_ = false;
    dbuserpwd_ = "";
    dbuserpwdIsSet_ = false;
}

CreateClusterReqBody::~CreateClusterReqBody() = default;

void CreateClusterReqBody::validate()
{
}

web::json::value CreateClusterReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterNameIsSet_) {
        val[utility::conversions::to_string_t("cluster_name")] = ModelBase::toJson(clusterName_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(nicsIsSet_) {
        val[utility::conversions::to_string_t("nics")] = ModelBase::toJson(nics_);
    }
    if(clusterInfoIsSet_) {
        val[utility::conversions::to_string_t("cluster_info")] = ModelBase::toJson(clusterInfo_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(dbuserIsSet_) {
        val[utility::conversions::to_string_t("dbuser")] = ModelBase::toJson(dbuser_);
    }
    if(dbuserpwdIsSet_) {
        val[utility::conversions::to_string_t("dbuserpwd")] = ModelBase::toJson(dbuserpwd_);
    }

    return val;
}
bool CreateClusterReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            Datastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nics"));
        if(!fieldValue.is_null())
        {
            std::vector<Nic> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_info"));
        if(!fieldValue.is_null())
        {
            CreateClusterReqBody_cluster_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dbuser"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dbuser"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbuser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dbuserpwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dbuserpwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbuserpwd(refVal);
        }
    }
    return ok;
}


std::string CreateClusterReqBody::getClusterName() const
{
    return clusterName_;
}

void CreateClusterReqBody::setClusterName(const std::string& value)
{
    clusterName_ = value;
    clusterNameIsSet_ = true;
}

bool CreateClusterReqBody::clusterNameIsSet() const
{
    return clusterNameIsSet_;
}

void CreateClusterReqBody::unsetclusterName()
{
    clusterNameIsSet_ = false;
}

Datastore CreateClusterReqBody::getDatastore() const
{
    return datastore_;
}

void CreateClusterReqBody::setDatastore(const Datastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool CreateClusterReqBody::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void CreateClusterReqBody::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string CreateClusterReqBody::getAvailabilityZone() const
{
    return availabilityZone_;
}

void CreateClusterReqBody::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool CreateClusterReqBody::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void CreateClusterReqBody::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::vector<Nic>& CreateClusterReqBody::getNics()
{
    return nics_;
}

void CreateClusterReqBody::setNics(const std::vector<Nic>& value)
{
    nics_ = value;
    nicsIsSet_ = true;
}

bool CreateClusterReqBody::nicsIsSet() const
{
    return nicsIsSet_;
}

void CreateClusterReqBody::unsetnics()
{
    nicsIsSet_ = false;
}

CreateClusterReqBody_cluster_info CreateClusterReqBody::getClusterInfo() const
{
    return clusterInfo_;
}

void CreateClusterReqBody::setClusterInfo(const CreateClusterReqBody_cluster_info& value)
{
    clusterInfo_ = value;
    clusterInfoIsSet_ = true;
}

bool CreateClusterReqBody::clusterInfoIsSet() const
{
    return clusterInfoIsSet_;
}

void CreateClusterReqBody::unsetclusterInfo()
{
    clusterInfoIsSet_ = false;
}

std::string CreateClusterReqBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateClusterReqBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateClusterReqBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateClusterReqBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CreateClusterReqBody::getVpcId() const
{
    return vpcId_;
}

void CreateClusterReqBody::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CreateClusterReqBody::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CreateClusterReqBody::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string CreateClusterReqBody::getDbuser() const
{
    return dbuser_;
}

void CreateClusterReqBody::setDbuser(const std::string& value)
{
    dbuser_ = value;
    dbuserIsSet_ = true;
}

bool CreateClusterReqBody::dbuserIsSet() const
{
    return dbuserIsSet_;
}

void CreateClusterReqBody::unsetdbuser()
{
    dbuserIsSet_ = false;
}

std::string CreateClusterReqBody::getDbuserpwd() const
{
    return dbuserpwd_;
}

void CreateClusterReqBody::setDbuserpwd(const std::string& value)
{
    dbuserpwd_ = value;
    dbuserpwdIsSet_ = true;
}

bool CreateClusterReqBody::dbuserpwdIsSet() const
{
    return dbuserpwdIsSet_;
}

void CreateClusterReqBody::unsetdbuserpwd()
{
    dbuserpwdIsSet_ = false;
}

}
}
}
}
}


