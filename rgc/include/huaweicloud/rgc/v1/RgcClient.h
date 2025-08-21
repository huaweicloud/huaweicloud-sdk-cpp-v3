#ifndef HUAWEICLOUD_SDK_RGC_V1_RgcClient_H_
#define HUAWEICLOUD_SDK_RGC_V1_RgcClient_H_

#include <huaweicloud/rgc/v1/RgcExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/rgc/v1/model/BestPracticeCheckItemDetail.h>
#include <huaweicloud/rgc/v1/model/CreateBestPracticeDetectRequest.h>
#include <huaweicloud/rgc/v1/model/CreateBestPracticeDetectResponse.h>
#include <huaweicloud/rgc/v1/model/ShowBestPracticeAccountInfoRequest.h>
#include <huaweicloud/rgc/v1/model/ShowBestPracticeAccountInfoResponse.h>
#include <huaweicloud/rgc/v1/model/ShowBestPracticeDetailsRequest.h>
#include <huaweicloud/rgc/v1/model/ShowBestPracticeDetailsResponse.h>
#include <huaweicloud/rgc/v1/model/ShowBestPracticeOverviewRequest.h>
#include <huaweicloud/rgc/v1/model/ShowBestPracticeOverviewResponse.h>
#include <huaweicloud/rgc/v1/model/ShowBestPracticeStatusRequest.h>
#include <huaweicloud/rgc/v1/model/ShowBestPracticeStatusResponse.h>

#include <huaweicloud/rgc/v1/model/DisableControlOperateReqBody.h>
#include <huaweicloud/rgc/v1/model/DisableControlRequest.h>
#include <huaweicloud/rgc/v1/model/DisableControlResponse.h>
#include <huaweicloud/rgc/v1/model/EnableControlOperateReqBody.h>
#include <huaweicloud/rgc/v1/model/EnableControlRequest.h>
#include <huaweicloud/rgc/v1/model/EnableControlResponse.h>
#include <huaweicloud/rgc/v1/model/ListConfigRuleCompliancesRequest.h>
#include <huaweicloud/rgc/v1/model/ListConfigRuleCompliancesResponse.h>
#include <huaweicloud/rgc/v1/model/ListControlViolationsRequest.h>
#include <huaweicloud/rgc/v1/model/ListControlViolationsResponse.h>
#include <huaweicloud/rgc/v1/model/ListControlsForAccountRequest.h>
#include <huaweicloud/rgc/v1/model/ListControlsForAccountResponse.h>
#include <huaweicloud/rgc/v1/model/ListControlsForOrganizationalUnitRequest.h>
#include <huaweicloud/rgc/v1/model/ListControlsForOrganizationalUnitResponse.h>
#include <huaweicloud/rgc/v1/model/ListControlsRequest.h>
#include <huaweicloud/rgc/v1/model/ListControlsResponse.h>
#include <huaweicloud/rgc/v1/model/ListDriftDetailsRequest.h>
#include <huaweicloud/rgc/v1/model/ListDriftDetailsResponse.h>
#include <huaweicloud/rgc/v1/model/ListEnabledControlsRequest.h>
#include <huaweicloud/rgc/v1/model/ListEnabledControlsResponse.h>
#include <huaweicloud/rgc/v1/model/ListExternalConfigRuleCompliancesRequest.h>
#include <huaweicloud/rgc/v1/model/ListExternalConfigRuleCompliancesResponse.h>
#include <huaweicloud/rgc/v1/model/ShowComplianceStatusForAccountRequest.h>
#include <huaweicloud/rgc/v1/model/ShowComplianceStatusForAccountResponse.h>
#include <huaweicloud/rgc/v1/model/ShowComplianceStatusForOrganizationalUnitRequest.h>
#include <huaweicloud/rgc/v1/model/ShowComplianceStatusForOrganizationalUnitResponse.h>
#include <huaweicloud/rgc/v1/model/ShowControlOperateRequest.h>
#include <huaweicloud/rgc/v1/model/ShowControlOperateResponse.h>
#include <huaweicloud/rgc/v1/model/ShowControlRequest.h>
#include <huaweicloud/rgc/v1/model/ShowControlResponse.h>
#include <huaweicloud/rgc/v1/model/ShowControlsForAccountRequest.h>
#include <huaweicloud/rgc/v1/model/ShowControlsForAccountResponse.h>
#include <huaweicloud/rgc/v1/model/ShowControlsForOrganizationalUnitRequest.h>
#include <huaweicloud/rgc/v1/model/ShowControlsForOrganizationalUnitResponse.h>
#include <string>

