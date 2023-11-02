#ifndef HUAWEICLOUD_SDK_DBSS_V1_DbssClient_H_
#define HUAWEICLOUD_SDK_DBSS_V1_DbssClient_H_

#include <huaweicloud/dbss/v1/DbssExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/dbss/v1/model/AddRdsNoAgentDatabaseRequest.h>
#include <huaweicloud/dbss/v1/model/AddRdsNoAgentDatabaseResponse.h>
#include <huaweicloud/dbss/v1/model/AgentSwitchRequest.h>
#include <huaweicloud/dbss/v1/model/BatchAddResourceTagRequest.h>
#include <huaweicloud/dbss/v1/model/BatchAddResourceTagResponse.h>
#include <huaweicloud/dbss/v1/model/BatchDeleteResourceTagRequest.h>
#include <huaweicloud/dbss/v1/model/BatchDeleteResourceTagResponse.h>
#include <huaweicloud/dbss/v1/model/BatchSwitchesRequest.h>
#include <huaweicloud/dbss/v1/model/CountResourceInstanceByTagRequest.h>
#include <huaweicloud/dbss/v1/model/CountResourceInstanceByTagResponse.h>
#include <huaweicloud/dbss/v1/model/CreateInstancePeriodRequest.h>
#include <huaweicloud/dbss/v1/model/CreateInstancesPeriodOrderRequest.h>
#include <huaweicloud/dbss/v1/model/CreateInstancesPeriodOrderResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditDatabasesRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditDatabasesResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditInstanceJobsRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditInstanceJobsResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditInstancesRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditInstancesResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditOperateLogsRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditOperateLogsResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditRuleRisksRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditRuleRisksResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditRuleScopesRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditRuleScopesResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditSensitiveMasksRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditSensitiveMasksResponse.h>
#include <huaweicloud/dbss/v1/model/ListAvailabilityZoneInfosRequest.h>
#include <huaweicloud/dbss/v1/model/ListAvailabilityZoneInfosResponse.h>
#include <huaweicloud/dbss/v1/model/ListEcsSpecificationRequest.h>
#include <huaweicloud/dbss/v1/model/ListEcsSpecificationResponse.h>
#include <huaweicloud/dbss/v1/model/ListProjectResourceTagsRequest.h>
#include <huaweicloud/dbss/v1/model/ListProjectResourceTagsResponse.h>
#include <huaweicloud/dbss/v1/model/ListResourceInstanceByTagRequest.h>
#include <huaweicloud/dbss/v1/model/ListResourceInstanceByTagResponse.h>
#include <huaweicloud/dbss/v1/model/ListSqlInjectionRulesRequest.h>
#include <huaweicloud/dbss/v1/model/ListSqlInjectionRulesResponse.h>
#include <huaweicloud/dbss/v1/model/OperateLogGetRequest.h>
#include <huaweicloud/dbss/v1/model/RdsNoAgentDbRequest.h>
#include <huaweicloud/dbss/v1/model/ResourceInstanceTagRequest.h>
#include <huaweicloud/dbss/v1/model/ResourceTagRequest.h>
#include <huaweicloud/dbss/v1/model/SecurityGroupRequest.h>
#include <huaweicloud/dbss/v1/model/ShowAuditQuotaRequest.h>
#include <huaweicloud/dbss/v1/model/ShowAuditQuotaResponse.h>
#include <huaweicloud/dbss/v1/model/ShowAuditRuleRiskRequest.h>
#include <huaweicloud/dbss/v1/model/ShowAuditRuleRiskResponse.h>
#include <huaweicloud/dbss/v1/model/SqlRuleRequest.h>
#include <huaweicloud/dbss/v1/model/SwitchAgentRequest.h>
#include <huaweicloud/dbss/v1/model/SwitchAgentResponse.h>
#include <huaweicloud/dbss/v1/model/SwitchRiskRuleRequest.h>
#include <huaweicloud/dbss/v1/model/SwitchRiskRuleResponse.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditSecurityGroupRequest.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditSecurityGroupResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Dbss::V1::Model;

class HUAWEICLOUD_DBSS_V1_EXPORT  DbssClient : public Client
{
public:

    DbssClient();

    virtual ~DbssClient();

    static ClientBuilder<DbssClient> newBuilder();

