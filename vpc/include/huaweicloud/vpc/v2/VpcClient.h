#ifndef HUAWEICLOUD_SDK_VPC_V2_VpcClient_H_
#define HUAWEICLOUD_SDK_VPC_V2_VpcClient_H_

#include <huaweicloud/vpc/v2/VpcExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/vpc/v2/model/AcceptVpcPeeringRequest.h>
#include <huaweicloud/vpc/v2/model/AcceptVpcPeeringResponse.h>
#include <huaweicloud/vpc/v2/model/AssociateRouteTableRequest.h>
#include <huaweicloud/vpc/v2/model/AssociateRouteTableResponse.h>
#include <huaweicloud/vpc/v2/model/BatchCreateSubnetTagsRequest.h>
#include <huaweicloud/vpc/v2/model/BatchCreateSubnetTagsRequestBody.h>
#include <huaweicloud/vpc/v2/model/BatchCreateSubnetTagsResponse.h>
#include <huaweicloud/vpc/v2/model/BatchDeleteSubnetTagsRequest.h>
#include <huaweicloud/vpc/v2/model/BatchDeleteSubnetTagsRequestBody.h>
#include <huaweicloud/vpc/v2/model/BatchDeleteSubnetTagsResponse.h>
#include <huaweicloud/vpc/v2/model/CreateFlowLogReqBody.h>
#include <huaweicloud/vpc/v2/model/CreateFlowLogRequest.h>
#include <huaweicloud/vpc/v2/model/CreateFlowLogResponse.h>
#include <huaweicloud/vpc/v2/model/CreatePortRequest.h>
#include <huaweicloud/vpc/v2/model/CreatePortRequestBody.h>
#include <huaweicloud/vpc/v2/model/CreatePortResponse.h>
#include <huaweicloud/vpc/v2/model/CreateRouteTableRequest.h>
#include <huaweicloud/vpc/v2/model/CreateRouteTableResponse.h>
#include <huaweicloud/vpc/v2/model/CreateRoutetableReqBody.h>
#include <huaweicloud/vpc/v2/model/CreateSecurityGroupRequest.h>
#include <huaweicloud/vpc/v2/model/CreateSecurityGroupRequestBody.h>
#include <huaweicloud/vpc/v2/model/CreateSecurityGroupResponse.h>
#include <huaweicloud/vpc/v2/model/CreateSecurityGroupRuleRequest.h>
#include <huaweicloud/vpc/v2/model/CreateSecurityGroupRuleRequestBody.h>
#include <huaweicloud/vpc/v2/model/CreateSecurityGroupRuleResponse.h>
#include <huaweicloud/vpc/v2/model/CreateSubnetRequest.h>
#include <huaweicloud/vpc/v2/model/CreateSubnetRequestBody.h>
#include <huaweicloud/vpc/v2/model/CreateSubnetResponse.h>
#include <huaweicloud/vpc/v2/model/CreateSubnetTagRequest.h>
#include <huaweicloud/vpc/v2/model/CreateSubnetTagRequestBody.h>
#include <huaweicloud/vpc/v2/model/CreateSubnetTagResponse.h>
#include <huaweicloud/vpc/v2/model/CreateVpcPeeringRequest.h>
#include <huaweicloud/vpc/v2/model/CreateVpcPeeringRequestBody.h>
#include <huaweicloud/vpc/v2/model/CreateVpcPeeringResponse.h>
#include <huaweicloud/vpc/v2/model/DeleteFlowLogRequest.h>
#include <huaweicloud/vpc/v2/model/DeleteFlowLogResponse.h>
#include <huaweicloud/vpc/v2/model/DeletePortRequest.h>
#include <huaweicloud/vpc/v2/model/DeletePortResponse.h>
#include <huaweicloud/vpc/v2/model/DeleteRouteTableRequest.h>
#include <huaweicloud/vpc/v2/model/DeleteRouteTableResponse.h>
#include <huaweicloud/vpc/v2/model/DeleteSecurityGroupRequest.h>
#include <huaweicloud/vpc/v2/model/DeleteSecurityGroupResponse.h>
#include <huaweicloud/vpc/v2/model/DeleteSecurityGroupRuleRequest.h>
#include <huaweicloud/vpc/v2/model/DeleteSecurityGroupRuleResponse.h>
#include <huaweicloud/vpc/v2/model/DeleteSubnetRequest.h>
#include <huaweicloud/vpc/v2/model/DeleteSubnetResponse.h>
#include <huaweicloud/vpc/v2/model/DeleteSubnetTagRequest.h>
#include <huaweicloud/vpc/v2/model/DeleteSubnetTagResponse.h>
#include <huaweicloud/vpc/v2/model/DeleteVpcPeeringRequest.h>
#include <huaweicloud/vpc/v2/model/DeleteVpcPeeringResponse.h>
#include <huaweicloud/vpc/v2/model/DisassociateRouteTableRequest.h>
#include <huaweicloud/vpc/v2/model/DisassociateRouteTableResponse.h>
#include <huaweicloud/vpc/v2/model/ListFlowLogsRequest.h>
#include <huaweicloud/vpc/v2/model/ListFlowLogsResponse.h>
#include <huaweicloud/vpc/v2/model/ListPortsRequest.h>
#include <huaweicloud/vpc/v2/model/ListPortsResponse.h>
#include <huaweicloud/vpc/v2/model/ListRouteTablesRequest.h>
#include <huaweicloud/vpc/v2/model/ListRouteTablesResponse.h>
#include <huaweicloud/vpc/v2/model/ListSecurityGroupRulesRequest.h>
#include <huaweicloud/vpc/v2/model/ListSecurityGroupRulesResponse.h>
#include <huaweicloud/vpc/v2/model/ListSecurityGroupsRequest.h>
#include <huaweicloud/vpc/v2/model/ListSecurityGroupsResponse.h>
#include <huaweicloud/vpc/v2/model/ListSubnetTagsRequest.h>
#include <huaweicloud/vpc/v2/model/ListSubnetTagsResponse.h>
#include <huaweicloud/vpc/v2/model/ListSubnetsByTagsRequest.h>
#include <huaweicloud/vpc/v2/model/ListSubnetsByTagsRequestBody.h>
#include <huaweicloud/vpc/v2/model/ListSubnetsByTagsResponse.h>
#include <huaweicloud/vpc/v2/model/ListSubnetsRequest.h>
#include <huaweicloud/vpc/v2/model/ListSubnetsResponse.h>
#include <huaweicloud/vpc/v2/model/ListVpcPeeringsRequest.h>
#include <huaweicloud/vpc/v2/model/ListVpcPeeringsResponse.h>
#include <huaweicloud/vpc/v2/model/RejectVpcPeeringRequest.h>
#include <huaweicloud/vpc/v2/model/RejectVpcPeeringResponse.h>
#include <huaweicloud/vpc/v2/model/RoutetableAssociateReqbody.h>
#include <huaweicloud/vpc/v2/model/ShowFlowLogRequest.h>
#include <huaweicloud/vpc/v2/model/ShowFlowLogResponse.h>
#include <huaweicloud/vpc/v2/model/ShowPortRequest.h>
#include <huaweicloud/vpc/v2/model/ShowPortResponse.h>
#include <huaweicloud/vpc/v2/model/ShowQuotaRequest.h>
#include <huaweicloud/vpc/v2/model/ShowQuotaResponse.h>
#include <huaweicloud/vpc/v2/model/ShowRouteTableRequest.h>
#include <huaweicloud/vpc/v2/model/ShowRouteTableResponse.h>
#include <huaweicloud/vpc/v2/model/ShowSecurityGroupRequest.h>
#include <huaweicloud/vpc/v2/model/ShowSecurityGroupResponse.h>
#include <huaweicloud/vpc/v2/model/ShowSecurityGroupRuleRequest.h>
#include <huaweicloud/vpc/v2/model/ShowSecurityGroupRuleResponse.h>
#include <huaweicloud/vpc/v2/model/ShowSubnetRequest.h>
#include <huaweicloud/vpc/v2/model/ShowSubnetResponse.h>
#include <huaweicloud/vpc/v2/model/ShowSubnetTagsRequest.h>
#include <huaweicloud/vpc/v2/model/ShowSubnetTagsResponse.h>
#include <huaweicloud/vpc/v2/model/ShowVpcPeeringRequest.h>
#include <huaweicloud/vpc/v2/model/ShowVpcPeeringResponse.h>
#include <huaweicloud/vpc/v2/model/UpdateFlowLogReqBody.h>
#include <huaweicloud/vpc/v2/model/UpdateFlowLogRequest.h>
#include <huaweicloud/vpc/v2/model/UpdateFlowLogResponse.h>
#include <huaweicloud/vpc/v2/model/UpdatePortRequest.h>
#include <huaweicloud/vpc/v2/model/UpdatePortRequestBody.h>
#include <huaweicloud/vpc/v2/model/UpdatePortResponse.h>
#include <huaweicloud/vpc/v2/model/UpdateRouteTableRequest.h>
#include <huaweicloud/vpc/v2/model/UpdateRouteTableResponse.h>
#include <huaweicloud/vpc/v2/model/UpdateRoutetableReqBody.h>
#include <huaweicloud/vpc/v2/model/UpdateSubnetRequest.h>
#include <huaweicloud/vpc/v2/model/UpdateSubnetRequestBody.h>
#include <huaweicloud/vpc/v2/model/UpdateSubnetResponse.h>
#include <huaweicloud/vpc/v2/model/UpdateVpcPeeringRequest.h>
#include <huaweicloud/vpc/v2/model/UpdateVpcPeeringRequestBody.h>
#include <huaweicloud/vpc/v2/model/UpdateVpcPeeringResponse.h>
#include <string>

