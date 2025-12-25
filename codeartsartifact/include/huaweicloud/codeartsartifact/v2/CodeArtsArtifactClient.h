#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_CodeArtsArtifactClient_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_CodeArtsArtifactClient_H_

#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/codeartsartifact/v2/model/AttentionDO.h>
#include <huaweicloud/codeartsartifact/v2/model/BatchDeleteTrashesRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/BatchDeleteTrashesResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/BatchRestoreRepoRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/BatchRestoreRepoResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/CreateArtifactoryRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/CreateArtifactoryResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/CreateAttentionRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/CreateAttentionResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/CreateDockerRepositoriesRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/CreateDockerRepositoriesResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/CreateDockerRepositoryDO.h>
#include <huaweicloud/codeartsartifact/v2/model/CreateMavenRepoRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/CreateMavenRepoResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/CreateNotMavenRepoDO.h>
#include <huaweicloud/codeartsartifact/v2/model/CreateProjectRelatedRepositoryRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/CreateProjectRelatedRepositoryResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/DeleteArtifactFileRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/DeleteArtifactFileResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/DeleteCompletelyUpdateFileStateRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/DeleteCompletelyUpdateFileStateResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/DeleteRepositoryRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/DeleteRepositoryResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/IDEPrivilageProjectInfo.h>
#include <huaweicloud/codeartsartifact/v2/model/IDERepoRevisionModel.h>
#include <huaweicloud/codeartsartifact/v2/model/IDERepoSearchDO.h>
#include <huaweicloud/codeartsartifact/v2/model/IDERepositoryDO.h>
#include <huaweicloud/codeartsartifact/v2/model/IDERepositoryPair.h>
#include <huaweicloud/codeartsartifact/v2/model/IDETrashArtifactModel.h>
#include <huaweicloud/codeartsartifact/v2/model/ListAllRepositoriesRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ListAllRepositoriesResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ListArtifactoryComponentRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ListArtifactoryComponentResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ListArtifactoryStorageStatisticRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ListArtifactoryStorageStatisticResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ListAttentionsRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ListAttentionsResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ListCapacityMessageSettingRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ListCapacityMessageSettingResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ListChildProxyRepositoriesListRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ListChildProxyRepositoriesListResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ListDomainIpConfigRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ListDomainIpConfigResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ListFileBuildArchivesRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ListFileBuildArchivesResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ListFilesRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ListFilesResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ListLatestVersionFilesRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ListLatestVersionFilesResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ListMavenListRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ListMavenListResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ListMavenUserRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ListMavenUserResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ListNetProxyRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ListNetProxyResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ListProjectRolePermissionsRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ListProjectRolePermissionsResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ListProjectUsersRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ListProjectUsersResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ListSecGuardListRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ListSecGuardListResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ModifyRepositoryRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ModifyRepositoryResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/PathMap.h>
#include <huaweicloud/codeartsartifact/v2/model/RepoFileQueryDTOV5.h>
#include <huaweicloud/codeartsartifact/v2/model/ResetUserPasswordRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ResetUserPasswordResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/SearchArtifactsRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/SearchArtifactsResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/SearchByChecksumRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/SearchByChecksumResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowAuditRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowAuditResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowAutoDeleteJobSettingsRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowAutoDeleteJobSettingsResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowDomainReleaseRepoStorageRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowDomainReleaseRepoStorageResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowFileDetailByFullNameRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowFileDetailByFullNameResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowFileDetailRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowFileDetailResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowFileTreeRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowFileTreeResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowLatestVersionFilesCountRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowLatestVersionFilesCountResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowMavenInfoRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowMavenInfoResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowMultiRolesUserPermissionsRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowMultiRolesUserPermissionsResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowOpenSourceEnabledRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowOpenSourceEnabledResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowPackageDataDetailRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowPackageDataDetailResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowPackageInfoRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowPackageInfoResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowProjectListRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowProjectListResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowProjectReleaseFilesRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowProjectReleaseFilesResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowProjectStorageInfoRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowProjectStorageInfoResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowReleaseProjectFilesRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowReleaseProjectFilesResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowRepoUserInfoRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowRepoUserInfoResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowRepositoryInfoRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowRepositoryInfoResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowRepositoryRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowRepositoryResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowStorageRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowStorageResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowUserPrivilegesRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowUserPrivilegesResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowUserTicketRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowUserTicketResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/TrashArtifactModelForDelete.h>
#include <huaweicloud/codeartsartifact/v2/model/UpdateArtifactoryRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/UpdateArtifactoryResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/UpdateNotMavenRepoDO.h>
#include <string>
#include <vector>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Codeartsartifact::V2::Model;

