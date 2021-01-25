#ifndef HUAWEICLOUD_SDK_ECS_V2_EcsClient_H_
#define HUAWEICLOUD_SDK_ECS_V2_EcsClient_H_

#include <huaweicloud/ecs/v2/EcsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/ecs/v2/model/AddServerGroupMemberRequest.h>
#include <huaweicloud/ecs/v2/model/AddServerGroupMemberRequestBody.h>
#include <huaweicloud/ecs/v2/model/AddServerGroupMemberResponse.h>
#include <huaweicloud/ecs/v2/model/AttachServerVolumeRequest.h>
#include <huaweicloud/ecs/v2/model/AttachServerVolumeRequestBody.h>
#include <huaweicloud/ecs/v2/model/AttachServerVolumeResponse.h>
#include <huaweicloud/ecs/v2/model/BatchAddServerNicsRequest.h>
#include <huaweicloud/ecs/v2/model/BatchAddServerNicsRequestBody.h>
#include <huaweicloud/ecs/v2/model/BatchAddServerNicsResponse.h>
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
#include <huaweicloud/ecs/v2/model/BatchStartServersRequest.h>
#include <huaweicloud/ecs/v2/model/BatchStartServersRequestBody.h>
#include <huaweicloud/ecs/v2/model/BatchStartServersResponse.h>
#include <huaweicloud/ecs/v2/model/BatchStopServersRequest.h>
#include <huaweicloud/ecs/v2/model/BatchStopServersRequestBody.h>
#include <huaweicloud/ecs/v2/model/BatchStopServersResponse.h>
#include <huaweicloud/ecs/v2/model/ChangeServerOsWithCloudInitRequest.h>
#include <huaweicloud/ecs/v2/model/ChangeServerOsWithCloudInitRequestBody.h>
#include <huaweicloud/ecs/v2/model/ChangeServerOsWithCloudInitResponse.h>
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
#include <huaweicloud/ecs/v2/model/DeleteServersRequest.h>
#include <huaweicloud/ecs/v2/model/DeleteServersRequestBody.h>
#include <huaweicloud/ecs/v2/model/DeleteServersResponse.h>
#include <huaweicloud/ecs/v2/model/DetachServerVolumeRequest.h>
#include <huaweicloud/ecs/v2/model/DetachServerVolumeResponse.h>
#include <huaweicloud/ecs/v2/model/ListFlavorsRequest.h>
#include <huaweicloud/ecs/v2/model/ListFlavorsResponse.h>
#include <huaweicloud/ecs/v2/model/ListResizeFlavorsRequest.h>
#include <huaweicloud/ecs/v2/model/ListResizeFlavorsResponse.h>
#include <huaweicloud/ecs/v2/model/ListServerBlockDevicesRequest.h>
#include <huaweicloud/ecs/v2/model/ListServerBlockDevicesResponse.h>
#include <huaweicloud/ecs/v2/model/ListServerInterfacesRequest.h>
#include <huaweicloud/ecs/v2/model/ListServerInterfacesResponse.h>
#include <huaweicloud/ecs/v2/model/ListServersDetailsRequest.h>
#include <huaweicloud/ecs/v2/model/ListServersDetailsResponse.h>
#include <huaweicloud/ecs/v2/model/NovaAssociateSecurityGroupRequest.h>
#include <huaweicloud/ecs/v2/model/NovaAssociateSecurityGroupRequestBody.h>
#include <huaweicloud/ecs/v2/model/NovaAssociateSecurityGroupResponse.h>
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
#include <huaweicloud/ecs/v2/model/ReinstallServerWithCloudInitRequest.h>
#include <huaweicloud/ecs/v2/model/ReinstallServerWithCloudInitRequestBody.h>
#include <huaweicloud/ecs/v2/model/ReinstallServerWithCloudInitResponse.h>
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
#include <huaweicloud/ecs/v2/model/ShowServerLimitsRequest.h>
#include <huaweicloud/ecs/v2/model/ShowServerLimitsResponse.h>
#include <huaweicloud/ecs/v2/model/ShowServerRemoteConsoleRequest.h>
#include <huaweicloud/ecs/v2/model/ShowServerRemoteConsoleRequestBody.h>
#include <huaweicloud/ecs/v2/model/ShowServerRemoteConsoleResponse.h>
#include <huaweicloud/ecs/v2/model/ShowServerRequest.h>
#include <huaweicloud/ecs/v2/model/ShowServerResponse.h>
#include <huaweicloud/ecs/v2/model/ShowServerTagsRequest.h>
#include <huaweicloud/ecs/v2/model/ShowServerTagsResponse.h>
#include <huaweicloud/ecs/v2/model/UpdateAutoTerminateTimeServerRequest.h>
#include <huaweicloud/ecs/v2/model/UpdateAutoTerminateTimeServerRequestBody.h>
#include <huaweicloud/ecs/v2/model/UpdateAutoTerminateTimeServerResponse.h>
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

    /// <summary>
    /// 云服务器组添加成员
    /// </summary>
    /// <remarks>
    /// 将云服务器加入云服务器组。添加成功后，如果该云服务器组是反亲和性策略的，则该云服务器与云服务器组中的其他成员尽量分散地创建在不同主机上。如果该云服务器时故障域类型的，则该云服务器会拥有故障域属性。
    /// </remarks>
    /// <param name="serverGroupId">云服务器组ID。</param>
    /// <param name="addServerGroupMemberRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<AddServerGroupMemberResponse> addServerGroupMember(
        AddServerGroupMemberRequest &request
    );
    /// <summary>
    /// 弹性云服务器挂载磁盘
    /// </summary>
    /// <remarks>
    /// 把磁盘挂载到弹性云服务器上。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    /// <param name="attachServerVolumeRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<AttachServerVolumeResponse> attachServerVolume(
        AttachServerVolumeRequest &request
    );
    /// <summary>
    /// 批量添加云服务器网卡
    /// </summary>
    /// <remarks>
    /// 给云服务器添加一张或多张网卡。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    /// <param name="batchAddServerNicsRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<BatchAddServerNicsResponse> batchAddServerNics(
        BatchAddServerNicsRequest &request
    );
    /// <summary>
    /// 批量添加云服务器标签
    /// </summary>
    /// <remarks>
    /// - 为指定云服务器批量添加标签。  - 标签管理服务TMS使用该接口批量管理云服务器的标签。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    /// <param name="batchCreateServerTagsRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<BatchCreateServerTagsResponse> batchCreateServerTags(
        BatchCreateServerTagsRequest &request
    );
    /// <summary>
    /// 批量删除云服务器网卡
    /// </summary>
    /// <remarks>
    /// 卸载并删除云服务器中的一张或多张网卡。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    /// <param name="batchDeleteServerNicsRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<BatchDeleteServerNicsResponse> batchDeleteServerNics(
        BatchDeleteServerNicsRequest &request
    );
    /// <summary>
    /// 批量删除云服务器标签
    /// </summary>
    /// <remarks>
    /// - 为指定云服务器批量删除标签。  - 标签管理服务TMS使用该接口批量管理云服务器的标签。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    /// <param name="batchDeleteServerTagsRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<BatchDeleteServerTagsResponse> batchDeleteServerTags(
        BatchDeleteServerTagsRequest &request
    );
    /// <summary>
    /// 批量重启云服务器
    /// </summary>
    /// <remarks>
    /// 根据给定的云服务器ID列表，批量重启云服务器，一次最多可以重启1000台。
    /// </remarks>
    /// <param name="batchRebootServersRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<BatchRebootServersResponse> batchRebootServers(
        BatchRebootServersRequest &request
    );
    /// <summary>
    /// 批量启动云服务器
    /// </summary>
    /// <remarks>
    /// 根据给定的云服务器ID列表，批量启动云服务器，一次最多可以启动1000台。
    /// </remarks>
    /// <param name="batchStartServersRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<BatchStartServersResponse> batchStartServers(
        BatchStartServersRequest &request
    );
    /// <summary>
    /// 批量关闭云服务器
    /// </summary>
    /// <remarks>
    /// 根据给定的云服务器ID列表，批量关闭云服务器，一次最多可以关闭1000台。
    /// </remarks>
    /// <param name="batchStopServersRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<BatchStopServersResponse> batchStopServers(
        BatchStopServersRequest &request
    );
    /// <summary>
    /// 切换弹性云服务器操作系统(安装Cloud init)
    /// </summary>
    /// <remarks>
    /// 切换弹性云服务器操作系统。支持弹性云服务器数据盘不变的情况下，使用新镜像重装系统盘。  调用该接口后，系统将卸载系统盘，然后使用新镜像重新创建系统盘，并挂载至弹性云服务器，实现切换操作系统功能。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    /// <param name="changeServerOsWithCloudInitRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<ChangeServerOsWithCloudInitResponse> changeServerOsWithCloudInit(
        ChangeServerOsWithCloudInitRequest &request
    );
    /// <summary>
    /// 创建云服务器(按需)
    /// </summary>
    /// <remarks>
    /// 创建一台或多台按需付费方式的云服务器。  弹性云服务器的登录鉴权方式包括两种：密钥对、密码。为安全起见，推荐使用密钥对方式。  - 密钥对 密钥对指使用密钥对作为弹性云服务器的鉴权方式。 接口调用方法：使用key_name字段，指定弹性云服务器登录时使用的密钥文件。  - 密码 密码指使用设置初始密码方式作为弹性云服务器的鉴权方式，此时，您可以通过用户名密码方式登录弹性云服务器，Linux操作系统时为root用户的初始密码，Windows操作系统时为Administrator用户的初始密码。  接口调用方法：使用adminPass字段，指定管理员帐号的初始登录密码。对于镜像已安装Cloud-init的Linux云服务器，如果需要使用密文密码，可以使用user_data字段进行密码注入。  &gt; 对于安装Cloud-init镜像的Linux云服务器云主机，若指定user_data字段，则adminPass字段无效。
    /// </remarks>
    /// <param name="createPostPaidServersRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<CreatePostPaidServersResponse> createPostPaidServers(
        CreatePostPaidServersRequest &request
    );
    /// <summary>
    /// 创建云服务器组
    /// </summary>
    /// <remarks>
    /// 创建弹性云服务器组。  与原生的创建云服务器组接口不同之处在于该接口支持企业项目细粒度权限的校验。
    /// </remarks>
    /// <param name="createServerGroupRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<CreateServerGroupResponse> createServerGroup(
        CreateServerGroupRequest &request
    );
    /// <summary>
    /// 创建云服务器
    /// </summary>
    /// <remarks>
    /// 创建一台或多台云服务器。  指该接口兼容《弹性云服务器接口参考》创建云服务器v1的功能，同时合入新功能，支持创建包年/包月的弹性云服务器。  弹性云服务器的登录鉴权方式包括两种：密钥对、密码。为安全起见，推荐使用密钥对方式。  - 密钥对  指使用密钥对作为弹性云服务器的鉴权方式。  接口调用方法：使用key_name字段，指定弹性云服务器登录时使用的密钥文件。  - 密码  指使用设置初始密码方式作为弹性云服务器的鉴权方式，此时，您可以通过用户名密码方式登录弹性云服务器，Linux操作系统时为root用户的初始密码，Windows操作系统时为Administrator用户的初始密码。  接口调用方法：使用adminPass字段，指定管理员帐号的初始登录密码。对于镜像已安装Cloud-init的Linux云服务器，如果需要使用密文密码，可以使用user_data字段进行密码注入。  &gt; 对于安装Cloud-init镜像的Linux云服务器云主机，若指定user_data字段，则adminPass字段无效。
    /// </remarks>
    /// <param name="createServersRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<CreateServersResponse> createServers(
        CreateServersRequest &request
    );
    /// <summary>
    /// 删除云服务器组
    /// </summary>
    /// <remarks>
    /// 删除云服务器组。  与原生的删除云服务器组接口不同之处在于该接口支持企业项目细粒度权限的校验。
    /// </remarks>
    /// <param name="serverGroupId">弹性云服务器组UUID。</param>
    std::shared_ptr<DeleteServerGroupResponse> deleteServerGroup(
        DeleteServerGroupRequest &request
    );
    /// <summary>
    /// 云服务器组删除成员
    /// </summary>
    /// <remarks>
    /// 将弹性云服务器移出云服务器组。移出后，该云服务器与云服务器组中的成员不再遵从反亲和策略。
    /// </remarks>
    /// <param name="serverGroupId">云服务器组ID。</param>
    /// <param name="deleteServerGroupMemberRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<DeleteServerGroupMemberResponse> deleteServerGroupMember(
        DeleteServerGroupMemberRequest &request
    );
    /// <summary>
    /// 删除云服务器指定元数据
    /// </summary>
    /// <remarks>
    /// 删除云服务器指定元数据。
    /// </remarks>
    /// <param name="key">待删除的云服务器metadata键值</param>
    /// <param name="serverId">云服务器ID。</param>
    std::shared_ptr<DeleteServerMetadataResponse> deleteServerMetadata(
        DeleteServerMetadataRequest &request
    );
    /// <summary>
    /// 删除云服务器
    /// </summary>
    /// <remarks>
    /// 根据指定的云服务器ID列表，删除云服务器。  系统支持删除单台云服务器和批量删除多台云服务器操作，批量删除云服务器时，一次最多可以删除1000台。
    /// </remarks>
    /// <param name="deleteServersRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<DeleteServersResponse> deleteServers(
        DeleteServersRequest &request
    );
    /// <summary>
    /// 弹性云服务器卸载磁盘
    /// </summary>
    /// <remarks>
    /// 从弹性云服务器中卸载磁盘。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    /// <param name="volumeId">磁盘ID。</param>
    /// <param name="deleteFlag">是否强制卸载数据盘。  - 是，值为“1”。  - 否，值为“0”。  默认值为0。 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<DetachServerVolumeResponse> detachServerVolume(
        DetachServerVolumeRequest &request
    );
    /// <summary>
    /// 查询规格详情和规格扩展信息列表
    /// </summary>
    /// <remarks>
    /// 查询云服务器规格详情信息和规格扩展信息列表。
    /// </remarks>
    /// <param name="availabilityZone">可用区，需要指定可用区（AZ）的名称或者ID或者code。 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListFlavorsResponse> listFlavors(
        ListFlavorsRequest &request
    );
    /// <summary>
    /// 查询云服务器规格变更支持列表
    /// </summary>
    /// <remarks>
    /// 变更规格时，部分规格的云服务器之间不能互相变更。您可以通过本接口，通过指定弹性云服务器规格，查询该规格可以变更的规格列表。
    /// </remarks>
    /// <param name="instanceUuid">进行规格切换的云服务器ID，UUID格式。 (optional, default to &quot;&quot;)</param>
    /// <param name="limit">单页面可显示的flavor条数最大值，默认是1000。 (optional, default to 0)</param>
    /// <param name="marker">以单页最后一条flavor的ID作为分页标记。 (optional, default to &quot;&quot;)</param>
    /// <param name="sortDir">升序/降序排序，默认值为：asc。  取值范围：  - asc：表示升序。 - desc：表示降序 (optional, default to &quot;&quot;)</param>
    /// <param name="sortKey">排序字段。  key的取值范围：  - flavorid：表示规格ID。 - sort_key的默认值为“flavorid”。 - name：表示规格名称。 - memory_mb：表示内存大小。 - vcpus：表示CPU大小。 - root_gb：表示系统盘大小。 (optional, default to &quot;&quot;)</param>
    /// <param name="sourceFlavorId">进行规格切换的云服务器源规格ID。 (optional, default to &quot;&quot;)</param>
    /// <param name="sourceFlavorName">进行规格切换的云服务器源规格名称。 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListResizeFlavorsResponse> listResizeFlavors(
        ListResizeFlavorsRequest &request
    );
    /// <summary>
    /// 查询弹性云服务器磁盘信息
    /// </summary>
    /// <remarks>
    /// 查询弹性云服务器挂载的磁盘信息。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    std::shared_ptr<ListServerBlockDevicesResponse> listServerBlockDevices(
        ListServerBlockDevicesRequest &request
    );
    /// <summary>
    /// 查询云服务器网卡信息
    /// </summary>
    /// <remarks>
    /// 查询云服务器网卡信息。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    std::shared_ptr<ListServerInterfacesResponse> listServerInterfaces(
        ListServerInterfacesRequest &request
    );
    /// <summary>
    /// 查询云服务器详情列表
    /// </summary>
    /// <remarks>
    /// 根据用户请求条件从数据库筛选、查询所有的弹性云服务器，并关联相关表获取到弹性云服务器的详细信息。  该接口支持查询弹性云服务器计费方式，以及是否被冻结。
    /// </remarks>
    /// <param name="enterpriseProjectId">查询绑定某个企业项目的弹性云服务器。  若需要查询当前用户所有企业项目绑定的弹性云服务，请传参all_granted_eps。 (optional, default to &quot;&quot;)</param>
    /// <param name="flavor">云服务器规格ID,已上线的规格请参见《弹性云服务器用户指南》的“实例和应用场景”章节。 (optional, default to &quot;&quot;)</param>
    /// <param name="ip">IPv4地址过滤结果，匹配规则为模糊匹配。 (optional, default to &quot;&quot;)</param>
    /// <param name="limit">查询返回云服务器当前页面的大小。每页最多返回1000台云服务器的信息。 (optional, default to 0)</param>
    /// <param name="name">云服务器名称，匹配规则为模糊匹配。 (optional, default to &quot;&quot;)</param>
    /// <param name="notTags">查询tag字段中不包含该值的云服务器。 (optional, default to &quot;&quot;)</param>
    /// <param name="offset">页码。 当前页面数，默认为1。  取值大于等于0，取值为0时返回第1页。 (optional, default to 0)</param>
    /// <param name="reservationId">批量创建弹性云服务器时，指定返回的ID，用于查询本次批量创建的弹性云服务器。 (optional, default to &quot;&quot;)</param>
    /// <param name="status">云服务器状态。  取值范围：  ACTIVE， BUILD，DELETED，ERROR，HARD_REBOOT，MIGRATING，REBOOT，RESIZE，REVERT_RESIZE，SHELVED，SHELVED_OFFLOADED，SHUTOFF，UNKNOWN，VERIFY_RESIZE  只有管理员可以使用“deleted”状态过滤查询已经删除的弹性云服务器。 (optional, default to &quot;&quot;)</param>
    /// <param name="tags">查询tag字段中包含该值的云服务器。 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListServersDetailsResponse> listServersDetails(
        ListServersDetailsRequest &request
    );
    /// <summary>
    /// 添加安全组
    /// </summary>
    /// <remarks>
    /// 为弹性云服务器添加一个安全组。  添加多个安全组时，建议最多为弹性云服务器添加5个安全组。
    /// </remarks>
    /// <param name="serverId">弹性云服务器ID。</param>
    /// <param name="novaAssociateSecurityGroupRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<NovaAssociateSecurityGroupResponse> novaAssociateSecurityGroup(
        NovaAssociateSecurityGroupRequest &request
    );
    /// <summary>
    /// 创建和导入SSH密钥
    /// </summary>
    /// <remarks>
    /// 创建SSH密钥，或把公钥导入系统，生成密钥对。  创建SSH密钥成功后，请把响应数据中的私钥内容保存到本地文件，用户使用该私钥登录云服务器云主机。为保证云服务器云主机器安全，私钥数据只能读取一次，请妥善保管。
    /// </remarks>
    /// <param name="novaCreateKeypairRequestBody">This is a auto create Body Object</param>
    /// <param name="openStackAPIVersion">微版本头 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<NovaCreateKeypairResponse> novaCreateKeypair(
        NovaCreateKeypairRequest &request
    );
    /// <summary>
    /// 创建云服务器
    /// </summary>
    /// <remarks>
    /// 创建一台弹性云服务器。  弹性云服务器创建完成后，如需开启自动恢复功能，可以调用配置云服务器自动恢复的接口，具体使用请参见管理云服务器自动恢复动作。  该接口在云服务器创建失败后不支持自动回滚。若需要自动回滚能力，可以调用POST /v1/{project_id}/cloudservers接口，具体使用请参见创建云服务器（按需）。
    /// </remarks>
    /// <param name="novaCreateServersRequestBody">This is a auto create Body Object</param>
    /// <param name="openStackAPIVersion">微版本头 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<NovaCreateServersResponse> novaCreateServers(
        NovaCreateServersRequest &request
    );
    /// <summary>
    /// 删除SSH密钥
    /// </summary>
    /// <remarks>
    /// 根据SSH密钥的名称，删除指定SSH密钥。
    /// </remarks>
    /// <param name="keypairName">密钥名称。</param>
    std::shared_ptr<NovaDeleteKeypairResponse> novaDeleteKeypair(
        NovaDeleteKeypairRequest &request
    );
    /// <summary>
    /// 删除云服务器
    /// </summary>
    /// <remarks>
    /// 删除一台云服务器。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    std::shared_ptr<NovaDeleteServerResponse> novaDeleteServer(
        NovaDeleteServerRequest &request
    );
    /// <summary>
    /// 移除安全组
    /// </summary>
    /// <remarks>
    /// 移除弹性云服务器中的安全组。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    /// <param name="novaDisassociateSecurityGroupRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<NovaDisassociateSecurityGroupResponse> novaDisassociateSecurityGroup(
        NovaDisassociateSecurityGroupRequest &request
    );
    /// <summary>
    /// 查询可用区列表
    /// </summary>
    /// <remarks>
    /// 查询可用域列表。
    /// </remarks>
    std::shared_ptr<NovaListAvailabilityZonesResponse> novaListAvailabilityZones(
        NovaListAvailabilityZonesRequest &request
    );
    /// <summary>
    /// 查询SSH密钥列表
    /// </summary>
    /// <remarks>
    /// 查询SSH密钥信息列表。
    /// </remarks>
    /// <param name="limit">查询返回秘钥数量限制。  在微版本2.35后支持 (optional, default to 0)</param>
    /// <param name="marker">从marker指定的keypair的名称的下一条数据开始查询。  在微版本2.35后支持。 (optional, default to &quot;&quot;)</param>
    /// <param name="openStackAPIVersion">微版本头 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<NovaListKeypairsResponse> novaListKeypairs(
        NovaListKeypairsRequest &request
    );
    /// <summary>
    /// 查询指定云服务器安全组列表
    /// </summary>
    /// <remarks>
    /// 查询指定弹性云服务器的安全组。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    std::shared_ptr<NovaListServerSecurityGroupsResponse> novaListServerSecurityGroups(
        NovaListServerSecurityGroupsRequest &request
    );
    /// <summary>
    /// 查询云服务器详情列表
    /// </summary>
    /// <remarks>
    /// 查询云服务器详情信息列表。
    /// </remarks>
    /// <param name="changesSince">云服务器上次更新状态的时间戳信息。时间戳为UTC格式。 (optional, default to &quot;&quot;)</param>
    /// <param name="flavor">云服务器规格ID。 (optional, default to &quot;&quot;)</param>
    /// <param name="image">镜像ID  在使用image作为条件过滤时，不能同时支持其他过滤条件和分页条件。如果同时指定image及其他条件，则以image条件为准；当条件不含image时，接口功能不受限制。 (optional, default to &quot;&quot;)</param>
    /// <param name="ip">IPv4地址过滤结果，匹配规则为模糊匹配。 (optional, default to &quot;&quot;)</param>
    /// <param name="limit">查询返回云服务器数量限制。 (optional, default to 0)</param>
    /// <param name="marker">从marker指定的云服务器ID的下一条数据开始查询。 (optional, default to &quot;&quot;)</param>
    /// <param name="name">云服务器名称。 (optional, default to &quot;&quot;)</param>
    /// <param name="notTags">查询tag字段中不包含该值的云服务器，值为标签的Key。  &gt; 说明： &gt;  &gt; 系统近期对标签功能进行了升级。如果之前添加的Tag为“Key.Value”的形式，则查询的时候需要使用“Key”来查询。 &gt;  &gt; 例如：之前添加的tag为“a.b”,则升级后，查询时需使用“not-tags&#x3D;a”。 (optional, default to &quot;&quot;)</param>
    /// <param name="reservationId">批量创建弹性云服务器时，指定返回的ID，用于查询本次批量创建的弹性云服务器。 (optional, default to &quot;&quot;)</param>
    /// <param name="sortKey">查询结果按弹性云服务器属性排序，默认排序顺序为created_at逆序。 (optional, default to &quot;&quot;)</param>
    /// <param name="status">云服务器状态。   取值范围： ACTIVE， BUILD，DELETED，ERROR，HARD_REBOOT，MIGRATING，REBOOT，RESIZE，REVERT_RESIZE，SHELVED，SHELVED_OFFLOADED，SHUTOFF，UNKNOWN，VERIFY_RESIZE  直到2.37微版本，非上面范围的status字段将返回空列表，2.38之后的微版本，将返回400错误。 (optional, default to &quot;&quot;)</param>
    /// <param name="tags">查询tag字段中包含该值的云服务器。 (optional, default to &quot;&quot;)</param>
    /// <param name="openStackAPIVersion">微版本头 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<NovaListServersDetailsResponse> novaListServersDetails(
        NovaListServersDetailsRequest &request
    );
    /// <summary>
    /// 查询SSH密钥详情
    /// </summary>
    /// <remarks>
    /// 根据SSH密钥名称查询指定SSH密钥。
    /// </remarks>
    /// <param name="keypairName">密钥名称信息。</param>
    /// <param name="openStackAPIVersion">微版本头 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<NovaShowKeypairResponse> novaShowKeypair(
        NovaShowKeypairRequest &request
    );
    /// <summary>
    /// 查询云服务器详情
    /// </summary>
    /// <remarks>
    /// 根据云服务器ID，查询云服务器的详细信息。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    /// <param name="openStackAPIVersion">微版本头 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<NovaShowServerResponse> novaShowServer(
        NovaShowServerRequest &request
    );
    /// <summary>
    /// 重装弹性云服务器操作系统(安装Cloud-init)
    /// </summary>
    /// <remarks>
    /// 重装弹性云服务器的操作系统。支持弹性云服务器数据盘不变的情况下，使用原镜像重装系统盘。  调用该接口后，系统将卸载系统盘，然后使用原镜像重新创建系统盘，并挂载至弹性云服务器，实现重装操作系统功能。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    /// <param name="reinstallServerWithCloudInitRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<ReinstallServerWithCloudInitResponse> reinstallServerWithCloudInit(
        ReinstallServerWithCloudInitRequest &request
    );
    /// <summary>
    /// 一键重置弹性云服务器密码(企业项目)
    /// </summary>
    /// <remarks>
    /// 重置弹性云服务器管理帐号（root用户或Administrator用户）的密码。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    /// <param name="resetServerPasswordRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<ResetServerPasswordResponse> resetServerPassword(
        ResetServerPasswordRequest &request
    );
    /// <summary>
    /// 变更云服务器规格(按需)
    /// </summary>
    /// <remarks>
    /// 当您创建的弹性云服务器规格无法满足业务需要时，可以变更云服务器规格，升级vCPU、内存。具体接口的使用，请参见本节内容。  变更规格时，部分规格的云服务器之间不能互相变更。  您可以通过接口“/v1/{project_id}/cloudservers/resize_flavors?{instance_uuid,source_flavor_id,source_flavor_name}”查询支持列表。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    /// <param name="resizePostPaidServerRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<ResizePostPaidServerResponse> resizePostPaidServer(
        ResizePostPaidServerRequest &request
    );
    /// <summary>
    /// 变更云服务器规格
    /// </summary>
    /// <remarks>
    /// 变更云服务器规格。  v1.1版本：指该接口兼容v1接口的功能，同时合入新功能，支持变更包年/包月弹性云服务器的规格。  注意事项：  - 该接口可以使用合作伙伴自身的AK/SK或者token调用，也可以用合作伙伴子客户的AK/SK或者token来调用。 - 如果使用AK/SK认证方式，示例代码中region请参考[地区和终端节点](https://developer.huaweicloud.com/endpoint)中“弹性云服务 ECS”下“区域”的内容，，serviceName（英文服务名称缩写）请指定为ECS。 - Endpoint请参考[地区和终端节点](https://developer.huaweicloud.com/endpoint)中“弹性云服务 ECS”下“终端节点（Endpoint）”的内容。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    /// <param name="resizeServerRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<ResizeServerResponse> resizeServer(
        ResizeServerRequest &request
    );
    /// <summary>
    /// 查询是否支持一键重置密码
    /// </summary>
    /// <remarks>
    /// 查询弹性云服务器是否支持一键重置密码。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    std::shared_ptr<ShowResetPasswordFlagResponse> showResetPasswordFlag(
        ShowResetPasswordFlagRequest &request
    );
    /// <summary>
    /// 查询云服务器详情
    /// </summary>
    /// <remarks>
    /// 查询弹性云服务器的详细信息。  该接口支持查询弹性云服务器的计费方式，以及是否被冻结。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    std::shared_ptr<ShowServerResponse> showServer(
        ShowServerRequest &request
    );
    /// <summary>
    /// 查询租户配额
    /// </summary>
    /// <remarks>
    /// 查询租户配额信息。
    /// </remarks>
    std::shared_ptr<ShowServerLimitsResponse> showServerLimits(
        ShowServerLimitsRequest &request
    );
    /// <summary>
    /// 获取VNC远程登录地址
    /// </summary>
    /// <remarks>
    /// 获取弹性云服务器VNC远程登录地址。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    /// <param name="showServerRemoteConsoleRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<ShowServerRemoteConsoleResponse> showServerRemoteConsole(
        ShowServerRemoteConsoleRequest &request
    );
    /// <summary>
    /// 查询云服务器标签
    /// </summary>
    /// <remarks>
    /// - 查询指定云服务器的标签信息。  - 标签管理服务TMS使用该接口查询指定云服务器的全部标签数据。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    std::shared_ptr<ShowServerTagsResponse> showServerTags(
        ShowServerTagsRequest &request
    );
    /// <summary>
    /// 修改云服务器云主机销毁时间
    /// </summary>
    /// <remarks>
    /// 修改按需服务器，设置定时销毁时间。如果设置的销毁时间为空，表示取消销毁时间。  该接口支持企业项目细粒度权限的校验，具体细粒度请参见 ecs:cloudServers:put。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    /// <param name="updateAutoTerminateTimeServerRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<UpdateAutoTerminateTimeServerResponse> updateAutoTerminateTimeServer(
        UpdateAutoTerminateTimeServerRequest &request
    );
    /// <summary>
    /// 修改云服务器
    /// </summary>
    /// <remarks>
    /// 修改云服务器信息，目前支持修改云服务器名称及描述和hostname。
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    /// <param name="updateServerRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<UpdateServerResponse> updateServer(
        UpdateServerRequest &request
    );
    /// <summary>
    /// 更新云服务器元数据
    /// </summary>
    /// <remarks>
    /// 更新云服务器元数据。  - 如果元数据中没有待更新字段，则自动添加该字段。  - 如果元数据中已存在待更新字段，则直接更新字段值。  - 如果元数据中的字段不再请求参数中，则保持不变
    /// </remarks>
    /// <param name="serverId">云服务器ID。</param>
    /// <param name="updateServerMetadataRequestBody">This is a auto create Body Object</param>
    std::shared_ptr<UpdateServerMetadataResponse> updateServerMetadata(
        UpdateServerMetadataRequest &request
    );
    /// <summary>
    /// 查询任务的执行状态
    /// </summary>
    /// <remarks>
    /// 查询Job的执行状态。  对于创建云服务器、删除云服务器、云服务器批量操作和网卡操作等异步API，命令下发后，会返回job_id，通过job_id可以查询任务的执行状态。
    /// </remarks>
    /// <param name="jobId">异步请求的任务ID。</param>
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