#include <huaweicloud/vpc/v2/model/CreatePrivateipRequest.h>
#include <huaweicloud/vpc/v2/model/CreatePrivateipRequestBody.h>
#include <huaweicloud/vpc/v2/model/CreatePrivateipResponse.h>
#include <huaweicloud/vpc/v2/model/DeletePrivateipRequest.h>
#include <huaweicloud/vpc/v2/model/DeletePrivateipResponse.h>
#include <huaweicloud/vpc/v2/model/ListPrivateipsRequest.h>
#include <huaweicloud/vpc/v2/model/ListPrivateipsResponse.h>
#include <huaweicloud/vpc/v2/model/ShowNetworkIpAvailabilitiesRequest.h>
#include <huaweicloud/vpc/v2/model/ShowNetworkIpAvailabilitiesResponse.h>
#include <huaweicloud/vpc/v2/model/ShowPrivateipRequest.h>
#include <huaweicloud/vpc/v2/model/ShowPrivateipResponse.h>
#include <string>

#include <huaweicloud/vpc/v2/model/NeutronAddRouterInterfaceRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronAddRouterInterfaceResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateNetworkRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateNetworkRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateNetworkResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronCreatePortRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronCreatePortRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronCreatePortResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateRouterRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateRouterRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateRouterResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRuleRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRuleRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRuleResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateSubnetRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateSubnetRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateSubnetResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteNetworkRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteNetworkResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronDeletePortRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronDeletePortResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteRouterRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteRouterResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteSecurityGroupRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteSecurityGroupResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteSecurityGroupRuleRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteSecurityGroupRuleResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteSubnetRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteSubnetResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronListNetworksRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronListNetworksResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronListPortsRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronListPortsResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronListRoutersRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronListRoutersResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronListSecurityGroupRulesRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronListSecurityGroupRulesResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronListSecurityGroupsRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronListSecurityGroupsResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronListSubnetsRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronListSubnetsResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronRemoveRouterInterfaceRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronRemoveRouterInterfaceResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronShowNetworkRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronShowNetworkResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronShowPortRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronShowPortResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronShowRouterRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronShowRouterResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronShowSecurityGroupRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronShowSecurityGroupResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronShowSecurityGroupRuleRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronShowSecurityGroupRuleResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronShowSubnetRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronShowSubnetResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateNetworkRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateNetworkRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateNetworkResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdatePortRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdatePortRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdatePortResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateRouterRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateRouterRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateRouterResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateSecurityGroupRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateSecurityGroupRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateSecurityGroupResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateSubnetRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateSubnetRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateSubnetResponse.h>
#include <huaweicloud/vpc/v2/model/RouterInterfaceRequestBody.h>
#include <string>

