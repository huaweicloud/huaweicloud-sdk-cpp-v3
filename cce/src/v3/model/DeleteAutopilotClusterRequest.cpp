

#include "huaweicloud/cce/v3/model/DeleteAutopilotClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteAutopilotClusterRequest::DeleteAutopilotClusterRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    errorStatus_ = "";
    errorStatusIsSet_ = false;
    deleteEfs_ = "";
    deleteEfsIsSet_ = false;
    deleteEni_ = "";
    deleteEniIsSet_ = false;
    deleteNet_ = "";
    deleteNetIsSet_ = false;
    deleteObs_ = "";
    deleteObsIsSet_ = false;
    deleteSfs30_ = "";
    deleteSfs30IsSet_ = false;
    ltsReclaimPolicy_ = "";
    ltsReclaimPolicyIsSet_ = false;
}

DeleteAutopilotClusterRequest::~DeleteAutopilotClusterRequest() = default;

void DeleteAutopilotClusterRequest::validate()
{
}

web::json::value DeleteAutopilotClusterRequest::toJson() const
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
    if(deleteNetIsSet_) {
        val[utility::conversions::to_string_t("delete_net")] = ModelBase::toJson(deleteNet_);
    }
    if(deleteObsIsSet_) {
        val[utility::conversions::to_string_t("delete_obs")] = ModelBase::toJson(deleteObs_);
    }
    if(deleteSfs30IsSet_) {
        val[utility::conversions::to_string_t("delete_sfs30")] = ModelBase::toJson(deleteSfs30_);
    }
    if(ltsReclaimPolicyIsSet_) {
        val[utility::conversions::to_string_t("lts_reclaim_policy")] = ModelBase::toJson(ltsReclaimPolicy_);
    }

    return val;
}
bool DeleteAutopilotClusterRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteAutopilotClusterRequest::getClusterId() const
{
    return clusterId_;
}

void DeleteAutopilotClusterRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool DeleteAutopilotClusterRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void DeleteAutopilotClusterRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string DeleteAutopilotClusterRequest::getErrorStatus() const
{
    return errorStatus_;
}

void DeleteAutopilotClusterRequest::setErrorStatus(const std::string& value)
{
    errorStatus_ = value;
    errorStatusIsSet_ = true;
}

bool DeleteAutopilotClusterRequest::errorStatusIsSet() const
{
    return errorStatusIsSet_;
}

void DeleteAutopilotClusterRequest::unseterrorStatus()
{
    errorStatusIsSet_ = false;
}

std::string DeleteAutopilotClusterRequest::getDeleteEfs() const
{
    return deleteEfs_;
}

void DeleteAutopilotClusterRequest::setDeleteEfs(const std::string& value)
{
    deleteEfs_ = value;
    deleteEfsIsSet_ = true;
}

bool DeleteAutopilotClusterRequest::deleteEfsIsSet() const
{
    return deleteEfsIsSet_;
}

void DeleteAutopilotClusterRequest::unsetdeleteEfs()
{
    deleteEfsIsSet_ = false;
}

std::string DeleteAutopilotClusterRequest::getDeleteEni() const
{
    return deleteEni_;
}

void DeleteAutopilotClusterRequest::setDeleteEni(const std::string& value)
{
    deleteEni_ = value;
    deleteEniIsSet_ = true;
}

bool DeleteAutopilotClusterRequest::deleteEniIsSet() const
{
    return deleteEniIsSet_;
}

void DeleteAutopilotClusterRequest::unsetdeleteEni()
{
    deleteEniIsSet_ = false;
}

std::string DeleteAutopilotClusterRequest::getDeleteNet() const
{
    return deleteNet_;
}

void DeleteAutopilotClusterRequest::setDeleteNet(const std::string& value)
{
    deleteNet_ = value;
    deleteNetIsSet_ = true;
}

bool DeleteAutopilotClusterRequest::deleteNetIsSet() const
{
    return deleteNetIsSet_;
}

void DeleteAutopilotClusterRequest::unsetdeleteNet()
{
    deleteNetIsSet_ = false;
}

std::string DeleteAutopilotClusterRequest::getDeleteObs() const
{
    return deleteObs_;
}

void DeleteAutopilotClusterRequest::setDeleteObs(const std::string& value)
{
    deleteObs_ = value;
    deleteObsIsSet_ = true;
}

bool DeleteAutopilotClusterRequest::deleteObsIsSet() const
{
    return deleteObsIsSet_;
}

void DeleteAutopilotClusterRequest::unsetdeleteObs()
{
    deleteObsIsSet_ = false;
}

std::string DeleteAutopilotClusterRequest::getDeleteSfs30() const
{
    return deleteSfs30_;
}

void DeleteAutopilotClusterRequest::setDeleteSfs30(const std::string& value)
{
    deleteSfs30_ = value;
    deleteSfs30IsSet_ = true;
}

bool DeleteAutopilotClusterRequest::deleteSfs30IsSet() const
{
    return deleteSfs30IsSet_;
}

void DeleteAutopilotClusterRequest::unsetdeleteSfs30()
{
    deleteSfs30IsSet_ = false;
}

std::string DeleteAutopilotClusterRequest::getLtsReclaimPolicy() const
{
    return ltsReclaimPolicy_;
}

void DeleteAutopilotClusterRequest::setLtsReclaimPolicy(const std::string& value)
{
    ltsReclaimPolicy_ = value;
    ltsReclaimPolicyIsSet_ = true;
}

bool DeleteAutopilotClusterRequest::ltsReclaimPolicyIsSet() const
{
    return ltsReclaimPolicyIsSet_;
}

void DeleteAutopilotClusterRequest::unsetltsReclaimPolicy()
{
    ltsReclaimPolicyIsSet_ = false;
}

}
}
}
}
}


