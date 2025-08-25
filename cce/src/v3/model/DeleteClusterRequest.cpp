

#include "huaweicloud/cce/v3/model/DeleteClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteClusterRequest::DeleteClusterRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    errorStatus_ = "";
    errorStatusIsSet_ = false;
    deleteEfs_ = "";
    deleteEfsIsSet_ = false;
    deleteEni_ = "";
    deleteEniIsSet_ = false;
    deleteEvs_ = "";
    deleteEvsIsSet_ = false;
    deleteNet_ = "";
    deleteNetIsSet_ = false;
    deleteObs_ = "";
    deleteObsIsSet_ = false;
    deleteSfs_ = "";
    deleteSfsIsSet_ = false;
    deleteSfs30_ = "";
    deleteSfs30IsSet_ = false;
    ltsReclaimPolicy_ = "";
    ltsReclaimPolicyIsSet_ = false;
    tobedeleted_ = "";
    tobedeletedIsSet_ = false;
    ondemandNodePolicy_ = "";
    ondemandNodePolicyIsSet_ = false;
    periodicNodePolicy_ = "";
    periodicNodePolicyIsSet_ = false;
}

DeleteClusterRequest::~DeleteClusterRequest() = default;

void DeleteClusterRequest::validate()
{
}

web::json::value DeleteClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(errorStatusIsSet_) {
        val[utility::conversions::to_string_t("errorStatus")] = ModelBase::toJson(errorStatus_);
    }
    if(deleteEfsIsSet_) {
        val[utility::conversions::to_string_t("delete_efs")] = ModelBase::toJson(deleteEfs_);
    }
    if(deleteEniIsSet_) {
        val[utility::conversions::to_string_t("delete_eni")] = ModelBase::toJson(deleteEni_);
    }
    if(deleteEvsIsSet_) {
        val[utility::conversions::to_string_t("delete_evs")] = ModelBase::toJson(deleteEvs_);
    }
    if(deleteNetIsSet_) {
        val[utility::conversions::to_string_t("delete_net")] = ModelBase::toJson(deleteNet_);
    }
    if(deleteObsIsSet_) {
        val[utility::conversions::to_string_t("delete_obs")] = ModelBase::toJson(deleteObs_);
    }
    if(deleteSfsIsSet_) {
        val[utility::conversions::to_string_t("delete_sfs")] = ModelBase::toJson(deleteSfs_);
    }
    if(deleteSfs30IsSet_) {
        val[utility::conversions::to_string_t("delete_sfs30")] = ModelBase::toJson(deleteSfs30_);
    }
    if(ltsReclaimPolicyIsSet_) {
        val[utility::conversions::to_string_t("lts_reclaim_policy")] = ModelBase::toJson(ltsReclaimPolicy_);
    }
    if(tobedeletedIsSet_) {
        val[utility::conversions::to_string_t("tobedeleted")] = ModelBase::toJson(tobedeleted_);
    }
    if(ondemandNodePolicyIsSet_) {
        val[utility::conversions::to_string_t("ondemand_node_policy")] = ModelBase::toJson(ondemandNodePolicy_);
    }
    if(periodicNodePolicyIsSet_) {
        val[utility::conversions::to_string_t("periodic_node_policy")] = ModelBase::toJson(periodicNodePolicy_);
    }

    return val;
}
bool DeleteClusterRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errorStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errorStatus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_efs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_efs"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteEfs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_eni"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_eni"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteEni(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_evs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_evs"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteEvs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_net"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_net"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteNet(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_obs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_obs"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteObs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_sfs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_sfs"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteSfs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_sfs30"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_sfs30"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteSfs30(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_reclaim_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_reclaim_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsReclaimPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tobedeleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tobedeleted"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTobedeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ondemand_node_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ondemand_node_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOndemandNodePolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("periodic_node_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("periodic_node_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodicNodePolicy(refVal);
        }
    }
    return ok;
}


std::string DeleteClusterRequest::getClusterId() const
{
    return clusterId_;
}

void DeleteClusterRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool DeleteClusterRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void DeleteClusterRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string DeleteClusterRequest::getErrorStatus() const
{
    return errorStatus_;
}

void DeleteClusterRequest::setErrorStatus(const std::string& value)
{
    errorStatus_ = value;
    errorStatusIsSet_ = true;
}

bool DeleteClusterRequest::errorStatusIsSet() const
{
    return errorStatusIsSet_;
}

void DeleteClusterRequest::unseterrorStatus()
{
    errorStatusIsSet_ = false;
}

std::string DeleteClusterRequest::getDeleteEfs() const
{
    return deleteEfs_;
}

void DeleteClusterRequest::setDeleteEfs(const std::string& value)
{
    deleteEfs_ = value;
    deleteEfsIsSet_ = true;
}

bool DeleteClusterRequest::deleteEfsIsSet() const
{
    return deleteEfsIsSet_;
}

void DeleteClusterRequest::unsetdeleteEfs()
{
    deleteEfsIsSet_ = false;
}

