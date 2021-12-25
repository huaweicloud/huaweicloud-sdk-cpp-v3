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

#include <huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRuleRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRuleRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupRuleResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteSecurityGroupRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteSecurityGroupResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteSecurityGroupRuleRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronDeleteSecurityGroupRuleResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronListSecurityGroupRulesRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronListSecurityGroupRulesResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronListSecurityGroupsRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronListSecurityGroupsResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronShowSecurityGroupRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronShowSecurityGroupResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronShowSecurityGroupRuleRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronShowSecurityGroupRuleResponse.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateSecurityGroupRequest.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateSecurityGroupRequestBody.h>
#include <huaweicloud/vpc/v2/model/NeutronUpdateSecurityGroupResponse.h>
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

    /// <summary>
    /// 接受对等连接请求
    /// </summary>
    /// <remarks>
    /// 租户A名下的VPC申请和租户B的VPC建立对等连接，需要等待租户B接受该请求。此接口用于租户接受其他租户发起的对等连接请求。
    /// </remarks>
    /// <param name="peeringId">对等连接ID</param>
    std::shared_ptr<AcceptVpcPeeringResponse> acceptVpcPeering(
        AcceptVpcPeeringRequest &request
    );
    /// <summary>
    /// 子网关联路由表
    /// </summary>
    /// <remarks>
    /// 路由表关联子网。子网关联路由表A后，再关联B，不需要先跟路由表A解关联再关联路由表B
    /// </remarks>
    /// <param name="routetableId">路由表ID</param>
    /// <param name="routetableAssociate">关联路由表与子网请求体</param>
    std::shared_ptr<AssociateRouteTableResponse> associateRouteTable(
        AssociateRouteTableRequest &request
    );
    /// <summary>
    /// 批量创建子网资源标签
    /// </summary>
    /// <remarks>
    /// 为指定的子网资源实例批量添加标签。 此接口为幂等接口：创建时如果请求体中存在重复key则报错。创建时，不允许设置重复key数据，如果数据库已存在该key，就覆盖value的值。
    /// </remarks>
    /// <param name="subnetId">子网ID</param>
    /// <param name="batchCreateSubnetTagsRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<BatchCreateSubnetTagsResponse> batchCreateSubnetTags(
        BatchCreateSubnetTagsRequest &request
    );
    /// <summary>
    /// 批量删除子网资源标签
    /// </summary>
    /// <remarks>
    /// 为指定的子网资源实例批量删除标签 此接口为幂等接口：删除时，如果删除的标签不存在，默认处理成功；删除时不对标签字符集范围做校验。删除时tags结构体不能缺失，key不能为空，或者空字符串。
    /// </remarks>
    /// <param name="subnetId">子网ID</param>
    /// <param name="batchDeleteSubnetTagsRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<BatchDeleteSubnetTagsResponse> batchDeleteSubnetTags(
        BatchDeleteSubnetTagsRequest &request
    );
    /// <summary>
    /// 创建端口
    /// </summary>
    /// <remarks>
    /// 创建端口。
    /// </remarks>
    /// <param name="port">创建端口对象</param>
    std::shared_ptr<CreatePortResponse> createPort(
        CreatePortRequest &request
    );
    /// <summary>
    /// 创建路由表
    /// </summary>
    /// <remarks>
    /// 创建路由表
    /// </remarks>
    /// <param name="routetable">创建路由表对象，参见CreateRouteTableReq对象</param>
    std::shared_ptr<CreateRouteTableResponse> createRouteTable(
        CreateRouteTableRequest &request
    );
    /// <summary>
    /// 创建安全组
    /// </summary>
    /// <remarks>
    /// 创建安全组。
    /// </remarks>
    /// <param name="securityGroup">创建安全组对象</param>
    std::shared_ptr<CreateSecurityGroupResponse> createSecurityGroup(
        CreateSecurityGroupRequest &request
    );
    /// <summary>
    /// 创建安全组规则
    /// </summary>
    /// <remarks>
    /// 创建安全组规则。
    /// </remarks>
    /// <param name="securityGroupRule">创建安全组规则对象</param>
    std::shared_ptr<CreateSecurityGroupRuleResponse> createSecurityGroupRule(
        CreateSecurityGroupRuleRequest &request
    );
    /// <summary>
    /// 创建子网
    /// </summary>
    /// <remarks>
    /// 创建子网。
    /// </remarks>
    /// <param name="subnet">创建子网对象</param>
    std::shared_ptr<CreateSubnetResponse> createSubnet(
        CreateSubnetRequest &request
    );
    /// <summary>
    /// 创建子网资源标签
    /// </summary>
    /// <remarks>
    /// 给指定子网资源实例增加标签信息。 此接口为幂等接口：创建时，如果创建的标签已经存在（key相同），则覆盖。
    /// </remarks>
    /// <param name="subnetId">子网ID</param>
    /// <param name="createSubnetTagRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<CreateSubnetTagResponse> createSubnetTag(
        CreateSubnetTagRequest &request
    );
    /// <summary>
    /// 创建对等连接
    /// </summary>
    /// <remarks>
    /// 创建对等连接。
    /// </remarks>
    /// <param name="peering">peering对象</param>
    std::shared_ptr<CreateVpcPeeringResponse> createVpcPeering(
        CreateVpcPeeringRequest &request
    );
    /// <summary>
    /// 删除端口
    /// </summary>
    /// <remarks>
    /// 删除端口。
    /// </remarks>
    /// <param name="portId">端口ID</param>
    std::shared_ptr<DeletePortResponse> deletePort(
        DeletePortRequest &request
    );
    /// <summary>
    /// 删除路由表
    /// </summary>
    /// <remarks>
    /// 删除路由表
    /// </remarks>
    /// <param name="routetableId">路由表ID</param>
    std::shared_ptr<DeleteRouteTableResponse> deleteRouteTable(
        DeleteRouteTableRequest &request
    );
    /// <summary>
    /// 删除安全组
    /// </summary>
    /// <remarks>
    /// 删除安全组。
    /// </remarks>
    /// <param name="securityGroupId">安全组ID</param>
    std::shared_ptr<DeleteSecurityGroupResponse> deleteSecurityGroup(
        DeleteSecurityGroupRequest &request
    );
    /// <summary>
    /// 删除安全组规则
    /// </summary>
    /// <remarks>
    /// 删除安全组规则。
    /// </remarks>
    /// <param name="securityGroupRuleId">安全组规则ID</param>
    std::shared_ptr<DeleteSecurityGroupRuleResponse> deleteSecurityGroupRule(
        DeleteSecurityGroupRuleRequest &request
    );
    /// <summary>
    /// 删除子网
    /// </summary>
    /// <remarks>
    /// 删除子网
    /// </remarks>
    /// <param name="vpcId">子网对应的vpc_id</param>
    /// <param name="subnetId">子网ID</param>
    std::shared_ptr<DeleteSubnetResponse> deleteSubnet(
        DeleteSubnetRequest &request
    );
    /// <summary>
    /// 删除子网资源标签
    /// </summary>
    /// <remarks>
    /// 删除指定子网资源实例的标签信息。 该接口为幂等接口：删除的key不存在报404，Key不能为空或者空字符串
    /// </remarks>
    /// <param name="subnetId">子网ID</param>
    /// <param name="key">功能说明：键值</param>
    std::shared_ptr<DeleteSubnetTagResponse> deleteSubnetTag(
        DeleteSubnetTagRequest &request
    );
    /// <summary>
    /// 删除对等连接
    /// </summary>
    /// <remarks>
    /// 删除对等连接。 可以在在本端或对端任何一端删除对等连接。
    /// </remarks>
    /// <param name="peeringId">对等连接ID</param>
    std::shared_ptr<DeleteVpcPeeringResponse> deleteVpcPeering(
        DeleteVpcPeeringRequest &request
    );
    /// <summary>
    /// 子网解关联路由表
    /// </summary>
    /// <remarks>
    /// 子网解关联路由表
    /// </remarks>
    /// <param name="routetableId">路由表ID</param>
    /// <param name="routetableAssociate">关联路由表与子网请求体</param>
    std::shared_ptr<DisassociateRouteTableResponse> disassociateRouteTable(
        DisassociateRouteTableRequest &request
    );
    /// <summary>
    /// 查询端口列表
    /// </summary>
    /// <remarks>
    /// 查询提交请求的租户的所有端口，单次查询最多返回2000条数据。
    /// </remarks>
    /// <param name="name">功能说明：按照name过滤查询  取值范围：最大长度不超过255 (optional, default to &quot;&quot;)</param>
    /// <param name="id">按照port_id过滤查询 (optional, default to &quot;&quot;)</param>
    /// <param name="limit">每页返回的个数 (optional, default to 0)</param>
    /// <param name="adminStateUp">按照admin_state_up进行过滤 (optional, default to false)</param>
    /// <param name="networkId">按照network_id过滤查询 (optional, default to &quot;&quot;)</param>
    /// <param name="macAddress">按照mac_address过滤查询 (optional, default to &quot;&quot;)</param>
    /// <param name="deviceId">按照device_id过滤查询 (optional, default to &quot;&quot;)</param>
    /// <param name="deviceOwner">按照device_owner过滤查询 (optional, default to &quot;&quot;)</param>
    /// <param name="status">功能说明：按照status过滤查询  取值范围：ACTIVE、BUILD、DOWN (optional, default to &quot;&quot;)</param>
    /// <param name="marker">分页查询起始的资源ID，为空时查询第一页 (optional, default to &quot;&quot;)</param>
    /// <param name="fixedIps">按照fixed_ips&#x3D;ip_address或者fixed_ips&#x3D;subnet_id过滤查询 (optional, default to &quot;&quot;)</param>
    /// <param name="enterpriseProjectId">功能说明：企业项目ID，用于基于企业项目的权限管理。  取值范围：最大长度36字节，带“-”连字符的UUID格式，或者是字符串“0”。“0”表示默认企业项目。  若需要查询当前用户所有企业项目绑定的端口，请传参all_granted_eps。 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListPortsResponse> listPorts(
        ListPortsRequest &request
    );
    /// <summary>
    /// 查询路由表列表
    /// </summary>
    /// <remarks>
    /// 查询提交请求的帐户的所有路由表列表，并根据过滤条件进行过滤
    /// </remarks>
    /// <param name="limit">每页返回的个数 (optional, default to 0)</param>
    /// <param name="marker">分页查询起始的资源ID，为空时为查询第一页 (optional, default to &quot;&quot;)</param>
    /// <param name="id">路由表ID，可过滤对应ID的路由表 (optional, default to &quot;&quot;)</param>
    /// <param name="vpcId">虚拟私有云ID，可过滤对应虚拟私有云包含的路由表 (optional, default to &quot;&quot;)</param>
    /// <param name="subnetId">子网ID，可过滤对应子网关联的路由表 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListRouteTablesResponse> listRouteTables(
        ListRouteTablesRequest &request
    );
    /// <summary>
    /// 查询安全组规则列表
    /// </summary>
    /// <remarks>
    /// 查询安全组规则列表。
    /// </remarks>
    /// <param name="marker">功能说明：分页查询起始的资源ID，为空时查询第一页 (optional, default to &quot;&quot;)</param>
    /// <param name="limit">每页返回的个数 (optional, default to 0)</param>
    /// <param name="securityGroupId">安全组ID (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListSecurityGroupRulesResponse> listSecurityGroupRules(
        ListSecurityGroupRulesRequest &request
    );
    /// <summary>
    /// 查询安全组列表
    /// </summary>
    /// <remarks>
    /// 查询安全组列表
    /// </remarks>
    /// <param name="limit">每页返回的个数 (optional, default to 0)</param>
    /// <param name="marker">分页查询起始的资源ID，为空时查询第一页 (optional, default to &quot;&quot;)</param>
    /// <param name="vpcId">按照vpc_id过滤查询 (optional, default to &quot;&quot;)</param>
    /// <param name="enterpriseProjectId">功能说明：企业项目ID。可以使用该字段过滤某个企业项目下的安全组。  取值范围：最大长度36字节，带“-”连字符的UUID格式，或者是字符串“0”。“0”表示默认企业项目。若需要查询当前用户所有企业项目绑定的安全组，或者企业项目子账号需要进行安全组列表展示，请传参all_granted_eps。 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListSecurityGroupsResponse> listSecurityGroups(
        ListSecurityGroupsRequest &request
    );
    /// <summary>
    /// 查询子网项目标签
    /// </summary>
    /// <remarks>
    /// 查询租户在指定区域和实例类型的所有标签集合
    /// </remarks>
    std::shared_ptr<ListSubnetTagsResponse> listSubnetTags(
        ListSubnetTagsRequest &request
    );
    /// <summary>
    /// 查询子网列表
    /// </summary>
    /// <remarks>
    /// 查询子网列表
    /// </remarks>
    /// <param name="limit">每页返回的个数 (optional, default to 0)</param>
    /// <param name="marker">分页查询起始的资源id，为空时查询第一页 (optional, default to &quot;&quot;)</param>
    /// <param name="vpcId">按照vpc_id过滤查询  企业项目细粒度授权场景下，该字段必传 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListSubnetsResponse> listSubnets(
        ListSubnetsRequest &request
    );
    /// <summary>
    /// 查询子网资源实例
    /// </summary>
    /// <remarks>
    /// 使用标签过滤实例
    /// </remarks>
    /// <param name="listSubnetsByTagsRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<ListSubnetsByTagsResponse> listSubnetsByTags(
        ListSubnetsByTagsRequest &request
    );
    /// <summary>
    /// 查询对等连接列表
    /// </summary>
    /// <remarks>
    /// 查询提交请求的租户的所有对等连接。根据过滤条件进行过滤。
    /// </remarks>
    /// <param name="limit">每页返回的个数 (optional, default to 0)</param>
    /// <param name="marker">分页查询起始的资源ID，为空时查询第一页 (optional, default to &quot;&quot;)</param>
    /// <param name="id">按照peering_id过滤查询 (optional, default to &quot;&quot;)</param>
    /// <param name="name">功能说明：按照peering_name过查询  取值范围：最大长度不超过64 (optional, default to &quot;&quot;)</param>
    /// <param name="status">根据status进行过滤  - PENDING_ACCEPTANCE：等待接受 - REJECTED：已拒绝。 - EXPIRED：已过期。 - DELETED：已删除。 - ACTIVE：活动的。 (optional, default to &quot;&quot;)</param>
    /// <param name="tenantId">按照项目ID过滤查询 (optional, default to &quot;&quot;)</param>
    /// <param name="vpcId">根据vpc ID过滤查询 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListVpcPeeringsResponse> listVpcPeerings(
        ListVpcPeeringsRequest &request
    );
    /// <summary>
    /// 拒绝对等连接请求
    /// </summary>
    /// <remarks>
    /// 租户A名下的VPC申请和租户B的VPC建立对等连接，需要等待租户B接受该请求。此接口用于租户拒绝其他租户发起的对等连接请求。
    /// </remarks>
    /// <param name="peeringId">对等连接ID</param>
    std::shared_ptr<RejectVpcPeeringResponse> rejectVpcPeering(
        RejectVpcPeeringRequest &request
    );
    /// <summary>
    /// 查询端口
    /// </summary>
    /// <remarks>
    /// 查询单个端口详情。
    /// </remarks>
    /// <param name="portId">端口ID</param>
    std::shared_ptr<ShowPortResponse> showPort(
        ShowPortRequest &request
    );
    /// <summary>
    /// 查询配额
    /// </summary>
    /// <remarks>
    /// 查询单租户在VPC服务下的网络资源配额，包括vpc配额、子网配额、安全组配额、安全组规则配额、弹性公网IP配额，vpn配额等。
    /// </remarks>
    /// <param name="type">功能说明：根据type过滤查询指定类型的配额 取值范围：vpc，subnet，securityGroup，securityGroupRule，publicIp，vpn，vpngw，vpcPeer，firewall，shareBandwidth，shareBandwidthIP，loadbalancer，listener，physicalConnect，virtualInterface，vpcContainRoutetable，routetableContainRoutes (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ShowQuotaResponse> showQuota(
        ShowQuotaRequest &request
    );
    /// <summary>
    /// 查询路由表
    /// </summary>
    /// <remarks>
    /// 查询路由表详情
    /// </remarks>
    /// <param name="routetableId">路由表ID</param>
    std::shared_ptr<ShowRouteTableResponse> showRouteTable(
        ShowRouteTableRequest &request
    );
    /// <summary>
    /// 查询安全组
    /// </summary>
    /// <remarks>
    /// 查询单个安全组详情。
    /// </remarks>
    /// <param name="securityGroupId">安全组ID</param>
    std::shared_ptr<ShowSecurityGroupResponse> showSecurityGroup(
        ShowSecurityGroupRequest &request
    );
    /// <summary>
    /// 查询安全组规则
    /// </summary>
    /// <remarks>
    /// 查询单个安全组规则详情
    /// </remarks>
    /// <param name="securityGroupRuleId">安全组规则ID</param>
    std::shared_ptr<ShowSecurityGroupRuleResponse> showSecurityGroupRule(
        ShowSecurityGroupRuleRequest &request
    );
    /// <summary>
    /// 查询子网
    /// </summary>
    /// <remarks>
    /// 查询子网详情。
    /// </remarks>
    /// <param name="subnetId">子网ID</param>
    std::shared_ptr<ShowSubnetResponse> showSubnet(
        ShowSubnetRequest &request
    );
    /// <summary>
    /// 查询子网资源标签
    /// </summary>
    /// <remarks>
    /// 查询指定子网实例的标签信息。
    /// </remarks>
    /// <param name="subnetId">子网ID</param>
    std::shared_ptr<ShowSubnetTagsResponse> showSubnetTags(
        ShowSubnetTagsRequest &request
    );
    /// <summary>
    /// 查询对等连接
    /// </summary>
    /// <remarks>
    /// 查询对等连接详情。
    /// </remarks>
    /// <param name="peeringId">对等连接ID</param>
    std::shared_ptr<ShowVpcPeeringResponse> showVpcPeering(
        ShowVpcPeeringRequest &request
    );
    /// <summary>
    /// 更新端口
    /// </summary>
    /// <remarks>
    /// 更新端口。
    /// </remarks>
    /// <param name="portId">端口ID</param>
    /// <param name="port">更新端口对象</param>
    std::shared_ptr<UpdatePortResponse> updatePort(
        UpdatePortRequest &request
    );
    /// <summary>
    /// 更新路由表
    /// </summary>
    /// <remarks>
    /// 更新路由表，包括可以更新路由表的名称，描述，以及新增、更新、删除路由条目
    /// </remarks>
    /// <param name="routetableId">路由表ID</param>
    /// <param name="routetable">更新路由表对象，参见UpdateRouteTableReq对象</param>
    std::shared_ptr<UpdateRouteTableResponse> updateRouteTable(
        UpdateRouteTableRequest &request
    );
    /// <summary>
    /// 更新子网
    /// </summary>
    /// <remarks>
    /// 更新子网。
    /// </remarks>
    /// <param name="vpcId">子网对应的vpc_id</param>
    /// <param name="subnetId">子网ID</param>
    /// <param name="subnet">更新子网对象</param>
    std::shared_ptr<UpdateSubnetResponse> updateSubnet(
        UpdateSubnetRequest &request
    );
    /// <summary>
    /// 更新对等连接
    /// </summary>
    /// <remarks>
    /// 更新对等连接。
    /// </remarks>
    /// <param name="peeringId">对等连接ID</param>
    /// <param name="peering">更新peering对象</param>
    std::shared_ptr<UpdateVpcPeeringResponse> updateVpcPeering(
        UpdateVpcPeeringRequest &request
    );
    /// <summary>
    /// 申请私有IP
    /// </summary>
    /// <remarks>
    /// 申请私有IP。
    /// </remarks>
    /// <param name="privateips">申请私有IP对象</param>
    std::shared_ptr<CreatePrivateipResponse> createPrivateip(
        CreatePrivateipRequest &request
    );
    /// <summary>
    /// 删除私有IP
    /// </summary>
    /// <remarks>
    /// 删除私有IP。
    /// </remarks>
    /// <param name="privateipId">私有IP ID</param>
    std::shared_ptr<DeletePrivateipResponse> deletePrivateip(
        DeletePrivateipRequest &request
    );
    /// <summary>
    /// 查询私有IP列表
    /// </summary>
    /// <remarks>
    /// 查询指定子网下的私有IP列表。
    /// </remarks>
    /// <param name="subnetId">私有IP所在子网的唯一标识</param>
    /// <param name="limit">每页返回的个数 (optional, default to 0)</param>
    /// <param name="marker">分页查询起始的资源id，为空时查询第一页 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListPrivateipsResponse> listPrivateips(
        ListPrivateipsRequest &request
    );
    /// <summary>
    /// 查询网络IP使用情况
    /// </summary>
    /// <remarks>
    /// 显示一个指定网络中的IPv4地址使用情况。 包括此网络中的IP总数以及已用IP总数，以及网络下每一个子网的IP地址总数和可用IP地址总数。  &gt; 须知  - 系统预留地址指的是子网的第1个以及最后4个地址，一般用于网关、DHCP等服务。 - 这里以及下文描述的IP地址总数、已用IP地址总数不包含系统预留地址。 - 在分配IP时，用户可以指定系统预留的IP地址。但是不论IP是如何分配的，只要是处于系统预留IP地址段的IP均不会被统计到已用IP地址数目和IP地址总数中。
    /// </remarks>
    /// <param name="networkId">网络ID</param>
    std::shared_ptr<ShowNetworkIpAvailabilitiesResponse> showNetworkIpAvailabilities(
        ShowNetworkIpAvailabilitiesRequest &request
    );
    /// <summary>
    /// 查询私有IP
    /// </summary>
    /// <remarks>
    /// 指定ID查询私有IP。
    /// </remarks>
    /// <param name="privateipId">私有IP ID</param>
    std::shared_ptr<ShowPrivateipResponse> showPrivateip(
        ShowPrivateipRequest &request
    );
    /// <summary>
    /// 创建安全组
    /// </summary>
    /// <remarks>
    /// 创建安全组
    /// </remarks>
    /// <param name="securityGroup">安全组对象</param>
    std::shared_ptr<NeutronCreateSecurityGroupResponse> neutronCreateSecurityGroup(
        NeutronCreateSecurityGroupRequest &request
    );
    /// <summary>
    /// 创建安全组规则
    /// </summary>
    /// <remarks>
    /// 创建安全组规则
    /// </remarks>
    /// <param name="securityGroupRule">安全组规则对象</param>
    std::shared_ptr<NeutronCreateSecurityGroupRuleResponse> neutronCreateSecurityGroupRule(
        NeutronCreateSecurityGroupRuleRequest &request
    );
    /// <summary>
    /// 删除安全组
    /// </summary>
    /// <remarks>
    /// 删除安全组
    /// </remarks>
    /// <param name="securityGroupId">安全组ID</param>
    std::shared_ptr<NeutronDeleteSecurityGroupResponse> neutronDeleteSecurityGroup(
        NeutronDeleteSecurityGroupRequest &request
    );
    /// <summary>
    /// 删除安全组规则
    /// </summary>
    /// <remarks>
    /// 删除安全组规则
    /// </remarks>
    /// <param name="securityGroupRuleId">安全组规则ID</param>
    std::shared_ptr<NeutronDeleteSecurityGroupRuleResponse> neutronDeleteSecurityGroupRule(
        NeutronDeleteSecurityGroupRuleRequest &request
    );
    /// <summary>
    /// 查询安全组规则列表
    /// </summary>
    /// <remarks>
    /// 查询提交请求的租户有权限查看的所有安全组规则。单次查询最多返回2000条数据，超过2000后会返回分页标记。分页查询请参考分页查询
    /// </remarks>
    /// <param name="limit">每页返回的个数 (optional, default to 0)</param>
    /// <param name="marker">分页查询起始的资源ID，为空时查询第一页 (optional, default to &quot;&quot;)</param>
    /// <param name="id">按照安全组规则对应的id过滤查询结果 (optional, default to &quot;&quot;)</param>
    /// <param name="direction">按照安全组规则的方向过滤查询结果，支持ingress和egress进行过滤 (optional, default to &quot;&quot;)</param>
    /// <param name="protocol">按照安全组规则的IP协议过滤查询结果 (optional, default to &quot;&quot;)</param>
    /// <param name="ethertype">按照网络类型过滤查询结果，支持IPv4或者IPv6 (optional, default to &quot;&quot;)</param>
    /// <param name="description">按照安全组规则的描述过滤查询结果 (optional, default to &quot;&quot;)</param>
    /// <param name="remoteIpPrefix">按照与此安全组规则匹配的远端IP网段过滤查询结果 (optional, default to &quot;&quot;)</param>
    /// <param name="remoteGroupId">按照与此安全组规则关联的远端安全组ID过滤查询结果 (optional, default to &quot;&quot;)</param>
    /// <param name="securityGroupId">按照与此安全组规则所属的安全组ID过滤查询结果 (optional, default to &quot;&quot;)</param>
    /// <param name="portRangeMax">按照最大端口过滤查询结果 (optional, default to &quot;&quot;)</param>
    /// <param name="portRangeMin">按照最小端口过滤查询结果 (optional, default to &quot;&quot;)</param>
    /// <param name="tenantId">按照安全组规则所属的项目ID过滤查询结果 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<NeutronListSecurityGroupRulesResponse> neutronListSecurityGroupRules(
        NeutronListSecurityGroupRulesRequest &request
    );
    /// <summary>
    /// 查询安全组列表
    /// </summary>
    /// <remarks>
    /// 查询提交请求租户的所有安全组，单次查询最多返回2000条数据，超过2000后会返回分页标记。分页查询请参考分页查询 。
    /// </remarks>
    /// <param name="limit">每页返回的个数 (optional, default to 0)</param>
    /// <param name="marker">分页查询起始的资源ID，为空时查询第一页 (optional, default to &quot;&quot;)</param>
    /// <param name="id">按照安全组对应的ID过滤查询 (optional, default to &quot;&quot;)</param>
    /// <param name="name">按照安全组的名称过滤查询 (optional, default to &quot;&quot;)</param>
    /// <param name="description">按照安全组的描述过滤查询 (optional, default to &quot;&quot;)</param>
    /// <param name="tenantId">按照安全组所属的项目ID过滤查询 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<NeutronListSecurityGroupsResponse> neutronListSecurityGroups(
        NeutronListSecurityGroupsRequest &request
    );
    /// <summary>
    /// 查询安全组
    /// </summary>
    /// <remarks>
    /// 查询安全组详情
    /// </remarks>
    /// <param name="securityGroupId">安全组ID</param>
    std::shared_ptr<NeutronShowSecurityGroupResponse> neutronShowSecurityGroup(
        NeutronShowSecurityGroupRequest &request
    );
    /// <summary>
    /// 查询安全组规则
    /// </summary>
    /// <remarks>
    /// 查询安全组规则详情。
    /// </remarks>
    /// <param name="securityGroupRuleId">安全组规则ID</param>
    std::shared_ptr<NeutronShowSecurityGroupRuleResponse> neutronShowSecurityGroupRule(
        NeutronShowSecurityGroupRuleRequest &request
    );
    /// <summary>
    /// 更新安全组
    /// </summary>
    /// <remarks>
    /// 更新安全组
    /// </remarks>
    /// <param name="securityGroupId">安全组ID</param>
    /// <param name="securityGroup">安全组</param>
    std::shared_ptr<NeutronUpdateSecurityGroupResponse> neutronUpdateSecurityGroup(
        NeutronUpdateSecurityGroupRequest &request
    );
    /// <summary>
    /// 插入网络ACL规则
    /// </summary>
    /// <remarks>
    /// 插入一条网络ACL规则到某一网络ACL策略中。
    /// </remarks>
    /// <param name="firewallPolicyId">网络ACL防火墙策略ID</param>
    /// <param name="insertFirewallRule">插入ACL规则请求体</param>
    std::shared_ptr<NeutronAddFirewallRuleResponse> neutronAddFirewallRule(
        NeutronAddFirewallRuleRequest &request
    );
    /// <summary>
    /// 创建网络ACL组
    /// </summary>
    /// <remarks>
    /// 创建网络ACL组
    /// </remarks>
    /// <param name="firewallGroup">firewall group对象</param>
    std::shared_ptr<NeutronCreateFirewallGroupResponse> neutronCreateFirewallGroup(
        NeutronCreateFirewallGroupRequest &request
    );
    /// <summary>
    /// 创建网络ACL策略
    /// </summary>
    /// <remarks>
    /// 创建网络ACL策略。
    /// </remarks>
    /// <param name="firewallPolicy">firewall policy对象</param>
    std::shared_ptr<NeutronCreateFirewallPolicyResponse> neutronCreateFirewallPolicy(
        NeutronCreateFirewallPolicyRequest &request
    );
    /// <summary>
    /// 创建网络ACL规则
    /// </summary>
    /// <remarks>
    /// 创建网络ACL规则。
    /// </remarks>
    /// <param name="firewallRule">firewall rule对象</param>
    std::shared_ptr<NeutronCreateFirewallRuleResponse> neutronCreateFirewallRule(
        NeutronCreateFirewallRuleRequest &request
    );
    /// <summary>
    /// 删除网络ACL组
    /// </summary>
    /// <remarks>
    /// 删除网络ACL组
    /// </remarks>
    /// <param name="firewallGroupId">网络ACL防火墙组ID</param>
    std::shared_ptr<NeutronDeleteFirewallGroupResponse> neutronDeleteFirewallGroup(
        NeutronDeleteFirewallGroupRequest &request
    );
    /// <summary>
    /// 删除网络ACL策略
    /// </summary>
    /// <remarks>
    /// 删除网络ACL策略。
    /// </remarks>
    /// <param name="firewallPolicyId">网络ACL防火墙策略ID</param>
    std::shared_ptr<NeutronDeleteFirewallPolicyResponse> neutronDeleteFirewallPolicy(
        NeutronDeleteFirewallPolicyRequest &request
    );
    /// <summary>
    /// 删除网络ACL规则
    /// </summary>
    /// <remarks>
    /// 删除网络ACL规则。
    /// </remarks>
    /// <param name="firewallRuleId">网络ACL防火墙规则ID</param>
    std::shared_ptr<NeutronDeleteFirewallRuleResponse> neutronDeleteFirewallRule(
        NeutronDeleteFirewallRuleRequest &request
    );
    /// <summary>
    /// 查询所有网络ACL组
    /// </summary>
    /// <remarks>
    /// 查询提交请求的租户有权限操作的所有网络ACL组信息。单次查询最多返回2000条数据，超过2000后会返回分页标记。
    /// </remarks>
    /// <param name="marker">分页查询起始的资源ID，为空时查询第一页 (optional, default to &quot;&quot;)</param>
    /// <param name="limit">每页返回的个数 (optional, default to 0)</param>
    /// <param name="id">使用id过滤网络ACL组 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="name">使用name过滤ACL组 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="description">使用description过滤ACL组 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="ingressFirewallPolicyId">使用入方向的网络ACL策略ID过滤网络ACL组 (optional, default to &quot;&quot;)</param>
    /// <param name="egressFirewallPolicyId">使用出方向的网络ACL策略过滤查询网络ACL组 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<NeutronListFirewallGroupsResponse> neutronListFirewallGroups(
        NeutronListFirewallGroupsRequest &request
    );
    /// <summary>
    /// 查询所有网络ACL策略
    /// </summary>
    /// <remarks>
    /// 查询提交请求的租户有权限操作的所有网络ACL策略信息。单次查询最多返回2000条数据，超过2000后会返回分页标记。
    /// </remarks>
    /// <param name="limit">每页返回的个数 (optional, default to 0)</param>
    /// <param name="marker">分页查询起始的资源ID，为空时查询第一页 (optional, default to &quot;&quot;)</param>
    /// <param name="id">使用网络ACL策略ID过滤网络ACL策略 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="name">使用name过滤网络ACL策略 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="description">使用网络ACL策略描述过滤查询网络ACL策略 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="tenantId">使用tenant_id过滤查询网络ACL策略 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<NeutronListFirewallPoliciesResponse> neutronListFirewallPolicies(
        NeutronListFirewallPoliciesRequest &request
    );
    /// <summary>
    /// 查询所有网络ACL规则
    /// </summary>
    /// <remarks>
    /// 查询提交请求的租户有权限操作的所有网络ACL规则信息。单次查询最多返回2000条数据，超过2000后会返回分页标记。
    /// </remarks>
    /// <param name="marker">分页查询起始的资源ID，为空时查询第一页 (optional, default to &quot;&quot;)</param>
    /// <param name="limit">每页返回的个数 (optional, default to 0)</param>
    /// <param name="id">使用网络ACL规则ID过滤网络ACL规则 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="name">使用网络ACL规则name过滤网络ACL规则 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="description">使用网络ACL规则的description过滤网络ACL规则 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="action">使用action过滤查询网络ACL规则 (optional, default to &quot;&quot;)</param>
    /// <param name="tenantId">使用tenant_id过滤查询网络ACL规则 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<NeutronListFirewallRulesResponse> neutronListFirewallRules(
        NeutronListFirewallRulesRequest &request
    );
    /// <summary>
    /// 移除网络ACL规则
    /// </summary>
    /// <remarks>
    /// 从某一网络ACL策略中移除一条网络ACL规则。
    /// </remarks>
    /// <param name="firewallPolicyId">网络ACL防火墙策略ID</param>
    /// <param name="removeFirewallRule">移除ACL规则请求体</param>
    std::shared_ptr<NeutronRemoveFirewallRuleResponse> neutronRemoveFirewallRule(
        NeutronRemoveFirewallRuleRequest &request
    );
    /// <summary>
    /// 查询特定网络ACL组详情
    /// </summary>
    /// <remarks>
    /// 查询特定网络ACL组详情。
    /// </remarks>
    /// <param name="firewallGroupId">网络ACL防火墙组ID</param>
    std::shared_ptr<NeutronShowFirewallGroupResponse> neutronShowFirewallGroup(
        NeutronShowFirewallGroupRequest &request
    );
    /// <summary>
    /// 查询特定网络ACL策略详情
    /// </summary>
    /// <remarks>
    /// 查询特定网络ACL策略详情。
    /// </remarks>
    /// <param name="firewallPolicyId">网络ACL防火墙策略ID</param>
    std::shared_ptr<NeutronShowFirewallPolicyResponse> neutronShowFirewallPolicy(
        NeutronShowFirewallPolicyRequest &request
    );
    /// <summary>
    /// 查询特定网络ACL规则
    /// </summary>
    /// <remarks>
    /// 查询特定网络ACL规则。
    /// </remarks>
    /// <param name="firewallRuleId">网络ACL规则ID</param>
    std::shared_ptr<NeutronShowFirewallRuleResponse> neutronShowFirewallRule(
        NeutronShowFirewallRuleRequest &request
    );
    /// <summary>
    /// 更新网络ACL组
    /// </summary>
    /// <remarks>
    /// 更新网络ACL组。
    /// </remarks>
    /// <param name="firewallGroupId">网络ACL防火墙组ID</param>
    /// <param name="firewallGroup">firewall group对象</param>
    std::shared_ptr<NeutronUpdateFirewallGroupResponse> neutronUpdateFirewallGroup(
        NeutronUpdateFirewallGroupRequest &request
    );
    /// <summary>
    /// 更新网络ACL策略
    /// </summary>
    /// <remarks>
    /// 更新网络ACL策略。
    /// </remarks>
    /// <param name="firewallPolicyId">网络ACL防火墙策略ID</param>
    /// <param name="firewallPolicy">firewall policy对象</param>
    std::shared_ptr<NeutronUpdateFirewallPolicyResponse> neutronUpdateFirewallPolicy(
        NeutronUpdateFirewallPolicyRequest &request
    );
    /// <summary>
    /// 更新网络ACL规则
    /// </summary>
    /// <remarks>
    /// 更新网络ACL规则。
    /// </remarks>
    /// <param name="firewallRuleId">网络ACL防火墙规则ID</param>
    /// <param name="firewallRule">firewall rule对象</param>
    std::shared_ptr<NeutronUpdateFirewallRuleResponse> neutronUpdateFirewallRule(
        NeutronUpdateFirewallRuleRequest &request
    );
    /// <summary>
    /// 批量创建VPC资源标签
    /// </summary>
    /// <remarks>
    /// 为指定的VPC资源实例批量添加标签。 此接口为幂等接口：创建时如果请求体中存在重复key则报错。创建时，不允许设置重复key数据，如果数据库已存在该key，就覆盖value的值。
    /// </remarks>
    /// <param name="vpcId">功能说明：虚拟私有云唯一标识 取值范围：合法UUID 约束：ID对应的VPC必须存在</param>
    /// <param name="batchCreateVpcTagsRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<BatchCreateVpcTagsResponse> batchCreateVpcTags(
        BatchCreateVpcTagsRequest &request
    );
    /// <summary>
    /// 批量删除VPC资源标签
    /// </summary>
    /// <remarks>
    /// 为指定的VPC资源实例批量删除标签。 此接口为幂等接口：删除时，如果删除的标签不存在，默认处理成功；删除时不对标签字符集范围做校验。删除时tags结构体不能缺失，key不能为空，或者空字符串。
    /// </remarks>
    /// <param name="vpcId">功能说明：虚拟私有云唯一标识 取值范围：合法UUID 约束：ID对应的VPC必须存在</param>
    /// <param name="batchDeleteVpcTagsRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<BatchDeleteVpcTagsResponse> batchDeleteVpcTags(
        BatchDeleteVpcTagsRequest &request
    );
    /// <summary>
    /// 创建VPC
    /// </summary>
    /// <remarks>
    /// 创建虚拟私有云。
    /// </remarks>
    /// <param name="vpc">创建VPC对象</param>
    std::shared_ptr<CreateVpcResponse> createVpc(
        CreateVpcRequest &request
    );
    /// <summary>
    /// 创建VPC资源标签
    /// </summary>
    /// <remarks>
    /// 给指定VPC资源实例增加标签信息 此接口为幂等接口：创建时，如果创建的标签已经存在（key相同），则覆盖。
    /// </remarks>
    /// <param name="vpcId">功能说明：虚拟私有云唯一标识 取值范围：合法UUID 约束：ID对应的VPC必须存在</param>
    /// <param name="createVpcResourceTagRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<CreateVpcResourceTagResponse> createVpcResourceTag(
        CreateVpcResourceTagRequest &request
    );
    /// <summary>
    /// 创建VPC路由
    /// </summary>
    /// <remarks>
    /// 创建路由
    /// </remarks>
    /// <param name="route">route对象，必选字段：destination、nexthop、type、vpc_id。</param>
    std::shared_ptr<CreateVpcRouteResponse> createVpcRoute(
        CreateVpcRouteRequest &request
    );
    /// <summary>
    /// 删除VPC
    /// </summary>
    /// <remarks>
    /// 删除虚拟私有云。
    /// </remarks>
    /// <param name="vpcId">虚拟私有云ID</param>
    std::shared_ptr<DeleteVpcResponse> deleteVpc(
        DeleteVpcRequest &request
    );
    /// <summary>
    /// 删除VPC路由
    /// </summary>
    /// <remarks>
    /// 删除路由
    /// </remarks>
    /// <param name="routeId">路由ID</param>
    std::shared_ptr<DeleteVpcRouteResponse> deleteVpcRoute(
        DeleteVpcRouteRequest &request
    );
    /// <summary>
    /// 删除VPC资源标签
    /// </summary>
    /// <remarks>
    /// 删除指定VPC资源实例的标签信息 该接口为幂等接口：删除的key不存在报404，Key不能为空或者空字符串
    /// </remarks>
    /// <param name="vpcId">功能说明：虚拟私有云唯一标识 取值范围：合法UUID 约束：ID对应的VPC必须存在</param>
    /// <param name="key">功能说明：标签键</param>
    std::shared_ptr<DeleteVpcTagResponse> deleteVpcTag(
        DeleteVpcTagRequest &request
    );
    /// <summary>
    /// 查询VPC路由列表
    /// </summary>
    /// <remarks>
    /// 查询提交请求的租户的所有路由列表，并根据过滤条件进行过滤。
    /// </remarks>
    /// <param name="limit">每页返回的个数 (optional, default to 0)</param>
    /// <param name="marker">分页查询起始的资源ID，为空时查询第一页 (optional, default to &quot;&quot;)</param>
    /// <param name="id">按照routes_id过滤查询 (optional, default to &quot;&quot;)</param>
    /// <param name="type">功能说明：按照路由类型过滤查询  取值范围：peering (optional, default to &quot;&quot;)</param>
    /// <param name="vpcId">按照vpc_id过滤查询 (optional, default to &quot;&quot;)</param>
    /// <param name="destination">按照路由目的地址CIDR过滤查询 (optional, default to &quot;&quot;)</param>
    /// <param name="tenantId">按照项目ID过滤查询 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListVpcRoutesResponse> listVpcRoutes(
        ListVpcRoutesRequest &request
    );
    /// <summary>
    /// 查询VPC项目标签
    /// </summary>
    /// <remarks>
    /// 查询租户在指定区域和实例类型的所有标签集合
    /// </remarks>
    std::shared_ptr<ListVpcTagsResponse> listVpcTags(
        ListVpcTagsRequest &request
    );
    /// <summary>
    /// 查询VPC列表
    /// </summary>
    /// <remarks>
    /// 查询虚拟私有云列表。
    /// </remarks>
    /// <param name="limit">每页返回的个数 (optional, default to 0)</param>
    /// <param name="marker">分页查询起始的资源ID，为空时查询第一页 (optional, default to &quot;&quot;)</param>
    /// <param name="id">功能说明：虚拟私有云ID。可以使用该字段过滤某个ID的虚拟私有云。 (optional, default to &quot;&quot;)</param>
    /// <param name="enterpriseProjectId">功能说明：企业项目ID。可以使用该字段过滤某个企业项目下的虚拟私有云。若未传值则默认返回所有企业项目绑定的虚拟私有云。  取值范围：最大长度36字节，带“-”连字符的UUID格式，或者是字符串“0”。“0”表示默认企业项目。若需要查询当前用户所有企业项目绑定的虚拟私有云，请传参all_granted_eps。 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListVpcsResponse> listVpcs(
        ListVpcsRequest &request
    );
    /// <summary>
    /// 查询VPC资源实例
    /// </summary>
    /// <remarks>
    /// 使用标签过滤实例。
    /// </remarks>
    /// <param name="listVpcsByTagsRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<ListVpcsByTagsResponse> listVpcsByTags(
        ListVpcsByTagsRequest &request
    );
    /// <summary>
    /// 查询VPC
    /// </summary>
    /// <remarks>
    /// 查询虚拟私有云。
    /// </remarks>
    /// <param name="vpcId">虚拟私有云ID</param>
    std::shared_ptr<ShowVpcResponse> showVpc(
        ShowVpcRequest &request
    );
    /// <summary>
    /// 查询VPC路由
    /// </summary>
    /// <remarks>
    /// 查询路由详情
    /// </remarks>
    /// <param name="routeId">路由ID</param>
    std::shared_ptr<ShowVpcRouteResponse> showVpcRoute(
        ShowVpcRouteRequest &request
    );
    /// <summary>
    /// 查询VPC资源标签
    /// </summary>
    /// <remarks>
    /// 查询指定VPC实例的标签信息
    /// </remarks>
    /// <param name="vpcId">功能说明：虚拟私有云唯一标识 取值范围：合法UUID 约束：ID对应的VPC必须存在</param>
    std::shared_ptr<ShowVpcTagsResponse> showVpcTags(
        ShowVpcTagsRequest &request
    );
    /// <summary>
    /// 更新VPC
    /// </summary>
    /// <remarks>
    /// 更新虚拟私有云。
    /// </remarks>
    /// <param name="vpcId">虚拟私有云ID</param>
    /// <param name="vpc">更新VPC对象</param>
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

