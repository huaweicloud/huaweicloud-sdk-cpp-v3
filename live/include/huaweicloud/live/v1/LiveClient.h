#ifndef HUAWEICLOUD_SDK_LIVE_V1_LiveClient_H_
#define HUAWEICLOUD_SDK_LIVE_V1_LiveClient_H_

#include <huaweicloud/live/v1/LiveExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/live/v1/model/BatchShowIpBelongsRequest.h>
#include <huaweicloud/live/v1/model/BatchShowIpBelongsResponse.h>
#include <huaweicloud/live/v1/model/CreateDomainMappingRequest.h>
#include <huaweicloud/live/v1/model/CreateDomainMappingResponse.h>
#include <huaweicloud/live/v1/model/CreateDomainRequest.h>
#include <huaweicloud/live/v1/model/CreateDomainResponse.h>
#include <huaweicloud/live/v1/model/CreateRecordCallbackConfigRequest.h>
#include <huaweicloud/live/v1/model/CreateRecordCallbackConfigResponse.h>
#include <huaweicloud/live/v1/model/CreateRecordIndexRequest.h>
#include <huaweicloud/live/v1/model/CreateRecordIndexResponse.h>
#include <huaweicloud/live/v1/model/CreateRecordRuleRequest.h>
#include <huaweicloud/live/v1/model/CreateRecordRuleResponse.h>
#include <huaweicloud/live/v1/model/CreateSnapshotConfigRequest.h>
#include <huaweicloud/live/v1/model/CreateSnapshotConfigResponse.h>
#include <huaweicloud/live/v1/model/CreateStreamForbiddenRequest.h>
#include <huaweicloud/live/v1/model/CreateStreamForbiddenResponse.h>
#include <huaweicloud/live/v1/model/CreateTranscodingsTemplateRequest.h>
#include <huaweicloud/live/v1/model/CreateTranscodingsTemplateResponse.h>
#include <huaweicloud/live/v1/model/DeleteDomainKeyChainRequest.h>
#include <huaweicloud/live/v1/model/DeleteDomainKeyChainResponse.h>
#include <huaweicloud/live/v1/model/DeleteDomainMappingRequest.h>
#include <huaweicloud/live/v1/model/DeleteDomainMappingResponse.h>
#include <huaweicloud/live/v1/model/DeleteDomainRequest.h>
#include <huaweicloud/live/v1/model/DeleteDomainResponse.h>
#include <huaweicloud/live/v1/model/DeleteRecordCallbackConfigRequest.h>
#include <huaweicloud/live/v1/model/DeleteRecordCallbackConfigResponse.h>
#include <huaweicloud/live/v1/model/DeleteRecordRuleRequest.h>
#include <huaweicloud/live/v1/model/DeleteRecordRuleResponse.h>
#include <huaweicloud/live/v1/model/DeleteSnapshotConfigRequest.h>
#include <huaweicloud/live/v1/model/DeleteSnapshotConfigResponse.h>
#include <huaweicloud/live/v1/model/DeleteStreamForbiddenRequest.h>
#include <huaweicloud/live/v1/model/DeleteStreamForbiddenResponse.h>
#include <huaweicloud/live/v1/model/DeleteTranscodingsTemplateRequest.h>
#include <huaweicloud/live/v1/model/DeleteTranscodingsTemplateResponse.h>
#include <huaweicloud/live/v1/model/DomainIpv6SwitchReq.h>
#include <huaweicloud/live/v1/model/DomainMapping.h>
#include <huaweicloud/live/v1/model/KeyChainInfo.h>
#include <huaweicloud/live/v1/model/ListLiveSampleLogsRequest.h>
#include <huaweicloud/live/v1/model/ListLiveSampleLogsResponse.h>
#include <huaweicloud/live/v1/model/ListLiveStreamsOnlineRequest.h>
#include <huaweicloud/live/v1/model/ListLiveStreamsOnlineResponse.h>
#include <huaweicloud/live/v1/model/ListRecordCallbackConfigsRequest.h>
#include <huaweicloud/live/v1/model/ListRecordCallbackConfigsResponse.h>
#include <huaweicloud/live/v1/model/ListRecordContentsRequest.h>
#include <huaweicloud/live/v1/model/ListRecordContentsResponse.h>
#include <huaweicloud/live/v1/model/ListRecordRulesRequest.h>
#include <huaweicloud/live/v1/model/ListRecordRulesResponse.h>
#include <huaweicloud/live/v1/model/ListSnapshotConfigsRequest.h>
#include <huaweicloud/live/v1/model/ListSnapshotConfigsResponse.h>
#include <huaweicloud/live/v1/model/ListStreamForbiddenRequest.h>
#include <huaweicloud/live/v1/model/ListStreamForbiddenResponse.h>
#include <huaweicloud/live/v1/model/LiveDomainCreateReq.h>
#include <huaweicloud/live/v1/model/LiveDomainModifyReq.h>
#include <huaweicloud/live/v1/model/LiveSnapshotConfig.h>
#include <huaweicloud/live/v1/model/RecordCallbackConfigRequest.h>
#include <huaweicloud/live/v1/model/RecordControlInfo.h>
#include <huaweicloud/live/v1/model/RecordIndexRequestBody.h>
#include <huaweicloud/live/v1/model/RecordRuleRequest.h>
#include <huaweicloud/live/v1/model/RunRecordRequest.h>
#include <huaweicloud/live/v1/model/RunRecordResponse.h>
#include <huaweicloud/live/v1/model/ShowDomainKeyChainRequest.h>
#include <huaweicloud/live/v1/model/ShowDomainKeyChainResponse.h>
#include <huaweicloud/live/v1/model/ShowDomainRequest.h>
#include <huaweicloud/live/v1/model/ShowDomainResponse.h>
#include <huaweicloud/live/v1/model/ShowRecordCallbackConfigRequest.h>
#include <huaweicloud/live/v1/model/ShowRecordCallbackConfigResponse.h>
#include <huaweicloud/live/v1/model/ShowRecordRuleRequest.h>
#include <huaweicloud/live/v1/model/ShowRecordRuleResponse.h>
#include <huaweicloud/live/v1/model/ShowTranscodingsTemplateRequest.h>
#include <huaweicloud/live/v1/model/ShowTranscodingsTemplateResponse.h>
#include <huaweicloud/live/v1/model/StreamForbiddenSetting.h>
#include <huaweicloud/live/v1/model/StreamTranscodingTemplate.h>
#include <huaweicloud/live/v1/model/UpdateDomainIp6SwitchRequest.h>
#include <huaweicloud/live/v1/model/UpdateDomainIp6SwitchResponse.h>
#include <huaweicloud/live/v1/model/UpdateDomainKeyChainRequest.h>
#include <huaweicloud/live/v1/model/UpdateDomainKeyChainResponse.h>
#include <huaweicloud/live/v1/model/UpdateDomainRequest.h>
#include <huaweicloud/live/v1/model/UpdateDomainResponse.h>
#include <huaweicloud/live/v1/model/UpdateRecordCallbackConfigRequest.h>
#include <huaweicloud/live/v1/model/UpdateRecordCallbackConfigResponse.h>
#include <huaweicloud/live/v1/model/UpdateRecordRuleRequest.h>
#include <huaweicloud/live/v1/model/UpdateRecordRuleResponse.h>
#include <huaweicloud/live/v1/model/UpdateSnapshotConfigRequest.h>
#include <huaweicloud/live/v1/model/UpdateSnapshotConfigResponse.h>
#include <huaweicloud/live/v1/model/UpdateStreamForbiddenRequest.h>
#include <huaweicloud/live/v1/model/UpdateStreamForbiddenResponse.h>
#include <huaweicloud/live/v1/model/UpdateTranscodingsTemplateRequest.h>
#include <huaweicloud/live/v1/model/UpdateTranscodingsTemplateResponse.h>
#include <string>
#include <cpprest/details/basic_types.h>

