#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_CodeHubClient_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_CodeHubClient_H_

#include <huaweicloud/codehub/v3/CodeHubExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/codehub/v3/model/CreateCommitRequest.h>
#include <huaweicloud/codehub/v3/model/CreateCommitRequestBody.h>
#include <huaweicloud/codehub/v3/model/CreateCommitResponse.h>
#include <huaweicloud/codehub/v3/model/ListCommitsRequest.h>
#include <huaweicloud/codehub/v3/model/ListCommitsResponse.h>
#include <huaweicloud/codehub/v3/model/ShowDiffCommitRequest.h>
#include <huaweicloud/codehub/v3/model/ShowDiffCommitResponse.h>
#include <huaweicloud/codehub/v3/model/ShowSingleCommitRequest.h>
#include <huaweicloud/codehub/v3/model/ShowSingleCommitResponse.h>
#include <string>

#include <huaweicloud/codehub/v3/model/CreateMergeRequestDiscussionBodyDto.h>
#include <huaweicloud/codehub/v3/model/CreateMergeRequestDiscussionNoteDto.h>
#include <huaweicloud/codehub/v3/model/CreateMergeRequestDiscussionNoteRequest.h>
#include <huaweicloud/codehub/v3/model/CreateMergeRequestDiscussionNoteResponse.h>
#include <huaweicloud/codehub/v3/model/CreateMergeRequestDiscussionRequest.h>
#include <huaweicloud/codehub/v3/model/CreateMergeRequestDiscussionResponse.h>
#include <huaweicloud/codehub/v3/model/ShowReviewSettingRequest.h>
#include <huaweicloud/codehub/v3/model/ShowReviewSettingResponse.h>
#include <string>

#include <huaweicloud/codehub/v3/model/ListFilesByQueryRequest.h>
#include <huaweicloud/codehub/v3/model/ListFilesByQueryResponse.h>
#include <huaweicloud/codehub/v3/model/ShowFileRequest.h>
#include <huaweicloud/codehub/v3/model/ShowFileResponse.h>
#include <string>

#include <huaweicloud/codehub/v3/model/GetAllRepositoryByProjectIdRequest.h>
#include <huaweicloud/codehub/v3/model/GetAllRepositoryByProjectIdResponse.h>
#include <huaweicloud/codehub/v3/model/GetProductTemplatesRequest.h>
#include <huaweicloud/codehub/v3/model/GetProductTemplatesResponse.h>
#include <huaweicloud/codehub/v3/model/ListProductTwoTemplatesRequest.h>
#include <huaweicloud/codehub/v3/model/ListProductTwoTemplatesResponse.h>
#include <huaweicloud/codehub/v3/model/ShowRepositoryNameExistRequest.h>
#include <huaweicloud/codehub/v3/model/ShowRepositoryNameExistResponse.h>
#include <string>

#include <huaweicloud/codehub/v3/model/AddRepoMembersRequest.h>
#include <huaweicloud/codehub/v3/model/AddRepoMembersResponse.h>
#include <huaweicloud/codehub/v3/model/CreateRepoMemberRequest.h>
#include <huaweicloud/codehub/v3/model/DeleteRepoMemberRequest.h>
#include <huaweicloud/codehub/v3/model/DeleteRepoMemberResponse.h>
#include <huaweicloud/codehub/v3/model/ListRepoMembersRequest.h>
#include <huaweicloud/codehub/v3/model/ListRepoMembersResponse.h>
#include <huaweicloud/codehub/v3/model/SetRepoRoleRequest.h>
#include <huaweicloud/codehub/v3/model/SetRepoRoleRequestBody.h>
#include <huaweicloud/codehub/v3/model/SetRepoRoleResponse.h>
#include <string>

