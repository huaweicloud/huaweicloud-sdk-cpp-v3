#ifndef HUAWEICLOUD_SDK_TICS_V1_TicsClient_H_
#define HUAWEICLOUD_SDK_TICS_V1_TicsClient_H_

#include <huaweicloud/tics/v1/TicsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/tics/v1/model/DeployVo.h>
#include <huaweicloud/tics/v1/model/LeagueDatasetStatisticsVo.h>
#include <huaweicloud/tics/v1/model/LeaguePartnerStatisticsVo.h>
#include <huaweicloud/tics/v1/model/LeagueUpdateVo.h>
#include <huaweicloud/tics/v1/model/ListAgentsRequest.h>
#include <huaweicloud/tics/v1/model/ListAgentsResponse.h>
#include <huaweicloud/tics/v1/model/ListAuditInfoRequest.h>
#include <huaweicloud/tics/v1/model/ListAuditInfoResponse.h>
#include <huaweicloud/tics/v1/model/ListFlJobRequest.h>
#include <huaweicloud/tics/v1/model/ListFlJobResponse.h>
#include <huaweicloud/tics/v1/model/ListInstanceHistoryRequest.h>
#include <huaweicloud/tics/v1/model/ListInstanceHistoryResponse.h>
#include <huaweicloud/tics/v1/model/ListLeagueDatasetsRequest.h>
#include <huaweicloud/tics/v1/model/ListLeagueDatasetsResponse.h>
#include <huaweicloud/tics/v1/model/ListLeaguesRequest.h>
#include <huaweicloud/tics/v1/model/ListLeaguesResponse.h>
#include <huaweicloud/tics/v1/model/ListNodesRequest.h>
#include <huaweicloud/tics/v1/model/ListNodesResponse.h>
#include <huaweicloud/tics/v1/model/ListNoticesRequest.h>
#include <huaweicloud/tics/v1/model/ListNoticesResponse.h>
#include <huaweicloud/tics/v1/model/ListPartnersRequest.h>
#include <huaweicloud/tics/v1/model/ListPartnersResponse.h>
#include <huaweicloud/tics/v1/model/ListSqlJobRequest.h>
#include <huaweicloud/tics/v1/model/ListSqlJobResponse.h>
#include <huaweicloud/tics/v1/model/ShowAgentDetailRequest.h>
#include <huaweicloud/tics/v1/model/ShowAgentDetailResponse.h>
#include <huaweicloud/tics/v1/model/ShowDatasetStatisticsRequest.h>
#include <huaweicloud/tics/v1/model/ShowDatasetStatisticsResponse.h>
#include <huaweicloud/tics/v1/model/ShowInstanceReportRequest.h>
#include <huaweicloud/tics/v1/model/ShowInstanceReportResponse.h>
#include <huaweicloud/tics/v1/model/ShowJobInstanceDagRequest.h>
#include <huaweicloud/tics/v1/model/ShowJobInstanceDagResponse.h>
#include <huaweicloud/tics/v1/model/ShowJobStatisticsRequest.h>
#include <huaweicloud/tics/v1/model/ShowJobStatisticsResponse.h>
#include <huaweicloud/tics/v1/model/ShowLeagueRequest.h>
#include <huaweicloud/tics/v1/model/ShowLeagueResponse.h>
#include <huaweicloud/tics/v1/model/ShowOverviewRequest.h>
#include <huaweicloud/tics/v1/model/ShowOverviewResponse.h>
#include <huaweicloud/tics/v1/model/ShowPartnerStatisticsRequest.h>
#include <huaweicloud/tics/v1/model/ShowPartnerStatisticsResponse.h>
#include <huaweicloud/tics/v1/model/UpdateLeagueRequest.h>
#include <huaweicloud/tics/v1/model/UpdateLeagueResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Tics::V1::Model;

class HUAWEICLOUD_TICS_V1_EXPORT  TicsClient : public Client
{
public:

    TicsClient();