std::string DeleteClusterRequest::getDeleteEni() const
{
    return deleteEni_;
}

void DeleteClusterRequest::setDeleteEni(const std::string& value)
{
    deleteEni_ = value;
    deleteEniIsSet_ = true;
}

bool DeleteClusterRequest::deleteEniIsSet() const
{
    return deleteEniIsSet_;
}

void DeleteClusterRequest::unsetdeleteEni()
{
    deleteEniIsSet_ = false;
}

std::string DeleteClusterRequest::getDeleteEvs() const
{
    return deleteEvs_;
}

void DeleteClusterRequest::setDeleteEvs(const std::string& value)
{
    deleteEvs_ = value;
    deleteEvsIsSet_ = true;
}

bool DeleteClusterRequest::deleteEvsIsSet() const
{
    return deleteEvsIsSet_;
}

void DeleteClusterRequest::unsetdeleteEvs()
{
    deleteEvsIsSet_ = false;
}

std::string DeleteClusterRequest::getDeleteNet() const
{
    return deleteNet_;
}

void DeleteClusterRequest::setDeleteNet(const std::string& value)
{
    deleteNet_ = value;
    deleteNetIsSet_ = true;
}

bool DeleteClusterRequest::deleteNetIsSet() const
{
    return deleteNetIsSet_;
}

void DeleteClusterRequest::unsetdeleteNet()
{
    deleteNetIsSet_ = false;
}

std::string DeleteClusterRequest::getDeleteObs() const
{
    return deleteObs_;
}

void DeleteClusterRequest::setDeleteObs(const std::string& value)
{
    deleteObs_ = value;
    deleteObsIsSet_ = true;
}

bool DeleteClusterRequest::deleteObsIsSet() const
{
    return deleteObsIsSet_;
}

void DeleteClusterRequest::unsetdeleteObs()
{
    deleteObsIsSet_ = false;
}

std::string DeleteClusterRequest::getDeleteSfs() const
{
    return deleteSfs_;
}

void DeleteClusterRequest::setDeleteSfs(const std::string& value)
{
    deleteSfs_ = value;
    deleteSfsIsSet_ = true;
}

bool DeleteClusterRequest::deleteSfsIsSet() const
{
    return deleteSfsIsSet_;
}

void DeleteClusterRequest::unsetdeleteSfs()
{
    deleteSfsIsSet_ = false;
}

std::string DeleteClusterRequest::getDeleteSfs30() const
{
    return deleteSfs30_;
}

void DeleteClusterRequest::setDeleteSfs30(const std::string& value)
{
    deleteSfs30_ = value;
    deleteSfs30IsSet_ = true;
}

bool DeleteClusterRequest::deleteSfs30IsSet() const
{
    return deleteSfs30IsSet_;
}

void DeleteClusterRequest::unsetdeleteSfs30()
{
    deleteSfs30IsSet_ = false;
}

std::string DeleteClusterRequest::getLtsReclaimPolicy() const
{
    return ltsReclaimPolicy_;
}

void DeleteClusterRequest::setLtsReclaimPolicy(const std::string& value)
{
    ltsReclaimPolicy_ = value;
    ltsReclaimPolicyIsSet_ = true;
}

bool DeleteClusterRequest::ltsReclaimPolicyIsSet() const
{
    return ltsReclaimPolicyIsSet_;
}

void DeleteClusterRequest::unsetltsReclaimPolicy()
{
    ltsReclaimPolicyIsSet_ = false;
}

std::string DeleteClusterRequest::getTobedeleted() const
{
    return tobedeleted_;
}

void DeleteClusterRequest::setTobedeleted(const std::string& value)
{
    tobedeleted_ = value;
    tobedeletedIsSet_ = true;
}

bool DeleteClusterRequest::tobedeletedIsSet() const
{
    return tobedeletedIsSet_;
}

void DeleteClusterRequest::unsettobedeleted()
{
    tobedeletedIsSet_ = false;
}

std::string DeleteClusterRequest::getOndemandNodePolicy() const
{
    return ondemandNodePolicy_;
}

void DeleteClusterRequest::setOndemandNodePolicy(const std::string& value)
{
    ondemandNodePolicy_ = value;
    ondemandNodePolicyIsSet_ = true;
}

bool DeleteClusterRequest::ondemandNodePolicyIsSet() const
{
    return ondemandNodePolicyIsSet_;
}

void DeleteClusterRequest::unsetondemandNodePolicy()
{
    ondemandNodePolicyIsSet_ = false;
}

std::string DeleteClusterRequest::getPeriodicNodePolicy() const
{
    return periodicNodePolicy_;
}

void DeleteClusterRequest::setPeriodicNodePolicy(const std::string& value)
{
    periodicNodePolicy_ = value;
    periodicNodePolicyIsSet_ = true;
}

bool DeleteClusterRequest::periodicNodePolicyIsSet() const
{
    return periodicNodePolicyIsSet_;
}

void DeleteClusterRequest::unsetperiodicNodePolicy()
{
    periodicNodePolicyIsSet_ = false;
}

}
}
}
}
}