#include <huaweicloud/codehub/v3/model/AddDeployKeyRequest.h>
#include <huaweicloud/codehub/v3/model/AddDeployKeyRequestBody.h>
#include <huaweicloud/codehub/v3/model/AddDeployKeyResponse.h>
#include <huaweicloud/codehub/v3/model/AddDeployKeyV2Request.h>
#include <huaweicloud/codehub/v3/model/AddDeployKeyV2Response.h>
#include <huaweicloud/codehub/v3/model/AddProtectBranchV2Request.h>
#include <huaweicloud/codehub/v3/model/AddProtectBranchV2Response.h>
#include <huaweicloud/codehub/v3/model/AddProtectRequest.h>
#include <huaweicloud/codehub/v3/model/AddTagV2Request.h>
#include <huaweicloud/codehub/v3/model/AddTagV2Response.h>
#include <huaweicloud/codehub/v3/model/AddTagsRequest.h>
#include <huaweicloud/codehub/v3/model/ApprovalActionTypeDto.h>
#include <huaweicloud/codehub/v3/model/CreateRepoRequest.h>
#include <huaweicloud/codehub/v3/model/CreateRepositoryRequest.h>
#include <huaweicloud/codehub/v3/model/CreateRepositoryResponse.h>
#include <huaweicloud/codehub/v3/model/DeleteDeployKeyRequest.h>
#include <huaweicloud/codehub/v3/model/DeleteDeployKeyResponse.h>
#include <huaweicloud/codehub/v3/model/DeleteDeployKeyV2Request.h>
#include <huaweicloud/codehub/v3/model/DeleteDeployKeyV2Response.h>
#include <huaweicloud/codehub/v3/model/DeleteRepositoryRequest.h>
#include <huaweicloud/codehub/v3/model/DeleteRepositoryResponse.h>
#include <huaweicloud/codehub/v3/model/GetRepositoryByProjectIdRequest.h>
#include <huaweicloud/codehub/v3/model/GetRepositoryByProjectIdResponse.h>
#include <huaweicloud/codehub/v3/model/GetTemplatesRequest.h>
#include <huaweicloud/codehub/v3/model/GetTemplatesResponse.h>
#include <huaweicloud/codehub/v3/model/ListBranchesByRepositoryIdRequest.h>
#include <huaweicloud/codehub/v3/model/ListBranchesByRepositoryIdResponse.h>
#include <huaweicloud/codehub/v3/model/ListCommitStatisticsRequest.h>
#include <huaweicloud/codehub/v3/model/ListCommitStatisticsResponse.h>
#include <huaweicloud/codehub/v3/model/ListFilesRequest.h>
#include <huaweicloud/codehub/v3/model/ListFilesResponse.h>
#include <huaweicloud/codehub/v3/model/ListMergeChangesRequest.h>
#include <huaweicloud/codehub/v3/model/ListMergeChangesResponse.h>
#include <huaweicloud/codehub/v3/model/ListMergeChangesTreesRequest.h>
#include <huaweicloud/codehub/v3/model/ListMergeChangesTreesResponse.h>
#include <huaweicloud/codehub/v3/model/ListMergeRequestRequest.h>
#include <huaweicloud/codehub/v3/model/ListMergeRequestResponse.h>
#include <huaweicloud/codehub/v3/model/ListMergeRequestReviewersRequest.h>
#include <huaweicloud/codehub/v3/model/ListMergeRequestReviewersResponse.h>
#include <huaweicloud/codehub/v3/model/ListRelatedCommitsRequest.h>
#include <huaweicloud/codehub/v3/model/ListRelatedCommitsResponse.h>
#include <huaweicloud/codehub/v3/model/ListRepositoryStatusRequest.h>
#include <huaweicloud/codehub/v3/model/ListRepositoryStatusResponse.h>
#include <huaweicloud/codehub/v3/model/ListSubfilesRequest.h>
#include <huaweicloud/codehub/v3/model/ListSubfilesResponse.h>
#include <huaweicloud/codehub/v3/model/ListTemplatesTwoRequest.h>
#include <huaweicloud/codehub/v3/model/ListTemplatesTwoResponse.h>
#include <huaweicloud/codehub/v3/model/ListTwoTemplatesRequest.h>
#include <huaweicloud/codehub/v3/model/ListTwoTemplatesResponse.h>
#include <huaweicloud/codehub/v3/model/RepositoryTemplateVO.h>
#include <huaweicloud/codehub/v3/model/RepositoryTemplateVO2.h>
#include <huaweicloud/codehub/v3/model/ShareTemplatesRequest.h>
#include <huaweicloud/codehub/v3/model/ShareTemplatesResponse.h>
#include <huaweicloud/codehub/v3/model/ShowBranchesByRepositoryIdRequest.h>
#include <huaweicloud/codehub/v3/model/ShowBranchesByRepositoryIdResponse.h>
#include <huaweicloud/codehub/v3/model/ShowBranchesByTwoRepositoryIdRequest.h>
#include <huaweicloud/codehub/v3/model/ShowBranchesByTwoRepositoryIdResponse.h>
#include <huaweicloud/codehub/v3/model/ShowCommitsByBranchRequest.h>
#include <huaweicloud/codehub/v3/model/ShowCommitsByBranchResponse.h>
#include <huaweicloud/codehub/v3/model/ShowCommitsByRepoIdRequest.h>
#include <huaweicloud/codehub/v3/model/ShowCommitsByRepoIdResponse.h>
#include <huaweicloud/codehub/v3/model/ShowHasPipelineRequest.h>
#include <huaweicloud/codehub/v3/model/ShowHasPipelineResponse.h>
#include <huaweicloud/codehub/v3/model/ShowImageBlobRequest.h>
#include <huaweicloud/codehub/v3/model/ShowImageBlobResponse.h>
#include <huaweicloud/codehub/v3/model/ShowMasterRequest.h>
#include <huaweicloud/codehub/v3/model/ShowMasterResponse.h>
#include <huaweicloud/codehub/v3/model/ShowMergeRequestRequest.h>
#include <huaweicloud/codehub/v3/model/ShowMergeRequestResponse.h>
#include <huaweicloud/codehub/v3/model/ShowRepoIdRequest.h>
#include <huaweicloud/codehub/v3/model/ShowRepoIdResponse.h>
#include <huaweicloud/codehub/v3/model/ShowRepositoryArchiveRequest.h>
#include <huaweicloud/codehub/v3/model/ShowRepositoryArchiveResponse.h>
#include <huaweicloud/codehub/v3/model/ShowRepositoryByUuidRequest.h>
#include <huaweicloud/codehub/v3/model/ShowRepositoryByUuidResponse.h>
#include <huaweicloud/codehub/v3/model/ShowRepositoryStatisticsRequest.h>
#include <huaweicloud/codehub/v3/model/ShowRepositoryStatisticsRequestBody.h>
#include <huaweicloud/codehub/v3/model/ShowRepositoryStatisticsResponse.h>
#include <huaweicloud/codehub/v3/model/ShowStatisticCommitRequest.h>
#include <huaweicloud/codehub/v3/model/ShowStatisticCommitResponse.h>
#include <huaweicloud/codehub/v3/model/ShowStatisticCommitV3Request.h>
#include <huaweicloud/codehub/v3/model/ShowStatisticCommitV3Response.h>
#include <huaweicloud/codehub/v3/model/ShowStatisticalDataRequest.h>
#include <huaweicloud/codehub/v3/model/ShowStatisticalDataResponse.h>
#include <huaweicloud/codehub/v3/model/UpdateMergeRequestApprovalStateRequest.h>
#include <huaweicloud/codehub/v3/model/UpdateMergeRequestApprovalStateResponse.h>
#include <string>