    virtual ~TicsClient();

    static ClientBuilder<TicsClient> newBuilder();

    // 获取计算节点列表
    //
    // 功能描述：用户可以使用该接口获取可信节点信息列表。支持节点名称与联盟名称的模糊查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAgentsResponse> listAgents(
        ListAgentsRequest &request
    );
    // 查询审计日志
    //
    // 查询审计日志信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditInfoResponse> listAuditInfo(
        ListAuditInfoRequest &request
    );
    // 查询联邦学习作业列表
    //
    // 查询联邦学习作业列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFlJobResponse> listFlJob(
        ListFlJobRequest &request
    );
    // 查询作业的历史实例列表
    //
    // 查询作业的历史实例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceHistoryResponse> listInstanceHistory(
        ListInstanceHistoryRequest &request
    );
    // 查询联盟已注册数据集列表
    //
    // 功能描述：用户可以使用该接口查询联盟已注册数据集列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLeagueDatasetsResponse> listLeagueDatasets(
        ListLeagueDatasetsRequest &request
    );
    // 获取联盟列表
    //
    // 功能描述：用户可以使用该接口获取联盟列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLeaguesResponse> listLeagues(
        ListLeaguesRequest &request
    );
    // 查询联盟节点列表
    //
    // 功能描述：用户可以使用该接口查询联盟可信节点（包含聚合节点和计算节点）列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNodesResponse> listNodes(
        ListNodesRequest &request
    );
    // 查询通知管理列表
    //
    // 功能描述：用户可以使用该接口查询通知管理列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNoticesResponse> listNotices(
        ListNoticesRequest &request
    );
    // 获取联盟组员信息
    //
    // 功能描述：用户可以使用该接口获取联盟组员信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPartnersResponse> listPartners(
        ListPartnersRequest &request
    );
    // 查询联邦分析作业列表
    //
    // 查询联邦分析作业列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSqlJobResponse> listSqlJob(
        ListSqlJobRequest &request
    );
    // 获取计算节点详情信息
    //
    // 功能描述：用户可以使用该接口获取单个可信计算节点详情信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAgentDetailResponse> showAgentDetail(
        ShowAgentDetailRequest &request
    );
    // 数据集统计
    //
    // 用户可以使用该接口进行联盟数据集统计。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDatasetStatisticsResponse> showDatasetStatistics(
        ShowDatasetStatisticsRequest &request
    );
    // 查询实例执行报告
    //
    // 查询实例执行报告
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceReportResponse> showInstanceReport(
        ShowInstanceReportRequest &request
    );
    // 获取实例执行图
    //
    // 获取实例执行图
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobInstanceDagResponse> showJobInstanceDag(
        ShowJobInstanceDagRequest &request
    );
    // 作业统计
    //
    // 功能描述：用户可以使用该接口进行联盟作业统计。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobStatisticsResponse> showJobStatistics(
        ShowJobStatisticsRequest &request
    );
    // 获取联盟详细信息
    //
    // 功能描述：用户可以使用该接口获取联盟详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLeagueResponse> showLeague(
        ShowLeagueRequest &request
    );
    // 查询租户下统计信息
    //
    // 查询当前租户的联盟及代理统计数量
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOverviewResponse> showOverview(
        ShowOverviewRequest &request
    );
    // 合作方统计
    //
    // 功能描述：用户可以使用该接口进行联盟合作方统计。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPartnerStatisticsResponse> showPartnerStatistics(
        ShowPartnerStatisticsRequest &request
    );
    // 更新联盟信息
    //
    // 功能描述：用户可以使用接口更新联盟信息（包含联盟描述，联盟版本，隐私保护等级，查分隐私开关）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateLeagueResponse> updateLeague(
        UpdateLeagueRequest &request
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

template class HUAWEICLOUD_TICS_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Tics::V1::TicsClient>;

#endif // HUAWEICLOUD_SDK_TICS_V1_TicsClient_H_