#include <huaweicloud/vpc/v2/model/NeutronAddFirewallRuleRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronAddFirewallRuleResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateFirewallGroupRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateFirewallGroupRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateFirewallGroupResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateFirewallPolicyRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateFirewallPolicyRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateFirewallPolicyResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateFirewallRuleRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateFirewallRuleRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateFirewallRuleResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteFirewallGroupRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteFirewallGroupResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteFirewallPolicyRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteFirewallPolicyResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteFirewallRuleRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteFirewallRuleResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronInsertFirewallRuleRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronListFirewallGroupsRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronListFirewallGroupsResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronListFirewallPoliciesRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronListFirewallPoliciesResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronListFirewallRulesRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronListFirewallRulesResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronRemoveFirewallRuleRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronRemoveFirewallRuleRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronRemoveFirewallRuleResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronShowFirewallGroupRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronShowFirewallGroupResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronShowFirewallPolicyRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronShowFirewallPolicyResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronShowFirewallRuleRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronShowFirewallRuleResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateFirewallGroupRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateFirewallGroupRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateFirewallGroupResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateFirewallPolicyRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateFirewallPolicyRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateFirewallPolicyResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateFirewallRuleRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateFirewallRuleRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateFirewallRuleResponse.h>
#include <string>

#include <huaweicloud/vpc/v2/model/ListApiVersionRequest.h>
#include <huaweicloud/vpc/v2/model/ListApiVersionResponse.h>

