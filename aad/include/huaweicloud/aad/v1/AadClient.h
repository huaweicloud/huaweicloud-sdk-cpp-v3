#ifndef HUAWEICLOUD_SDK_AAD_V1_AadClient_H_
#define HUAWEICLOUD_SDK_AAD_V1_AadClient_H_

#include <huaweicloud/aad/v1/AadExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/aad/v1/model/ExecuteUnblockIpRequest.h>
#include <huaweicloud/aad/v1/model/ExecuteUnblockIpRequestBody.h>
#include <huaweicloud/aad/v1/model/ExecuteUnblockIpResponse.h>
#include <huaweicloud/aad/v1/model/ListBlockIpsRequest.h>
#include <huaweicloud/aad/v1/model/ListBlockIpsResponse.h>
#include <huaweicloud/aad/v1/model/ListUnblockQuotaStatisticsRequest.h>
#include <huaweicloud/aad/v1/model/ListUnblockQuotaStatisticsResponse.h>
#include <huaweicloud/aad/v1/model/ShowBlockStatisticsRequest.h>
#include <huaweicloud/aad/v1/model/ShowBlockStatisticsResponse.h>
#include <huaweicloud/aad/v1/model/ShowUnblockRecordRequest.h>
#include <huaweicloud/aad/v1/model/ShowUnblockRecordResponse.h>
#include <string>