class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  CodeArtsArtifactClient : public Client
{
public:

    CodeArtsArtifactClient();

    virtual ~CodeArtsArtifactClient();

    static ClientBuilder<CodeArtsArtifactClient> newBuilder();

    // 批量删除回收站
    //
    // 批量删除回收站
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteTrashesResponse> batchDeleteTrashes(
        BatchDeleteTrashesRequest &request
    );
    // 批量还原回收站
    //
    // 批量还原回收站
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchRestoreRepoResponse> batchRestoreRepo(
        BatchRestoreRepoRequest &request
    );
    // 创建非maven仓库
    //
    // 创建非maven仓库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateArtifactoryResponse> createArtifactory(
        CreateArtifactoryRequest &request
    );
    // 关注组件/取消关注组件
    //
    // 关注组件/取消关注组件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAttentionResponse> createAttention(
        CreateAttentionRequest &request
    );
    // 创建docker仓库
    //
    // 创建docker仓库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDockerRepositoriesResponse> createDockerRepositories(
        CreateDockerRepositoriesRequest &request
    );
    // 创建maven仓库
    //
    // 创建maven仓库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateMavenRepoResponse> createMavenRepo(
        CreateMavenRepoRequest &request
    );
    // 创建项目关联仓库
    //
    // 创建项目管理关联仓库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateProjectRelatedRepositoryResponse> createProjectRelatedRepository(
        CreateProjectRelatedRepositoryRequest &request
    );
    // 非maven删除文件
    //
    // 非maven删除文件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteArtifactFileResponse> deleteArtifactFile(
        DeleteArtifactFileRequest &request
    );
    // 彻底删除文件/文件夹
    //
    // 根据文件ID彻底删除文件或文件夹，删除后不能恢复，支持批量删除。可使用该接口清理不再需要的文件或文件夹以释放存储空间。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteCompletelyUpdateFileStateResponse> deleteCompletelyUpdateFileState(
        DeleteCompletelyUpdateFileStateRequest &request
    );
    // 删除仓库到回收站
    //
    // 删除仓库到回收站
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRepositoryResponse> deleteRepository(
        DeleteRepositoryRequest &request
    );
    // 查询仓库详情，不会去统计仓库下的制品数量
    //
    // 查询仓库详情，不会去统计仓库下的制品数量
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAllRepositoriesResponse> listAllRepositories(
        ListAllRepositoriesRequest &request
    );
    // 查询仓库文件详情
    //
    // 查询仓库文件详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListArtifactoryComponentResponse> listArtifactoryComponent(
        ListArtifactoryComponentRequest &request
    );
    // 查询存储容量趋势
    //
    // 查询存储容量趋势
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListArtifactoryStorageStatisticResponse> listArtifactoryStorageStatistic(
        ListArtifactoryStorageStatisticRequest &request
    );
    // 查询关注列表
    //
    // 查询关注列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAttentionsResponse> listAttentions(
        ListAttentionsRequest &request
    );
    // 查询租户容量消息通知设置信息
    //
    // 查询租户容量消息通知设置，包含容量阈值和是否启用邮件通知等信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCapacityMessageSettingResponse> listCapacityMessageSetting(
        ListCapacityMessageSettingRequest &request
    );
    // 获取聚合仓下的仓库代理列表
    //
    // 根据仓库ID获取指定聚合仓的仓库代理列表，包含仓库状态、类型、地址和访问路径白名单等信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListChildProxyRepositoriesListResponse> listChildProxyRepositoriesList(
        ListChildProxyRepositoriesListRequest &request
    );
    // 查询租户级IP白名单
    //
    // 查询租户级IP白名单列表。在IP白名单的IP才能访问制品仓库，未配置IP白名单时，默认所有IP都可访问。该功能可用于保障制品仓库的安全，对访问IP进行严格控制。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDomainIpConfigResponse> listDomainIpConfig(
        ListDomainIpConfigRequest &request
    );
    // 分页查询构建归档包列表
    //
    // 当归档包数量庞大时，分页查询构建归档包列表，包含文件名、文件大小、下载地址、MD5校验和、构建地址、构建代码分支等信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFileBuildArchivesResponse> listFileBuildArchives(
        ListFileBuildArchivesRequest &request
    );
    // 查询文件/项目列表
    //
    // 当项目或文件数量庞大时，分页查询项目或文件列表。可根据文件名、文件状态和文件的发布状态等参数进行过滤，从而快速找到所需文件，包含文件名、文件大小和下载地址等信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFilesResponse> listFiles(
        ListFilesRequest &request
    );
    // 查询项目下所有文件的最新版本
    //
    // 当项目文件数量庞大时，通过该接口可以分页查询项目下所有文件的最新版本，包含文件名、文件大小、文件状态和发布状态等信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLatestVersionFilesResponse> listLatestVersionFiles(
        ListLatestVersionFilesRequest &request
    );
    // 查询Maven仓库列表
    //
    // 查询Maven仓库列表，包含仓库状态、类型、地址和访问路径白名单等信息。支持根据项目ID和仓库ID等参数进行过滤。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMavenListResponse> listMavenList(
        ListMavenListRequest &request
    );
    // 查询私有库用户列表
    //
    // 分页查询私有库用户列表，包含用户名和用户是否启用等信息。可根据用户名进行过滤。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMavenUserResponse> listMavenUser(
        ListMavenUserRequest &request
    );
    // 查询网络代理列表
    //
    // 查询网络代理列表，返回代理源的访问地址及认证信息等，用于代理外部公开的制品资源。通过网络代理，开发人员可以安全、高效地访问所需的外部资源。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNetProxyResponse> listNetProxy(
        ListNetProxyRequest &request
    );
    // 查看项目的角色权限设置
    //
    // 查看项目的角色权限设置，包含上传下载、创建文件夹、清空或者还原回收站和更改软件包状态等设置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectRolePermissionsResponse> listProjectRolePermissions(
        ListProjectRolePermissionsRequest &request
    );
    // 查询项目下的用户
    //
    // 当项目中的用户数量较多时，分页查询指定项目下的用户列表，包含用户名和角色等信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectUsersResponse> listProjectUsers(
        ListProjectUsersRequest &request
    );
    // 查询制品安全扫描任务列表
    //
    // 分页查询制品安全扫描任务列表，包含扫描制品数量、漏洞数量、病毒文件数量和恶意代码文件数量等信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSecGuardListResponse> listSecGuardList(
        ListSecGuardListRequest &request
    );
    // 编辑仓库
    //
    // 编辑仓库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyRepositoryResponse> modifyRepository(
        ModifyRepositoryRequest &request
    );
    // 重置用户密码
    //
    // 重置用户密码
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetUserPasswordResponse> resetUserPassword(
        ResetUserPasswordRequest &request
    );
    // 统筹搜索
    //
    // 统筹搜索
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchArtifactsResponse> searchArtifacts(
        SearchArtifactsRequest &request
    );
    // 通过checksum搜索文件
    //
    // 通过checksum搜索文件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchByChecksumResponse> searchByChecksum(
        SearchByChecksumRequest &request
    );
    // 查询仓库或文件的审计日志信息
    //
    // 查询仓库或文件的审计日志信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAuditResponse> showAudit(
        ShowAuditRequest &request
    );
    // 查询项目自动删除任务设置
    //
    // 查询项目自动删除任务设置，包含文件的过期自动删除时间及删除规则。自动删除任务可以自动执行文件清理任务，减少管理员的工作负担，确保存储资源的有效利用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutoDeleteJobSettingsResponse> showAutoDeleteJobSettings(
        ShowAutoDeleteJobSettingsRequest &request
    );
    // 查询租户发布库存储容量
    //
    // 查询租户发布库存储容量，包含已使用存储容量、最大存储容量、套餐类型和仓库数量等信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainReleaseRepoStorageResponse> showDomainReleaseRepoStorage(
        ShowDomainReleaseRepoStorageRequest &request
    );
    // 根据文件ID查询文件详情
    //
    // 在日常数据管理工作中，根据文件ID查询指定文件详情，包含文件名、文件大小、下载地址、校验和、文件状态和发布状态等信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFileDetailResponse> showFileDetail(
        ShowFileDetailRequest &request
    );
    // 根据文件完整路径查询文件详情
    //
    // 在日常数据管理工作中，根据文件完整路径查询指定文件详情，包含文件名、文件大小、下载地址、校验和、文件状态和发布状态等信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFileDetailByFullNameResponse> showFileDetailByFullName(
        ShowFileDetailByFullNameRequest &request
    );
    // 查询仓库文件夹目录
    //
    // 查询仓库文件夹目录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFileTreeResponse> showFileTree(
        ShowFileTreeRequest &request
    );
    // 查询项目下所有文件的数量
    //
    // 查询项目下所有文件的数量，该接口会识别所有文件的最新版本，从而提供准确的文件数量统计。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLatestVersionFilesCountResponse> showLatestVersionFilesCount(
        ShowLatestVersionFilesCountRequest &request
    );
    // 查询租户Maven仓库列表和账号密码
    //
    // 查询租户Maven仓库列表和账号密码，支持跨租户
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMavenInfoResponse> showMavenInfo(
        ShowMavenInfoRequest &request
    );
    // 查询多角色用户权限
    //
    // 查询多角色用户权限，包含上传下载、创建文件夹、清空或者还原回收站和更改软件包状态等权限信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMultiRolesUserPermissionsResponse> showMultiRolesUserPermissions(
        ShowMultiRolesUserPermissionsRequest &request
    );
    // 查询中心仓是否启用
    //
    // 查询中心仓是否启用，用于确定当前局点是否具备中心仓功能，从而确保业务流程的顺利进行。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOpenSourceEnabledResponse> showOpenSourceEnabled(
        ShowOpenSourceEnabledRequest &request
    );
    // 获取当前用户的套餐信息
    //
    // 获取当前用户的套餐信息，包含总存储容量和已使用存储容量等信息，以便合理规划资源使用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPackageDataDetailResponse> showPackageDataDetail(
        ShowPackageDataDetailRequest &request
    );
    // 获取当前用户的套餐状态
    //
    // 获取当前用户的套餐状态，包含套餐扩展包的容量和流量规格，如资源类型、套餐状态、剩余天数等信息，帮助用户高效管理云资源。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPackageInfoResponse> showPackageInfo(
        ShowPackageInfoRequest &request
    );
    // 查询项目管理关联仓库
    //
    // 查询项目管理关联仓库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectListResponse> showProjectList(
        ShowProjectListRequest &request
    );
    // 获取项目下文件版本信息列表
    //
    // 获取项目下文件版本信息列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectReleaseFilesResponse> showProjectReleaseFiles(
        ShowProjectReleaseFilesRequest &request
    );
    // 查询项目下的制品存储容量信息
    //
    // 查询项目下的制品存储容量，包含已使用存储容量和文件数量等信息。在项目管理中，可以使用该接口监控项目下的制品存储情况，以确保资源的有效利用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectStorageInfoResponse> showProjectStorageInfo(
        ShowProjectStorageInfoRequest &request
    );
    // 获取项目下文件版本信息列表
    //
    // 获取项目下文件版本信息列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowReleaseProjectFilesResponse> showReleaseProjectFiles(
        ShowReleaseProjectFilesRequest &request
    );
    // 查询租户私有依赖库的账号密码
    //
    // 在自动化构建场景，用户可调用该接口查询租户私有依赖库的账号密码，以便进行后续的上传下载操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepoUserInfoResponse> showRepoUserInfo(
        ShowRepoUserInfoRequest &request
    );
    // 查询单个仓库详细信息，会去统计仓库下的制品数量
    //
    // 查询单个仓库详细信息，会去统计仓库下的制品数量
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryResponse> showRepository(
        ShowRepositoryRequest &request
    );
    // 查看仓库信息
    //
    // 查看仓库信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryInfoResponse> showRepositoryInfo(
        ShowRepositoryInfoRequest &request
    );
    // 仓库用量查询
    //
    // 仓库用量查询
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowStorageResponse> showStorage(
        ShowStorageRequest &request
    );
    // 查询用户在项目下的权限
    //
    // 查询用户在项目下的权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUserPrivilegesResponse> showUserPrivileges(
        ShowUserPrivilegesRequest &request
    );
    // 查询用户凭证
    //
    // 查询用户凭证，该凭证为IDC用户下载制品时使用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUserTicketResponse> showUserTicket(
        ShowUserTicketRequest &request
    );
    // 编辑非maven仓库信息
    //
    // 编辑非maven仓库信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateArtifactoryResponse> updateArtifactory(
        UpdateArtifactoryRequest &request
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

template class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Codeartsartifact::V2::CodeArtsArtifactClient>;

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_CodeArtsArtifactClient_H_