#include <huaweicloud/codehub/v3/model/AddSshKeyRequest.h>
#include <huaweicloud/codehub/v3/model/AddSshKeyRequestBody.h>
#include <huaweicloud/codehub/v3/model/AddSshKeyResponse.h>
#include <huaweicloud/codehub/v3/model/DeleteSShkeyRequest.h>
#include <huaweicloud/codehub/v3/model/DeleteSShkeyResponse.h>
#include <huaweicloud/codehub/v3/model/ListSshKeysRequest.h>
#include <huaweicloud/codehub/v3/model/ListSshKeysResponse.h>
#include <huaweicloud/codehub/v3/model/PrivateKeyVerify.h>
#include <huaweicloud/codehub/v3/model/ShowPrivateKeyVerifyRequest.h>
#include <huaweicloud/codehub/v3/model/ShowPrivateKeyVerifyResponse.h>
#include <string>

#include <huaweicloud/codehub/v3/model/PasswordRequest.h>
#include <huaweicloud/codehub/v3/model/ValidateHttpsInfoRequest.h>
#include <huaweicloud/codehub/v3/model/ValidateHttpsInfoResponse.h>
#include <huaweicloud/codehub/v3/model/ValidateHttpsInfoV2Request.h>
#include <huaweicloud/codehub/v3/model/ValidateHttpsInfoV2Response.h>
#include <string>

#include <huaweicloud/codehub/v3/model/CreateNewBranchRequest.h>
#include <huaweicloud/codehub/v3/model/CreateNewBranchRequestBody.h>
#include <huaweicloud/codehub/v3/model/CreateNewBranchResponse.h>
#include <string>

