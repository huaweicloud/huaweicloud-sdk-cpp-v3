

#include "huaweicloud/modelarts/v1/model/NodeLabels.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeLabels::NodeLabels()
{
    osModelartsNodeCluster_ = "";
    osModelartsNodeClusterIsSet_ = false;
    osModelartsNodeElasticQuota_ = "";
    osModelartsNodeElasticQuotaIsSet_ = false;
    osModelartsNodeNodepool_ = "";
    osModelartsNodeNodepoolIsSet_ = false;
    osModelartsNodeBatchUid_ = "";
    osModelartsNodeBatchUidIsSet_ = false;
    osModelartsNodeBatchName_ = "";
    osModelartsNodeBatchNameIsSet_ = false;
    osModelartsNodeBatchType_ = "";
    osModelartsNodeBatchTypeIsSet_ = false;
    osModelartsNodeBatchCount_ = "";
    osModelartsNodeBatchCountIsSet_ = false;
    osModelartsNodeSpodId_ = "";
    osModelartsNodeSpodIdIsSet_ = false;
    osModelartsResourceId_ = "";
    osModelartsResourceIdIsSet_ = false;
    osModelartsTenantDomainId_ = "";
    osModelartsTenantDomainIdIsSet_ = false;
    osModelartsTenantProjectId_ = "";
    osModelartsTenantProjectIdIsSet_ = false;
    osModelartsBillingStatus_ = "";
    osModelartsBillingStatusIsSet_ = false;
    osModelartsNodeVolcanoSchedulerCabinetExclusive_ = "";
    osModelartsNodeVolcanoSchedulerCabinetExclusiveIsSet_ = false;
    cceKubectlKubernetesIoCabinet_ = "";
    cceKubectlKubernetesIoCabinetIsSet_ = false;
    osModelartsNodeUnderlyingInstanceId_ = "";
    osModelartsNodeUnderlyingInstanceIdIsSet_ = false;
    osModelartsNodeHaRedundantEnabled_ = "";
    osModelartsNodeHaRedundantEnabledIsSet_ = false;
    osModelartsNodeNodepoolname_ = "";
    osModelartsNodeNodepoolnameIsSet_ = false;
}

NodeLabels::~NodeLabels() = default;

void NodeLabels::validate()
{
}