#include <huaweicloud/live/v1/model/DeleteDomainHttpsCertRequest.h>
#include <huaweicloud/live/v1/model/DeleteDomainHttpsCertResponse.h>
#include <huaweicloud/live/v1/model/DomainHttpsCertInfo.h>
#include <huaweicloud/live/v1/model/ShowDomainHttpsCertRequest.h>
#include <huaweicloud/live/v1/model/ShowDomainHttpsCertResponse.h>
#include <huaweicloud/live/v1/model/UpdateDomainHttpsCertRequest.h>
#include <huaweicloud/live/v1/model/UpdateDomainHttpsCertResponse.h>
#include <string>

#include <huaweicloud/live/v1/model/ObsAuthorityConfigV2.h>
#include <huaweicloud/live/v1/model/UpdateObsBucketAuthorityPublicRequest.h>
#include <huaweicloud/live/v1/model/UpdateObsBucketAuthorityPublicResponse.h>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Live::V1::Model;

class HUAWEICLOUD_LIVE_V1_EXPORT  LiveClient : public Client
{
public:

    LiveClient();

    virtual ~LiveClient();

    static ClientBuilder<LiveClient> newBuilder();

    // 查询IP归属信息
    //
    // 查询IP归属信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchShowIpBelongsResponse> batchShowIpBelongs(
        BatchShowIpBelongsRequest &request
    );
    // 创建直播域名
    //
    // 可单独创建直播播放域名或推流域名，每个租户最多可配置64条域名记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDomainResponse> createDomain(
        CreateDomainRequest &request
    );
    // 域名映射
    //
    // 将用户已创建的播放域名和推流域名建立域名映射关系
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDomainMappingResponse> createDomainMapping(
        CreateDomainMappingRequest &request
    );
    // 创建录制回调配置
    //
    // 创建录制回调配置接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRecordCallbackConfigResponse> createRecordCallbackConfig(
        CreateRecordCallbackConfigRequest &request
    );
    // 创建录制视频索引文件
    //
    // Create Record Index
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRecordIndexResponse> createRecordIndex(
        CreateRecordIndexRequest &request
    );
    // 创建录制规则
    //
    // 创建录制规则接口，录制规则对新推送的流生效，对已经推送中的流不生效
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRecordRuleResponse> createRecordRule(
        CreateRecordRuleRequest &request
    );
    // 创建直播截图配置
    //
    // 创建直播截图配置接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSnapshotConfigResponse> createSnapshotConfig(
        CreateSnapshotConfigRequest &request
    );
    // 禁止直播推流
    //
    // 禁止直播推流
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateStreamForbiddenResponse> createStreamForbidden(
        CreateStreamForbiddenRequest &request
    );
    // 创建直播转码模板
    //
    // 创建直播转码模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTranscodingsTemplateResponse> createTranscodingsTemplate(
        CreateTranscodingsTemplateRequest &request
    );
    // 删除直播域名
    //
    // 删除域名。只有在域名停用（off）状态时才能删除。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDomainResponse> deleteDomain(
        DeleteDomainRequest &request
    );
    // 删除指定域名的Key防盗链配置
    //
    // 删除指定域名的Key防盗链配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDomainKeyChainResponse> deleteDomainKeyChain(
        DeleteDomainKeyChainRequest &request
    );
    // 删除直播域名映射关系
    //
    // 将播放域名和推流域名的域名映射关系删除
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDomainMappingResponse> deleteDomainMapping(
        DeleteDomainMappingRequest &request
    );
    // 删除录制回调配置
    //
    // 删除录制回调配置接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRecordCallbackConfigResponse> deleteRecordCallbackConfig(
        DeleteRecordCallbackConfigRequest &request
    );
    // 删除录制规则
    //
    // 删除录制规则接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRecordRuleResponse> deleteRecordRule(
        DeleteRecordRuleRequest &request
    );
    // 删除直播截图配置
    //
    // 删除直播截图配置接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSnapshotConfigResponse> deleteSnapshotConfig(
        DeleteSnapshotConfigRequest &request
    );
    // 禁推恢复
    //
    // 恢复直播推流接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteStreamForbiddenResponse> deleteStreamForbidden(
        DeleteStreamForbiddenRequest &request
    );
    // 删除直播转码模板
    //
    // 删除直播转码模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTranscodingsTemplateResponse> deleteTranscodingsTemplate(
        DeleteTranscodingsTemplateRequest &request
    );
    // 获取直播播放日志
    //
    // 获取直播播放日志，基于域名以5分钟粒度进行打包，日志内容以 \&quot;|\&quot; 进行分隔。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLiveSampleLogsResponse> listLiveSampleLogs(
        ListLiveSampleLogsRequest &request
    );
    // 查询直播中的流信息
    //
    // 查询直播中的流信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLiveStreamsOnlineResponse> listLiveStreamsOnline(
        ListLiveStreamsOnlineRequest &request
    );
    // 查询录制回调配置列表
    //
    // 查询录制回调配置列表接口。通过指定条件，查询满足条件的配置列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRecordCallbackConfigsResponse> listRecordCallbackConfigs(
        ListRecordCallbackConfigsRequest &request
    );
    // 录制完成内容的查询
    //
    // 录制完成的内容查询
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRecordContentsResponse> listRecordContents(
        ListRecordContentsRequest &request
    );
    // 查询录制规则列表
    //
    // 查询录制规则列表接口，通过指定条件，查询满足条件的录制规则列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRecordRulesResponse> listRecordRules(
        ListRecordRulesRequest &request
    );
    // 查询直播截图配置
    //
    // 查询直播截图配置接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSnapshotConfigsResponse> listSnapshotConfigs(
        ListSnapshotConfigsRequest &request
    );
    // 查询禁止直播推流列表
    //
    // 查询禁播黑名单列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListStreamForbiddenResponse> listStreamForbidden(
        ListStreamForbiddenRequest &request
    );
    // 提交录制控制命令
    //
    // 对单条流的实时录制控制接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunRecordResponse> runRecord(
        RunRecordRequest &request
    );
    // 查询直播域名
    //
    // 查询直播域名
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainResponse> showDomain(
        ShowDomainRequest &request
    );
    // 查询指定域名的Key防盗链配置
    //
    // 查询指定域名的Key防盗链配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainKeyChainResponse> showDomainKeyChain(
        ShowDomainKeyChainRequest &request
    );
    // 查询录制回调配置
    //
    // 查询录制回调配置接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRecordCallbackConfigResponse> showRecordCallbackConfig(
        ShowRecordCallbackConfigRequest &request
    );
    // 查询录制规则配置
    //
    // 查询录制规则接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRecordRuleResponse> showRecordRule(
        ShowRecordRuleRequest &request
    );
    // 查询直播转码模板
    //
    // 查询直播转码模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTranscodingsTemplateResponse> showTranscodingsTemplate(
        ShowTranscodingsTemplateRequest &request
    );
    // 修改直播域名
    //
    // 修改直播播放、RTMP推流加速域名相关信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDomainResponse> updateDomain(
        UpdateDomainRequest &request
    );
    // 配置域名IPV6开关
    //
    // 配置IPV6开关
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDomainIp6SwitchResponse> updateDomainIp6Switch(
        UpdateDomainIp6SwitchRequest &request
    );
    // 更新指定域名的Key防盗链配置
    //
    // 更新指定域名的Key防盗链配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDomainKeyChainResponse> updateDomainKeyChain(
        UpdateDomainKeyChainRequest &request
    );
    // 修改录制回调配置
    //
    // 修改录制回调配置接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRecordCallbackConfigResponse> updateRecordCallbackConfig(
        UpdateRecordCallbackConfigRequest &request
    );
    // 修改录制规则
    //
    // 修改录制规则接口，如果规则修改后，修改后的规则对正在录制的流无效，对新的流有效。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRecordRuleResponse> updateRecordRule(
        UpdateRecordRuleRequest &request
    );
    // 修改直播截图配置
    //
    // 修改直播截图配置接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSnapshotConfigResponse> updateSnapshotConfig(
        UpdateSnapshotConfigRequest &request
    );
    // 修改禁推属性
    //
    // 修改禁推属性
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateStreamForbiddenResponse> updateStreamForbidden(
        UpdateStreamForbiddenRequest &request
    );
    // 配置直播转码模板
    //
    // 修改直播转码模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTranscodingsTemplateResponse> updateTranscodingsTemplate(
        UpdateTranscodingsTemplateRequest &request
    );

    // 删除指定域名的https证书配置
    //
    // 删除指定域名的https证书配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDomainHttpsCertResponse> deleteDomainHttpsCert(
        DeleteDomainHttpsCertRequest &request
    );
    // 查询指定域名的https证书配置
    //
    // 查询指定域名的https证书配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainHttpsCertResponse> showDomainHttpsCert(
        ShowDomainHttpsCertRequest &request
    );
    // 修改指定域名的https证书配置
    //
    // 修改指定域名的https证书配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDomainHttpsCertResponse> updateDomainHttpsCert(
        UpdateDomainHttpsCertRequest &request
    );

    // OBS桶授权及取消授权
    //
    // OBS桶授权及取消授权
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateObsBucketAuthorityPublicResponse> updateObsBucketAuthorityPublic(
        UpdateObsBucketAuthorityPublicRequest &request
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

template class HUAWEICLOUD_LIVE_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Live::V1::LiveClient>;

#endif // HUAWEICLOUD_SDK_LIVE_V1_LiveClient_H_