#include <huaweicloud/rgc/v1/model/CheckLaunchRequest.h>
#include <huaweicloud/rgc/v1/model/CheckLaunchResponse.h>
#include <huaweicloud/rgc/v1/model/DeleteLandingZoneRequest.h>
#include <huaweicloud/rgc/v1/model/DeleteLandingZoneResponse.h>
#include <huaweicloud/rgc/v1/model/SetupLandingZoneReqBody.h>
#include <huaweicloud/rgc/v1/model/SetupLandingZoneRequest.h>
#include <huaweicloud/rgc/v1/model/SetupLandingZoneResponse.h>
#include <huaweicloud/rgc/v1/model/ShowAvailableUpdatesRequest.h>
#include <huaweicloud/rgc/v1/model/ShowAvailableUpdatesResponse.h>
#include <huaweicloud/rgc/v1/model/ShowHomeRegionRequest.h>
#include <huaweicloud/rgc/v1/model/ShowHomeRegionResponse.h>
#include <huaweicloud/rgc/v1/model/ShowLandingZoneConfigurationRequest.h>
#include <huaweicloud/rgc/v1/model/ShowLandingZoneConfigurationResponse.h>
#include <huaweicloud/rgc/v1/model/ShowLandingZoneIdentityCenterRequest.h>
#include <huaweicloud/rgc/v1/model/ShowLandingZoneIdentityCenterResponse.h>
#include <huaweicloud/rgc/v1/model/ShowLandingZoneStatusRequest.h>
#include <huaweicloud/rgc/v1/model/ShowLandingZoneStatusResponse.h>

#include <huaweicloud/rgc/v1/model/CreateAccountRequest.h>
#include <huaweicloud/rgc/v1/model/CreateAccountResponse.h>
#include <huaweicloud/rgc/v1/model/CreateManagedAccountRequest.h>
#include <huaweicloud/rgc/v1/model/CreateManagedOrganizationalUnitRequest.h>
#include <huaweicloud/rgc/v1/model/CreateManagedOrganizationalUnitResponse.h>
#include <huaweicloud/rgc/v1/model/CreateOrganizationalUnitReqBody.h>
#include <huaweicloud/rgc/v1/model/DeleteManagedOrganizationalUnitsRequest.h>
#include <huaweicloud/rgc/v1/model/DeleteManagedOrganizationalUnitsResponse.h>
#include <huaweicloud/rgc/v1/model/DeregisterOrganizationalUnitRequest.h>
#include <huaweicloud/rgc/v1/model/DeregisterOrganizationalUnitResponse.h>
#include <huaweicloud/rgc/v1/model/EnrollAccountRequest.h>
#include <huaweicloud/rgc/v1/model/EnrollAccountRequestBody.h>
#include <huaweicloud/rgc/v1/model/EnrollAccountResponse.h>
#include <huaweicloud/rgc/v1/model/ListManagedAccountsForParentRequest.h>
#include <huaweicloud/rgc/v1/model/ListManagedAccountsForParentResponse.h>
#include <huaweicloud/rgc/v1/model/ListManagedAccountsRequest.h>
#include <huaweicloud/rgc/v1/model/ListManagedAccountsResponse.h>
#include <huaweicloud/rgc/v1/model/ListManagedOrganizationalUnitsRequest.h>
#include <huaweicloud/rgc/v1/model/ListManagedOrganizationalUnitsResponse.h>
#include <huaweicloud/rgc/v1/model/ListOperationRequest.h>
#include <huaweicloud/rgc/v1/model/ListOperationResponse.h>
#include <huaweicloud/rgc/v1/model/ReRegisterOrganizationalUnitRequest.h>
#include <huaweicloud/rgc/v1/model/ReRegisterOrganizationalUnitResponse.h>
#include <huaweicloud/rgc/v1/model/RegisterOrganizationalUnitRequest.h>
#include <huaweicloud/rgc/v1/model/RegisterOrganizationalUnitResponse.h>
#include <huaweicloud/rgc/v1/model/ShowManagedAccountRequest.h>
#include <huaweicloud/rgc/v1/model/ShowManagedAccountResponse.h>
#include <huaweicloud/rgc/v1/model/ShowManagedAccountTemplateRequest.h>
#include <huaweicloud/rgc/v1/model/ShowManagedAccountTemplateResponse.h>
#include <huaweicloud/rgc/v1/model/ShowManagedCoreAccountRequest.h>
#include <huaweicloud/rgc/v1/model/ShowManagedCoreAccountResponse.h>
#include <huaweicloud/rgc/v1/model/ShowManagedOrganizationalUnitRequest.h>
#include <huaweicloud/rgc/v1/model/ShowManagedOrganizationalUnitResponse.h>
#include <huaweicloud/rgc/v1/model/ShowOperationRequest.h>
#include <huaweicloud/rgc/v1/model/ShowOperationResponse.h>
#include <huaweicloud/rgc/v1/model/UnEnrollAccountRequest.h>
#include <huaweicloud/rgc/v1/model/UnEnrollAccountResponse.h>
#include <huaweicloud/rgc/v1/model/UpdateManagedAccountRequest.h>
#include <huaweicloud/rgc/v1/model/UpdateManagedAccountRequestBody.h>
#include <huaweicloud/rgc/v1/model/UpdateManagedAccountResponse.h>
#include <string>