#include <huaweicloud/aad/v1/model/AddBlackWhiteIpListRequest.h>
#include <huaweicloud/aad/v1/model/AddBlackWhiteIpListResponse.h>
#include <huaweicloud/aad/v1/model/AddPolicyBlackAndWhiteIpListRequest.h>
#include <huaweicloud/aad/v1/model/AddPolicyBlackAndWhiteIpListResponse.h>
#include <huaweicloud/aad/v1/model/AlarmBody.h>
#include <huaweicloud/aad/v1/model/AssociateIpToPolicyAndPackageRequest.h>
#include <huaweicloud/aad/v1/model/AssociateIpToPolicyAndPackageResponse.h>
#include <huaweicloud/aad/v1/model/AssociateIpToPolicyRequest.h>
#include <huaweicloud/aad/v1/model/AssociateIpToPolicyResponse.h>
#include <huaweicloud/aad/v1/model/BatchCreateInstanceIpRuleRequest.h>
#include <huaweicloud/aad/v1/model/BatchCreateInstanceIpRuleResponse.h>
#include <huaweicloud/aad/v1/model/BatchDeleteInstanceIpRuleRequest.h>
#include <huaweicloud/aad/v1/model/BatchDeleteInstanceIpRuleResponse.h>
#include <huaweicloud/aad/v1/model/BatchIdBody.h>
#include <huaweicloud/aad/v1/model/BatchTransferRuleBody.h>
#include <huaweicloud/aad/v1/model/BlackWhiteIpListRequest.h>
#include <huaweicloud/aad/v1/model/BlackWhiteIpRequestBody.h>
#include <huaweicloud/aad/v1/model/CadDomainSwitchRequest.h>
#include <huaweicloud/aad/v1/model/CertificateBody.h>
#include <huaweicloud/aad/v1/model/CreateAadDomainRequest.h>
#include <huaweicloud/aad/v1/model/CreateAadDomainResponse.h>
#include <huaweicloud/aad/v1/model/CreatePolicyRequest.h>
#include <huaweicloud/aad/v1/model/CreatePolicyRequestBody.h>
#include <huaweicloud/aad/v1/model/CreatePolicyResponse.h>
#include <huaweicloud/aad/v1/model/DeleteAlarmConfigRequest.h>
#include <huaweicloud/aad/v1/model/DeleteAlarmConfigResponse.h>
#include <huaweicloud/aad/v1/model/DeleteBlackWhiteIpListRequest.h>
#include <huaweicloud/aad/v1/model/DeleteBlackWhiteIpListResponse.h>
#include <huaweicloud/aad/v1/model/DeletePolicyBlackAndWhiteIpListRequest.h>
#include <huaweicloud/aad/v1/model/DeletePolicyBlackAndWhiteIpListResponse.h>
#include <huaweicloud/aad/v1/model/DeletePolicyRequest.h>
#include <huaweicloud/aad/v1/model/DeletePolicyResponse.h>
#include <huaweicloud/aad/v1/model/DisassociateIpFromPolicyAndPackageRequest.h>
#include <huaweicloud/aad/v1/model/DisassociateIpFromPolicyAndPackageResponse.h>
#include <huaweicloud/aad/v1/model/DisassociateIpFromPolicyRequest.h>
#include <huaweicloud/aad/v1/model/DisassociateIpFromPolicyResponse.h>
#include <huaweicloud/aad/v1/model/DomainRealServerInfo.h>
#include <huaweicloud/aad/v1/model/HostBody.h>
#include <huaweicloud/aad/v1/model/IpBindingBody.h>
#include <huaweicloud/aad/v1/model/IpBindingV3Body.h>
#include <huaweicloud/aad/v1/model/ListDomainRequest.h>
#include <huaweicloud/aad/v1/model/ListDomainResponse.h>
#include <huaweicloud/aad/v1/model/ListInstanceIdRequest.h>
#include <huaweicloud/aad/v1/model/ListInstanceIdResponse.h>
#include <huaweicloud/aad/v1/model/ListInstanceIpRuleRequest.h>
#include <huaweicloud/aad/v1/model/ListInstanceIpRuleResponse.h>
#include <huaweicloud/aad/v1/model/ListInstanceRequest.h>
#include <huaweicloud/aad/v1/model/ListInstanceResponse.h>
#include <huaweicloud/aad/v1/model/ListPackageRequest.h>
#include <huaweicloud/aad/v1/model/ListPackageResponse.h>
#include <huaweicloud/aad/v1/model/ListPeakRequest.h>
#include <huaweicloud/aad/v1/model/ListPeakResponse.h>
#include <huaweicloud/aad/v1/model/ListPolicyRequest.h>
#include <huaweicloud/aad/v1/model/ListPolicyResponse.h>
#include <huaweicloud/aad/v1/model/ListProtectedIpRequest.h>
#include <huaweicloud/aad/v1/model/ListProtectedIpResponse.h>
#include <huaweicloud/aad/v1/model/ListSourceIpsRequest.h>
#include <huaweicloud/aad/v1/model/ListSourceIpsResponse.h>
#include <huaweicloud/aad/v1/model/ListUnboundProtectedIpRequest.h>
#include <huaweicloud/aad/v1/model/ListUnboundProtectedIpResponse.h>
#include <huaweicloud/aad/v1/model/ModifyDomainWebSwitchRequest.h>
#include <huaweicloud/aad/v1/model/ModifyDomainWebSwitchResponse.h>
#include <huaweicloud/aad/v1/model/SetCertForDomainRequest.h>
#include <huaweicloud/aad/v1/model/SetCertForDomainResponse.h>
#include <huaweicloud/aad/v1/model/ShowAlarmConfigRequest.h>
#include <huaweicloud/aad/v1/model/ShowAlarmConfigResponse.h>
#include <huaweicloud/aad/v1/model/ShowPolicyRequest.h>
#include <huaweicloud/aad/v1/model/ShowPolicyResponse.h>
#include <huaweicloud/aad/v1/model/TransferRuleBody.h>
#include <huaweicloud/aad/v1/model/UpdateAlarmConfigRequest.h>
#include <huaweicloud/aad/v1/model/UpdateAlarmConfigResponse.h>
#include <huaweicloud/aad/v1/model/UpdateDomainRequest.h>
#include <huaweicloud/aad/v1/model/UpdateDomainResponse.h>
#include <huaweicloud/aad/v1/model/UpdateInstanceIpRuleRequest.h>
#include <huaweicloud/aad/v1/model/UpdateInstanceIpRuleResponse.h>
#include <huaweicloud/aad/v1/model/UpdatePackageIpRequest.h>
#include <huaweicloud/aad/v1/model/UpdatePackageIpRequestBody.h>
#include <huaweicloud/aad/v1/model/UpdatePackageIpResponse.h>
#include <huaweicloud/aad/v1/model/UpdatePackageNameRequest.h>
#include <huaweicloud/aad/v1/model/UpdatePackageNameRequestBody.h>
#include <huaweicloud/aad/v1/model/UpdatePackageNameResponse.h>
#include <huaweicloud/aad/v1/model/UpdatePolicyRequest.h>
#include <huaweicloud/aad/v1/model/UpdatePolicyRequestBody.h>
#include <huaweicloud/aad/v1/model/UpdatePolicyResponse.h>
#include <huaweicloud/aad/v1/model/UpdateProtectedIpBody.h>
#include <huaweicloud/aad/v1/model/UpdateTagForProtectedIpRequest.h>
#include <huaweicloud/aad/v1/model/UpdateTagForProtectedIpResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Aad::V1::Model;

