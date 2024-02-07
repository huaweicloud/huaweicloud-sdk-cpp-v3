#ifndef HUAWEICLOUD_SDK_GEIP_V3_GeipClient_H_
#define HUAWEICLOUD_SDK_GEIP_V3_GeipClient_H_

#include <huaweicloud/geip/v3/GeipExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/geip/v3/model/AddInternetBandwidthTagsRequest.h>
#include <huaweicloud/geip/v3/model/AddInternetBandwidthTagsResponse.h>
#include <huaweicloud/geip/v3/model/BatchCreateInternetBandwidthRequest.h>
#include <huaweicloud/geip/v3/model/BatchCreateInternetBandwidthRequestBody.h>
#include <huaweicloud/geip/v3/model/BatchCreateInternetBandwidthResponse.h>
#include <huaweicloud/geip/v3/model/BatchCreateInternetBandwidthTagsRequest.h>
#include <huaweicloud/geip/v3/model/BatchCreateInternetBandwidthTagsResponse.h>
#include <huaweicloud/geip/v3/model/BatchCreateV2RequestBody.h>
#include <huaweicloud/geip/v3/model/BatchDeleteInternetBandwidthTagsRequest.h>
#include <huaweicloud/geip/v3/model/BatchDeleteInternetBandwidthTagsResponse.h>
#include <huaweicloud/geip/v3/model/BatchDeleteV2RequestBody.h>
#include <huaweicloud/geip/v3/model/CountInternetBandwidthRequest.h>
#include <huaweicloud/geip/v3/model/CountInternetBandwidthResponse.h>
#include <huaweicloud/geip/v3/model/CreateInternetBandwidthRequest.h>
#include <huaweicloud/geip/v3/model/CreateInternetBandwidthRequestBody.h>
#include <huaweicloud/geip/v3/model/CreateInternetBandwidthResponse.h>
#include <huaweicloud/geip/v3/model/CreateUserDisclaimerRequest.h>
#include <huaweicloud/geip/v3/model/CreateUserDisclaimerResponse.h>
#include <huaweicloud/geip/v3/model/CreateV2TagRequestBody.h>
#include <huaweicloud/geip/v3/model/DeleteInternetBandwidthRequest.h>
#include <huaweicloud/geip/v3/model/DeleteInternetBandwidthResponse.h>
#include <huaweicloud/geip/v3/model/DeleteInternetBandwidthTagRequest.h>
#include <huaweicloud/geip/v3/model/DeleteInternetBandwidthTagResponse.h>
#include <huaweicloud/geip/v3/model/DeleteUserDisclaimerRequest.h>
#include <huaweicloud/geip/v3/model/DeleteUserDisclaimerResponse.h>
#include <huaweicloud/geip/v3/model/ListAccessSitesRequest.h>
#include <huaweicloud/geip/v3/model/ListAccessSitesResponse.h>
#include <huaweicloud/geip/v3/model/ListGeipResourceQuotasRequest.h>
#include <huaweicloud/geip/v3/model/ListGeipResourceQuotasResponse.h>
#include <huaweicloud/geip/v3/model/ListInternetBandwidthCountFilterTagsRequest.h>
#include <huaweicloud/geip/v3/model/ListInternetBandwidthCountFilterTagsResponse.h>
#include <huaweicloud/geip/v3/model/ListInternetBandwidthDomainTagsRequest.h>
#include <huaweicloud/geip/v3/model/ListInternetBandwidthDomainTagsResponse.h>
#include <huaweicloud/geip/v3/model/ListInternetBandwidthFilterTagsRequest.h>
#include <huaweicloud/geip/v3/model/ListInternetBandwidthFilterTagsResponse.h>
#include <huaweicloud/geip/v3/model/ListInternetBandwidthLimitsRequest.h>
#include <huaweicloud/geip/v3/model/ListInternetBandwidthLimitsResponse.h>
#include <huaweicloud/geip/v3/model/ListInternetBandwidthsRequest.h>
#include <huaweicloud/geip/v3/model/ListInternetBandwidthsResponse.h>
#include <huaweicloud/geip/v3/model/ListResourcesByTagsRequestBody.h>
#include <huaweicloud/geip/v3/model/ListSupportMasksRequest.h>
#include <huaweicloud/geip/v3/model/ListSupportMasksResponse.h>
#include <huaweicloud/geip/v3/model/ShowInternetBandwidthRequest.h>
#include <huaweicloud/geip/v3/model/ShowInternetBandwidthResponse.h>
#include <huaweicloud/geip/v3/model/ShowInternetBandwidthTagsRequest.h>
#include <huaweicloud/geip/v3/model/ShowInternetBandwidthTagsResponse.h>
#include <huaweicloud/geip/v3/model/ShowUserDisclaimerRequest.h>
#include <huaweicloud/geip/v3/model/ShowUserDisclaimerResponse.h>
#include <huaweicloud/geip/v3/model/UpdateInternetBandwidthRequest.h>
#include <huaweicloud/geip/v3/model/UpdateInternetBandwidthRequestBody.h>
#include <huaweicloud/geip/v3/model/UpdateInternetBandwidthResponse.h>
#include <string>