web::json::value NodeLabels::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osModelartsNodeClusterIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.node/cluster")] = ModelBase::toJson(osModelartsNodeCluster_);
    }
    if(osModelartsNodeElasticQuotaIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.node/elastic.quota")] = ModelBase::toJson(osModelartsNodeElasticQuota_);
    }
    if(osModelartsNodeNodepoolIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.node/nodepool")] = ModelBase::toJson(osModelartsNodeNodepool_);
    }
    if(osModelartsNodeBatchUidIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.node/batch.uid")] = ModelBase::toJson(osModelartsNodeBatchUid_);
    }
    if(osModelartsNodeBatchNameIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.node/batch.name")] = ModelBase::toJson(osModelartsNodeBatchName_);
    }
    if(osModelartsNodeBatchTypeIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.node/batch.type")] = ModelBase::toJson(osModelartsNodeBatchType_);
    }
    if(osModelartsNodeBatchCountIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.node/batch.count")] = ModelBase::toJson(osModelartsNodeBatchCount_);
    }
    if(osModelartsNodeSpodIdIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.node/spod.id")] = ModelBase::toJson(osModelartsNodeSpodId_);
    }
    if(osModelartsResourceIdIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/resource.id")] = ModelBase::toJson(osModelartsResourceId_);
    }
    if(osModelartsTenantDomainIdIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/tenant.domain.id")] = ModelBase::toJson(osModelartsTenantDomainId_);
    }
    if(osModelartsTenantProjectIdIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/tenant.project.id")] = ModelBase::toJson(osModelartsTenantProjectId_);
    }
    if(osModelartsBillingStatusIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/billing.status")] = ModelBase::toJson(osModelartsBillingStatus_);
    }
    if(osModelartsNodeVolcanoSchedulerCabinetExclusiveIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.node/volcano.scheduler.cabinet-exclusive")] = ModelBase::toJson(osModelartsNodeVolcanoSchedulerCabinetExclusive_);
    }
    if(cceKubectlKubernetesIoCabinetIsSet_) {
        val[utility::conversions::to_string_t("cce.kubectl.kubernetes.io/cabinet")] = ModelBase::toJson(cceKubectlKubernetesIoCabinet_);
    }
    if(osModelartsNodeUnderlyingInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.node/underlying.instance.id")] = ModelBase::toJson(osModelartsNodeUnderlyingInstanceId_);
    }
    if(osModelartsNodeHaRedundantEnabledIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.node/ha.redundant.enabled")] = ModelBase::toJson(osModelartsNodeHaRedundantEnabled_);
    }
    if(osModelartsNodeNodepoolnameIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.node/nodepoolname")] = ModelBase::toJson(osModelartsNodeNodepoolname_);
    }

    return val;
}
bool NodeLabels::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os.modelarts.node/cluster"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts.node/cluster"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsNodeCluster(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts.node/elastic.quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts.node/elastic.quota"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsNodeElasticQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts.node/nodepool"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts.node/nodepool"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsNodeNodepool(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts.node/batch.uid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts.node/batch.uid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsNodeBatchUid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts.node/batch.name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts.node/batch.name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsNodeBatchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts.node/batch.type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts.node/batch.type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsNodeBatchType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts.node/batch.count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts.node/batch.count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsNodeBatchCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts.node/spod.id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts.node/spod.id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsNodeSpodId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/resource.id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/resource.id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/tenant.domain.id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/tenant.domain.id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsTenantDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/tenant.project.id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/tenant.project.id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsTenantProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/billing.status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/billing.status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsBillingStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts.node/volcano.scheduler.cabinet-exclusive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts.node/volcano.scheduler.cabinet-exclusive"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsNodeVolcanoSchedulerCabinetExclusive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cce.kubectl.kubernetes.io/cabinet"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cce.kubectl.kubernetes.io/cabinet"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCceKubectlKubernetesIoCabinet(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts.node/underlying.instance.id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts.node/underlying.instance.id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsNodeUnderlyingInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts.node/ha.redundant.enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts.node/ha.redundant.enabled"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsNodeHaRedundantEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts.node/nodepoolname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts.node/nodepoolname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsNodeNodepoolname(refVal);
        }
    }
    return ok;
}


std::string NodeLabels::getOsModelartsNodeCluster() const
{
    return osModelartsNodeCluster_;
}

void NodeLabels::setOsModelartsNodeCluster(const std::string& value)
{
    osModelartsNodeCluster_ = value;
    osModelartsNodeClusterIsSet_ = true;
}

bool NodeLabels::osModelartsNodeClusterIsSet() const
{
    return osModelartsNodeClusterIsSet_;
}

void NodeLabels::unsetosModelartsNodeCluster()
{
    osModelartsNodeClusterIsSet_ = false;
}

std::string NodeLabels::getOsModelartsNodeElasticQuota() const
{
    return osModelartsNodeElasticQuota_;
}

void NodeLabels::setOsModelartsNodeElasticQuota(const std::string& value)
{
    osModelartsNodeElasticQuota_ = value;
    osModelartsNodeElasticQuotaIsSet_ = true;
}

bool NodeLabels::osModelartsNodeElasticQuotaIsSet() const
{
    return osModelartsNodeElasticQuotaIsSet_;
}

void NodeLabels::unsetosModelartsNodeElasticQuota()
{
    osModelartsNodeElasticQuotaIsSet_ = false;
}

std::string NodeLabels::getOsModelartsNodeNodepool() const
{
    return osModelartsNodeNodepool_;
}

void NodeLabels::setOsModelartsNodeNodepool(const std::string& value)
{
    osModelartsNodeNodepool_ = value;
    osModelartsNodeNodepoolIsSet_ = true;
}

bool NodeLabels::osModelartsNodeNodepoolIsSet() const
{
    return osModelartsNodeNodepoolIsSet_;
}

void NodeLabels::unsetosModelartsNodeNodepool()
{
    osModelartsNodeNodepoolIsSet_ = false;
}

std::string NodeLabels::getOsModelartsNodeBatchUid() const
{
    return osModelartsNodeBatchUid_;
}

void NodeLabels::setOsModelartsNodeBatchUid(const std::string& value)
{
    osModelartsNodeBatchUid_ = value;
    osModelartsNodeBatchUidIsSet_ = true;
}