class HUAWEICLOUD_AAD_V1_EXPORT  AadClient : public Client
{
public:

    AadClient();

    virtual ~AadClient();

    static ClientBuilder<AadClient> newBuilder();

    // 解封IP
    //
    // 解封IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExecuteUnblockIpResponse> executeUnblockIp(
        ExecuteUnblockIpRequest &request
    );
    // 查询租户封堵列表
    //
    // 查询租户封堵列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBlockIpsResponse> listBlockIps(
        ListBlockIpsRequest &request
    );
    // 查询解封配额
    //
    // 查询解封配额
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUnblockQuotaStatisticsResponse> listUnblockQuotaStatistics(
        ListUnblockQuotaStatisticsRequest &request
    );
    // 查询封堵统计数据
    //
    // 查询封堵统计数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBlockStatisticsResponse> showBlockStatistics(
        ShowBlockStatisticsRequest &request
    );
    // 查询租户解封记录
    //
    // 查询租户解封记录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUnblockRecordResponse> showUnblockRecord(
        ShowUnblockRecordRequest &request
    );

    // 高防实例添加黑白名单
    //
    // 高防实例添加黑白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddBlackWhiteIpListResponse> addBlackWhiteIpList(
        AddBlackWhiteIpListRequest &request
    );
    // 策略添加黑白名单
    //
    // 策略添加黑白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddPolicyBlackAndWhiteIpListResponse> addPolicyBlackAndWhiteIpList(
        AddPolicyBlackAndWhiteIpListRequest &request
    );
    // 策略绑定防护对象
    //
    // 策略绑定防护对象
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociateIpToPolicyResponse> associateIpToPolicy(
        AssociateIpToPolicyRequest &request
    );
    // 策略和实例绑定防护对象
    //
    // 策略和实例绑定防护对象
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociateIpToPolicyAndPackageResponse> associateIpToPolicyAndPackage(
        AssociateIpToPolicyAndPackageRequest &request
    );
    // 批量创建高防实例IP的转发规则
    //
    // 批量创建高防实例IP的转发规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateInstanceIpRuleResponse> batchCreateInstanceIpRule(
        BatchCreateInstanceIpRuleRequest &request
    );
    // 批量删除高防实例IP的转发规则
    //
    // 批量删除高防实例IP的转发规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteInstanceIpRuleResponse> batchDeleteInstanceIpRule(
        BatchDeleteInstanceIpRuleRequest &request
    );
    // 创建防护域名
    //
    // 创建防护域名
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAadDomainResponse> createAadDomain(
        CreateAadDomainRequest &request
    );
    // 创建策略
    //
    // 创建策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePolicyResponse> createPolicy(
        CreatePolicyRequest &request
    );
    // 删除告警配置
    //
    // 删除告警配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAlarmConfigResponse> deleteAlarmConfig(
        DeleteAlarmConfigRequest &request
    );
    // 高防实例删除黑白名单
    //
    // 高防实例删除黑白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteBlackWhiteIpListResponse> deleteBlackWhiteIpList(
        DeleteBlackWhiteIpListRequest &request
    );
    // 删除策略
    //
    // 删除策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePolicyResponse> deletePolicy(
        DeletePolicyRequest &request
    );
    // 策略删除黑白名单
    //
    // 策略删除黑白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePolicyBlackAndWhiteIpListResponse> deletePolicyBlackAndWhiteIpList(
        DeletePolicyBlackAndWhiteIpListRequest &request
    );
    // 策略解绑防护对象
    //
    // 策略解绑防护对象
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisassociateIpFromPolicyResponse> disassociateIpFromPolicy(
        DisassociateIpFromPolicyRequest &request
    );
    // 策略和实例解绑防护对象
    //
    // 策略和实例解绑防护对象
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisassociateIpFromPolicyAndPackageResponse> disassociateIpFromPolicyAndPackage(
        DisassociateIpFromPolicyAndPackageRequest &request
    );
    // 查询域名列表
    //
    // 查询域名列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDomainResponse> listDomain(
        ListDomainRequest &request
    );
    // 查询高防实例列表
    //
    // 查询高防实例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceResponse> listInstance(
        ListInstanceRequest &request
    );
    // 查询域名关联的实例ID
    //
    // 查询域名关联的实例ID
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceIdResponse> listInstanceId(
        ListInstanceIdRequest &request
    );
    // 查询高防实例IP的转发规则列表
    //
    // 查询高防实例IP的转发规则列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceIpRuleResponse> listInstanceIpRule(
        ListInstanceIpRuleRequest &request
    );
    // 查询实例列表
    //
    // 查询实例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPackageResponse> listPackage(
        ListPackageRequest &request
    );
    // 查询流量峰值、攻击计数
    //
    // 查询流量峰值、攻击计数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPeakResponse> listPeak(
        ListPeakRequest &request
    );
    // 查询策略列表
    //
    // 查询策略列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPolicyResponse> listPolicy(
        ListPolicyRequest &request
    );
    // 查询防护对象列表
    //
    // 查询防护对象列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProtectedIpResponse> listProtectedIp(
        ListProtectedIpRequest &request
    );
    // 查询高防回源IP段列表
    //
    // 查询高防回源IP段列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSourceIpsResponse> listSourceIps(
        ListSourceIpsRequest &request
    );
    // 查询可绑定的防护对象列表
    //
    // 查询可绑定的防护对象列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUnboundProtectedIpResponse> listUnboundProtectedIp(
        ListUnboundProtectedIpRequest &request
    );
    // 修改域名WEB基础防护开关/CC防护开关
    //
    // 修改域名WEB基础防护开关/CC防护开关
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyDomainWebSwitchResponse> modifyDomainWebSwitch(
        ModifyDomainWebSwitchRequest &request
    );
    // 上传/修改域名对应证书
    //
    // 上传/修改域名对应证书
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetCertForDomainResponse> setCertForDomain(
        SetCertForDomainRequest &request
    );
    // 查询告警配置
    //
    // 查询告警配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAlarmConfigResponse> showAlarmConfig(
        ShowAlarmConfigRequest &request
    );
    // 查询策略详情
    //
    // 查询策略详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPolicyResponse> showPolicy(
        ShowPolicyRequest &request
    );
    // 设置告警配置
    //
    // 设置告警配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAlarmConfigResponse> updateAlarmConfig(
        UpdateAlarmConfigRequest &request
    );
    // 更新域名信息
    //
    // 更新域名源站配置信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDomainResponse> updateDomain(
        UpdateDomainRequest &request
    );
    // 修改高防实例转发配置的源站IP
    //
    // 修改高防实例转发配置的源站IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstanceIpRuleResponse> updateInstanceIpRule(
        UpdateInstanceIpRuleRequest &request
    );
    // 更新实例绑定的全量防护对象
    //
    // 更新实例绑定的全量防护对象
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePackageIpResponse> updatePackageIp(
        UpdatePackageIpRequest &request
    );
    // 更新实例名字
    //
    // 更新实例名字
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePackageNameResponse> updatePackageName(
        UpdatePackageNameRequest &request
    );
    // 更新策略
    //
    // 更新策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePolicyResponse> updatePolicy(
        UpdatePolicyRequest &request
    );
    // 防护对象设置标签
    //
    // 防护对象设置标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTagForProtectedIpResponse> updateTagForProtectedIp(
        UpdateTagForProtectedIpRequest &request
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

template class HUAWEICLOUD_AAD_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Aad::V1::AadClient>;

#endif // HUAWEICLOUD_SDK_AAD_V1_AadClient_H_