#include <huaweicloud/geip/v3/model/AddGeipSegmentTagsRequest.h>
#include <huaweicloud/geip/v3/model/AddGeipSegmentTagsResponse.h>
#include <huaweicloud/geip/v3/model/AddGlobalEipTagsRequest.h>
#include <huaweicloud/geip/v3/model/AddGlobalEipTagsResponse.h>
#include <huaweicloud/geip/v3/model/AssociateGeipSegmentInstanceRequest.h>
#include <huaweicloud/geip/v3/model/AssociateGeipSegmentInstanceResponse.h>
#include <huaweicloud/geip/v3/model/AssociateInstanceGlobalEipRequestBody.h>
#include <huaweicloud/geip/v3/model/AssociateInstanceGlobalEipSegmentRequestBody.h>
#include <huaweicloud/geip/v3/model/AssociateInstanceRequest.h>
#include <huaweicloud/geip/v3/model/AssociateInstanceResponse.h>
#include <huaweicloud/geip/v3/model/AttachInternetBandwidthGlobalEipRequestBody.h>
#include <huaweicloud/geip/v3/model/AttachInternetBandwidthRequest.h>
#include <huaweicloud/geip/v3/model/AttachInternetBandwidthResponse.h>
#include <huaweicloud/geip/v3/model/BatchAttachGeipSegmentInternetBandwidthRequest.h>
#include <huaweicloud/geip/v3/model/BatchAttachGeipSegmentInternetBandwidthResponse.h>
#include <huaweicloud/geip/v3/model/BatchAttachInternetBandwidthRequest.h>
#include <huaweicloud/geip/v3/model/BatchAttachInternetBandwidthResponse.h>
#include <huaweicloud/geip/v3/model/BatchAttachInternetBandwidthsGlobalEipRequestBody.h>
#include <huaweicloud/geip/v3/model/BatchAttachInternetBandwidthsGlobalEipSegmentRequestBody.h>
#include <huaweicloud/geip/v3/model/BatchCreateGeipSegmentTagsRequest.h>
#include <huaweicloud/geip/v3/model/BatchCreateGeipSegmentTagsResponse.h>
#include <huaweicloud/geip/v3/model/BatchCreateGlobalEipRequest.h>
#include <huaweicloud/geip/v3/model/BatchCreateGlobalEipRequestBody.h>
#include <huaweicloud/geip/v3/model/BatchCreateGlobalEipResponse.h>
#include <huaweicloud/geip/v3/model/BatchCreateGlobalEipTagsRequest.h>
#include <huaweicloud/geip/v3/model/BatchCreateGlobalEipTagsResponse.h>
#include <huaweicloud/geip/v3/model/BatchCreateV2RequestBody.h>
#include <huaweicloud/geip/v3/model/BatchDeleteGeipSegmentTagsRequest.h>
#include <huaweicloud/geip/v3/model/BatchDeleteGeipSegmentTagsResponse.h>
#include <huaweicloud/geip/v3/model/BatchDeleteGlobalEipTagsRequest.h>
#include <huaweicloud/geip/v3/model/BatchDeleteGlobalEipTagsResponse.h>
#include <huaweicloud/geip/v3/model/BatchDeleteV2RequestBody.h>
#include <huaweicloud/geip/v3/model/BatchDetachGeipSegmentInternetBandwidthRequest.h>
#include <huaweicloud/geip/v3/model/BatchDetachGeipSegmentInternetBandwidthResponse.h>
#include <huaweicloud/geip/v3/model/BatchDetachInternetBandwidthRequest.h>
#include <huaweicloud/geip/v3/model/BatchDetachInternetBandwidthResponse.h>
#include <huaweicloud/geip/v3/model/BatchDetachInternetBandwidthsGlobalEipRequestBody.h>
#include <huaweicloud/geip/v3/model/BatchDetachInternetBandwidthsGlobalEipSegmentRequestBody.h>
#include <huaweicloud/geip/v3/model/CountGlobalEipSegmentRequest.h>
#include <huaweicloud/geip/v3/model/CountGlobalEipSegmentResponse.h>
#include <huaweicloud/geip/v3/model/CountGlobalEipsRequest.h>
#include <huaweicloud/geip/v3/model/CountGlobalEipsResponse.h>
#include <huaweicloud/geip/v3/model/CreateGlobalEipRequest.h>
#include <huaweicloud/geip/v3/model/CreateGlobalEipRequestBody.h>
#include <huaweicloud/geip/v3/model/CreateGlobalEipResponse.h>
#include <huaweicloud/geip/v3/model/CreateGlobalEipSegmentRequest.h>
#include <huaweicloud/geip/v3/model/CreateGlobalEipSegmentRequestBody.h>
#include <huaweicloud/geip/v3/model/CreateGlobalEipSegmentResponse.h>
#include <huaweicloud/geip/v3/model/CreateV2TagRequestBody.h>
#include <huaweicloud/geip/v3/model/DeleteGeipSegmentTagRequest.h>
#include <huaweicloud/geip/v3/model/DeleteGeipSegmentTagResponse.h>
#include <huaweicloud/geip/v3/model/DeleteGlobalEipRequest.h>
#include <huaweicloud/geip/v3/model/DeleteGlobalEipResponse.h>
#include <huaweicloud/geip/v3/model/DeleteGlobalEipSegmentRequest.h>
#include <huaweicloud/geip/v3/model/DeleteGlobalEipSegmentResponse.h>
#include <huaweicloud/geip/v3/model/DeleteGlobalEipTagRequest.h>
#include <huaweicloud/geip/v3/model/DeleteGlobalEipTagResponse.h>
#include <huaweicloud/geip/v3/model/DetachInternetBandwidthRequest.h>
#include <huaweicloud/geip/v3/model/DetachInternetBandwidthResponse.h>
#include <huaweicloud/geip/v3/model/DisassociateGeipSegmentInstanceRequest.h>
#include <huaweicloud/geip/v3/model/DisassociateGeipSegmentInstanceResponse.h>
#include <huaweicloud/geip/v3/model/DisassociateInstanceRequest.h>
#include <huaweicloud/geip/v3/model/DisassociateInstanceResponse.h>
#include <huaweicloud/geip/v3/model/ListGeipPoolsRequest.h>
#include <huaweicloud/geip/v3/model/ListGeipPoolsResponse.h>
#include <huaweicloud/geip/v3/model/ListGeipSegmentCountFilterTagsRequest.h>
#include <huaweicloud/geip/v3/model/ListGeipSegmentCountFilterTagsResponse.h>
#include <huaweicloud/geip/v3/model/ListGeipSegmentDomainTagsRequest.h>
#include <huaweicloud/geip/v3/model/ListGeipSegmentDomainTagsResponse.h>
#include <huaweicloud/geip/v3/model/ListGeipSegmentFilterTagsRequest.h>
#include <huaweicloud/geip/v3/model/ListGeipSegmentFilterTagsResponse.h>
#include <huaweicloud/geip/v3/model/ListGlobalEipCountFilterTagsRequest.h>
#include <huaweicloud/geip/v3/model/ListGlobalEipCountFilterTagsResponse.h>
#include <huaweicloud/geip/v3/model/ListGlobalEipDomainTagsRequest.h>
#include <huaweicloud/geip/v3/model/ListGlobalEipDomainTagsResponse.h>
#include <huaweicloud/geip/v3/model/ListGlobalEipFilterTagsRequest.h>
#include <huaweicloud/geip/v3/model/ListGlobalEipFilterTagsResponse.h>
#include <huaweicloud/geip/v3/model/ListGlobalEipSegmentsRequest.h>
#include <huaweicloud/geip/v3/model/ListGlobalEipSegmentsResponse.h>
#include <huaweicloud/geip/v3/model/ListGlobalEipsRequest.h>
#include <huaweicloud/geip/v3/model/ListGlobalEipsResponse.h>
#include <huaweicloud/geip/v3/model/ListResourcesByTagsRequestBody.h>
#include <huaweicloud/geip/v3/model/ShowGeipSegmentTagsRequest.h>
#include <huaweicloud/geip/v3/model/ShowGeipSegmentTagsResponse.h>
#include <huaweicloud/geip/v3/model/ShowGlobalEipRequest.h>
#include <huaweicloud/geip/v3/model/ShowGlobalEipResponse.h>
#include <huaweicloud/geip/v3/model/ShowGlobalEipSegmentRequest.h>
#include <huaweicloud/geip/v3/model/ShowGlobalEipSegmentResponse.h>
#include <huaweicloud/geip/v3/model/ShowGlobalEipTagsRequest.h>
#include <huaweicloud/geip/v3/model/ShowGlobalEipTagsResponse.h>
#include <huaweicloud/geip/v3/model/UpdateGlobalEipRequest.h>
#include <huaweicloud/geip/v3/model/UpdateGlobalEipRequestBody.h>
#include <huaweicloud/geip/v3/model/UpdateGlobalEipResponse.h>
#include <huaweicloud/geip/v3/model/UpdateGlobalEipSegmentRequest.h>
#include <huaweicloud/geip/v3/model/UpdateGlobalEipSegmentRequestBody.h>
#include <huaweicloud/geip/v3/model/UpdateGlobalEipSegmentResponse.h>
#include <string>