#include <huaweicloud/codehub/v3/model/AssociateIssuesRequest.h>
#include <huaweicloud/codehub/v3/model/AssociateIssuesRequestBody.h>
#include <huaweicloud/codehub/v3/model/AssociateIssuesResponse.h>
#include <huaweicloud/codehub/v3/model/CreateProjectAndRepositoriesRequest.h>
#include <huaweicloud/codehub/v3/model/CreateProjectAndRepositoriesResponse.h>
#include <huaweicloud/codehub/v3/model/CreateProjectAndforkRepositoriesRequest.h>
#include <huaweicloud/codehub/v3/model/CreateProjectAndforkRepositoriesResponse.h>
#include <huaweicloud/codehub/v3/model/CreateProjectRepoRequest.h>
#include <huaweicloud/codehub/v3/model/ForkProjectRepoRequest.h>
#include <huaweicloud/codehub/v3/model/ListUserAllRepositoriesRequest.h>
#include <huaweicloud/codehub/v3/model/ListUserAllRepositoriesResponse.h>
#include <huaweicloud/codehub/v3/model/ShowAllRepositoryByTwoProjectIdRequest.h>
#include <huaweicloud/codehub/v3/model/ShowAllRepositoryByTwoProjectIdResponse.h>
#include <string>

#include <huaweicloud/codehub/v3/model/AddHooksRequest.h>
#include <huaweicloud/codehub/v3/model/AddHooksResponse.h>
#include <huaweicloud/codehub/v3/model/DeleteHooksRequest.h>
#include <huaweicloud/codehub/v3/model/DeleteHooksResponse.h>
#include <huaweicloud/codehub/v3/model/ListHooksRequest.h>
#include <huaweicloud/codehub/v3/model/ListHooksResponse.h>
#include <huaweicloud/codehub/v3/model/RepositoryHookRequest.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Codehub::V3::Model;

class HUAWEICLOUD_CODEHUB_V3_EXPORT  CodeHubClient : public Client
{
public:

    CodeHubClient();

    virtual ~CodeHubClient();

    static ClientBuilder<CodeHubClient> newBuilder();