bool NodeLabels::osModelartsNodeBatchUidIsSet() const
{
    return osModelartsNodeBatchUidIsSet_;
}

void NodeLabels::unsetosModelartsNodeBatchUid()
{
    osModelartsNodeBatchUidIsSet_ = false;
}

std::string NodeLabels::getOsModelartsNodeBatchName() const
{
    return osModelartsNodeBatchName_;
}

void NodeLabels::setOsModelartsNodeBatchName(const std::string& value)
{
    osModelartsNodeBatchName_ = value;
    osModelartsNodeBatchNameIsSet_ = true;
}

bool NodeLabels::osModelartsNodeBatchNameIsSet() const
{
    return osModelartsNodeBatchNameIsSet_;
}

void NodeLabels::unsetosModelartsNodeBatchName()
{
    osModelartsNodeBatchNameIsSet_ = false;
}

std::string NodeLabels::getOsModelartsNodeBatchType() const
{
    return osModelartsNodeBatchType_;
}

void NodeLabels::setOsModelartsNodeBatchType(const std::string& value)
{
    osModelartsNodeBatchType_ = value;
    osModelartsNodeBatchTypeIsSet_ = true;
}

bool NodeLabels::osModelartsNodeBatchTypeIsSet() const
{
    return osModelartsNodeBatchTypeIsSet_;
}

void NodeLabels::unsetosModelartsNodeBatchType()
{
    osModelartsNodeBatchTypeIsSet_ = false;
}

std::string NodeLabels::getOsModelartsNodeBatchCount() const
{
    return osModelartsNodeBatchCount_;
}

void NodeLabels::setOsModelartsNodeBatchCount(const std::string& value)
{
    osModelartsNodeBatchCount_ = value;
    osModelartsNodeBatchCountIsSet_ = true;
}

bool NodeLabels::osModelartsNodeBatchCountIsSet() const
{
    return osModelartsNodeBatchCountIsSet_;
}

void NodeLabels::unsetosModelartsNodeBatchCount()
{
    osModelartsNodeBatchCountIsSet_ = false;
}

std::string NodeLabels::getOsModelartsNodeSpodId() const
{
    return osModelartsNodeSpodId_;
}

void NodeLabels::setOsModelartsNodeSpodId(const std::string& value)
{
    osModelartsNodeSpodId_ = value;
    osModelartsNodeSpodIdIsSet_ = true;
}

bool NodeLabels::osModelartsNodeSpodIdIsSet() const
{
    return osModelartsNodeSpodIdIsSet_;
}

void NodeLabels::unsetosModelartsNodeSpodId()
{
    osModelartsNodeSpodIdIsSet_ = false;
}

std::string NodeLabels::getOsModelartsResourceId() const
{
    return osModelartsResourceId_;
}

void NodeLabels::setOsModelartsResourceId(const std::string& value)
{
    osModelartsResourceId_ = value;
    osModelartsResourceIdIsSet_ = true;
}

bool NodeLabels::osModelartsResourceIdIsSet() const
{
    return osModelartsResourceIdIsSet_;
}

void NodeLabels::unsetosModelartsResourceId()
{
    osModelartsResourceIdIsSet_ = false;
}

std::string NodeLabels::getOsModelartsTenantDomainId() const
{
    return osModelartsTenantDomainId_;
}

void NodeLabels::setOsModelartsTenantDomainId(const std::string& value)
{
    osModelartsTenantDomainId_ = value;
    osModelartsTenantDomainIdIsSet_ = true;
}

bool NodeLabels::osModelartsTenantDomainIdIsSet() const
{
    return osModelartsTenantDomainIdIsSet_;
}

void NodeLabels::unsetosModelartsTenantDomainId()
{
    osModelartsTenantDomainIdIsSet_ = false;
}

std::string NodeLabels::getOsModelartsTenantProjectId() const
{
    return osModelartsTenantProjectId_;
}

void NodeLabels::setOsModelartsTenantProjectId(const std::string& value)
{
    osModelartsTenantProjectId_ = value;
    osModelartsTenantProjectIdIsSet_ = true;
}

bool NodeLabels::osModelartsTenantProjectIdIsSet() const
{
    return osModelartsTenantProjectIdIsSet_;
}

void NodeLabels::unsetosModelartsTenantProjectId()
{
    osModelartsTenantProjectIdIsSet_ = false;
}