#include <huaweicloud/geip/v3/model/ListJobsRequest.h>
#include <huaweicloud/geip/v3/model/ListJobsResponse.h>
#include <huaweicloud/geip/v3/model/ShowJobsRequest.h>
#include <huaweicloud/geip/v3/model/ShowJobsResponse.h>
#include <string>

#include <huaweicloud/geip/v3/model/ListSupportRegionsRequest.h>
#include <huaweicloud/geip/v3/model/ListSupportRegionsResponse.h>
#include <huaweicloud/geip/v3/model/ListTenantGeipSupportInstancesRequest.h>
#include <huaweicloud/geip/v3/model/ListTenantGeipSupportInstancesResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Geip::V3::Model;

class HUAWEICLOUD_GEIP_V3_EXPORT  GeipClient : public Client
{
public:

    GeipClient();

    virtual ~GeipClient();

    static ClientBuilder<GeipClient> newBuilder();

    // 添加全域公网带宽标签
    //
    // 添加全域公网带宽标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddInternetBandwidthTagsResponse> addInternetBandwidthTags(
        AddInternetBandwidthTagsRequest &request
    );
    // 批量创建全域公网带宽
    //
    // 批量创建全域公网带宽
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateInternetBandwidthResponse> batchCreateInternetBandwidth(
        BatchCreateInternetBandwidthRequest &request
    );
    // 批量添加全域公网带宽标签
    //
    // 批量添加全域公网带宽标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateInternetBandwidthTagsResponse> batchCreateInternetBandwidthTags(
        BatchCreateInternetBandwidthTagsRequest &request
    );
    // 批量删除全域公网带宽标签
    //
    // 批量删除全域公网带宽标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteInternetBandwidthTagsResponse> batchDeleteInternetBandwidthTags(
        BatchDeleteInternetBandwidthTagsRequest &request
    );
    // 查询全域公网带宽个数
    //
    // 查询全域公网带宽个数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountInternetBandwidthResponse> countInternetBandwidth(
        CountInternetBandwidthRequest &request
    );
    // 创建全域公网带宽
    //
    // 创建全域公网带宽
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInternetBandwidthResponse> createInternetBandwidth(
        CreateInternetBandwidthRequest &request
    );
    // 创建租户签署免责条款
    //
    // 创建租户签署免责条款
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateUserDisclaimerResponse> createUserDisclaimer(
        CreateUserDisclaimerRequest &request
    );
    // 删除全域公网带宽
    //
    // 删除全域公网带宽
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInternetBandwidthResponse> deleteInternetBandwidth(
        DeleteInternetBandwidthRequest &request
    );
    // 删除全域公网带宽标签
    //
    // 删除全域公网带宽标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInternetBandwidthTagResponse> deleteInternetBandwidthTag(
        DeleteInternetBandwidthTagRequest &request
    );
    // 删除租户撤销免责条款
    //
    // 删除租户撤销免责条款
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteUserDisclaimerResponse> deleteUserDisclaimer(
        DeleteUserDisclaimerRequest &request
    );
    // 查询接入点列表
    //
    // 查询接入点列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAccessSitesResponse> listAccessSites(
        ListAccessSitesRequest &request
    );
    // 查询租户全域弹性公网IP配额
    //
    // 查询租户全域弹性公网IP配额
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGeipResourceQuotasResponse> listGeipResourceQuotas(
        ListGeipResourceQuotasRequest &request
    );
    // 查询资源实例列表数目
    //
    // 查询资源实例列表数目
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInternetBandwidthCountFilterTagsResponse> listInternetBandwidthCountFilterTags(
        ListInternetBandwidthCountFilterTagsRequest &request
    );
    // 查询全域公网带宽项目标签
    //
    // 查询全域公网带宽项目标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInternetBandwidthDomainTagsResponse> listInternetBandwidthDomainTags(
        ListInternetBandwidthDomainTagsRequest &request
    );
    // 查询资源实例列表
    //
    // 查询资源实例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInternetBandwidthFilterTagsResponse> listInternetBandwidthFilterTags(
        ListInternetBandwidthFilterTagsRequest &request
    );
    // 全域公网带宽限制列表
    //
    // 查询全域公网带宽限制列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInternetBandwidthLimitsResponse> listInternetBandwidthLimits(
        ListInternetBandwidthLimitsRequest &request
    );
    // 查询全域公网带宽列表
    //
    // 查询全域公网带宽列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInternetBandwidthsResponse> listInternetBandwidths(
        ListInternetBandwidthsRequest &request
    );
    // 查询全域弹性公网IP段支持的掩码列表
    //
    // 查询全域弹性公网IP段支持的掩码列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSupportMasksResponse> listSupportMasks(
        ListSupportMasksRequest &request
    );
    // 查询全域公网带宽详情
    //
    // 查询全域公网带宽详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInternetBandwidthResponse> showInternetBandwidth(
        ShowInternetBandwidthRequest &request
    );
    // 查询全域公网带宽标签
    //
    // 查询全域公网带宽标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInternetBandwidthTagsResponse> showInternetBandwidthTags(
        ShowInternetBandwidthTagsRequest &request
    );
    // 查询租户签署免责条款详情
    //
    // 查询租户签署免责条款详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUserDisclaimerResponse> showUserDisclaimer(
        ShowUserDisclaimerRequest &request
    );
    // 更新全域公网带宽
    //
    // 更新全域公网带宽
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInternetBandwidthResponse> updateInternetBandwidth(
        UpdateInternetBandwidthRequest &request
    );

    // 添加全域弹性公网IP段标签
    //
    // 添加全域弹性公网IP段的标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddGeipSegmentTagsResponse> addGeipSegmentTags(
        AddGeipSegmentTagsRequest &request
    );
    // 添加全域弹性公网IP标签
    //
    // 添加全域弹性公网IP的标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddGlobalEipTagsResponse> addGlobalEipTags(
        AddGlobalEipTagsRequest &request
    );
    // 全域弹性公网IP段绑定后端实例
    //
    // 全域弹性公网IP段绑定后端实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociateGeipSegmentInstanceResponse> associateGeipSegmentInstance(
        AssociateGeipSegmentInstanceRequest &request
    );
    // 绑定后端实例
    //
    // 绑定后端实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociateInstanceResponse> associateInstance(
        AssociateInstanceRequest &request
    );
    // 绑定全域公网带宽
    //
    // 绑定全域公网带宽
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AttachInternetBandwidthResponse> attachInternetBandwidth(
        AttachInternetBandwidthRequest &request
    );
    // 全域弹性公网IP段批量绑定全域公网带宽
    //
    // 全域弹性公网IP段批量绑定全域公网带宽
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchAttachGeipSegmentInternetBandwidthResponse> batchAttachGeipSegmentInternetBandwidth(
        BatchAttachGeipSegmentInternetBandwidthRequest &request
    );
    // 批量绑定全域公网带宽
    //
    // 批量绑定全域公网带宽
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchAttachInternetBandwidthResponse> batchAttachInternetBandwidth(
        BatchAttachInternetBandwidthRequest &request
    );
    // 批量添加全域弹性公网IP段标签
    //
    // 批量添加全域弹性公网IP段的标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateGeipSegmentTagsResponse> batchCreateGeipSegmentTags(
        BatchCreateGeipSegmentTagsRequest &request
    );
    // 批量创建全域弹性公网IP
    //
    // 批量创建全域弹性公网IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateGlobalEipResponse> batchCreateGlobalEip(
        BatchCreateGlobalEipRequest &request
    );
    // 批量添加全域弹性公网IP标签
    //
    // 批量添加全域弹性公网IP的标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateGlobalEipTagsResponse> batchCreateGlobalEipTags(
        BatchCreateGlobalEipTagsRequest &request
    );
    // 批量删除全域弹性公网IP段标签
    //
    // 批量删除全域弹性公网IP段的标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteGeipSegmentTagsResponse> batchDeleteGeipSegmentTags(
        BatchDeleteGeipSegmentTagsRequest &request
    );
    // 批量删除全域弹性公网IP标签
    //
    // 批量删除全域弹性公网IP的标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteGlobalEipTagsResponse> batchDeleteGlobalEipTags(
        BatchDeleteGlobalEipTagsRequest &request
    );
    // 全域弹性公网IP段批量解绑全域公网带宽
    //
    // 全域弹性公网IP段批量解绑全域公网带宽
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDetachGeipSegmentInternetBandwidthResponse> batchDetachGeipSegmentInternetBandwidth(
        BatchDetachGeipSegmentInternetBandwidthRequest &request
    );
    // 批量解绑全域公网带宽
    //
    // 批量解绑全域公网带宽
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDetachInternetBandwidthResponse> batchDetachInternetBandwidth(
        BatchDetachInternetBandwidthRequest &request
    );
    // 查询全域弹性公网IP段个数
    //
    // 查询全域弹性公网IP段个数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountGlobalEipSegmentResponse> countGlobalEipSegment(
        CountGlobalEipSegmentRequest &request
    );
    // 查询全域弹性公网IP个数
    //
    // 查询全域弹性公网IP个数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountGlobalEipsResponse> countGlobalEips(
        CountGlobalEipsRequest &request
    );
    // 创建全域弹性公网IP
    //
    // 创建全域弹性公网IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGlobalEipResponse> createGlobalEip(
        CreateGlobalEipRequest &request
    );
    // 创建全域弹性公网IP段
    //
    // 创建全域弹性公网IP段
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGlobalEipSegmentResponse> createGlobalEipSegment(
        CreateGlobalEipSegmentRequest &request
    );
    // 删除全域弹性公网IP段标签
    //
    // 删除全域弹性公网IP段的标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGeipSegmentTagResponse> deleteGeipSegmentTag(
        DeleteGeipSegmentTagRequest &request
    );
    // 删除全域弹性公网IP
    //
    // 删除全域弹性公网IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGlobalEipResponse> deleteGlobalEip(
        DeleteGlobalEipRequest &request
    );
    // 删除全域弹性公网IP段
    //
    // 删除全域弹性公网IP段
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGlobalEipSegmentResponse> deleteGlobalEipSegment(
        DeleteGlobalEipSegmentRequest &request
    );
    // 删除全域弹性公网IP标签
    //
    // 删除全域弹性公网IP的标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGlobalEipTagResponse> deleteGlobalEipTag(
        DeleteGlobalEipTagRequest &request
    );
    // 解绑全域公网带宽
    //
    // 解绑全域公网带宽
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetachInternetBandwidthResponse> detachInternetBandwidth(
        DetachInternetBandwidthRequest &request
    );
    // 全域弹性公网IP段解绑后端实例
    //
    // 全域弹性公网IP段解绑后端实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisassociateGeipSegmentInstanceResponse> disassociateGeipSegmentInstance(
        DisassociateGeipSegmentInstanceRequest &request
    );
    // 解绑后端实例
    //
    // 解绑后端实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisassociateInstanceResponse> disassociateInstance(
        DisassociateInstanceRequest &request
    );
    // 查询全域弹性公网IP池列表
    //
    // 查询全域弹性公网IP池列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGeipPoolsResponse> listGeipPools(
        ListGeipPoolsRequest &request
    );
    // 查询资源实例列表数目
    //
    // 查询资源实例列表的数目
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGeipSegmentCountFilterTagsResponse> listGeipSegmentCountFilterTags(
        ListGeipSegmentCountFilterTagsRequest &request
    );
    // 查询全域弹性公网IP段项目标签
    //
    // 查询全域弹性公网IP段的项目标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGeipSegmentDomainTagsResponse> listGeipSegmentDomainTags(
        ListGeipSegmentDomainTagsRequest &request
    );
    // 查询资源实例列表
    //
    // 查询资源实例的列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGeipSegmentFilterTagsResponse> listGeipSegmentFilterTags(
        ListGeipSegmentFilterTagsRequest &request
    );
    // 查询资源实例列表数目
    //
    // 查询资源实例列表数目
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGlobalEipCountFilterTagsResponse> listGlobalEipCountFilterTags(
        ListGlobalEipCountFilterTagsRequest &request
    );
    // 查询全域弹性公网IP项目标签
    //
    // 查询全域弹性公网IP的项目标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGlobalEipDomainTagsResponse> listGlobalEipDomainTags(
        ListGlobalEipDomainTagsRequest &request
    );
    // 查询资源实例列表
    //
    // 查询资源实例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGlobalEipFilterTagsResponse> listGlobalEipFilterTags(
        ListGlobalEipFilterTagsRequest &request
    );
    // 查询全域弹性公网IP段列表
    //
    // 查询全域弹性公网IP段列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGlobalEipSegmentsResponse> listGlobalEipSegments(
        ListGlobalEipSegmentsRequest &request
    );
    // 查询全域弹性公网IP列表
    //
    // 查询全域弹性公网IP列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGlobalEipsResponse> listGlobalEips(
        ListGlobalEipsRequest &request
    );
    // 查询全域弹性公网IP段标签
    //
    // 查询全域弹性公网IP段的标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGeipSegmentTagsResponse> showGeipSegmentTags(
        ShowGeipSegmentTagsRequest &request
    );
    // 查询全域弹性公网IP详情
    //
    // 查询全域弹性公网IP详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGlobalEipResponse> showGlobalEip(
        ShowGlobalEipRequest &request
    );
    // 查询全域弹性公网IP段详情
    //
    // 查询全域弹性公网IP段详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGlobalEipSegmentResponse> showGlobalEipSegment(
        ShowGlobalEipSegmentRequest &request
    );
    // 查询全域弹性公网IP标签
    //
    // 查询全域弹性公网IP的标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGlobalEipTagsResponse> showGlobalEipTags(
        ShowGlobalEipTagsRequest &request
    );
    // 更新全域弹性公网IP信息
    //
    // 更新全域弹性公网IP信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGlobalEipResponse> updateGlobalEip(
        UpdateGlobalEipRequest &request
    );
    // 更新全域弹性公网IP段
    //
    // 更新全域弹性公网IP段
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGlobalEipSegmentResponse> updateGlobalEipSegment(
        UpdateGlobalEipSegmentRequest &request
    );

    // 查询Job列表
    //
    // 查询Job列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListJobsResponse> listJobs(
        ListJobsRequest &request
    );
    // 查询Job详情
    //
    // 查询Job详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobsResponse> showJobs(
        ShowJobsRequest &request
    );

    // 全域弹性公网IP支持绑定的Region限制
    //
    // 全域弹性公网IP支持绑定的Region限制
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSupportRegionsResponse> listSupportRegions(
        ListSupportRegionsRequest &request
    );
    // 查询指定站点允许绑定的Region信息
    //
    // console通过此接口获取指定pop点的全域弹性公网IP允许绑定的region实例信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTenantGeipSupportInstancesResponse> listTenantGeipSupportInstances(
        ListTenantGeipSupportInstancesRequest &request
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

template class HUAWEICLOUD_GEIP_V3_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Geip::V3::GeipClient>;

#endif // HUAWEICLOUD_SDK_GEIP_V3_GeipClient_H_