#include <huaweicloud/rgc/v1/model/CreateTemplateRequest.h>
#include <huaweicloud/rgc/v1/model/CreateTemplateRequestBody.h>
#include <huaweicloud/rgc/v1/model/CreateTemplateResponse.h>
#include <huaweicloud/rgc/v1/model/DeleteTemplateRequest.h>
#include <huaweicloud/rgc/v1/model/DeleteTemplateResponse.h>
#include <huaweicloud/rgc/v1/model/ListPredefinedTemplatesRequest.h>
#include <huaweicloud/rgc/v1/model/ListPredefinedTemplatesResponse.h>
#include <huaweicloud/rgc/v1/model/ShowTemplateDeployParamsRequest.h>
#include <huaweicloud/rgc/v1/model/ShowTemplateDeployParamsResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Rgc::V1::Model;

class HUAWEICLOUD_RGC_V1_EXPORT  RgcClient : public Client
{
public:

    RgcClient();

    virtual ~RgcClient();

    static ClientBuilder<RgcClient> newBuilder();

    // 检测八大场景治理成熟度
    //
    // 检测八大场景治理成熟度。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateBestPracticeDetectResponse> createBestPracticeDetect(
        CreateBestPracticeDetectRequest &request
    );
    // 查询治理成熟度的账号详情
    //
    // 查询治理成熟度的账号详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBestPracticeAccountInfoResponse> showBestPracticeAccountInfo(
        ShowBestPracticeAccountInfoRequest &request
    );
    // 查询最近一次成功的治理成熟度检测的详情
    //
    // 查询最近一次成功的治理成熟度检测的详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBestPracticeDetailsResponse> showBestPracticeDetails(
        ShowBestPracticeDetailsRequest &request
    );
    // 查询最近一次成功的治理成熟度检测的总览
    //
    // 查询最近一次成功的治理成熟度检测的总览。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBestPracticeOverviewResponse> showBestPracticeOverview(
        ShowBestPracticeOverviewRequest &request
    );
    // 查询最近一次的治理成熟度检测的状态
    //
    // 查询最近一次的治理成熟度检测的状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBestPracticeStatusResponse> showBestPracticeStatus(
        ShowBestPracticeStatusRequest &request
    );

    // 关闭控制策略
    //
    // 关闭组织下的某个单元的某个控制策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableControlResponse> disableControl(
        DisableControlRequest &request
    );
    // 开启控制策略
    //
    // 给组织下的某个单元开启某个控制策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableControlResponse> enableControl(
        EnableControlRequest &request
    );
    // 查询纳管账号的Config规则合规性信息
    //
    // 查询纳管账号的Config规则合规性信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListConfigRuleCompliancesResponse> listConfigRuleCompliances(
        ListConfigRuleCompliancesRequest &request
    );
    // 列出不合规信息
    //
    // 列出组织里所有不合规的资源信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListControlViolationsResponse> listControlViolations(
        ListControlViolationsRequest &request
    );
    // 列出控制策略
    //
    // 列出RGC服务里所有的预置控制策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListControlsResponse> listControls(
        ListControlsRequest &request
    );
    // 列出纳管账号下开启的控制策略
    //
    // 列出组织里某个纳管账号开启的所有控制策略信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListControlsForAccountResponse> listControlsForAccount(
        ListControlsForAccountRequest &request
    );
    // 列出注册OU下开启的控制策略
    //
    // 列出组织里某个注册OU开启的所有控制策略信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListControlsForOrganizationalUnitResponse> listControlsForOrganizationalUnit(
        ListControlsForOrganizationalUnitRequest &request
    );
    // 列出漂移信息
    //
    // 列出Landing Zone的所有漂移详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDriftDetailsResponse> listDriftDetails(
        ListDriftDetailsRequest &request
    );
    // 列出开启的控制策略
    //
    // 列出组织里开启的所有控制策略信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEnabledControlsResponse> listEnabledControls(
        ListEnabledControlsRequest &request
    );
    // 查询纳管账号的外部Config规则合规性信息
    //
    // 查询纳管账号的外部Config规则合规性信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListExternalConfigRuleCompliancesResponse> listExternalConfigRuleCompliances(
        ListExternalConfigRuleCompliancesRequest &request
    );
    // 查询纳管账号的合规状态
    //
    // 查询组织里某个纳管账号的资源合规状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowComplianceStatusForAccountResponse> showComplianceStatusForAccount(
        ShowComplianceStatusForAccountRequest &request
    );
    // 查询注册OU的合规状态
    //
    // 查询组织里某个注册OU下所有纳管账号的资源合规状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowComplianceStatusForOrganizationalUnitResponse> showComplianceStatusForOrganizationalUnit(
        ShowComplianceStatusForOrganizationalUnitRequest &request
    );
    // 查询控制策略详细信息
    //
    // 查询单个预置的控制策略详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowControlResponse> showControl(
        ShowControlRequest &request
    );
    // 查询控制策略操作状态
    //
    // 根据操作ID查询返回指定ID的操作状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowControlOperateResponse> showControlOperate(
        ShowControlOperateRequest &request
    );
    // 查询纳管账号开启的控制策略
    //
    // 查询组织里某个纳管账号下开启的某个控制策略的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowControlsForAccountResponse> showControlsForAccount(
        ShowControlsForAccountRequest &request
    );
    // 查询注册OU开启的控制策略
    //
    // 查询组织里某个注册OU下开启的某个控制策略的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowControlsForOrganizationalUnitResponse> showControlsForOrganizationalUnit(
        ShowControlsForOrganizationalUnitRequest &request
    );

    // 设置Landing Zone前检查
    //
    // 在设置Landing Zone之前，检查当前区域是否可以设置Landing Zone。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckLaunchResponse> checkLaunch(
        CheckLaunchRequest &request
    );
    // 删除Landing Zone
    //
    // 删除Landing Zone。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteLandingZoneResponse> deleteLandingZone(
        DeleteLandingZoneRequest &request
    );
    // 设置Landing Zone
    //
    // 在当前区域创建或者更新Landing Zone。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetupLandingZoneResponse> setupLandingZone(
        SetupLandingZoneRequest &request
    );
    // 查询Landing Zone可更新状态
    //
    // 查询Landing Zone当前是否需要升级更新。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAvailableUpdatesResponse> showAvailableUpdates(
        ShowAvailableUpdatesRequest &request
    );
    // 查询主区域
    //
    // 查询Landing Zone的主区域。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHomeRegionResponse> showHomeRegion(
        ShowHomeRegionRequest &request
    );
    // 查询Landing Zone的配置
    //
    // 查询当前客户的Landing Zone的所有配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLandingZoneConfigurationResponse> showLandingZoneConfiguration(
        ShowLandingZoneConfigurationRequest &request
    );
    // 查询当前客户的Identity Center用户信息
    //
    // 查询当前客户的Identity Center用户信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLandingZoneIdentityCenterResponse> showLandingZoneIdentityCenter(
        ShowLandingZoneIdentityCenterRequest &request
    );
    // 查询Landing Zone设置状态
    //
    // 查询Landing Zone的设置状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLandingZoneStatusResponse> showLandingZoneStatus(
        ShowLandingZoneStatusRequest &request
    );

    // 创建账号
    //
    // 在组织里的某个注册OU下创建账号。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAccountResponse> createAccount(
        CreateAccountRequest &request
    );
    // 创建OU
    //
    // 通过RGC服务在组织下创建OU，创建后的OU在RGC中状态为已注册。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateManagedOrganizationalUnitResponse> createManagedOrganizationalUnit(
        CreateManagedOrganizationalUnitRequest &request
    );
    // 删除注册OU
    //
    // 在组织里删除已注册OU。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteManagedOrganizationalUnitsResponse> deleteManagedOrganizationalUnits(
        DeleteManagedOrganizationalUnitsRequest &request
    );
    // 取消注册OU
    //
    // 将组织里的某个OU从RGC服务里取消注册。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeregisterOrganizationalUnitResponse> deregisterOrganizationalUnit(
        DeregisterOrganizationalUnitRequest &request
    );
    // 纳管账号
    //
    // 将组织里的某个账号纳管到RGC服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnrollAccountResponse> enrollAccount(
        EnrollAccountRequest &request
    );
    // 列举控制策略生效的纳管账号信息
    //
    // 列举控制策略生效的纳管账号信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListManagedAccountsResponse> listManagedAccounts(
        ListManagedAccountsRequest &request
    );
    // 列出注册OU下的纳管账号信息
    //
    // 列出组织里某个注册OU下的所有纳管账号信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListManagedAccountsForParentResponse> listManagedAccountsForParent(
        ListManagedAccountsForParentRequest &request
    );
    // 列举控制策略生效的注册OU信息
    //
    // 列举控制策略生效的注册OU信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListManagedOrganizationalUnitsResponse> listManagedOrganizationalUnits(
        ListManagedOrganizationalUnitsRequest &request
    );
    // 查询已注册OU和纳管账号操作过程信息列表
    //
    // 查询在RGC服务里已注册OU和纳管账号操作的过程信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListOperationResponse> listOperation(
        ListOperationRequest &request
    );
    // 重新注册OU
    //
    // 重新注册组织里的某个OU到RGC服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ReRegisterOrganizationalUnitResponse> reRegisterOrganizationalUnit(
        ReRegisterOrganizationalUnitRequest &request
    );
    // 注册OU
    //
    // 将组织里的某个OU注册到RGC服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RegisterOrganizationalUnitResponse> registerOrganizationalUnit(
        RegisterOrganizationalUnitRequest &request
    );
    // 查询纳管账号信息
    //
    // 查询组织里某个纳管账号信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowManagedAccountResponse> showManagedAccount(
        ShowManagedAccountRequest &request
    );
    // 查询纳管账号的模板信息
    //
    // 查询组织里某个纳管账号的模板信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowManagedAccountTemplateResponse> showManagedAccountTemplate(
        ShowManagedAccountTemplateRequest &request
    );
    // 列出核心纳管账号
    //
    // 列出组织里的所有核心纳管账号信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowManagedCoreAccountResponse> showManagedCoreAccount(
        ShowManagedCoreAccountRequest &request
    );
    // 查询已注册OU信息
    //
    // 查询在RGC服务里的注册OU信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowManagedOrganizationalUnitResponse> showManagedOrganizationalUnit(
        ShowManagedOrganizationalUnitRequest &request
    );
    // 查询注册过程信息
    //
    // 查询在RGC服务里注册/取消注册的过程信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOperationResponse> showOperation(
        ShowOperationRequest &request
    );
    // 取消纳管账号
    //
    // 将组织里的某个账号从RGC服务里取消纳管。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UnEnrollAccountResponse> unEnrollAccount(
        UnEnrollAccountRequest &request
    );
    // 更新纳管账号
    //
    // 更新组织里某个已在RGC服务的纳管账号。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateManagedAccountResponse> updateManagedAccount(
        UpdateManagedAccountRequest &request
    );

    // 创建模板
    //
    // 创建RFS模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTemplateResponse> createTemplate(
        CreateTemplateRequest &request
    );
    // 删除模板
    //
    // 删除RFS模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTemplateResponse> deleteTemplate(
        DeleteTemplateRequest &request
    );
    // 查询预置模板列表
    //
    // 查询预置模板列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPredefinedTemplatesResponse> listPredefinedTemplates(
        ListPredefinedTemplatesRequest &request
    );
    // 查询模板的部署参数
    //
    // 查询模板的部署参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTemplateDeployParamsResponse> showTemplateDeployParams(
        ShowTemplateDeployParamsRequest &request
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

template class HUAWEICLOUD_RGC_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Rgc::V1::RgcClient>;

#endif // HUAWEICLOUD_SDK_RGC_V1_RgcClient_H_