#include <huaweicloud/vpc/v2/model/BatchCreateVpcTagsRequest.h>
#include <huaweicloud/vpc/v2/model/BatchCreateVpcTagsRequestBody.h>
#include <huaweicloud/vpc/v2/model/BatchCreateVpcTagsResponse.h>
#include <huaweicloud/vpc/v2/model/BatchDeleteVpcTagsRequest.h>
#include <huaweicloud/vpc/v2/model/BatchDeleteVpcTagsRequestBody.h>
#include <huaweicloud/vpc/v2/model/BatchDeleteVpcTagsResponse.h>
#include <huaweicloud/vpc/v2/model/CreateVpcRequest.h>
#include <huaweicloud/vpc/v2/model/CreateVpcRequestBody.h>
#include <huaweicloud/vpc/v2/model/CreateVpcResourceTagRequest.h>
#include <huaweicloud/vpc/v2/model/CreateVpcResourceTagRequestBody.h>
#include <huaweicloud/vpc/v2/model/CreateVpcResourceTagResponse.h>
#include <huaweicloud/vpc/v2/model/CreateVpcResponse.h>
#include <huaweicloud/vpc/v2/model/CreateVpcRouteRequest.h>
#include <huaweicloud/vpc/v2/model/CreateVpcRouteRequestBody.h>
#include <huaweicloud/vpc/v2/model/CreateVpcRouteResponse.h>
#include <huaweicloud/vpc/v2/model/DeleteVpcRequest.h>
#include <huaweicloud/vpc/v2/model/DeleteVpcResponse.h>
#include <huaweicloud/vpc/v2/model/DeleteVpcRouteRequest.h>
#include <huaweicloud/vpc/v2/model/DeleteVpcRouteResponse.h>
#include <huaweicloud/vpc/v2/model/DeleteVpcTagRequest.h>
#include <huaweicloud/vpc/v2/model/DeleteVpcTagResponse.h>
#include <huaweicloud/vpc/v2/model/ListVpcRoutesRequest.h>
#include <huaweicloud/vpc/v2/model/ListVpcRoutesResponse.h>
#include <huaweicloud/vpc/v2/model/ListVpcTagsRequest.h>
#include <huaweicloud/vpc/v2/model/ListVpcTagsResponse.h>
#include <huaweicloud/vpc/v2/model/ListVpcsByTagsRequest.h>
#include <huaweicloud/vpc/v2/model/ListVpcsByTagsRequestBody.h>
#include <huaweicloud/vpc/v2/model/ListVpcsByTagsResponse.h>
#include <huaweicloud/vpc/v2/model/ListVpcsRequest.h>
#include <huaweicloud/vpc/v2/model/ListVpcsResponse.h>
#include <huaweicloud/vpc/v2/model/ShowVpcRequest.h>
#include <huaweicloud/vpc/v2/model/ShowVpcResponse.h>
#include <huaweicloud/vpc/v2/model/ShowVpcRouteRequest.h>
#include <huaweicloud/vpc/v2/model/ShowVpcRouteResponse.h>
#include <huaweicloud/vpc/v2/model/ShowVpcTagsRequest.h>
#include <huaweicloud/vpc/v2/model/ShowVpcTagsResponse.h>
#include <huaweicloud/vpc/v2/model/UpdateVpcRequest.h>
#include <huaweicloud/vpc/v2/model/UpdateVpcRequestBody.h>
#include <huaweicloud/vpc/v2/model/UpdateVpcResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Vpc::V2::Model;

class HUAWEICLOUD_VPC_V2_EXPORT  VpcClient : public Client
{
public:

    VpcClient();

    virtual ~VpcClient();

    static ClientBuilder<VpcClient> newBuilder();