std::string NodeLabels::getOsModelartsBillingStatus() const
{
    return osModelartsBillingStatus_;
}

void NodeLabels::setOsModelartsBillingStatus(const std::string& value)
{
    osModelartsBillingStatus_ = value;
    osModelartsBillingStatusIsSet_ = true;
}

bool NodeLabels::osModelartsBillingStatusIsSet() const
{
    return osModelartsBillingStatusIsSet_;
}

void NodeLabels::unsetosModelartsBillingStatus()
{
    osModelartsBillingStatusIsSet_ = false;
}

std::string NodeLabels::getOsModelartsNodeVolcanoSchedulerCabinetExclusive() const
{
    return osModelartsNodeVolcanoSchedulerCabinetExclusive_;
}

void NodeLabels::setOsModelartsNodeVolcanoSchedulerCabinetExclusive(const std::string& value)
{
    osModelartsNodeVolcanoSchedulerCabinetExclusive_ = value;
    osModelartsNodeVolcanoSchedulerCabinetExclusiveIsSet_ = true;
}

bool NodeLabels::osModelartsNodeVolcanoSchedulerCabinetExclusiveIsSet() const
{
    return osModelartsNodeVolcanoSchedulerCabinetExclusiveIsSet_;
}

void NodeLabels::unsetosModelartsNodeVolcanoSchedulerCabinetExclusive()
{
    osModelartsNodeVolcanoSchedulerCabinetExclusiveIsSet_ = false;
}

std::string NodeLabels::getCceKubectlKubernetesIoCabinet() const
{
    return cceKubectlKubernetesIoCabinet_;
}

void NodeLabels::setCceKubectlKubernetesIoCabinet(const std::string& value)
{
    cceKubectlKubernetesIoCabinet_ = value;
    cceKubectlKubernetesIoCabinetIsSet_ = true;
}

bool NodeLabels::cceKubectlKubernetesIoCabinetIsSet() const
{
    return cceKubectlKubernetesIoCabinetIsSet_;
}

void NodeLabels::unsetcceKubectlKubernetesIoCabinet()
{
    cceKubectlKubernetesIoCabinetIsSet_ = false;
}

std::string NodeLabels::getOsModelartsNodeUnderlyingInstanceId() const
{
    return osModelartsNodeUnderlyingInstanceId_;
}

void NodeLabels::setOsModelartsNodeUnderlyingInstanceId(const std::string& value)
{
    osModelartsNodeUnderlyingInstanceId_ = value;
    osModelartsNodeUnderlyingInstanceIdIsSet_ = true;
}

bool NodeLabels::osModelartsNodeUnderlyingInstanceIdIsSet() const
{
    return osModelartsNodeUnderlyingInstanceIdIsSet_;
}

void NodeLabels::unsetosModelartsNodeUnderlyingInstanceId()
{
    osModelartsNodeUnderlyingInstanceIdIsSet_ = false;
}

std::string NodeLabels::getOsModelartsNodeHaRedundantEnabled() const
{
    return osModelartsNodeHaRedundantEnabled_;
}

void NodeLabels::setOsModelartsNodeHaRedundantEnabled(const std::string& value)
{
    osModelartsNodeHaRedundantEnabled_ = value;
    osModelartsNodeHaRedundantEnabledIsSet_ = true;
}

bool NodeLabels::osModelartsNodeHaRedundantEnabledIsSet() const
{
    return osModelartsNodeHaRedundantEnabledIsSet_;
}

void NodeLabels::unsetosModelartsNodeHaRedundantEnabled()
{
    osModelartsNodeHaRedundantEnabledIsSet_ = false;
}

std::string NodeLabels::getOsModelartsNodeNodepoolname() const
{
    return osModelartsNodeNodepoolname_;
}

void NodeLabels::setOsModelartsNodeNodepoolname(const std::string& value)
{
    osModelartsNodeNodepoolname_ = value;
    osModelartsNodeNodepoolnameIsSet_ = true;
}

bool NodeLabels::osModelartsNodeNodepoolnameIsSet() const
{
    return osModelartsNodeNodepoolnameIsSet_;
}

void NodeLabels::unsetosModelartsNodeNodepoolname()
{
    osModelartsNodeNodepoolnameIsSet_ = false;
}

}
}
}
}
}


