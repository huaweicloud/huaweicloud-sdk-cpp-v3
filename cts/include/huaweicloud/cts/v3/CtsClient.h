#ifndef HUAWEICLOUD_SDK_CTS_V3_CtsClient_H_
#define HUAWEICLOUD_SDK_CTS_V3_CtsClient_H_

#include <huaweicloud/cts/v3/CtsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/cts/v3/model/BatchCreateResourceTagsRequest.h>
#include <huaweicloud/cts/v3/model/BatchCreateResourceTagsRequestBody.h>
#include <huaweicloud/cts/v3/model/BatchCreateResourceTagsResponse.h>
#include <huaweicloud/cts/v3/model/BatchDeleteResourceTagsRequest.h>
#include <huaweicloud/cts/v3/model/BatchDeleteResourceTagsRequestBody.h>
#include <huaweicloud/cts/v3/model/BatchDeleteResourceTagsResponse.h>
#include <huaweicloud/cts/v3/model/CheckObsBucketsRequest.h>
#include <huaweicloud/cts/v3/model/CheckObsBucketsRequestBody.h>
#include <huaweicloud/cts/v3/model/CheckObsBucketsResponse.h>
#include <huaweicloud/cts/v3/model/CreateNotificationRequest.h>
#include <huaweicloud/cts/v3/model/CreateNotificationRequestBody.h>
#include <huaweicloud/cts/v3/model/CreateNotificationResponse.h>
#include <huaweicloud/cts/v3/model/CreateTrackerRequest.h>
#include <huaweicloud/cts/v3/model/CreateTrackerRequestBody.h>
#include <huaweicloud/cts/v3/model/CreateTrackerResponse.h>
#include <huaweicloud/cts/v3/model/DeleteNotificationRequest.h>
#include <huaweicloud/cts/v3/model/DeleteNotificationResponse.h>
#include <huaweicloud/cts/v3/model/DeleteTrackerRequest.h>
#include <huaweicloud/cts/v3/model/DeleteTrackerResponse.h>
#include <huaweicloud/cts/v3/model/ListNotificationsRequest.h>
#include <huaweicloud/cts/v3/model/ListNotificationsResponse.h>
#include <huaweicloud/cts/v3/model/ListOperationsRequest.h>
#include <huaweicloud/cts/v3/model/ListOperationsResponse.h>
#include <huaweicloud/cts/v3/model/ListQuotasRequest.h>
#include <huaweicloud/cts/v3/model/ListQuotasResponse.h>
#include <huaweicloud/cts/v3/model/ListTraceResourcesRequest.h>
#include <huaweicloud/cts/v3/model/ListTraceResourcesResponse.h>
#include <huaweicloud/cts/v3/model/ListTracesRequest.h>
#include <huaweicloud/cts/v3/model/ListTracesResponse.h>
#include <huaweicloud/cts/v3/model/ListTrackersRequest.h>
#include <huaweicloud/cts/v3/model/ListTrackersResponse.h>
#include <huaweicloud/cts/v3/model/ListUserResourcesRequest.h>
#include <huaweicloud/cts/v3/model/ListUserResourcesResponse.h>
#include <huaweicloud/cts/v3/model/UpdateNotificationRequest.h>
#include <huaweicloud/cts/v3/model/UpdateNotificationRequestBody.h>
#include <huaweicloud/cts/v3/model/UpdateNotificationResponse.h>
#include <huaweicloud/cts/v3/model/UpdateTrackerRequest.h>
#include <huaweicloud/cts/v3/model/UpdateTrackerRequestBody.h>
#include <huaweicloud/cts/v3/model/UpdateTrackerResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Cts::V3::Model;

class HUAWEICLOUD_CTS_V3_EXPORT  CtsClient : public Client
{
public:

    CtsClient();

    virtual ~CtsClient();

    static ClientBuilder<CtsClient> newBuilder();