    // 接受对等连接请求
    //
    // 租户A名下的VPC申请和租户B的VPC建立对等连接，需要等待租户B接受该请求。此接口用于租户接受其他租户发起的对等连接请求。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AcceptVpcPeeringResponse> acceptVpcPeering(
        AcceptVpcPeeringRequest &request
    );
    // 子网关联路由表
    //
    // 路由表关联子网。子网关联路由表A后，再关联B，不需要先跟路由表A解关联再关联路由表B
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociateRouteTableResponse> associateRouteTable(
        AssociateRouteTableRequest &request
    );
    // 批量创建子网资源标签
    //
    // 为指定的子网资源实例批量添加标签。
    // 此接口为幂等接口：创建时如果请求体中存在重复key则报错。创建时，不允许设置重复key数据，如果数据库已存在该key，就覆盖value的值。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateSubnetTagsResponse> batchCreateSubnetTags(
        BatchCreateSubnetTagsRequest &request
    );
    // 批量删除子网资源标签
    //
    // 为指定的子网资源实例批量删除标签
    // 此接口为幂等接口：删除时，如果删除的标签不存在，默认处理成功；删除时不对标签字符集范围做校验。删除时tags结构体不能缺失，key不能为空，或者空字符串。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteSubnetTagsResponse> batchDeleteSubnetTags(
        BatchDeleteSubnetTagsRequest &request
    );
    // 创建流日志
    //
    // 创建流日志。
    // 流日志功能可以记录虚拟私有云中的流量信息，帮助您检查和优化安全组和网络ACL防火墙控制规则、监控网络流量、进行网络攻击分析等。
    // VPC流日志功能需要与云日志服务LTS结合使用，请先在云日志服务中创建日志组和日志主题，然后再创建VPC流日志。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateFlowLogResponse> createFlowLog(
        CreateFlowLogRequest &request
    );
    // 创建端口
    //
    // 创建端口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePortResponse> createPort(
        CreatePortRequest &request
    );
    // 创建路由表
    //
    // 创建路由表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRouteTableResponse> createRouteTable(
        CreateRouteTableRequest &request
    );
    // 创建安全组
    //
    // 创建安全组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSecurityGroupResponse> createSecurityGroup(
        CreateSecurityGroupRequest &request
    );
    // 创建安全组规则
    //
    // 创建安全组规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSecurityGroupRuleResponse> createSecurityGroupRule(
        CreateSecurityGroupRuleRequest &request
    );
    // 创建子网
    //
    // 创建子网。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSubnetResponse> createSubnet(
        CreateSubnetRequest &request
    );
    // 创建子网资源标签
    //
    // 给指定子网资源实例增加标签信息。
    // 此接口为幂等接口：创建时，如果创建的标签已经存在（key相同），则覆盖。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSubnetTagResponse> createSubnetTag(
        CreateSubnetTagRequest &request
    );
    // 创建对等连接
    //
    // 创建对等连接。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateVpcPeeringResponse> createVpcPeering(
        CreateVpcPeeringRequest &request
    );
    // 删除流日志
    //
    // 删除流日志
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteFlowLogResponse> deleteFlowLog(
        DeleteFlowLogRequest &request
    );
    // 删除端口
    //
    // 删除端口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePortResponse> deletePort(
        DeletePortRequest &request
    );
    // 删除路由表
    //
    // 删除路由表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRouteTableResponse> deleteRouteTable(
        DeleteRouteTableRequest &request
    );
    // 删除安全组
    //
    // 删除安全组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSecurityGroupResponse> deleteSecurityGroup(
        DeleteSecurityGroupRequest &request
    );
    // 删除安全组规则
    //
    // 删除安全组规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSecurityGroupRuleResponse> deleteSecurityGroupRule(
        DeleteSecurityGroupRuleRequest &request
    );
    // 删除子网
    //
    // 删除子网
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSubnetResponse> deleteSubnet(
        DeleteSubnetRequest &request
    );
    // 删除子网资源标签
    //
    // 删除指定子网资源实例的标签信息。
    // 该接口为幂等接口：删除的key不存在报404，Key不能为空或者空字符串
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSubnetTagResponse> deleteSubnetTag(
        DeleteSubnetTagRequest &request
    );
    // 删除对等连接
    //
    // 删除对等连接。
    // 可以在在本端或对端任何一端删除对等连接。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteVpcPeeringResponse> deleteVpcPeering(
        DeleteVpcPeeringRequest &request
    );
    // 子网解关联路由表
    //
    // 子网解关联路由表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisassociateRouteTableResponse> disassociateRouteTable(
        DisassociateRouteTableRequest &request
    );
    // 查询流日志列表
    //
    // 查询提交请求的租户的所有流日志列表，并根据过滤条件进行过滤
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFlowLogsResponse> listFlowLogs(
        ListFlowLogsRequest &request
    );
    // 查询端口列表
    //
    // 查询提交请求的租户的所有端口，单次查询最多返回2000条数据。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPortsResponse> listPorts(
        ListPortsRequest &request
    );
    // 查询路由表列表
    //
    // 查询提交请求的帐户的所有路由表列表，并根据过滤条件进行过滤
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRouteTablesResponse> listRouteTables(
        ListRouteTablesRequest &request
    );
    // 查询安全组规则列表
    //
    // 查询安全组规则列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSecurityGroupRulesResponse> listSecurityGroupRules(
        ListSecurityGroupRulesRequest &request
    );
    // 查询安全组列表
    //
    // 查询安全组列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSecurityGroupsResponse> listSecurityGroups(
        ListSecurityGroupsRequest &request
    );
    // 查询子网项目标签
    //
    // 查询租户在指定区域和实例类型的所有标签集合
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSubnetTagsResponse> listSubnetTags(
        ListSubnetTagsRequest &request
    );
    // 查询子网列表
    //
    // 查询子网列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSubnetsResponse> listSubnets(
        ListSubnetsRequest &request
    );
    // 查询子网资源实例
    //
    // 使用标签过滤实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSubnetsByTagsResponse> listSubnetsByTags(
        ListSubnetsByTagsRequest &request
    );
    // 查询对等连接列表
    //
    // 查询提交请求的租户的所有对等连接。根据过滤条件进行过滤。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVpcPeeringsResponse> listVpcPeerings(
        ListVpcPeeringsRequest &request
    );
    // 拒绝对等连接请求
    //
    // 租户A名下的VPC申请和租户B的VPC建立对等连接，需要等待租户B接受该请求。此接口用于租户拒绝其他租户发起的对等连接请求。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RejectVpcPeeringResponse> rejectVpcPeering(
        RejectVpcPeeringRequest &request
    );
    // 查询流日志
    //
    // 查询流日志详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFlowLogResponse> showFlowLog(
        ShowFlowLogRequest &request
    );
    // 查询端口
    //
    // 查询单个端口详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPortResponse> showPort(
        ShowPortRequest &request
    );
    // 查询配额
    //
    // 查询单租户在VPC服务下的网络资源配额，包括vpc配额、子网配额、安全组配额、安全组规则配额、弹性公网IP配额，vpn配额等。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowQuotaResponse> showQuota(
        ShowQuotaRequest &request
    );
    // 查询路由表
    //
    // 查询路由表详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRouteTableResponse> showRouteTable(
        ShowRouteTableRequest &request
    );
    // 查询安全组
    //
    // 查询单个安全组详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSecurityGroupResponse> showSecurityGroup(
        ShowSecurityGroupRequest &request
    );
    // 查询安全组规则
    //
    // 查询单个安全组规则详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSecurityGroupRuleResponse> showSecurityGroupRule(
        ShowSecurityGroupRuleRequest &request
    );
    // 查询子网
    //
    // 查询子网详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSubnetResponse> showSubnet(
        ShowSubnetRequest &request
    );
    // 查询子网资源标签
    //
    // 查询指定子网实例的标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSubnetTagsResponse> showSubnetTags(
        ShowSubnetTagsRequest &request
    );
    // 查询对等连接
    //
    // 查询对等连接详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVpcPeeringResponse> showVpcPeering(
        ShowVpcPeeringRequest &request
    );
    // 更新流日志
    //
    // 更新流日志
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateFlowLogResponse> updateFlowLog(
        UpdateFlowLogRequest &request
    );
    // 更新端口
    //
    // 更新端口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePortResponse> updatePort(
        UpdatePortRequest &request
    );
    // 更新路由表
    //
    // 更新路由表，包括可以更新路由表的名称，描述，以及新增、更新、删除路由条目
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRouteTableResponse> updateRouteTable(
        UpdateRouteTableRequest &request
    );
    // 更新子网
    //
    // 更新子网。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSubnetResponse> updateSubnet(
        UpdateSubnetRequest &request
    );
    // 更新对等连接
    //
    // 更新对等连接。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateVpcPeeringResponse> updateVpcPeering(
        UpdateVpcPeeringRequest &request
    );

    // 申请私有IP
    //
    // 申请私有IP。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePrivateipResponse> createPrivateip(
        CreatePrivateipRequest &request
    );
    // 删除私有IP
    //
    // 删除私有IP。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePrivateipResponse> deletePrivateip(
        DeletePrivateipRequest &request
    );
    // 查询私有IP列表
    //
    // 查询指定子网下的私有IP列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPrivateipsResponse> listPrivateips(
        ListPrivateipsRequest &request
    );
    // 查询网络IP使用情况
    //
    // 显示一个指定网络中的IPv4地址使用情况。
    // 包括此网络中的IP总数以及已用IP总数，以及网络下每一个子网的IP地址总数和可用IP地址总数。
    // 
    // &gt; 须知
    // 
    // - 系统预留地址指的是子网的第1个以及最后4个地址，一般用于网关、DHCP等服务。
    // - 这里以及下文描述的IP地址总数、已用IP地址总数不包含系统预留地址。
    // - 在分配IP时，用户可以指定系统预留的IP地址。但是不论IP是如何分配的，只要是处于系统预留IP地址段的IP均不会被统计到已用IP地址数目和IP地址总数中。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowNetworkIpAvailabilitiesResponse> showNetworkIpAvailabilities(
        ShowNetworkIpAvailabilitiesRequest &request
    );
    // 查询私有IP
    //
    // 指定ID查询私有IP。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPrivateipResponse> showPrivateip(
        ShowPrivateipRequest &request
    );

    // 路由器添加接口
    //
    // 添加路由器接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronAddRouterInterfaceResponse> neutronAddRouterInterface(
        NeutronAddRouterInterfaceRequest &request
    );
    // 创建网络
    //
    // 创建网络
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronCreateNetworkResponse> neutronCreateNetwork(
        NeutronCreateNetworkRequest &request
    );
    // 创建端口
    //
    // 创建端口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronCreatePortResponse> neutronCreatePort(
        NeutronCreatePortRequest &request
    );
    // 创建路由器
    //
    // 创建路由器。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronCreateRouterResponse> neutronCreateRouter(
        NeutronCreateRouterRequest &request
    );
    // 创建安全组
    //
    // 创建安全组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronCreateSecurityGroupResponse> neutronCreateSecurityGroup(
        NeutronCreateSecurityGroupRequest &request
    );
    // 创建安全组规则
    //
    // 创建安全组规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronCreateSecurityGroupRuleResponse> neutronCreateSecurityGroupRule(
        NeutronCreateSecurityGroupRuleRequest &request
    );
    // 创建子网
    //
    // 创建子网。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronCreateSubnetResponse> neutronCreateSubnet(
        NeutronCreateSubnetRequest &request
    );
    // 删除网络
    //
    // 删除网络
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronDeleteNetworkResponse> neutronDeleteNetwork(
        NeutronDeleteNetworkRequest &request
    );
    // 删除端口
    //
    // 删除端口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronDeletePortResponse> neutronDeletePort(
        NeutronDeletePortRequest &request
    );
    // 删除路由器
    //
    // 删除路由器
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronDeleteRouterResponse> neutronDeleteRouter(
        NeutronDeleteRouterRequest &request
    );
    // 删除安全组
    //
    // 删除安全组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronDeleteSecurityGroupResponse> neutronDeleteSecurityGroup(
        NeutronDeleteSecurityGroupRequest &request
    );
    // 删除安全组规则
    //
    // 删除安全组规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronDeleteSecurityGroupRuleResponse> neutronDeleteSecurityGroupRule(
        NeutronDeleteSecurityGroupRuleRequest &request
    );
    // 删除子网
    //
    // 删除子网
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronDeleteSubnetResponse> neutronDeleteSubnet(
        NeutronDeleteSubnetRequest &request
    );
    // 查询网络列表
    //
    // 查询提交请求的租户的所有网络，单次查询最多返回2000条数据，超过2000后会返回分页标记。分页查询请参考分页查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronListNetworksResponse> neutronListNetworks(
        NeutronListNetworksRequest &request
    );
    // 查询端口列表
    //
    // 查询提交请求的租户的所有端口，单次查询最多返回2000条数据，超过2000后会返回分页标记。分页查询请参考分页查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronListPortsResponse> neutronListPorts(
        NeutronListPortsRequest &request
    );
    // 查询路由器列表
    //
    // 查询提交请求的租户有权限操作的所有路由器信息，单次查询最多返回2000条数据，超过2000后会返回分页标记。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronListRoutersResponse> neutronListRouters(
        NeutronListRoutersRequest &request
    );
    // 查询安全组规则列表
    //
    // 查询提交请求的租户有权限查看的所有安全组规则。单次查询最多返回2000条数据，超过2000后会返回分页标记。分页查询请参考分页查询
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronListSecurityGroupRulesResponse> neutronListSecurityGroupRules(
        NeutronListSecurityGroupRulesRequest &request
    );
    // 查询安全组列表
    //
    // 查询提交请求租户的所有安全组，单次查询最多返回2000条数据，超过2000后会返回分页标记。分页查询请参考分页查询 。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronListSecurityGroupsResponse> neutronListSecurityGroups(
        NeutronListSecurityGroupsRequest &request
    );
    // 查询子网列表
    //
    // 查询提交请求租户的所有子网，单次查询最多返回2000条数据，超过2000后会返回分页标记。分页查询请参考分页查询 。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronListSubnetsResponse> neutronListSubnets(
        NeutronListSubnetsRequest &request
    );
    // 路由器删除接口
    //
    // 删除路由器接口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronRemoveRouterInterfaceResponse> neutronRemoveRouterInterface(
        NeutronRemoveRouterInterfaceRequest &request
    );
    // 查询网络
    //
    // 查询指定的网络详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronShowNetworkResponse> neutronShowNetwork(
        NeutronShowNetworkRequest &request
    );
    // 查询端口
    //
    // 查询端口详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronShowPortResponse> neutronShowPort(
        NeutronShowPortRequest &request
    );
    // 查询路由器
    //
    // 查询路由器详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronShowRouterResponse> neutronShowRouter(
        NeutronShowRouterRequest &request
    );
    // 查询安全组
    //
    // 查询安全组详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronShowSecurityGroupResponse> neutronShowSecurityGroup(
        NeutronShowSecurityGroupRequest &request
    );
    // 查询安全组规则
    //
    // 查询安全组规则详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronShowSecurityGroupRuleResponse> neutronShowSecurityGroupRule(
        NeutronShowSecurityGroupRuleRequest &request
    );
    // 查询子网
    //
    // 查询子网详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronShowSubnetResponse> neutronShowSubnet(
        NeutronShowSubnetRequest &request
    );
    // 更新网络
    //
    // 更新网络
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronUpdateNetworkResponse> neutronUpdateNetwork(
        NeutronUpdateNetworkRequest &request
    );
    // 更新端口
    //
    // 更新端口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronUpdatePortResponse> neutronUpdatePort(
        NeutronUpdatePortRequest &request
    );
    // 更新路由器
    //
    // 更新路由器。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronUpdateRouterResponse> neutronUpdateRouter(
        NeutronUpdateRouterRequest &request
    );
    // 更新安全组
    //
    // 更新安全组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronUpdateSecurityGroupResponse> neutronUpdateSecurityGroup(
        NeutronUpdateSecurityGroupRequest &request
    );
    // 更新子网
    //
    // 更新子网
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronUpdateSubnetResponse> neutronUpdateSubnet(
        NeutronUpdateSubnetRequest &request
    );

    // 插入网络ACL规则
    //
    // 插入一条网络ACL规则到某一网络ACL策略中。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronAddFirewallRuleResponse> neutronAddFirewallRule(
        NeutronAddFirewallRuleRequest &request
    );
    // 创建网络ACL组
    //
    // 创建网络ACL组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronCreateFirewallGroupResponse> neutronCreateFirewallGroup(
        NeutronCreateFirewallGroupRequest &request
    );
    // 创建网络ACL策略
    //
    // 创建网络ACL策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronCreateFirewallPolicyResponse> neutronCreateFirewallPolicy(
        NeutronCreateFirewallPolicyRequest &request
    );
    // 创建网络ACL规则
    //
    // 创建网络ACL规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronCreateFirewallRuleResponse> neutronCreateFirewallRule(
        NeutronCreateFirewallRuleRequest &request
    );
    // 删除网络ACL组
    //
    // 删除网络ACL组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronDeleteFirewallGroupResponse> neutronDeleteFirewallGroup(
        NeutronDeleteFirewallGroupRequest &request
    );
    // 删除网络ACL策略
    //
    // 删除网络ACL策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronDeleteFirewallPolicyResponse> neutronDeleteFirewallPolicy(
        NeutronDeleteFirewallPolicyRequest &request
    );
    // 删除网络ACL规则
    //
    // 删除网络ACL规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronDeleteFirewallRuleResponse> neutronDeleteFirewallRule(
        NeutronDeleteFirewallRuleRequest &request
    );
    // 查询所有网络ACL组
    //
    // 查询提交请求的租户有权限操作的所有网络ACL组信息。单次查询最多返回2000条数据，超过2000后会返回分页标记。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronListFirewallGroupsResponse> neutronListFirewallGroups(
        NeutronListFirewallGroupsRequest &request
    );
    // 查询所有网络ACL策略
    //
    // 查询提交请求的租户有权限操作的所有网络ACL策略信息。单次查询最多返回2000条数据，超过2000后会返回分页标记。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronListFirewallPoliciesResponse> neutronListFirewallPolicies(
        NeutronListFirewallPoliciesRequest &request
    );
    // 查询所有网络ACL规则
    //
    // 查询提交请求的租户有权限操作的所有网络ACL规则信息。单次查询最多返回2000条数据，超过2000后会返回分页标记。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronListFirewallRulesResponse> neutronListFirewallRules(
        NeutronListFirewallRulesRequest &request
    );
    // 移除网络ACL规则
    //
    // 从某一网络ACL策略中移除一条网络ACL规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronRemoveFirewallRuleResponse> neutronRemoveFirewallRule(
        NeutronRemoveFirewallRuleRequest &request
    );
    // 查询特定网络ACL组详情
    //
    // 查询特定网络ACL组详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronShowFirewallGroupResponse> neutronShowFirewallGroup(
        NeutronShowFirewallGroupRequest &request
    );
    // 查询特定网络ACL策略详情
    //
    // 查询特定网络ACL策略详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronShowFirewallPolicyResponse> neutronShowFirewallPolicy(
        NeutronShowFirewallPolicyRequest &request
    );
    // 查询特定网络ACL规则
    //
    // 查询特定网络ACL规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronShowFirewallRuleResponse> neutronShowFirewallRule(
        NeutronShowFirewallRuleRequest &request
    );
    // 更新网络ACL组
    //
    // 更新网络ACL组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronUpdateFirewallGroupResponse> neutronUpdateFirewallGroup(
        NeutronUpdateFirewallGroupRequest &request
    );
    // 更新网络ACL策略
    //
    // 更新网络ACL策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronUpdateFirewallPolicyResponse> neutronUpdateFirewallPolicy(
        NeutronUpdateFirewallPolicyRequest &request
    );
    // 更新网络ACL规则
    //
    // 更新网络ACL规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NeutronUpdateFirewallRuleResponse> neutronUpdateFirewallRule(
        NeutronUpdateFirewallRuleRequest &request
    );

    // 查询API版本信息列表
    //
    // 返回当前API所有可用的版本（仅针对OpenStack原生接口）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApiVersionResponse> listApiVersion(
        ListApiVersionRequest &request
    );

    // 批量创建VPC资源标签
    //
    // 为指定的VPC资源实例批量添加标签。
    // 此接口为幂等接口：创建时如果请求体中存在重复key则报错。创建时，不允许设置重复key数据，如果数据库已存在该key，就覆盖value的值。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateVpcTagsResponse> batchCreateVpcTags(
        BatchCreateVpcTagsRequest &request
    );
    // 批量删除VPC资源标签
    //
    // 为指定的VPC资源实例批量删除标签。
    // 此接口为幂等接口：删除时，如果删除的标签不存在，默认处理成功；删除时不对标签字符集范围做校验。删除时tags结构体不能缺失，key不能为空，或者空字符串。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteVpcTagsResponse> batchDeleteVpcTags(
        BatchDeleteVpcTagsRequest &request
    );
    // 创建VPC
    //
    // 创建虚拟私有云。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateVpcResponse> createVpc(
        CreateVpcRequest &request
    );
    // 创建VPC资源标签
    //
    // 给指定VPC资源实例增加标签信息
    // 此接口为幂等接口：创建时，如果创建的标签已经存在（key相同），则覆盖。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateVpcResourceTagResponse> createVpcResourceTag(
        CreateVpcResourceTagRequest &request
    );
    // 创建VPC路由
    //
    // 创建路由
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateVpcRouteResponse> createVpcRoute(
        CreateVpcRouteRequest &request
    );
    // 删除VPC
    //
    // 删除虚拟私有云。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteVpcResponse> deleteVpc(
        DeleteVpcRequest &request
    );
    // 删除VPC路由
    //
    // 删除路由
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteVpcRouteResponse> deleteVpcRoute(
        DeleteVpcRouteRequest &request
    );
    // 删除VPC资源标签
    //
    // 删除指定VPC资源实例的标签信息
    // 该接口为幂等接口：删除的key不存在报404，Key不能为空或者空字符串
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteVpcTagResponse> deleteVpcTag(
        DeleteVpcTagRequest &request
    );
    // 查询VPC路由列表
    //
    // 查询提交请求的租户的所有路由列表，并根据过滤条件进行过滤。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVpcRoutesResponse> listVpcRoutes(
        ListVpcRoutesRequest &request
    );
    // 查询VPC项目标签
    //
    // 查询租户在指定区域和实例类型的所有标签集合
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVpcTagsResponse> listVpcTags(
        ListVpcTagsRequest &request
    );
    // 查询VPC列表
    //
    // 查询虚拟私有云列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVpcsResponse> listVpcs(
        ListVpcsRequest &request
    );
    // 查询VPC资源实例
    //
    // 使用标签过滤实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVpcsByTagsResponse> listVpcsByTags(
        ListVpcsByTagsRequest &request
    );
    // 查询VPC
    //
    // 查询虚拟私有云。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVpcResponse> showVpc(
        ShowVpcRequest &request
    );
    // 查询VPC路由
    //
    // 查询路由详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVpcRouteResponse> showVpcRoute(
        ShowVpcRouteRequest &request
    );
    // 查询VPC资源标签
    //
    // 查询指定VPC实例的标签信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVpcTagsResponse> showVpcTags(
        ShowVpcTagsRequest &request
    );
    // 更新VPC
    //
    // 更新虚拟私有云。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateVpcResponse> updateVpc(
        UpdateVpcRequest &request
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

template class HUAWEICLOUD_VPC_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Vpc::V2::VpcClient>;

#endif // HUAWEICLOUD_SDK_VPC_V2_VpcClient_H_

