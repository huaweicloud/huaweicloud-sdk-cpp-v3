#ifndef HUAWEICLOUD_SDK_ECS_V2_EcsClient_H_
#define HUAWEICLOUD_SDK_ECS_V2_EcsClient_H_

#include <huaweicloud/ecs/v2/EcsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/ecs/v2/model/AddServerGroupMemberRequest.h>
#include <huaweicloud/ecs/v2/model/AddServerGroupMemberRequestBody.h>
#include <huaweicloud/ecs/v2/model/AddServerGroupMemberResponse.h>
#include <huaweicloud/ecs/v2/model/AssociateServerVirtualIpRequest.h>
#include <huaweicloud/ecs/v2/model/AssociateServerVirtualIpRequestBody.h>
#include <huaweicloud/ecs/v2/model/AssociateServerVirtualIpResponse.h>
#include <huaweicloud/ecs/v2/model/AttachServerVolumeRequest.h>
#include <huaweicloud/ecs/v2/model/AttachServerVolumeRequestBody.h>
#include <huaweicloud/ecs/v2/model/AttachServerVolumeResponse.h>
#include <huaweicloud/ecs/v2/model/BatchAddServerNicsRequest.h>
#include <huaweicloud/ecs/v2/model/BatchAddServerNicsRequestBody.h>
#include <huaweicloud/ecs/v2/model/BatchAddServerNicsResponse.h>
#include <huaweicloud/ecs/v2/model/BatchAttachSharableVolumesRequest.h>
#include <huaweicloud/ecs/v2/model/BatchAttachSharableVolumesRequestBody.h>
#include <huaweicloud/ecs/v2/model/BatchAttachSharableVolumesResponse.h>
#include <huaweicloud/ecs/v2/model/BatchCreateServerTagsRequest.h>
#include <huaweicloud/ecs/v2/model/BatchCreateServerTagsRequestBody.h>
#include <huaweicloud/ecs/v2/model/BatchCreateServerTagsResponse.h>
#include <huaweicloud/ecs/v2/model/BatchDeleteServerNicsRequest.h>
#include <huaweicloud/ecs/v2/model/BatchDeleteServerNicsRequestBody.h>
#include <huaweicloud/ecs/v2/model/BatchDeleteServerNicsResponse.h>
#include <huaweicloud/ecs/v2/model/BatchDeleteServerTagsRequest.h>
#include <huaweicloud/ecs/v2/model/BatchDeleteServerTagsRequestBody.h>
#include <huaweicloud/ecs/v2/model/BatchDeleteServerTagsResponse.h>
#include <huaweicloud/ecs/v2/model/BatchRebootServersRequest.h>
#include <huaweicloud/ecs/v2/model/BatchRebootServersRequestBody.h>
#include <huaweicloud/ecs/v2/model/BatchRebootServersResponse.h>
#include <huaweicloud/ecs/v2/model/BatchResetServersPasswordRequest.h>
#include <huaweicloud/ecs/v2/model/BatchResetServersPasswordRequestBody.h>
#include <huaweicloud/ecs/v2/model/BatchResetServersPasswordResponse.h>
#include <huaweicloud/ecs/v2/model/BatchStartServersRequest.h>
#include <huaweicloud/ecs/v2/model/BatchStartServersRequestBody.h>
#include <huaweicloud/ecs/v2/model/BatchStartServersResponse.h>
#include <huaweicloud/ecs/v2/model/BatchStopServersRequest.h>
#include <huaweicloud/ecs/v2/model/BatchStopServersRequestBody.h>
#include <huaweicloud/ecs/v2/model/BatchStopServersResponse.h>
#include <huaweicloud/ecs/v2/model/BatchUpdateServersNameRequest.h>
#include <huaweicloud/ecs/v2/model/BatchUpdateServersNameRequestBody.h>
#include <huaweicloud/ecs/v2/model/BatchUpdateServersNameResponse.h>
#include <huaweicloud/ecs/v2/model/ChangeServerChargeModeRequest.h>
#include <huaweicloud/ecs/v2/model/ChangeServerChargeModeRequestBody.h>
#include <huaweicloud/ecs/v2/model/ChangeServerChargeModeResponse.h>
#include <huaweicloud/ecs/v2/model/ChangeServerOsWithCloudInitRequest.h>
#include <huaweicloud/ecs/v2/model/ChangeServerOsWithCloudInitRequestBody.h>
#include <huaweicloud/ecs/v2/model/ChangeServerOsWithCloudInitResponse.h>
#include <huaweicloud/ecs/v2/model/ChangeServerOsWithoutCloudInitRequest.h>
#include <huaweicloud/ecs/v2/model/ChangeServerOsWithoutCloudInitRequestBody.h>
#include <huaweicloud/ecs/v2/model/ChangeServerOsWithoutCloudInitResponse.h>
#include <huaweicloud/ecs/v2/model/CreatePostPaidServersRequest.h>
#include <huaweicloud/ecs/v2/model/CreatePostPaidServersRequestBody.h>
#include <huaweicloud/ecs/v2/model/CreatePostPaidServersResponse.h>
#include <huaweicloud/ecs/v2/model/CreateServerGroupRequest.h>
#include <huaweicloud/ecs/v2/model/CreateServerGroupRequestBody.h>
#include <huaweicloud/ecs/v2/model/CreateServerGroupResponse.h>
#include <huaweicloud/ecs/v2/model/CreateServersRequest.h>
#include <huaweicloud/ecs/v2/model/CreateServersRequestBody.h>
#include <huaweicloud/ecs/v2/model/CreateServersResponse.h>
#include <huaweicloud/ecs/v2/model/DeleteServerGroupMemberRequest.h>
#include <huaweicloud/ecs/v2/model/DeleteServerGroupMemberRequestBody.h>
#include <huaweicloud/ecs/v2/model/DeleteServerGroupMemberResponse.h>
#include <huaweicloud/ecs/v2/model/DeleteServerGroupRequest.h>
#include <huaweicloud/ecs/v2/model/DeleteServerGroupResponse.h>
#include <huaweicloud/ecs/v2/model/DeleteServerMetadataRequest.h>
#include <huaweicloud/ecs/v2/model/DeleteServerMetadataResponse.h>
#include <huaweicloud/ecs/v2/model/DeleteServerPasswordRequest.h>
#include <huaweicloud/ecs/v2/model/DeleteServerPasswordResponse.h>
#include <huaweicloud/ecs/v2/model/DeleteServersRequest.h>
#include <huaweicloud/ecs/v2/model/DeleteServersRequestBody.h>
#include <huaweicloud/ecs/v2/model/DeleteServersResponse.h>
#include <huaweicloud/ecs/v2/model/DetachServerVolumeRequest.h>
#include <huaweicloud/ecs/v2/model/DetachServerVolumeResponse.h>
#include <huaweicloud/ecs/v2/model/DisassociateServerVirtualIpRequest.h>
#include <huaweicloud/ecs/v2/model/DisassociateServerVirtualIpRequestBody.h>
#include <huaweicloud/ecs/v2/model/DisassociateServerVirtualIpResponse.h>
#include <huaweicloud/ecs/v2/model/ListFlavorSellPoliciesRequest.h>
#include <huaweicloud/ecs/v2/model/ListFlavorSellPoliciesResponse.h>
#include <huaweicloud/ecs/v2/model/ListFlavorsRequest.h>
#include <huaweicloud/ecs/v2/model/ListFlavorsResponse.h>
#include <huaweicloud/ecs/v2/model/ListResizeFlavorsRequest.h>
#include <huaweicloud/ecs/v2/model/ListResizeFlavorsResponse.h>
#include <huaweicloud/ecs/v2/model/ListServerBlockDevicesRequest.h>
#include <huaweicloud/ecs/v2/model/ListServerBlockDevicesResponse.h>
#include <huaweicloud/ecs/v2/model/ListServerGroupsRequest.h>
#include <huaweicloud/ecs/v2/model/ListServerGroupsResponse.h>
#include <huaweicloud/ecs/v2/model/ListServerInterfacesRequest.h>
#include <huaweicloud/ecs/v2/model/ListServerInterfacesResponse.h>
#include <huaweicloud/ecs/v2/model/ListServerTagsRequest.h>
#include <huaweicloud/ecs/v2/model/ListServerTagsResponse.h>
#include <huaweicloud/ecs/v2/model/ListServersByTagRequest.h>
#include <huaweicloud/ecs/v2/model/ListServersByTagRequestBody.h>
#include <huaweicloud/ecs/v2/model/ListServersByTagResponse.h>
#include <huaweicloud/ecs/v2/model/ListServersDetailsRequest.h>
#include <huaweicloud/ecs/v2/model/ListServersDetailsResponse.h>
#include <huaweicloud/ecs/v2/model/MigrateServerRequest.h>
#include <huaweicloud/ecs/v2/model/MigrateServerRequestBody.h>
#include <huaweicloud/ecs/v2/model/MigrateServerResponse.h>
#include <huaweicloud/ecs/v2/model/NovaAssociateSecurityGroupRequest.h>
#include <huaweicloud/ecs/v2/model/NovaAssociateSecurityGroupRequestBody.h>
#include <huaweicloud/ecs/v2/model/NovaAssociateSecurityGroupResponse.h>
#include <huaweicloud/ecs/v2/model/NovaAttachInterfaceRequest.h>
#include <huaweicloud/ecs/v2/model/NovaAttachInterfaceRequestBody.h>
#include <huaweicloud/ecs/v2/model/NovaAttachInterfaceResponse.h>
#include <huaweicloud/ecs/v2/model/NovaCreateKeypairRequest.h>
#include <huaweicloud/ecs/v2/model/NovaCreateKeypairRequestBody.h>
#include <huaweicloud/ecs/v2/model/NovaCreateKeypairResponse.h>
#include <huaweicloud/ecs/v2/model/NovaCreateServersRequest.h>
#include <huaweicloud/ecs/v2/model/NovaCreateServersRequestBody.h>
#include <huaweicloud/ecs/v2/model/NovaCreateServersResponse.h>
#include <huaweicloud/ecs/v2/model/NovaDeleteKeypairRequest.h>
#include <huaweicloud/ecs/v2/model/NovaDeleteKeypairResponse.h>
#include <huaweicloud/ecs/v2/model/NovaDeleteServerRequest.h>
#include <huaweicloud/ecs/v2/model/NovaDeleteServerResponse.h>
#include <huaweicloud/ecs/v2/model/NovaDisassociateSecurityGroupRequest.h>
#include <huaweicloud/ecs/v2/model/NovaDisassociateSecurityGroupRequestBody.h>
#include <huaweicloud/ecs/v2/model/NovaDisassociateSecurityGroupResponse.h>
#include <huaweicloud/ecs/v2/model/NovaListAvailabilityZonesRequest.h>
#include <huaweicloud/ecs/v2/model/NovaListAvailabilityZonesResponse.h>
#include <huaweicloud/ecs/v2/model/NovaListKeypairsRequest.h>
#include <huaweicloud/ecs/v2/model/NovaListKeypairsResponse.h>
#include <huaweicloud/ecs/v2/model/NovaListServerSecurityGroupsRequest.h>
#include <huaweicloud/ecs/v2/model/NovaListServerSecurityGroupsResponse.h>
#include <huaweicloud/ecs/v2/model/NovaListServersDetailsRequest.h>
#include <huaweicloud/ecs/v2/model/NovaListServersDetailsResponse.h>
#include <huaweicloud/ecs/v2/model/NovaShowKeypairRequest.h>
#include <huaweicloud/ecs/v2/model/NovaShowKeypairResponse.h>
#include <huaweicloud/ecs/v2/model/NovaShowServerRequest.h>
#include <huaweicloud/ecs/v2/model/NovaShowServerResponse.h>
#include <huaweicloud/ecs/v2/model/RegisterServerAutoRecoveryRequest.h>
#include <huaweicloud/ecs/v2/model/RegisterServerAutoRecoveryRequestBody.h>
#include <huaweicloud/ecs/v2/model/RegisterServerAutoRecoveryResponse.h>
#include <huaweicloud/ecs/v2/model/RegisterServerMonitorRequest.h>
#include <huaweicloud/ecs/v2/model/RegisterServerMonitorRequestBody.h>
#include <huaweicloud/ecs/v2/model/RegisterServerMonitorResponse.h>
#include <huaweicloud/ecs/v2/model/ReinstallServerWithCloudInitRequest.h>
#include <huaweicloud/ecs/v2/model/ReinstallServerWithCloudInitRequestBody.h>
#include <huaweicloud/ecs/v2/model/ReinstallServerWithCloudInitResponse.h>
#include <huaweicloud/ecs/v2/model/ReinstallServerWithoutCloudInitRequest.h>
#include <huaweicloud/ecs/v2/model/ReinstallServerWithoutCloudInitRequestBody.h>
#include <huaweicloud/ecs/v2/model/ReinstallServerWithoutCloudInitResponse.h>
#include <huaweicloud/ecs/v2/model/ResetServerPasswordRequest.h>
#include <huaweicloud/ecs/v2/model/ResetServerPasswordRequestBody.h>
#include <huaweicloud/ecs/v2/model/ResetServerPasswordResponse.h>
#include <huaweicloud/ecs/v2/model/ResizePostPaidServerRequest.h>
#include <huaweicloud/ecs/v2/model/ResizePostPaidServerRequestBody.h>
#include <huaweicloud/ecs/v2/model/ResizePostPaidServerResponse.h>
#include <huaweicloud/ecs/v2/model/ResizeServerRequest.h>
#include <huaweicloud/ecs/v2/model/ResizeServerRequestBody.h>
#include <huaweicloud/ecs/v2/model/ResizeServerResponse.h>
#include <huaweicloud/ecs/v2/model/ShowResetPasswordFlagRequest.h>
#include <huaweicloud/ecs/v2/model/ShowResetPasswordFlagResponse.h>
#include <huaweicloud/ecs/v2/model/ShowServerAutoRecoveryRequest.h>
#include <huaweicloud/ecs/v2/model/ShowServerAutoRecoveryResponse.h>
#include <huaweicloud/ecs/v2/model/ShowServerBlockDeviceRequest.h>
#include <huaweicloud/ecs/v2/model/ShowServerBlockDeviceResponse.h>
#include <huaweicloud/ecs/v2/model/ShowServerGroupRequest.h>
#include <huaweicloud/ecs/v2/model/ShowServerGroupResponse.h>
#include <huaweicloud/ecs/v2/model/ShowServerLimitsRequest.h>
#include <huaweicloud/ecs/v2/model/ShowServerLimitsResponse.h>
#include <huaweicloud/ecs/v2/model/ShowServerPasswordRequest.h>
#include <huaweicloud/ecs/v2/model/ShowServerPasswordResponse.h>
#include <huaweicloud/ecs/v2/model/ShowServerRemoteConsoleRequest.h>
#include <huaweicloud/ecs/v2/model/ShowServerRemoteConsoleRequestBody.h>
#include <huaweicloud/ecs/v2/model/ShowServerRemoteConsoleResponse.h>
#include <huaweicloud/ecs/v2/model/ShowServerRequest.h>
#include <huaweicloud/ecs/v2/model/ShowServerResponse.h>
#include <huaweicloud/ecs/v2/model/ShowServerTagsRequest.h>
#include <huaweicloud/ecs/v2/model/ShowServerTagsResponse.h>
#include <huaweicloud/ecs/v2/model/UpdateServerAutoTerminateTimeRequest.h>
#include <huaweicloud/ecs/v2/model/UpdateServerAutoTerminateTimeRequestBody.h>
#include <huaweicloud/ecs/v2/model/UpdateServerAutoTerminateTimeResponse.h>
#include <huaweicloud/ecs/v2/model/UpdateServerBlockDeviceReq.h>
#include <huaweicloud/ecs/v2/model/UpdateServerBlockDeviceRequest.h>
#include <huaweicloud/ecs/v2/model/UpdateServerBlockDeviceResponse.h>
#include <huaweicloud/ecs/v2/model/UpdateServerMetadataRequest.h>
#include <huaweicloud/ecs/v2/model/UpdateServerMetadataRequestBody.h>
#include <huaweicloud/ecs/v2/model/UpdateServerMetadataResponse.h>
#include <huaweicloud/ecs/v2/model/UpdateServerRequest.h>
#include <huaweicloud/ecs/v2/model/UpdateServerRequestBody.h>
#include <huaweicloud/ecs/v2/model/UpdateServerResponse.h>
#include <string>

