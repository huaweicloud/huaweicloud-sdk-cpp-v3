#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_AntiDDoSClient_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_AntiDDoSClient_H_

#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/antiddos/v1/model/CreateDefaultConfigRequest.h>
#include <huaweicloud/antiddos/v1/model/CreateDefaultConfigResponse.h>
#include <huaweicloud/antiddos/v1/model/DdosConfig.h>
#include <huaweicloud/antiddos/v1/model/DeleteDefaultConfigRequest.h>
#include <huaweicloud/antiddos/v1/model/DeleteDefaultConfigResponse.h>
#include <huaweicloud/antiddos/v1/model/ShowDefaultConfigRequest.h>
#include <huaweicloud/antiddos/v1/model/ShowDefaultConfigResponse.h>

#include <huaweicloud/antiddos/v1/model/EnableDefensePolicyRequest.h>
#include <huaweicloud/antiddos/v1/model/EnableDefensePolicyResponse.h>
#include <huaweicloud/antiddos/v1/model/ListDDosStatusRequest.h>
#include <huaweicloud/antiddos/v1/model/ListDDosStatusResponse.h>
#include <huaweicloud/antiddos/v1/model/ListDailyLogRequest.h>
#include <huaweicloud/antiddos/v1/model/ListDailyLogResponse.h>
#include <huaweicloud/antiddos/v1/model/ListDailyReportRequest.h>
#include <huaweicloud/antiddos/v1/model/ListDailyReportResponse.h>
#include <huaweicloud/antiddos/v1/model/ListQuotaRequest.h>
#include <huaweicloud/antiddos/v1/model/ListQuotaResponse.h>
#include <huaweicloud/antiddos/v1/model/ListWeeklyReportsRequest.h>
#include <huaweicloud/antiddos/v1/model/ListWeeklyReportsResponse.h>
#include <huaweicloud/antiddos/v1/model/LtsConfigRequestAndResponse.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/antiddos/v1/model/OpenAntiDDosServiceRequestBody.h>
#include <huaweicloud/antiddos/v1/model/ShowDDosRequest.h>
#include <huaweicloud/antiddos/v1/model/ShowDDosResponse.h>
#include <huaweicloud/antiddos/v1/model/ShowDDosStatusRequest.h>
#include <huaweicloud/antiddos/v1/model/ShowDDosStatusResponse.h>
#include <huaweicloud/antiddos/v1/model/ShowLogConfigRequest.h>
#include <huaweicloud/antiddos/v1/model/ShowLogConfigResponse.h>
#include <huaweicloud/antiddos/v1/model/UpdateAntiDDosServiceRequestBody.h>
#include <huaweicloud/antiddos/v1/model/UpdateDDosRequest.h>
#include <huaweicloud/antiddos/v1/model/UpdateDDosResponse.h>
#include <huaweicloud/antiddos/v1/model/UpdateLogConfigRequest.h>
#include <huaweicloud/antiddos/v1/model/UpdateLogConfigResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Antiddos::V1::Model;

class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  AntiDDoSClient : public Client
{
public:

    AntiDDoSClient();

    virtual ~AntiDDoSClient();

    static ClientBuilder<AntiDDoSClient> newBuilder();

    // 配置Anti-DDoS默认防护策略
    //
    // 配置用户的默认防护策略。配置防护策略后，新购买的资源在自动开启防护时，会按照该默认防护策略进行配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDefaultConfigResponse> createDefaultConfig(
        CreateDefaultConfigRequest &request
    );
    // 删除Ani-DDoS默认防护策略
    //
    // 删除用户配置的默认防护策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDefaultConfigResponse> deleteDefaultConfig(
        DeleteDefaultConfigRequest &request
    );
    // 查询Ani-DDoS默认防护策略
    //
    // 查询用户配置的默认防护策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDefaultConfigResponse> showDefaultConfig(
        ShowDefaultConfigRequest &request
    );

    // 开通DDoS服务
    //
    // 开通DDoS服务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableDefensePolicyResponse> enableDefensePolicy(
        EnableDefensePolicyRequest &request
    );
    // 查询EIP防护状态列表
    //
    // 查询用户所有EIP的Anti-DDoS防护状态信息，用户的EIP无论是否绑定到云服务器，都可以进行查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDDosStatusResponse> listDDosStatus(
        ListDDosStatusRequest &request
    );
    // 查询指定EIP异常事件
    //
    // 查询指定EIP在过去24小时之内的异常事件信息，异常事件包括清洗事件和黑洞事件，查询延迟在5分钟之内。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDailyLogResponse> listDailyLog(
        ListDailyLogRequest &request
    );
    // 查询指定EIP防护流量
    //
    // 查询指定EIP在过去24小时之内的防护流量信息，流量的间隔时间单位为5分钟。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDailyReportResponse> listDailyReport(
        ListDailyReportRequest &request
    );
    // 查询配额
    //
    // 查询配额
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListQuotaResponse> listQuota(
        ListQuotaRequest &request
    );
    // 查询周防护统计情况
    //
    // 查询用户所有Anti-DDoS防护周统计情况，包括一周内DDoS拦截次数和攻击次数、以及按照被攻击次数进行的排名信息等统计数据。系统支持当前时间之前四周的周统计数据查询，超过这个时间的请求是查询不到统计数据的。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWeeklyReportsResponse> listWeeklyReports(
        ListWeeklyReportsRequest &request
    );
    // 查询Anti-DDoS服务
    //
    // 查询配置的Anti-DDoS防护策略，用户可以查询指定EIP的Anti-DDoS防护策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDDosResponse> showDDos(
        ShowDDosRequest &request
    );
    // 查询指定EIP防护状态
    //
    // 查询指定EIP的Anti-DDoS防护状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDDosStatusResponse> showDDosStatus(
        ShowDDosStatusRequest &request
    );
    // 查询全量日志设置
    //
    // 查询全量日志设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLogConfigResponse> showLogConfig(
        ShowLogConfigRequest &request
    );
    // 更新Anti-DDoS服务
    //
    // 更新指定EIP的Anti-DDoS防护策略配置。调用成功，只是说明服务节点收到了关闭更新配置请求，操作是否成功需要通过任务查询接口查询该任务的执行状态，具体请参考查询Anti-DDoS任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDDosResponse> updateDDos(
        UpdateDDosRequest &request
    );
    // 更新用户全量日志设置
    //
    // 更新用户全量日志设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateLogConfigResponse> updateLogConfig(
        UpdateLogConfigRequest &request
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

template class HUAWEICLOUD_ANTIDDOS_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Antiddos::V1::AntiDDoSClient>;

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_AntiDDoSClient_H_