    // 批量添加CTS资源标签
    //
    // 批量添加CTS资源标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateResourceTagsResponse> batchCreateResourceTags(
        BatchCreateResourceTagsRequest &request
    );
    // 批量删除CTS资源标签
    //
    // 批量删除CTS资源标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteResourceTagsResponse> batchDeleteResourceTags(
        BatchDeleteResourceTagsRequest &request
    );
    // 检查已经配置OBS桶是否可以成功转储
    //
    // 检查已经配置OBS桶是否可以成功转储。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckObsBucketsResponse> checkObsBuckets(
        CheckObsBucketsRequest &request
    );
    // 创建关键操作通知
    //
    // 配置关键操作通知，可在发生特定操作时，使用预先创建好的SMN主题，向用户手机、邮箱发送消息，也可直接发送http/https消息。常用于实时感知高危操作、触发特定操作或对接用户自有审计分析系统。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateNotificationResponse> createNotification(
        CreateNotificationRequest &request
    );
    // 创建追踪器
    //
    // 云审计服务开通后系统会自动创建一个追踪器，用来关联系统记录的所有操作。目前，一个云账户在一个Region下支持创建一个管理类追踪器和多个数据类追踪器。
    // 云审计服务支持在管理控制台查询近7天内的操作记录。如需保存更长时间的操作记录，您可以在创建追踪器之后通过对象存储服务（Object Storage Service，以下简称OBS）将操作记录实时保存至OBS桶中。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTrackerResponse> createTracker(
        CreateTrackerRequest &request
    );
    // 删除关键操作通知
    //
    // 云审计服务支持删除已创建的关键操作通知。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteNotificationResponse> deleteNotification(
        DeleteNotificationRequest &request
    );
    // 删除追踪器
    //
    // 云审计服务目前仅支持删除已创建的数据类追踪器。删除追踪器对已有的操作记录没有影响，当您重新开通云审计服务后，依旧可以查看已有的操作记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTrackerResponse> deleteTracker(
        DeleteTrackerRequest &request
    );
    // 查询关键操作通知
    //
    // 查询创建的关键操作通知规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNotificationsResponse> listNotifications(
        ListNotificationsRequest &request
    );
    // 查询云服务的全量操作列表
    //
    // 查询云服务的全量操作列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListOperationsResponse> listOperations(
        ListOperationsRequest &request
    );
    // 查询租户追踪器配额信息
    //
    // 查询租户追踪器配额信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListQuotasResponse> listQuotas(
        ListQuotasRequest &request
    );
    // 查询事件的资源类型列表
    //
    // 查询事件的资源类型列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTraceResourcesResponse> listTraceResources(
        ListTraceResourcesRequest &request
    );
    // 查询事件列表
    //
    // 通过事件列表查询接口，可以查出系统记录的7天内资源操作记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTracesResponse> listTraces(
        ListTracesRequest &request
    );
    // 查询追踪器
    //
    // 开通云审计服务成功后，您可以在追踪器信息页面查看追踪器的详细信息。详细信息主要包括追踪器名称，用于存储操作事件的OBS桶名称和OBS桶中的事件文件前缀。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTrackersResponse> listTrackers(
        ListTrackersRequest &request
    );
    // 查询30天事件的操作用户列表
    //
    // 查询30天事件的操作用户列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUserResourcesResponse> listUserResources(
        ListUserResourcesRequest &request
    );
    // 修改关键操作通知
    //
    // 云审计服务支持修改已创建关键操作通知配置项，通过notification_id的字段匹配修改对象，notification_id必须已经存在。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateNotificationResponse> updateNotification(
        UpdateNotificationRequest &request
    );
    // 修改追踪器
    //
    // 云审计服务支持修改已创建追踪器的配置项，包括OBS桶转储、关键事件通知、事件转储加密、通过LTS对管理类事件进行检索、事件文件完整性校验以及追踪器启停状态等相关参数，修改追踪器对已有的操作记录没有影响。修改追踪器完成后，系统立即以新的规则开始记录操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTrackerResponse> updateTracker(
        UpdateTrackerRequest &request
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

template class HUAWEICLOUD_CTS_V3_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Cts::V3::CtsClient>;

#endif // HUAWEICLOUD_SDK_CTS_V3_CtsClient_H_