    // 创建提交
    //
    // 能够一次提交位于不同目录的多个文件，目录不存在时，能自动创建目录。支持强制覆盖选项，当选择强制覆盖标志为true时，忽略冲突，强制提交。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateCommitResponse> createCommit(
        CreateCommitRequest &request
    );
    // 查询某个仓库的提交信息
    //
    // 根据仓库短ID获取提交信息，支持根据文件路径，查询这个路径下所有的commits列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCommitsResponse> listCommits(
        ListCommitsRequest &request
    );
    // 查询某个仓库的提交差异信息
    //
    // 根据commit id查询提交差异信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDiffCommitResponse> showDiffCommit(
        ShowDiffCommitRequest &request
    );
    // 查询某个仓库的特定提交信息
    //
    // 获取由commit id或分支或标记的名称标识的特定提交。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSingleCommitResponse> showSingleCommit(
        ShowSingleCommitRequest &request
    );

    // 创建MR检视意见
    //
    // 创建MR检视意见
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateMergeRequestDiscussionResponse> createMergeRequestDiscussion(
        CreateMergeRequestDiscussionRequest &request
    );
    // 回复MR检视意见
    //
    // 回复MR检视意见
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateMergeRequestDiscussionNoteResponse> createMergeRequestDiscussionNote(
        CreateMergeRequestDiscussionNoteRequest &request
    );
    // 获取检视意见设置
    //
    // 获取检视意见设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowReviewSettingResponse> showReviewSetting(
        ShowReviewSettingRequest &request
    );

    // 查询某个仓库的文件信息
    //
    // 获取仓库中文件的信息，如名称、大小、内容。请注意，文件内容是Base64编码的。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFilesByQueryResponse> listFilesByQuery(
        ListFilesByQueryRequest &request
    );
    // 查询某个仓库的文件信息
    //
    // 获取仓库中文件的信息，如名称、大小、内容。请注意，文件内容是Base64编码的。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFileResponse> showFile(
        ShowFileRequest &request
    );

    // 获取项目下所有仓库信息
    //
    // 获取仓库列表 模糊查询支持范围,如果未传入project_id，则支持按仓库名或项目名模糊查询，否则，只按仓库名模糊匹配。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetAllRepositoryByProjectIdResponse> getAllRepositoryByProjectId(
        GetAllRepositoryByProjectIdRequest &request
    );
    // 获取一个项目下可以设置为公开状态的仓库列表
    //
    // 获取一个项目下可以设置为公开状态的仓库列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetProductTemplatesResponse> getProductTemplates(
        GetProductTemplatesRequest &request
    );
    // 获取一个项目下可以设置为公开状态的仓库列表
    //
    // 获取一个项目下可以设置为公开状态的仓库列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProductTwoTemplatesResponse> listProductTwoTemplates(
        ListProductTwoTemplatesRequest &request
    );
    // 校验指定项目下的仓库名
    //
    // 一般创建仓库时调用。通过传入项目ID，获取方式请参见[获取项目ID](codehub_api_0014.xml)。,仓库名，来判断仓库是否重名。仓库存在result:false,仓库不存在result:true。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryNameExistResponse> showRepositoryNameExist(
        ShowRepositoryNameExistRequest &request
    );

    // 添加仓库成员
    //
    // 添加仓库成员。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddRepoMembersResponse> addRepoMembers(
        AddRepoMembersRequest &request
    );
    // 删除仓库成员
    //
    // 删除仓库成员
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRepoMemberResponse> deleteRepoMember(
        DeleteRepoMemberRequest &request
    );
    // 获取仓库所有成员记录
    //
    // 获取仓库成员列表,可通过关键字搜索某成员。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepoMembersResponse> listRepoMembers(
        ListRepoMembersRequest &request
    );
    // 设置成员在仓库中的角色
    //
    // 给仓库中成员设置仓库的操作权限，
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetRepoRoleResponse> setRepoRole(
        SetRepoRoleRequest &request
    );

    // 添加部署密钥
    //
    // 添加部署密钥
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddDeployKeyResponse> addDeployKey(
        AddDeployKeyRequest &request
    );
    // 添加部署密钥
    //
    // 添加部署密钥
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddDeployKeyV2Response> addDeployKeyV2(
        AddDeployKeyV2Request &request
    );
    // 新建保护分支
    //
    // 新建保护分支
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddProtectBranchV2Response> addProtectBranchV2(
        AddProtectBranchV2Request &request
    );
    // 新建标签
    //
    // 新建标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddTagV2Response> addTagV2(
        AddTagV2Request &request
    );
    // 创建仓库
    //
    // 用指定的名称在指定项目上创建仓库。传入参数：仓库名、模板id、是否导入项目成员、归属项目
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRepositoryResponse> createRepository(
        CreateRepositoryRequest &request
    );
    // 删除仓库部署密钥
    //
    // 删除仓库部署密钥
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDeployKeyResponse> deleteDeployKey(
        DeleteDeployKeyRequest &request
    );
    // 删除仓库部署密钥
    //
    // 删除仓库部署密钥
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDeployKeyV2Response> deleteDeployKeyV2(
        DeleteDeployKeyV2Request &request
    );
    // 删除仓库
    //
    // 根据仓库32位uuid删除指定的仓库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRepositoryResponse> deleteRepository(
        DeleteRepositoryRequest &request
    );
    // 查询项目下的某个仓库
    //
    // 不建议再使用,建议使用/{repository_uuid}/status
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetRepositoryByProjectIdResponse> getRepositoryByProjectId(
        GetRepositoryByProjectIdRequest &request
    );
    // 获取公开示例模板列表
    //
    // 获取公开示例模板列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetTemplatesResponse> getTemplates(
        GetTemplatesRequest &request
    );
    // 获取仓库分支列表
    //
    // 获取仓库分支列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBranchesByRepositoryIdResponse> listBranchesByRepositoryId(
        ListBranchesByRepositoryIdRequest &request
    );
    // 获取仓库上一次的提交统计信息
    //
    // 获取仓库上一次的提交统计信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCommitStatisticsResponse> listCommitStatistics(
        ListCommitStatisticsRequest &request
    );
    // 获取一个仓库下特定分支指定文件内容
    //
    // 获取一个仓库下特定分支指定文件内容
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFilesResponse> listFiles(
        ListFilesRequest &request
    );
    // 获取变更文件
    //
    // 获取变更文件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeChangesResponse> listMergeChanges(
        ListMergeChangesRequest &request
    );
    // 获取变更文件列表
    //
    // 获取变更文件列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeChangesTreesResponse> listMergeChangesTrees(
        ListMergeChangesTreesRequest &request
    );
    // 获取仓库合并请求列表
    //
    // 获取仓库合并请求列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeRequestResponse> listMergeRequest(
        ListMergeRequestRequest &request
    );
    // 根据仓库短ID和合并请求短ID获取检视人信息
    //
    // 根据仓库短ID和合并请求短ID获取检视人信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeRequestReviewersResponse> listMergeRequestReviewers(
        ListMergeRequestReviewersRequest &request
    );
    // 获取关联工作项信息
    //
    // 获取关联工作项信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRelatedCommitsResponse> listRelatedCommits(
        ListRelatedCommitsRequest &request
    );
    // 查看仓库的创建状态
    //
    // 获取仓库状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryStatusResponse> listRepositoryStatus(
        ListRepositoryStatusRequest &request
    );
    // 获取分支目录下的文件
    //
    // 获取分支目录下的文件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSubfilesResponse> listSubfiles(
        ListSubfilesRequest &request
    );
    // 设置仓库是公开状态还是私有状态
    //
    // 设置仓库是公开状态还是私有状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTemplatesTwoResponse> listTemplatesTwo(
        ListTemplatesTwoRequest &request
    );
    // 获取公开示例模板列表
    //
    // 获取公开示例模板列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTwoTemplatesResponse> listTwoTemplates(
        ListTwoTemplatesRequest &request
    );
    // 设置仓库是公开状态还是私有状态
    //
    // 设置仓库是公开状态还是私有状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShareTemplatesResponse> shareTemplates(
        ShareTemplatesRequest &request
    );
    // 查询某仓库对应的分支
    //
    // 根据仓库id获取指定仓库的分支列表.
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBranchesByRepositoryIdResponse> showBranchesByRepositoryId(
        ShowBranchesByRepositoryIdRequest &request
    );
    // 查询某仓库的标签列表
    //
    // 查询指定仓库对应的分支。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBranchesByTwoRepositoryIdResponse> showBranchesByTwoRepositoryId(
        ShowBranchesByTwoRepositoryIdRequest &request
    );
    // 根据组名和仓库名查询某仓库某分支对应的提交
    //
    // 根据仓库组名、仓库名和分支获取提交列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCommitsByBranchResponse> showCommitsByBranch(
        ShowCommitsByBranchRequest &request
    );
    // 根据仓库id查询仓库某分支对应的提交，提供更多可选参数
    //
    // 根据仓库id查询仓库某分支对应的提交.
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCommitsByRepoIdResponse> showCommitsByRepoId(
        ShowCommitsByRepoIdRequest &request
    );
    // 修改被流水线引用的仓库状态
    //
    // 修改被流水线引用的仓库状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHasPipelineResponse> showHasPipeline(
        ShowHasPipelineRequest &request
    );
    // 获取一个仓库下特定分支的图片文件
    //
    // 获取一个仓库下特定分支的图片文件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowImageBlobResponse> showImageBlob(
        ShowImageBlobRequest &request
    );
    // 判断用户是否有仓库的管理员权限
    //
    // 判断用户是否有仓库的管理员权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMasterResponse> showMaster(
        ShowMasterRequest &request
    );
    // 获取仓库合并请求详情
    //
    // 获取仓库合并请求详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMergeRequestResponse> showMergeRequest(
        ShowMergeRequestRequest &request
    );
    // 根据仓库名组名获取仓库短id，用以拼接与commitid对应提交详情页面url
    //
    // 获取仓库短id,用于获取仓库详情页面url
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepoIdResponse> showRepoId(
        ShowRepoIdRequest &request
    );
    // 下载仓库
    //
    // 按照指定格式下载仓库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryArchiveResponse> showRepositoryArchive(
        ShowRepositoryArchiveRequest &request
    );
    // 查询某个仓库的详细信息
    //
    // 根据仓库UUID(由CreateRepository接口返回)获取仓库信息仓库信息。返回 包含id，name，组名，仓库访问URL。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryByUuidResponse> showRepositoryByUuid(
        ShowRepositoryByUuidRequest &request
    );
    // 仓库统计
    //
    // 根据仓库短id，查询仓库的代码提交记录统计
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryStatisticsResponse> showRepositoryStatistics(
        ShowRepositoryStatisticsRequest &request
    );
    // 获取代码提交行数
    //
    // 获取指定日期内代码仓指定分支的代码提交行数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowStatisticCommitResponse> showStatisticCommit(
        ShowStatisticCommitRequest &request
    );
    // 获取代码提交行数
    //
    // 获取指定日期内代码仓指定分支的代码提交行数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowStatisticCommitV3Response> showStatisticCommitV3(
        ShowStatisticCommitV3Request &request
    );
    // 获取仓库统计数据
    //
    // 获取仓库统计数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowStatisticalDataResponse> showStatisticalData(
        ShowStatisticalDataRequest &request
    );
    // 合并请求代码审核
    //
    // 合并请求代码审核
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMergeRequestApprovalStateResponse> updateMergeRequestApprovalState(
        UpdateMergeRequestApprovalStateRequest &request
    );

    // 添加ssh key
    //
    // 添加ssh key
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddSshKeyResponse> addSshKey(
        AddSshKeyRequest &request
    );
    // 删除用户公钥
    //
    // 删除用户公钥。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSShkeyResponse> deleteSShkey(
        DeleteSShkeyRequest &request
    );
    // 获取ssh key列表
    //
    // 获取ssh key列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSshKeysResponse> listSshKeys(
        ListSshKeysRequest &request
    );
    // 检验私钥是否有拉取代码的权限
    //
    // 检验私钥是否有拉取代码的权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPrivateKeyVerifyResponse> showPrivateKeyVerify(
        ShowPrivateKeyVerifyRequest &request
    );

    //  https账号密码校验
    //
    // 判断用户使用 https 上传/下载代码时输入的用户名和密码是否合法。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ValidateHttpsInfoResponse> validateHttpsInfo(
        ValidateHttpsInfoRequest &request
    );
    // https账号密码校验
    //
    // 判断用户使用 https 上传/下载代码时输入的用户名和密码是否合法。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ValidateHttpsInfoV2Response> validateHttpsInfoV2(
        ValidateHttpsInfoV2Request &request
    );

    // 创建分支
    //
    // 根据仓库id在指定仓库中创建分支
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateNewBranchResponse> createNewBranch(
        CreateNewBranchRequest &request
    );

    // 分支关联工作项
    //
    // 分支关联工作项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociateIssuesResponse> associateIssues(
        AssociateIssuesRequest &request
    );
    // 创建项目、仓库
    //
    // 创建项目后，创建仓库组由后台生成方式 传入参数：仓库名、模板id、是否导入项目成员、归属项目
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateProjectAndRepositoriesResponse> createProjectAndRepositories(
        CreateProjectAndRepositoriesRequest &request
    );
    // 创建项目并fork仓库
    //
    // 创建仓库后fork仓库 传入参数：仓库名、是否导入项目成员、归属项目
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateProjectAndforkRepositoriesResponse> createProjectAndforkRepositories(
        CreateProjectAndforkRepositoriesRequest &request
    );
    // 查询用户的所有仓库
    //
    // 获取用户的所有仓库信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUserAllRepositoriesResponse> listUserAllRepositories(
        ListUserAllRepositoriesRequest &request
    );
    // 查询项目下的所有仓库
    //
    // 获取仓库列表,模糊查询支持范围,如果未传入project uuid，则支持按仓库名或项目名模糊查询，否则，只按仓库名模糊匹配
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAllRepositoryByTwoProjectIdResponse> showAllRepositoryByTwoProjectId(
        ShowAllRepositoryByTwoProjectIdRequest &request
    );

    // 为指定仓库添加hook
    //
    // 提交代码自动触发编译构建，添加仓库钩子
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddHooksResponse> addHooks(
        AddHooksRequest &request
    );
    // 删除指定仓库的 hook
    //
    // 提交代码自动触发编译构建，删除仓库钩子
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteHooksResponse> deleteHooks(
        DeleteHooksRequest &request
    );
    // 查询指定仓库的webhook
    //
    // 获取仓库webhook
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHooksResponse> listHooks(
        ListHooksRequest &request
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

template class HUAWEICLOUD_CODEHUB_V3_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Codehub::V3::CodeHubClient>;

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_CodeHubClient_H_

