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
#include <huaweicloud/codeartsartifact/v2/model/ModifyRepositoryRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ModifyRepositoryResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/PathMap.h>
#include <huaweicloud/codeartsartifact/v2/model/ResetUserPasswordRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ResetUserPasswordResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/SearchArtifactsRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/SearchArtifactsResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/SearchByChecksumRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/SearchByChecksumResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowAuditRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowAuditResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowFileTreeRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowFileTreeResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowMavenInfoRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowMavenInfoResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowProjectListRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowProjectListResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowProjectReleaseFilesRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowProjectReleaseFilesResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowReleaseProjectFilesRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowReleaseProjectFilesResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowRepositoryInfoRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowRepositoryInfoResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowRepositoryRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowRepositoryResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowStorageRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowStorageResponse.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowUserPrivilegesRequest.h>
#include <huaweicloud/codeartsartifact/v2/model/ShowUserPrivilegesResponse.h>
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
    // 查询仓库文件夹目录
    //
    // 查询仓库文件夹目录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFileTreeResponse> showFileTree(
        ShowFileTreeRequest &request
    );
    // 查询租户Maven仓库列表和账号密码
    //
    // 查询租户Maven仓库列表和账号密码，支持跨租户
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMavenInfoResponse> showMavenInfo(
        ShowMavenInfoRequest &request
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
    // 获取项目下文件版本信息列表
    //
    // 获取项目下文件版本信息列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowReleaseProjectFilesResponse> showReleaseProjectFiles(
        ShowReleaseProjectFilesRequest &request
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