    // 添加RDS免agent数据库
    //
    // 添加RDS免agent数据库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddRdsNoAgentDatabaseResponse> addRdsNoAgentDatabase(
        AddRdsNoAgentDatabaseRequest &request
    );
    // 批量添加资源标签
    //
    // 批量添加资源标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchAddResourceTagResponse> batchAddResourceTag(
        BatchAddResourceTagRequest &request
    );
    // 批量删除资源标签
    //
    // 批量删除资源标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteResourceTagResponse> batchDeleteResourceTag(
        BatchDeleteResourceTagRequest &request
    );
    // 根据标签查询资源实例数量
    //
    // 根据标签查询资源实例数量
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountResourceInstanceByTagResponse> countResourceInstanceByTag(
        CountResourceInstanceByTagRequest &request
    );
    // 包年包月计费模式创建审计实例
    //
    // 包年包月计费模式创建审计实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInstancesPeriodOrderResponse> createInstancesPeriodOrder(
        CreateInstancesPeriodOrderRequest &request
    );
    // 查询数据库列表
    //
    // 查询数据库列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditDatabasesResponse> listAuditDatabases(
        ListAuditDatabasesRequest &request
    );
    // 查询实例创建任务信息
    //
    // 查询实例创建任务信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditInstanceJobsResponse> listAuditInstanceJobs(
        ListAuditInstanceJobsRequest &request
    );
    // 查询审计实例列表
    //
    // 查询审计实例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditInstancesResponse> listAuditInstances(
        ListAuditInstancesRequest &request
    );
    // 查询用户操作日志信息
    //
    // 查询用户操作日志信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditOperateLogsResponse> listAuditOperateLogs(
        ListAuditOperateLogsRequest &request
    );
    // 查询风险规则策略
    //
    // 查询风险规则策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditRuleRisksResponse> listAuditRuleRisks(
        ListAuditRuleRisksRequest &request
    );
    // 查询审计范围策略列表
    //
    // 查询审计范围策略列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditRuleScopesResponse> listAuditRuleScopes(
        ListAuditRuleScopesRequest &request
    );
    // 查询隐私数据脱敏规则
    //
    // 查询隐私数据脱敏规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditSensitiveMasksResponse> listAuditSensitiveMasks(
        ListAuditSensitiveMasksRequest &request
    );
    // 查询可用区信息
    //
    // 查询可用区信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAvailabilityZoneInfosResponse> listAvailabilityZoneInfos(
        ListAvailabilityZoneInfosRequest &request
    );
    // 查询ecs服务器规格信息
    //
    // 查询ecs服务器规格信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEcsSpecificationResponse> listEcsSpecification(
        ListEcsSpecificationRequest &request
    );
    // 查询项目标签
    //
    // 查询项目标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectResourceTagsResponse> listProjectResourceTags(
        ListProjectResourceTagsRequest &request
    );
    // 根据标签查询资源实例列表
    //
    // 根据标签查询资源实例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListResourceInstanceByTagResponse> listResourceInstanceByTag(
        ListResourceInstanceByTagRequest &request
    );
    // 查询SQL注入规则策略
    //
    // 查询SQL注入规则策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSqlInjectionRulesResponse> listSqlInjectionRules(
        ListSqlInjectionRulesRequest &request
    );
    // 查询账户配额信息
    //
    // 查询账户配额信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAuditQuotaResponse> showAuditQuota(
        ShowAuditQuotaRequest &request
    );
    // 查询指定风险规则策略
    //
    // 查询指定风险规则策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAuditRuleRiskResponse> showAuditRuleRisk(
        ShowAuditRuleRiskRequest &request
    );
    // 开启关闭Agent
    //
    // 用于开启和关闭agent的功能，当开启后，开始抓取用户的访问信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchAgentResponse> switchAgent(
        SwitchAgentRequest &request
    );
    // 开启关闭风险规则
    //
    // 开启关闭风险规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchRiskRuleResponse> switchRiskRule(
        SwitchRiskRuleRequest &request
    );
    // 修改安全组
    //
    // 修改安全组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAuditSecurityGroupResponse> updateAuditSecurityGroup(
        UpdateAuditSecurityGroupRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_DBSS_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Dbss::V1::DbssClient>;

#endif // HUAWEICLOUD_SDK_DBSS_V1_DbssClient_H_