#include <huaweicloud/ecs/v2/model/ShowJobRequest.h>
#include <huaweicloud/ecs/v2/model/ShowJobResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Ecs::V2::Model;

class HUAWEICLOUD_ECS_V2_EXPORT  EcsClient : public Client
{
public:

    EcsClient();

    virtual ~EcsClient();

    static ClientBuilder<EcsClient> newBuilder();

    // 添加云服务器组成员
    //
    // 将云服务器加入云服务器组。添加成功后，如果该云服务器组是反亲和性策略的，则该云服务器与云服务器组中的其他成员尽量分散地创建在不同主机上。如果该云服务器时故障域类型的，则该云服务器会拥有故障域属性。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddServerGroupMemberResponse> addServerGroupMember(
        AddServerGroupMemberRequest &request
    );
    // 云服务器网卡配置虚拟IP地址
    //
    // 虚拟IP地址用于为网卡提供第二个IP地址，同时支持与多个弹性云服务器的网卡绑定，从而实现多个弹性云服务器之间的高可用性。
    // 
    // 该接口用于给云服务器网卡配置虚拟IP地址：
    // 
    // - 当指定的IP地址是一个不存在的虚拟IP地址时，系统会创建该虚拟IP，并绑定至对应网卡。
    // 
    // - 当指定的IP地址是一个已经创建好的私有IP时，系统会将指定的网卡和虚拟IP绑定。如果该IP的device_owner为空，则仅支持VPC内二三层通信；如果该IP的device_owner为neutron:VIP_PORT，则支持VPC内二三层通信、VPC之间对等连接访问，以及弹性公网IP、VPN、云专线等Internet接入。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociateServerVirtualIpResponse> associateServerVirtualIp(
        AssociateServerVirtualIpRequest &request
    );
    // 弹性云服务器挂载磁盘
    //
    // 把磁盘挂载到弹性云服务器上。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AttachServerVolumeResponse> attachServerVolume(
        AttachServerVolumeRequest &request
    );
    // 批量添加云服务器网卡
    //
    // 给云服务器添加一张或多张网卡。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchAddServerNicsResponse> batchAddServerNics(
        BatchAddServerNicsRequest &request
    );
    // 批量挂载指定共享盘
    //
    // 将指定的共享磁盘一次性挂载到多个弹性云服务器，实现批量挂载。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchAttachSharableVolumesResponse> batchAttachSharableVolumes(
        BatchAttachSharableVolumesRequest &request
    );
    // 批量添加云服务器标签
    //
    // - 为指定云服务器批量添加标签。
    // 
    // - 标签管理服务TMS使用该接口批量管理云服务器的标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateServerTagsResponse> batchCreateServerTags(
        BatchCreateServerTagsRequest &request
    );
    // 批量删除云服务器网卡
    //
    // 卸载并删除云服务器中的一张或多张网卡。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteServerNicsResponse> batchDeleteServerNics(
        BatchDeleteServerNicsRequest &request
    );
    // 批量删除云服务器标签
    //
    // - 为指定云服务器批量删除标签。
    // 
    // - 标签管理服务TMS使用该接口批量管理云服务器的标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteServerTagsResponse> batchDeleteServerTags(
        BatchDeleteServerTagsRequest &request
    );
    // 批量重启云服务器
    //
    // 根据给定的云服务器ID列表，批量重启云服务器，一次最多可以重启1000台。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchRebootServersResponse> batchRebootServers(
        BatchRebootServersRequest &request
    );
    // 批量重置弹性云服务器密码
    //
    // 批量重置弹性云服务器管理帐号（root用户或Administrator用户）的密码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchResetServersPasswordResponse> batchResetServersPassword(
        BatchResetServersPasswordRequest &request
    );
    // 批量启动云服务器
    //
    // 根据给定的云服务器ID列表，批量启动云服务器，一次最多可以启动1000台。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchStartServersResponse> batchStartServers(
        BatchStartServersRequest &request
    );
    // 批量关闭云服务器
    //
    // 根据给定的云服务器ID列表，批量关闭云服务器，一次最多可以关闭1000台。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchStopServersResponse> batchStopServers(
        BatchStopServersRequest &request
    );
    // 批量修改弹性云服务器
    //
    // 批量修改弹性云服务器信息。
    // 当前仅支持批量修改云服务器名称，一次最多可以修改1000台。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpdateServersNameResponse> batchUpdateServersName(
        BatchUpdateServersNameRequest &request
    );
    // 更换云服务器计费模式
    //
    // 更换云服务器的计费模式
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeServerChargeModeResponse> changeServerChargeMode(
        ChangeServerChargeModeRequest &request
    );
    // 切换弹性云服务器操作系统(安装Cloud init)
    //
    // 切换弹性云服务器操作系统。支持弹性云服务器数据盘不变的情况下，使用新镜像重装系统盘。
    // 
    // 调用该接口后，系统将卸载系统盘，然后使用新镜像重新创建系统盘，并挂载至弹性云服务器，实现切换操作系统功能。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeServerOsWithCloudInitResponse> changeServerOsWithCloudInit(
        ChangeServerOsWithCloudInitRequest &request
    );
    // 切换弹性云服务器操作系统(未安装Cloud init)
    //
    // 切换弹性云服务器操作系统。
    // 
    // 该接口支持未安装Cloud-init或Cloudbase-init的镜像使用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeServerOsWithoutCloudInitResponse> changeServerOsWithoutCloudInit(
        ChangeServerOsWithoutCloudInitRequest &request
    );
    // 创建云服务器(按需)
    //
    // 创建一台或多台[按需付费](https://support.huaweicloud.com/productdesc-ecs/ecs_01_0065.html)方式的云服务器。
    // 
    // 弹性云服务器的登录鉴权方式包括两种：密钥对、密码。为安全起见，推荐使用密钥对方式。
    // 
    // - 密钥对
    // 密钥对指使用密钥对作为弹性云服务器的鉴权方式。
    // 接口调用方法：使用key_name字段，指定弹性云服务器登录时使用的密钥文件。
    // 
    // - 密码
    // 密码指使用设置初始密码方式作为弹性云服务器的鉴权方式，此时，您可以通过用户名密码方式登录弹性云服务器，Linux操作系统时为root用户的初始密码，Windows操作系统时为Administrator用户的初始密码。
    // 
    // 接口调用方法：使用adminPass字段，指定管理员帐号的初始登录密码。对于镜像已安装Cloud-init的Linux云服务器，如果需要使用密文密码，可以使用user_data字段进行密码注入。
    // 
    // &gt; 对于安装Cloud-init镜像的Linux云服务器云主机，若指定user_data字段，则adminPass字段无效。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePostPaidServersResponse> createPostPaidServers(
        CreatePostPaidServersRequest &request
    );
    // 创建云服务器组
    //
    // 创建弹性云服务器组。
    // 
    // 与原生的创建云服务器组接口不同之处在于该接口支持企业项目细粒度权限的校验。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateServerGroupResponse> createServerGroup(
        CreateServerGroupRequest &request
    );
    // 创建云服务器
    //
    // 创建一台或多台云服务器。
    // 
    // 指该接口兼容《弹性云服务器接口参考》创建云服务器v1的功能，同时合入新功能，支持创建[包年/包月](https://support.huaweicloud.com/productdesc-ecs/ecs_01_0065.html)的弹性云服务器。
    // 
    // 弹性云服务器的登录鉴权方式包括两种：密钥对、密码。为安全起见，推荐使用密钥对方式。
    // 
    // - 密钥对
    // 
    // 指使用密钥对作为弹性云服务器的鉴权方式。
    // 
    // 接口调用方法：使用key_name字段，指定弹性云服务器登录时使用的密钥文件。
    // 
    // - 密码
    // 
    // 指使用设置初始密码方式作为弹性云服务器的鉴权方式，此时，您可以通过用户名密码方式登录弹性云服务器，Linux操作系统时为root用户的初始密码，Windows操作系统时为Administrator用户的初始密码。
    // 
    // 接口调用方法：使用adminPass字段，指定管理员帐号的初始登录密码。对于镜像已安装Cloud-init的Linux云服务器，如果需要使用密文密码，可以使用user_data字段进行密码注入。
    // 
    // &gt; 对于安装Cloud-init镜像的Linux云服务器云主机，若指定user_data字段，则adminPass字段无效。
    // 
    // 购买操作示例：
    // - [使用API购买ECS过程中常见问题及处理方法](https://support.huaweicloud.com/api-ecs/ecs_04_0007.html)
    // - [获取Token并检验Token的有效期 ](https://support.huaweicloud.com/api-ecs/ecs_04_0008.html)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateServersResponse> createServers(
        CreateServersRequest &request
    );
    // 删除云服务器组
    //
    // 删除云服务器组。
    // 
    // 与原生的删除云服务器组接口不同之处在于该接口支持企业项目细粒度权限的校验。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteServerGroupResponse> deleteServerGroup(
        DeleteServerGroupRequest &request
    );
    // 删除云服务器组成员
    //
    // 将弹性云服务器移出云服务器组。移出后，该云服务器与云服务器组中的成员不再遵从反亲和策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteServerGroupMemberResponse> deleteServerGroupMember(
        DeleteServerGroupMemberRequest &request
    );
    // 删除云服务器指定元数据
    //
    // 删除云服务器指定元数据。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteServerMetadataResponse> deleteServerMetadata(
        DeleteServerMetadataRequest &request
    );
    // 云服务器清除密码(企业项目)
    //
    // 清除Windows云服务器初始安装时系统生成的密码记录。清除密码后，不影响云服务器密码登录功能，但不能再使用获取密码功能来查询该云服务器密码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteServerPasswordResponse> deleteServerPassword(
        DeleteServerPasswordRequest &request
    );
    // 删除云服务器
    //
    // 根据指定的云服务器ID列表，删除云服务器。
    // 
    // 系统支持删除单台云服务器和批量删除多台云服务器操作，批量删除云服务器时，一次最多可以删除1000台。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteServersResponse> deleteServers(
        DeleteServersRequest &request
    );
    // 弹性云服务器卸载磁盘
    //
    // 从弹性云服务器中卸载磁盘。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetachServerVolumeResponse> detachServerVolume(
        DetachServerVolumeRequest &request
    );
    // 云服务器网卡解绑虚拟IP地址
    //
    // 虚拟IP地址用于为网卡提供第二个IP地址，同时支持与多个弹性云服务器的网卡绑定，从而实现多个弹性云服务器之间的高可用性。
    // 
    // 该接口用于解绑定弹性云服务器网卡的虚拟IP地址。解绑后，网卡不会被删除。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisassociateServerVirtualIpResponse> disassociateServerVirtualIp(
        DisassociateServerVirtualIpRequest &request
    );
    // 查询规格销售策略
    //
    // 查询规格销售策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFlavorSellPoliciesResponse> listFlavorSellPolicies(
        ListFlavorSellPoliciesRequest &request
    );
    // 查询规格详情和规格扩展信息列表
    //
    // 查询云服务器规格详情信息和规格扩展信息列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFlavorsResponse> listFlavors(
        ListFlavorsRequest &request
    );
    // 查询云服务器规格变更支持列表
    //
    // 变更规格时，部分规格的云服务器之间不能互相变更。您可以通过本接口，通过指定弹性云服务器规格，查询该规格可以变更的规格列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListResizeFlavorsResponse> listResizeFlavors(
        ListResizeFlavorsRequest &request
    );
    // 查询弹性云服务器磁盘信息
    //
    // 查询弹性云服务器挂载的磁盘信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListServerBlockDevicesResponse> listServerBlockDevices(
        ListServerBlockDevicesRequest &request
    );
    // 查询云服务器组列表
    //
    // 查询弹性云服务器组。
    // 
    // 与原生的创建云服务器组接口不同之处在于该接口支持企业项目细粒度权限的校验。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListServerGroupsResponse> listServerGroups(
        ListServerGroupsRequest &request
    );
    // 查询云服务器网卡信息
    //
    // 查询云服务器网卡信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListServerInterfacesResponse> listServerInterfaces(
        ListServerInterfacesRequest &request
    );
    // 查询项目标签
    //
    // 项目（Project）用于将OpenStack的资源（计算资源、存储资源和网络资源）进行分组和隔离。项目可以是一个部门或者一个项目组。一个帐户中可以创建多个项目。
    // 
    // 该接口用于查询用户在指定项目所使用的全部标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListServerTagsResponse> listServerTags(
        ListServerTagsRequest &request
    );
    // 按标签查询云服务器列表
    //
    // 使用标签过滤弹性云服务器，并返回云服务器使用的所有标签和资源列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListServersByTagResponse> listServersByTag(
        ListServersByTagRequest &request
    );
    // 查询云服务器详情列表
    //
    // 根据用户请求条件从数据库筛选、查询所有的弹性云服务器，并关联相关表获取到弹性云服务器的详细信息。
    // 
    // 该接口支持查询弹性云服务器计费方式，以及是否被冻结。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListServersDetailsResponse> listServersDetails(
        ListServersDetailsRequest &request
    );
    // 冷迁移云服务器
    //
    // - 将部署在专属主机上的弹性云服务器迁移至其他专属主机。
    // - 将部署在专属主机上的弹性云服务器迁移至公共资源池，即不再部署在专属主机上。
    // - 将公共资源池的弹性云服务器迁移至专属主机上，成为专属主机上部署的弹性云服务器。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<MigrateServerResponse> migrateServer(
        MigrateServerRequest &request
    );
    // 添加安全组
    //
    // 为弹性云服务器添加一个安全组。
    // 
    // 添加多个安全组时，建议最多为弹性云服务器添加5个安全组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NovaAssociateSecurityGroupResponse> novaAssociateSecurityGroup(
        NovaAssociateSecurityGroupRequest &request
    );
    // 添加云服务器网卡
    //
    // 给云服务器添加一张网卡。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NovaAttachInterfaceResponse> novaAttachInterface(
        NovaAttachInterfaceRequest &request
    );
    // 创建和导入SSH密钥
    //
    // 创建SSH密钥，或把公钥导入系统，生成密钥对。
    // 
    // 创建SSH密钥成功后，请把响应数据中的私钥内容保存到本地文件，用户使用该私钥登录云服务器云主机。为保证云服务器云主机器安全，私钥数据只能读取一次，请妥善保管。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NovaCreateKeypairResponse> novaCreateKeypair(
        NovaCreateKeypairRequest &request
    );
    // 创建云服务器
    //
    // 创建一台弹性云服务器。
    // 
    // 弹性云服务器创建完成后，如需开启自动恢复功能，可以调用配置云服务器自动恢复的接口，具体使用请参见管理云服务器自动恢复动作。
    // 
    // 该接口在云服务器创建失败后不支持自动回滚。若需要自动回滚能力，可以调用POST /v1/{project_id}/cloudservers接口，具体使用请参见创建云服务器（按需）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NovaCreateServersResponse> novaCreateServers(
        NovaCreateServersRequest &request
    );
    // 删除SSH密钥
    //
    // 根据SSH密钥的名称，删除指定SSH密钥。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NovaDeleteKeypairResponse> novaDeleteKeypair(
        NovaDeleteKeypairRequest &request
    );
    // 删除云服务器
    //
    // 删除一台云服务器。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NovaDeleteServerResponse> novaDeleteServer(
        NovaDeleteServerRequest &request
    );
    // 移除安全组
    //
    // 移除弹性云服务器中的安全组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NovaDisassociateSecurityGroupResponse> novaDisassociateSecurityGroup(
        NovaDisassociateSecurityGroupRequest &request
    );
    // 查询可用区列表
    //
    // 查询可用域列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NovaListAvailabilityZonesResponse> novaListAvailabilityZones(
        NovaListAvailabilityZonesRequest &request
    );
    // 查询SSH密钥列表
    //
    // 查询SSH密钥信息列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NovaListKeypairsResponse> novaListKeypairs(
        NovaListKeypairsRequest &request
    );
    // 查询指定云服务器安全组列表
    //
    // 查询指定弹性云服务器的安全组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NovaListServerSecurityGroupsResponse> novaListServerSecurityGroups(
        NovaListServerSecurityGroupsRequest &request
    );
    // 查询云服务器详情列表
    //
    // 查询云服务器详情信息列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NovaListServersDetailsResponse> novaListServersDetails(
        NovaListServersDetailsRequest &request
    );
    // 查询SSH密钥详情
    //
    // 根据SSH密钥名称查询指定SSH密钥。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NovaShowKeypairResponse> novaShowKeypair(
        NovaShowKeypairRequest &request
    );
    // 查询云服务器详情
    //
    // 根据云服务器ID，查询云服务器的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<NovaShowServerResponse> novaShowServer(
        NovaShowServerRequest &request
    );
    // 管理云服务器自动恢复动作
    //
    // 配置、删除云服务器自动恢复动作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RegisterServerAutoRecoveryResponse> registerServerAutoRecovery(
        RegisterServerAutoRecoveryRequest &request
    );
    // 注册云服务器监控
    //
    // 将云服务器添加到监控表中。
    // 
    // 注册到监控表中的云服务会被ceilometer周期性采集监控数据，包括平台的版本、cpu信息、内存、网卡、磁盘、硬件平台等信息，这些数据上报给云监控。例如SAP云服务器内部的插件会周期性从云监控中查询监控数据，以报表形式呈现给SAP。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RegisterServerMonitorResponse> registerServerMonitor(
        RegisterServerMonitorRequest &request
    );
    // 重装弹性云服务器操作系统(安装Cloud-init)
    //
    // 重装弹性云服务器的操作系统。支持弹性云服务器数据盘不变的情况下，使用原镜像重装系统盘。
    // 
    // 调用该接口后，系统将卸载系统盘，然后使用原镜像重新创建系统盘，并挂载至弹性云服务器，实现重装操作系统功能。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ReinstallServerWithCloudInitResponse> reinstallServerWithCloudInit(
        ReinstallServerWithCloudInitRequest &request
    );
    // 重装弹性云服务器操作系统(未安装Cloud init)
    //
    // 重装弹性云服务器的操作系统。
    // 
    // 该接口支持未安装Cloud-init或Cloudbase-init的镜像。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ReinstallServerWithoutCloudInitResponse> reinstallServerWithoutCloudInit(
        ReinstallServerWithoutCloudInitRequest &request
    );
    // 一键重置弹性云服务器密码(企业项目)
    //
    // 重置弹性云服务器管理帐号（root用户或Administrator用户）的密码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetServerPasswordResponse> resetServerPassword(
        ResetServerPasswordRequest &request
    );
    // 变更云服务器规格(按需)
    //
    // 当您创建的弹性云服务器规格无法满足业务需要时，可以变更云服务器规格，升级vCPU、内存。具体接口的使用，请参见本节内容。
    // 
    // 变更规格时，部分规格的云服务器之间不能互相变更。
    // 
    // 您可以通过接口“/v1/{project_id}/cloudservers/resize_flavors?{instance_uuid,source_flavor_id,source_flavor_name}”查询支持列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResizePostPaidServerResponse> resizePostPaidServer(
        ResizePostPaidServerRequest &request
    );
    // 变更云服务器规格
    //
    // 变更云服务器规格。
    // 
    // v1.1版本：指该接口兼容v1接口的功能，同时合入新功能，支持变更包年/包月弹性云服务器的规格。
    // 
    // 注意事项：
    // 
    // - 该接口可以使用合作伙伴自身的AK/SK或者token调用，也可以用合作伙伴子客户的AK/SK或者token来调用。
    // - 如果使用AK/SK认证方式，示例代码中region请参考[地区和终端节点](https://developer.huaweicloud.com/endpoint)中“弹性云服务 ECS”下“区域”的内容，，serviceName（英文服务名称缩写）请指定为ECS。
    // - Endpoint请参考[地区和终端节点](https://developer.huaweicloud.com/endpoint)中“弹性云服务 ECS”下“终端节点（Endpoint）”的内容。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResizeServerResponse> resizeServer(
        ResizeServerRequest &request
    );
    // 查询是否支持一键重置密码
    //
    // 查询弹性云服务器是否支持一键重置密码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowResetPasswordFlagResponse> showResetPasswordFlag(
        ShowResetPasswordFlagRequest &request
    );
    // 查询云服务器详情
    //
    // 查询弹性云服务器的详细信息。
    // 
    // 该接口支持查询弹性云服务器的计费方式，以及是否被冻结。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowServerResponse> showServer(
        ShowServerRequest &request
    );
    // 查询云服务器是否配置了自动恢复动作
    //
    // 查询云服务器是否配置了自动恢复动作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowServerAutoRecoveryResponse> showServerAutoRecovery(
        ShowServerAutoRecoveryRequest &request
    );
    // 查询弹性云服务器单个磁盘信息
    //
    // 查询弹性云服务器挂载的单个磁盘信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowServerBlockDeviceResponse> showServerBlockDevice(
        ShowServerBlockDeviceRequest &request
    );
    // 查询云服务器组详情
    //
    // 查询弹性云服务器组详情。
    // 
    // 与原生的创建云服务器组接口不同之处在于该接口支持企业项目细粒度权限的校验。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowServerGroupResponse> showServerGroup(
        ShowServerGroupRequest &request
    );
    // 查询租户配额
    //
    // 查询租户配额信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowServerLimitsResponse> showServerLimits(
        ShowServerLimitsRequest &request
    );
    // 云服务器获取密码(企业项目)
    //
    // 当通过支持Cloudbase-init功能的镜像创建Windows云服务器时，获取云服务器初始安装时系统生成的管理员帐户（Administrator帐户或Cloudbase-init设置的帐户）随机密码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowServerPasswordResponse> showServerPassword(
        ShowServerPasswordRequest &request
    );
    // 获取VNC远程登录地址
    //
    // 获取弹性云服务器VNC远程登录地址。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowServerRemoteConsoleResponse> showServerRemoteConsole(
        ShowServerRemoteConsoleRequest &request
    );
    // 查询云服务器标签
    //
    // - 查询指定云服务器的标签信息。
    // 
    // - 标签管理服务TMS使用该接口查询指定云服务器的全部标签数据。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowServerTagsResponse> showServerTags(
        ShowServerTagsRequest &request
    );
    // 修改云服务器
    //
    // 修改云服务器信息，目前支持修改云服务器名称及描述和hostname。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateServerResponse> updateServer(
        UpdateServerRequest &request
    );
    // 修改云服务器销毁时间
    //
    // 修改按需服务器，设置定时销毁时间。如果设置的销毁时间为空，表示取消销毁时间。
    // 
    // 该接口支持企业项目细粒度权限的校验，具体细粒度请参见 ecs:cloudServers:put。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateServerAutoTerminateTimeResponse> updateServerAutoTerminateTime(
        UpdateServerAutoTerminateTimeRequest &request
    );
    // 修改云服务器挂载的单个磁盘信息
    //
    // 修改云服务器云主机挂载的单个磁盘信息。&#39;当前仅支持修改delete_on_termination字段。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateServerBlockDeviceResponse> updateServerBlockDevice(
        UpdateServerBlockDeviceRequest &request
    );
    // 更新云服务器元数据
    //
    // 更新云服务器元数据。
    // 
    // - 如果元数据中没有待更新字段，则自动添加该字段。
    // 
    // - 如果元数据中已存在待更新字段，则直接更新字段值。
    // 
    // - 如果元数据中的字段不再请求参数中，则保持不变
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateServerMetadataResponse> updateServerMetadata(
        UpdateServerMetadataRequest &request
    );

    // 查询任务的执行状态
    //
    // 查询Job的执行状态。
    // 
    // 对于创建云服务器、删除云服务器、云服务器批量操作和网卡操作等异步API，命令下发后，会返回job_id，通过job_id可以查询任务的执行状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobResponse> showJob(
        ShowJobRequest &request
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

template class HUAWEICLOUD_ECS_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Ecs::V2::EcsClient>;

#endif // HUAWEICLOUD_SDK_ECS_V2_EcsClient_H_

