#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_CodeArtsRepoClient_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_CodeArtsRepoClient_H_

#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/codeartsrepo/v4/model/CommitParams.h>
#include <huaweicloud/codeartsrepo/v4/model/CommitRevetOrCherryPickDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateCommitRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateCommitResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateCommitRevertRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateCommitRevertResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/FileDiffDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ListCommitAssociatedRefsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListCommitAssociatedRefsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListCommitsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListCommitsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowCommitDiffMetadataRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowCommitDiffMetadataResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowCommitFileDiffRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowCommitFileDiffResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowCommitRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowCommitResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowDiffCommitRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowDiffCommitResponse.h>
#include <string>

#include <huaweicloud/codeartsrepo/v4/model/CommitDiscussionDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateMergeRequestDiscussionRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateMergeRequestDiscussionResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateMergeRequestDiscussionResponseRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateMergeRequestDiscussionResponseResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateMergeRequestNoteDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateReviewSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateReviewSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteMergeRequestDiscussionRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteMergeRequestDiscussionResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListCommitDiscussionsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListCommitDiscussionsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListDefaultReviewCategoriesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListDefaultReviewCategoriesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestDiscussionsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestDiscussionsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestSystemNotesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestSystemNotesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectNoteRequiredAttributesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectNoteRequiredAttributesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryReviewAuthorsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryReviewAuthorsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryReviewsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryReviewsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/MergeRequestDiscussionDto.h>
#include <huaweicloud/codeartsrepo/v4/model/NoteDto.h>
#include <huaweicloud/codeartsrepo/v4/model/NoteRequiredAttributeDto.h>
#include <huaweicloud/codeartsrepo/v4/model/PostNoteRequiredAttributeDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ReplyMergeRequestNoteDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ReviewDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ReviewSettingParamDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupNoteRequiredAttributesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupNoteRequiredAttributesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupReviewSettingsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupReviewSettingsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowMergeRequestDiscussionRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowMergeRequestDiscussionResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowNoteRequiredAttributesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowNoteRequiredAttributesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectReviewSettingsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectReviewSettingsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowReviewSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowReviewSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateGroupNoteRequiredAttributesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateGroupNoteRequiredAttributesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateGroupReviewSettingsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateGroupReviewSettingsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestDiscussionInfoRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestDiscussionInfoResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestDiscussionRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestDiscussionResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestNoteDto.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateNoteRequiredAttributesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateNoteRequiredAttributesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProjectNoteRequiredAttributesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProjectNoteRequiredAttributesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProjectReviewSettingsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProjectReviewSettingsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UserBasicDto.h>
#include <string>
#include <cpprest/details/basic_types.h>

#include <huaweicloud/codeartsrepo/v4/model/BlameDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateFileRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateFileResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteFileRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteFileResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DownloadBlobsRawRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DownloadBlobsRawResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/FileBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ListFileBlameLinesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListFileBlameLinesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListFileUpperTreeEntriesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListFileUpperTreeEntriesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListFilesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListFilesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListLogsTreeRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListLogsTreeResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListTreesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListTreesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/LogTreeDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RenameFileBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RenameFileRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/RenameFileResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowFileContentRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowFileContentResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowFileRawRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowFileRawResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowFileRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowFileResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowReadmeFileRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowReadmeFileResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/TreeDto.h>
#include <huaweicloud/codeartsrepo/v4/model/TreeObjectDto.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateFileBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateFileRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateFileResponse.h>
#include <string>

#include <huaweicloud/codeartsrepo/v4/model/AssociateGroupUserGroupRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/AssociateGroupUserGroupResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/BussinessGroupTransferBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateGroupRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateGroupRequestBody.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateGroupResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteGroupRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteGroupResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/GroupBaseDto.h>
#include <huaweicloud/codeartsrepo/v4/model/GroupBatchAddMemberDto.h>
#include <huaweicloud/codeartsrepo/v4/model/GroupMemberDetailDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupAddableMembersRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupAddableMembersResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupAddableUserGroupsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupAddableUserGroupsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupMembersRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupMembersResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupPermissionResourcesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupPermissionResourcesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupSubgroupsAndRepositoriesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupSubgroupsAndRepositoriesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupUserGroupsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupUserGroupsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListManageableGroupsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListManageableGroupsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ManageableGroupDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ProjectSettingsInheritCfgDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ProjectUserGroupDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupGeneralPolicyRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupGeneralPolicyResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupInheritSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupInheritSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupPermissionInheritEnabledRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupPermissionInheritEnabledResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupSettingsInheritCfgRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupSettingsInheritCfgResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupWatermarkRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupWatermarkResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupsGeneralPolicyRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupsGeneralPolicyResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupsInheritRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupsInheritResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/SubgroupAndProjectBaseDto.h>
#include <huaweicloud/codeartsrepo/v4/model/TransferGroupRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/TransferGroupResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateGeneralPolicyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateGroupGeneralPolicyRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateGroupGeneralPolicyResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateGroupWatermarkRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateGroupWatermarkResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateWatermarkDto.h>
#include <huaweicloud/codeartsrepo/v4/model/UserGroupDto.h>
#include <string>

#include <huaweicloud/codeartsrepo/v4/model/AddRepositoryMembersRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/AddRepositoryMembersResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchCreateRepositoryMemberBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchCreateRepositoryMemberDto.h>
#include <huaweicloud/codeartsrepo/v4/model/GrantedUsersDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupProtectedRefsUserGroupsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupProtectedRefsUserGroupsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMembersRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMembersResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProductPermissionResourcesGrantedUsersRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProductPermissionResourcesGrantedUsersResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectProtectedRefsUserGroupsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectProtectedRefsUserGroupsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryProtectedRefsUserGroupsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryProtectedRefsUserGroupsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryUserGroupsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryUserGroupsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ProtectedRefsUserGroupBasicDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RepositoryMemberDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RepositoryUserGroupDto.h>
#include <string>

#include <huaweicloud/codeartsrepo/v4/model/ApprovalActionTypeDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ApprovalApproverInfoDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ApprovalMergeRequestRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ApprovalMergeRequestResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ApprovalReviewerInfoDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ApproverBasicDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ChangesTreeDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CommentPathDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CommitMergeRequestDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateCherryPickMergeRequestRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateCherryPickMergeRequestResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateGroupMergeRequestApproverSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateGroupMergeRequestApproverSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateGroupMergeRequestTemplateRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateGroupMergeRequestTemplateResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateMergeRequestApproverSettingDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateMergeRequestApproverSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateMergeRequestApproverSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateMergeRequestRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateMergeRequestResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateMergeRequestTemplateDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateMergeRequestTemplateRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateMergeRequestTemplateResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateProjectMergeRequestApproverSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateProjectMergeRequestApproverSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateProjectMergeRequestTemplateRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateProjectMergeRequestTemplateResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteGroupMergeRequestApproverSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteGroupMergeRequestApproverSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteGroupMergeRequestTemplateRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteGroupMergeRequestTemplateResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteMergeRequestApproverSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteMergeRequestApproverSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteMergeRequestTemplateRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteMergeRequestTemplateResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteMergeRequestVoteRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteMergeRequestVoteResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteProjectMergeRequestApproverSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteProjectMergeRequestApproverSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteProjectMergeRequestTemplateRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteProjectMergeRequestTemplateResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DiscussionTemplateDto.h>
#include <huaweicloud/codeartsrepo/v4/model/GroupMergeRequestTemplateDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ImportMergeRequestRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ImportMergeRequestResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ImportMrParamsDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ListCommitAssociatedMergeRequestsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListCommitAssociatedMergeRequestsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListDiscussionTemplatesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListDiscussionTemplatesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupMergeRequestApproverSettingsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupMergeRequestApproverSettingsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupMergeRequestCanBeAssignedReviewersRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupMergeRequestCanBeAssignedReviewersResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupMergeRequestTemplatesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupMergeRequestTemplatesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupMergeRequestValidAssignedCandidatesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupMergeRequestValidAssignedCandidatesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestApproverSettingsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestApproverSettingsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestApproversRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestApproversResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestChangesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestChangesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestChangesTreesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestChangesTreesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestCommitsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestCommitsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestConflictFilesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestConflictFilesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestEvaluationsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestEvaluationsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestParticipantsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestParticipantsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestReviewersRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestReviewersResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestTemplatesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestTemplatesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestValidAssignedCandidatesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestValidAssignedCandidatesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestVersionsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListMergeRequestVersionsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListPersonalMergeRequestsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListPersonalMergeRequestsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectMergeRequestApproverSettingsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectMergeRequestApproverSettingsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectMergeRequestCanBeAssignedReviewersRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectMergeRequestCanBeAssignedReviewersResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectMergeRequestCanBeAssignedUsersRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectMergeRequestCanBeAssignedUsersResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectMergeRequestTemplatesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectMergeRequestTemplatesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryMergeRequestsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryMergeRequestsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/MRConflictFileDto.h>
#include <huaweicloud/codeartsrepo/v4/model/MRVoteReviewerDto.h>
#include <huaweicloud/codeartsrepo/v4/model/MergeMergeRequestBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/MergeMergeRequestRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/MergeMergeRequestResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/MergeRequestApproverSettingResultDto.h>
#include <huaweicloud/codeartsrepo/v4/model/MergeRequestCommitDto.h>
#include <huaweicloud/codeartsrepo/v4/model/MergeRequestListBasicDto.h>
#include <huaweicloud/codeartsrepo/v4/model/MergeRequestStatisticDto.h>
#include <huaweicloud/codeartsrepo/v4/model/MergeRequestVoteBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/MergeRequestVoteReviewerDto.h>
#include <huaweicloud/codeartsrepo/v4/model/MrCherryRevertDto.h>
#include <huaweicloud/codeartsrepo/v4/model/PostMergeRequestParamsDtoForOpenApi.h>
#include <huaweicloud/codeartsrepo/v4/model/ProjectMergeRequestTemplateDto.h>
#include <huaweicloud/codeartsrepo/v4/model/PutMergeRequestParamsDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RebaseMergeRequestForOpenApiRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/RebaseMergeRequestForOpenApiResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/RepositoryMergeRequestTemplateDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ResolveConflictDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ResolveMergeRequestConflictsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ResolveMergeRequestConflictsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ReviewMergeRequestRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ReviewMergeRequestResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowActualHeadPipelineRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowActualHeadPipelineResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowAverageEvaluationRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowAverageEvaluationResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowBranchConflictRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowBranchConflictResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowCommitCommentsByLineRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowCommitCommentsByLineResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupMergeRequestSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupMergeRequestSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowMergeRequestCommentsByLineRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowMergeRequestCommentsByLineResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowMergeRequestDetailRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowMergeRequestDetailResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowMergeRequestSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowMergeRequestSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowMergeRequestTemplateRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowMergeRequestTemplateResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowMergeRequestVotesDetailRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowMergeRequestVotesDetailResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowMergeableStateOuterRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowMergeableStateOuterResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectMergeRequestSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectMergeRequestSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryMergeRequestsStatisticRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryMergeRequestsStatisticResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/SimpleMergeRequestChangesDto.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateGroupMergeRequestApproverSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateGroupMergeRequestApproverSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateGroupMergeRequestTemplateRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateGroupMergeRequestTemplateResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestApproverSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestApproverSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestApproversRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestApproversResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestReviewersRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestReviewersResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestSettingDto.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestTemplateRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestTemplateResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestVoteRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestVoteResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProjectMergeRequestApproverSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProjectMergeRequestApproverSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProjectMergeRequestTemplateRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProjectMergeRequestTemplateResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UserBasicDto.h>
#include <string>
#include <cpprest/details/basic_types.h>

#include <huaweicloud/codeartsrepo/v4/model/BatchDeleteFilePushPermissionDto.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchDeleteRepositoryFilePushPermissionsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchDeleteRepositoryFilePushPermissionsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchUpdateFilePushPermissionBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchUpdateRepositoryFilePushPermissionsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchUpdateRepositoryFilePushPermissionsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateFilePushPermissionRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateFilePushPermissionResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateRepositoryFilePushPermissionDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryFilePushPermissionsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryFilePushPermissionsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryResourcePermissionsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryResourcePermissionsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/PermissionInheritEnabledDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RepositoryFilePushPermissionDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ResponsePermissionInfo.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryPermissionInheritEnabledRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryPermissionInheritEnabledResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdatePermissionBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryPermissionInheritEnabledRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryPermissionInheritEnabledResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryResourcePermissionsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryResourcePermissionsResponse.h>
#include <string>

#include <huaweicloud/codeartsrepo/v4/model/JobWithStageDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ListLatestPipelineJobsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListLatestPipelineJobsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListPipelineJobsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListPipelineJobsResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/ItemCommitDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ListItemCommitsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListItemCommitsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectSubgroupsAndRepositoriesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectSubgroupsAndRepositoriesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/PermissionDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ProjectSettingsInheritCfgDto.h>
#include <huaweicloud/codeartsrepo/v4/model/SettingsInheritCfgBodyApiDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectGeneralPolicyRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectGeneralPolicyResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectMemberSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectMemberSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectSettingsInheritCfgRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectSettingsInheritCfgResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectWatermarkRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectWatermarkResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectsGeneralPolicyRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectsGeneralPolicyResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowResourcePermissionsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowResourcePermissionsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/SubgroupAndProjectBaseDto.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateGeneralPolicyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProjectGeneralPolicyRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProjectGeneralPolicyResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProjectSettingsInheritCfgRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProjectSettingsInheritCfgResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProjectWatermarkRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProjectWatermarkResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateWatermarkDto.h>
#include <string>

#include <huaweicloud/codeartsrepo/v4/model/BatchCreateProtectedBranchRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchCreateProtectedBranchResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchCreateProtectedTagsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchCreateProtectedTagsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchDeleteProtectedBranchesBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchDeleteProtectedBranchesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchDeleteProtectedBranchesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchDeleteProtectedTagsBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchDeleteProtectedTagsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchDeleteProtectedTagsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchUpdateProtectedBranchesBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchUpdateProtectedBranchesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchUpdateProtectedBranchesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchUpdateProtectedTagsBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchUpdateProtectedTagsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchUpdateProtectedTagsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateProjectProtectedBranchesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateProjectProtectedBranchesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateProjectProtectedTagsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateProjectProtectedTagsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteProtectedBranchRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteProtectedBranchResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteProtectedTagRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteProtectedTagResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectProtectedBranchesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectProtectedBranchesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectProtectedTagsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectProtectedTagsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProtectedBranchesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProtectedBranchesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProtectedTagsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProtectedTagsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ProjectProtectedBranchApiDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ProjectProtectedTagDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ProjectProtectedTagPo.h>
#include <huaweicloud/codeartsrepo/v4/model/ProtectedBranchBodyApiDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ProtectedBranchProtectedActionBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RepositoryProtectedBranchBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RepositoryProtectedBranchDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RepositoryProtectedTagActionBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RepositoryProtectedTagBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RepositoryProtectedTagDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProtectedBranchRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProtectedBranchResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProtectedTagRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProtectedTagResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProtectedBranchRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProtectedBranchResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProtectedTagRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProtectedTagResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/codeartsrepo/v4/model/ListRefsListRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRefsListResponse.h>
#include <string>

#include <huaweicloud/codeartsrepo/v4/model/BatchDeleteBranchDto.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchDeleteBranchRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchDeleteBranchResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/BranchSimpleDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateBranchDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateBranchRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateBranchResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateTagDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateTagRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateTagResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteBranchRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteBranchResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteTagRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteTagResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListBranchesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListBranchesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListTagsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListTagsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowBranchRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowBranchResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowTagRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowTagResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/SimpleTagDto.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateBranchDto.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateBranchNameRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateBranchNameResponse.h>
#include <string>

#include <huaweicloud/codeartsrepo/v4/model/AddSubmoduleRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/AddSubmoduleResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/AddTrustedIpAddressRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/AddTrustedIpAddressRequestBody.h>
#include <huaweicloud/codeartsrepo/v4/model/AddTrustedIpAddressResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/AssociateRemoteMirrorRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/AssociateRemoteMirrorResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/AssociateRepositoryUserGroupRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/AssociateRepositoryUserGroupResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/BasicRepositoryDto.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchValidateRepoNamesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchValidateRepoNamesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/BodyPutLabelDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CommitRuleCreateBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CommitRuleDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CommitRuleUpdateBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ContributorDto.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateDirRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateDirResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateRepositoryCommitRuleRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateRepositoryCommitRuleResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateRepositoryLabelRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateRepositoryLabelResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateRepositorySystemLabelsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CreateRepositorySystemLabelsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteRepositoryLabelRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteRepositoryLabelResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteTrustedIpAddressRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteTrustedIpAddressResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DownloadArchiveRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DownloadArchiveResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ExecuteRepositoryStatisticsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ExecuteRepositoryStatisticsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ForkRepositoryDto.h>
#include <huaweicloud/codeartsrepo/v4/model/GeneralCommitRuleBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/GeneralPolicyBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/LabelBasicDto.h>
#include <huaweicloud/codeartsrepo/v4/model/LabelCreateDto.h>
#include <huaweicloud/codeartsrepo/v4/model/LabelDetailDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ListCurrentUserRepositoriesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListCurrentUserRepositoriesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupRepositoriesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupRepositoriesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListPersonalRecentPushEventsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListPersonalRecentPushEventsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListPersonalRepositoryImportRecordsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListPersonalRepositoryImportRecordsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectRepositoriesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectRepositoriesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryCommitRulesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryCommitRulesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryContributorsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryContributorsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryEventsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryEventsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryForksRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryForksResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryLabelsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryLabelsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryLanguagesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryLanguagesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryTemplatesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryTemplatesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListSubmodulesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListSubmodulesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListTrustedIpAddressesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListTrustedIpAddressesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/LockRepositoryRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/LockRepositoryResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/PersonalPushEventDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RemoteMirrorDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RemoteMirrorSyncInfoDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RemoteMirrorUpdateBody.h>
#include <huaweicloud/codeartsrepo/v4/model/RemoveDeployKeyFromSubmodulesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/RemoveDeployKeyFromSubmodulesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/RemoveDeployKeyRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/RemoveDeployKeyResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/RepositoryDirDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RepositoryImportRecordDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RepositoryInheritSettingDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RepositoryInheritSettingsBodyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RepositoryPushEventDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RepositorySimplestDto.h>
#include <huaweicloud/codeartsrepo/v4/model/RepositoryTemplateDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowBlobsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowBlobsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowCommitStatisticsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowCommitStatisticsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowDiffLinesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowDiffLinesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowLastPushEventInRepositoryRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowLastPushEventInRepositoryResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowNotificationSubscriptionRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowNotificationSubscriptionResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowNotificationSubscriptionsStatusRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowNotificationSubscriptionsStatusResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRefCompareRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRefCompareResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRemoteMirrorRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRemoteMirrorResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryGeneralCommitRuleRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryGeneralCommitRuleResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryGeneralPolicyRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryGeneralPolicyResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryInheritSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryInheritSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryInheritSettingSourceRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryInheritSettingSourceResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryStatisticsStatusRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryStatisticsStatusResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryStatisticsSummaryRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryStatisticsSummaryResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryWatermarkRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryWatermarkResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowUserRefPermissionRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowUserRefPermissionResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/StartHouseKeepingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/StartHouseKeepingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/StartRemoteMirrorSynchronizationRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/StartRemoteMirrorSynchronizationResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/StatisticsParamsDto.h>
#include <huaweicloud/codeartsrepo/v4/model/SubmoduleDto.h>
#include <huaweicloud/codeartsrepo/v4/model/SubmoduleReqDto.h>
#include <huaweicloud/codeartsrepo/v4/model/SyncDeployKeyToSubmodulesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/SyncDeployKeyToSubmodulesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/TrustedIpAddressDto.h>
#include <huaweicloud/codeartsrepo/v4/model/UnlockRepositoryRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UnlockRepositoryResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateNotificationSubscriptionRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateNotificationSubscriptionResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepoNotificationSubscriptionDto.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryCommitRuleRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryCommitRuleResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryGeneralCommitRuleRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryGeneralCommitRuleResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryGeneralPolicyRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryGeneralPolicyResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryInheritSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryInheritSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryLabelRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryLabelResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryRemoteMirrorRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryRemoteMirrorResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryWatermarkRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryWatermarkResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateTrustedIpAddressRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateTrustedIpAddressResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateWatermarkDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ValidateRepoNameDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ValidateRepoNameResultDto.h>
#include <string>
#include <cpprest/details/basic_types.h>

#include <huaweicloud/codeartsrepo/v4/model/AddTenantTrustedIpAddressRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/AddTenantTrustedIpAddressResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/AddTrustedIpAddressRequestBody.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteTenantTrustedIpAddressRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteTenantTrustedIpAddressResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ExportTenantRepositoriesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ExportTenantRepositoriesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ExportTenantRepositoryBody.h>
#include <huaweicloud/codeartsrepo/v4/model/ListTenantRepositoriesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListTenantRepositoriesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListTenantTrustedIpAddressesRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListTenantTrustedIpAddressesResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/TenantRepositoryDto.h>
#include <huaweicloud/codeartsrepo/v4/model/TenantTrustedIpAddressDto.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateTenantTrustedIpAddressRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateTenantTrustedIpAddressResponse.h>
#include <string>
#include <cpprest/details/basic_types.h>

#include <huaweicloud/codeartsrepo/v4/model/CheckDeployKeyRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CheckDeployKeyResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/CheckGroupDeployKeyRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/CheckGroupDeployKeyResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeployKeyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/DeployKeyValueDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ListBranchRelatedWorkItemsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListBranchRelatedWorkItemsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupDeployKeysRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupDeployKeysResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectDeployKeysRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectDeployKeysResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryDeployKeysRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryDeployKeysResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryWorkItemsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryWorkItemsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ReqWorkItemDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupE2eSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupE2eSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectE2eSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectE2eSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryE2eSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryE2eSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/WorkItemSimpleDto.h>
#include <string>

#include <huaweicloud/codeartsrepo/v4/model/AddSshKeyRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/AddSshKeyResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchValidateUserGroupPermissionsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/BatchValidateUserGroupPermissionsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteSshKeyRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/DeleteSshKeyResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/DeployKeyParamsDto.h>
#include <huaweicloud/codeartsrepo/v4/model/GroupPermissionsDto.h>
#include <huaweicloud/codeartsrepo/v4/model/ImpersonationToken.h>
#include <huaweicloud/codeartsrepo/v4/model/ListImpersonationTokensRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListImpersonationTokensResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListUserGpgKeysRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListUserGpgKeysResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListUserKeysRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListUserKeysResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ModifyEmailAddressDto.h>
#include <huaweicloud/codeartsrepo/v4/model/SendUserEmailVerifyCodeRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/SendUserEmailVerifyCodeResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowHttpsPasswordSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowHttpsPasswordSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowUserEmailsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowUserEmailsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateHttpsPasswordSetting.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateHttpsPasswordSettingRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateHttpsPasswordSettingResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateUserEmailsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateUserEmailsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UserGroupPermissionDto.h>
#include <string>
#include <vector>

#include <huaweicloud/codeartsrepo/v4/model/AddGroupWebhookRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/AddGroupWebhookResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/AddProjectWebhookRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/AddProjectWebhookResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/AddRepositoryWebhookRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/AddRepositoryWebhookResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupWebhookLogsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupWebhookLogsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupWebhooksRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListGroupWebhooksResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectWebhookLogsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectWebhookLogsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectWebhooksRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListProjectWebhooksResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryWebhookLogsRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryWebhookLogsResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryWebhooksRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ListRepositoryWebhooksResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/RemoveGroupWebhookRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/RemoveGroupWebhookResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/RemoveProjectWebhookRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/RemoveProjectWebhookResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/RemoveRepositoryWebhookRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/RemoveRepositoryWebhookResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupWebhookLogRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupWebhookLogResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupWebhookRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowGroupWebhookResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectWebhookLogRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectWebhookLogResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectWebhookRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowProjectWebhookResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryWebhookLogRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryWebhookLogResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryWebhookRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/ShowRepositoryWebhookResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateGroupWebhookRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateGroupWebhookResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProjectWebhookRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateProjectWebhookResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryWebhookRequest.h>
#include <huaweicloud/codeartsrepo/v4/model/UpdateRepositoryWebhookResponse.h>
#include <huaweicloud/codeartsrepo/v4/model/WebhookDto.h>
#include <huaweicloud/codeartsrepo/v4/model/WebhookLogDto.h>
#include <huaweicloud/codeartsrepo/v4/model/WebhookLogExtendDto.h>
#include <huaweicloud/codeartsrepo/v4/model/WebhookParamsDto.h>
#include <string>
#include <cpprest/details/basic_types.h>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Codeartsrepo::V4::Model;

class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  CodeArtsRepoClient : public Client
{
public:

    CodeArtsRepoClient();

    virtual ~CodeArtsRepoClient();

    static ClientBuilder<CodeArtsRepoClient> newBuilder();

    // 创建提交信息
    //
    // 创建提交信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateCommitResponse> createCommit(
        CreateCommitRequest &request
    );
    // 回退提交
    //
    // 回退提交
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateCommitRevertResponse> createCommitRevert(
        CreateCommitRevertRequest &request
    );
    // 根据提交ID查询分支、标签列表
    //
    // 根据提交ID查询分支、标签列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCommitAssociatedRefsResponse> listCommitAssociatedRefs(
        ListCommitAssociatedRefsRequest &request
    );
    // 查看提交列表
    //
    // 查看提交列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCommitsResponse> listCommits(
        ListCommitsRequest &request
    );
    // 获取特定提交信息
    //
    // 获取特定提交信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCommitResponse> showCommit(
        ShowCommitRequest &request
    );
    // 获取commit引入的文件变更元数据
    //
    // 获取commit引入的文件变更元数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCommitDiffMetadataResponse> showCommitDiffMetadata(
        ShowCommitDiffMetadataRequest &request
    );
    // 获取commit引入的指定文件的变更内容
    //
    // 获取commit引入的指定文件的变更内容
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCommitFileDiffResponse> showCommitFileDiff(
        ShowCommitFileDiffRequest &request
    );
    // 获取提交差异
    //
    // 获取提交差异
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDiffCommitResponse> showDiffCommit(
        ShowDiffCommitRequest &request
    );

    // 创建合并请求检视意见
    //
    // 创建合并请求检视意见
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateMergeRequestDiscussionResponse> createMergeRequestDiscussion(
        CreateMergeRequestDiscussionRequest &request
    );
    // 回复合并请求检视意见
    //
    // 回复合并请求检视意见
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateMergeRequestDiscussionResponseResponse> createMergeRequestDiscussionResponse(
        CreateMergeRequestDiscussionResponseRequest &request
    );
    // 创建/更新检视意见设置
    //
    // 创建/更新检视意见设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateReviewSettingResponse> createReviewSetting(
        CreateReviewSettingRequest &request
    );
    // 删除合并请求检视意见
    //
    // 删除合并请求检视意见
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteMergeRequestDiscussionResponse> deleteMergeRequestDiscussion(
        DeleteMergeRequestDiscussionRequest &request
    );
    // 获取代码页单个提交下检视意见列表
    //
    // 获取代码页单个提交下检视意见列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCommitDiscussionsResponse> listCommitDiscussions(
        ListCommitDiscussionsRequest &request
    );
    // 获取默认的检视意见分类
    //
    // 获取默认的检视意见分类
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDefaultReviewCategoriesResponse> listDefaultReviewCategories(
        ListDefaultReviewCategoriesRequest &request
    );
    // 获取合并请求检视意见列表
    //
    // 获取合并请求检视意见列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeRequestDiscussionsResponse> listMergeRequestDiscussions(
        ListMergeRequestDiscussionsRequest &request
    );
    // 获取合并请求动态列表
    //
    // 获取合并请求动态列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeRequestSystemNotesResponse> listMergeRequestSystemNotes(
        ListMergeRequestSystemNotesRequest &request
    );
    // 获取项目检视意见必填项
    //
    // 获取项目检视意见必填项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectNoteRequiredAttributesResponse> listProjectNoteRequiredAttributes(
        ListProjectNoteRequiredAttributesRequest &request
    );
    // 获取仓库下检视意见作者列表
    //
    // 获取仓库下检视意见作者列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryReviewAuthorsResponse> listRepositoryReviewAuthors(
        ListRepositoryReviewAuthorsRequest &request
    );
    // 获取仓库检视意见列表
    //
    // 获取仓库检视意见列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryReviewsResponse> listRepositoryReviews(
        ListRepositoryReviewsRequest &request
    );
    // 获取代码组检视意见必填项
    //
    // 获取代码组检视意见必填项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGroupNoteRequiredAttributesResponse> showGroupNoteRequiredAttributes(
        ShowGroupNoteRequiredAttributesRequest &request
    );
    // 获取代码组检视意见设置(不含必填项)
    //
    // 获取代码组检视意见设置(不含必填项)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGroupReviewSettingsResponse> showGroupReviewSettings(
        ShowGroupReviewSettingsRequest &request
    );
    // 根据discussion_id获取合并请求检视意见
    //
    // 根据discussion_id获取合并请求检视意见
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMergeRequestDiscussionResponse> showMergeRequestDiscussion(
        ShowMergeRequestDiscussionRequest &request
    );
    // 获取仓库检视意见必填项
    //
    // 获取仓库检视意见必填项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowNoteRequiredAttributesResponse> showNoteRequiredAttributes(
        ShowNoteRequiredAttributesRequest &request
    );
    // 获取项目检视意见设置(不含必填项)
    //
    // 获取项目检视意见设置(不含必填项)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectReviewSettingsResponse> showProjectReviewSettings(
        ShowProjectReviewSettingsRequest &request
    );
    // 获取检视意见设置
    //
    // 获取检视意见设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowReviewSettingResponse> showReviewSetting(
        ShowReviewSettingRequest &request
    );
    // 创建/更新代码组检视意见必填项
    //
    // 创建/更新代码组检视意见必填项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGroupNoteRequiredAttributesResponse> updateGroupNoteRequiredAttributes(
        UpdateGroupNoteRequiredAttributesRequest &request
    );
    // 创建/更新代码组检视意见设置(不含必填项)
    //
    // 创建/更新代码组检视意见设置(不含必填项)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGroupReviewSettingsResponse> updateGroupReviewSettings(
        UpdateGroupReviewSettingsRequest &request
    );
    // 更新合并请求检视意见
    //
    // 更新合并请求检视意见
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMergeRequestDiscussionResponse> updateMergeRequestDiscussion(
        UpdateMergeRequestDiscussionRequest &request
    );
    // 更新合并请求检视意见中除评论内容以外的信息
    //
    // 更新合并请求检视意见中除评论内容以外的信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMergeRequestDiscussionInfoResponse> updateMergeRequestDiscussionInfo(
        UpdateMergeRequestDiscussionInfoRequest &request
    );
    // 创建/更新仓库检视意见必填项
    //
    // 创建/更新仓库检视意见必填项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateNoteRequiredAttributesResponse> updateNoteRequiredAttributes(
        UpdateNoteRequiredAttributesRequest &request
    );
    // 创建/更新项目检视意见必填项
    //
    // 创建/更新项目检视意见必填项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProjectNoteRequiredAttributesResponse> updateProjectNoteRequiredAttributes(
        UpdateProjectNoteRequiredAttributesRequest &request
    );
    // 创建/更新项目检视意见设置(不含必填项)
    //
    // 创建/更新项目检视意见设置(不含必填项)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProjectReviewSettingsResponse> updateProjectReviewSettings(
        UpdateProjectReviewSettingsRequest &request
    );

    // 创建文件
    //
    // 创建文件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateFileResponse> createFile(
        CreateFileRequest &request
    );
    // 删除文件
    //
    // 删除文件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteFileResponse> deleteFile(
        DeleteFileRequest &request
    );
    // 获取仓库单个文件内容(下载单个文件)
    //
    // 获取仓库单个文件内容(下载单个文件)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadBlobsRawResponse> downloadBlobsRaw(
        DownloadBlobsRawRequest &request
    );
    // 获取文件追溯信息
    //
    // 获取文件追溯信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFileBlameLinesResponse> listFileBlameLines(
        ListFileBlameLinesRequest &request
    );
    // 获取当前文件上级树结构
    //
    // 获取当前文件上级树结构
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFileUpperTreeEntriesResponse> listFileUpperTreeEntries(
        ListFileUpperTreeEntriesRequest &request
    );
    // 获取指定分支下所有的文件列表
    //
    // 获取指定分支下所有的文件列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFilesResponse> listFiles(
        ListFilesRequest &request
    );
    // 查看文件树
    //
    // 查看文件树
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLogsTreeResponse> listLogsTree(
        ListLogsTreeRequest &request
    );
    // 查看分支文件列表
    //
    // 查看分支文件列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTreesResponse> listTrees(
        ListTreesRequest &request
    );
    // 文件重命名
    //
    // 文件重命名
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RenameFileResponse> renameFile(
        RenameFileRequest &request
    );
    // 查看文件属性与内容
    //
    // 查看文件属性与内容
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFileResponse> showFile(
        ShowFileRequest &request
    );
    // 获取文件内容
    //
    // 获取文件内容
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFileContentResponse> showFileContent(
        ShowFileContentRequest &request
    );
    // 获取仓库单个文件内容
    //
    // 获取仓库单个文件内容
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFileRawResponse> showFileRaw(
        ShowFileRawRequest &request
    );
    // 获取仓库默认分支的Readme文件内容
    //
    // 获取仓库默认分支的Readme文件内容
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowReadmeFileResponse> showReadmeFile(
        ShowReadmeFileRequest &request
    );
    // 更新文件内容
    //
    // 修改仓库ip白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateFileResponse> updateFile(
        UpdateFileRequest &request
    );

    // 关联代码组与成员组
    //
    // 关联代码组与成员组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociateGroupUserGroupResponse> associateGroupUserGroup(
        AssociateGroupUserGroupRequest &request
    );
    // 创建代码组
    //
    // 创建代码组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGroupResponse> createGroup(
        CreateGroupRequest &request
    );
    // 删除代码组
    //
    // 删除代码组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGroupResponse> deleteGroup(
        DeleteGroupRequest &request
    );
    // 获取代码组下可添加的成员列表
    //
    // 获取代码组下可添加的成员列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupAddableMembersResponse> listGroupAddableMembers(
        ListGroupAddableMembersRequest &request
    );
    // 获取代码组下可添加的成员组
    //
    // 获取代码组下可添加的成员组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupAddableUserGroupsResponse> listGroupAddableUserGroups(
        ListGroupAddableUserGroupsRequest &request
    );
    // 获取代码组下可添加的成员列表
    //
    // 获取代码组下可添加的成员列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupMembersResponse> listGroupMembers(
        ListGroupMembersRequest &request
    );
    // 获取代码组权限资源点列表
    //
    // 获取代码组权限资源点列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupPermissionResourcesResponse> listGroupPermissionResources(
        ListGroupPermissionResourcesRequest &request
    );
    // 获取代码组下的子代码组和仓库列表
    //
    // 获取代码组下的子代码组和仓库列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupSubgroupsAndRepositoriesResponse> listGroupSubgroupsAndRepositories(
        ListGroupSubgroupsAndRepositoriesRequest &request
    );
    // 组织下查询成员组列表
    //
    // 组织下查询成员组列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupUserGroupsResponse> listGroupUserGroups(
        ListGroupUserGroupsRequest &request
    );
    // 获取代码组列表
    //
    // 获取代码组列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupsResponse> listGroups(
        ListGroupsRequest &request
    );
    // 获取项目下当前用户有管理权限的代码组列表
    //
    // 获取项目下当前用户有管理权限的代码组列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListManageableGroupsResponse> listManageableGroups(
        ListManageableGroupsRequest &request
    );
    // 获取代码组信息
    //
    // 获取代码组信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGroupResponse> showGroup(
        ShowGroupRequest &request
    );
    // 获取指定代码组的基本设置信息
    //
    // 获取指定代码组的基本设置信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGroupGeneralPolicyResponse> showGroupGeneralPolicy(
        ShowGroupGeneralPolicyRequest &request
    );
    // 获取代码组继承设置项
    //
    // 获取代码组继承设置项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGroupInheritSettingResponse> showGroupInheritSetting(
        ShowGroupInheritSettingRequest &request
    );
    // 获取代码组继承权限设置开关
    //
    // 获取代码组继承权限设置开关
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGroupPermissionInheritEnabledResponse> showGroupPermissionInheritEnabled(
        ShowGroupPermissionInheritEnabledRequest &request
    );
    // 获取代码组继承设置项
    //
    // 获取代码组继承设置项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGroupSettingsInheritCfgResponse> showGroupSettingsInheritCfg(
        ShowGroupSettingsInheritCfgRequest &request
    );
    // 获取代码组水印设置
    //
    // 获取代码组水印设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGroupWatermarkResponse> showGroupWatermark(
        ShowGroupWatermarkRequest &request
    );
    // 获取指定代码组的基本设置信息
    //
    // 获取指定代码组的基本设置信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGroupsGeneralPolicyResponse> showGroupsGeneralPolicy(
        ShowGroupsGeneralPolicyRequest &request
    );
    // 获取代码组的继承设置
    //
    // 获取代码组的继承设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGroupsInheritResponse> showGroupsInherit(
        ShowGroupsInheritRequest &request
    );
    // 移交代码组
    //
    // 移交代码组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<TransferGroupResponse> transferGroup(
        TransferGroupRequest &request
    );
    // 更新代码组的基本设置信息
    //
    // 更新代码组的基本设置信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGroupGeneralPolicyResponse> updateGroupGeneralPolicy(
        UpdateGroupGeneralPolicyRequest &request
    );
    // 更新代码组水印设置
    //
    // 更新代码组水印设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGroupWatermarkResponse> updateGroupWatermark(
        UpdateGroupWatermarkRequest &request
    );

    // 批量添加仓库成员
    //
    // 批量添加仓库成员
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddRepositoryMembersResponse> addRepositoryMembers(
        AddRepositoryMembersRequest &request
    );
    // 获取代码组下成员组列表
    //
    // 获取代码组下成员组列表(保护分支保护Tags设置中使用)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupProtectedRefsUserGroupsResponse> listGroupProtectedRefsUserGroups(
        ListGroupProtectedRefsUserGroupsRequest &request
    );
    // 获取仓库成员列表
    //
    // 获取仓库成员列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMembersResponse> listMembers(
        ListMembersRequest &request
    );
    // 获取项目下成员列表
    //
    // 获取项目下成员列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProductPermissionResourcesGrantedUsersResponse> listProductPermissionResourcesGrantedUsers(
        ListProductPermissionResourcesGrantedUsersRequest &request
    );
    // 获取项目下成员组列表
    //
    // 获取项目下成员组列表(保护分支保护Tags设置中使用)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectProtectedRefsUserGroupsResponse> listProjectProtectedRefsUserGroups(
        ListProjectProtectedRefsUserGroupsRequest &request
    );
    // 获取仓库下成员组列表
    //
    // 获取仓库下成员组列表(保护分支保护Tags设置中使用)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryProtectedRefsUserGroupsResponse> listRepositoryProtectedRefsUserGroups(
        ListRepositoryProtectedRefsUserGroupsRequest &request
    );
    // 获取成员组列表
    //
    // 获取成员组列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryUserGroupsResponse> listRepositoryUserGroups(
        ListRepositoryUserGroupsRequest &request
    );

    // 审核合并请求
    //
    // 审核合并请求
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ApprovalMergeRequestResponse> approvalMergeRequest(
        ApprovalMergeRequestRequest &request
    );
    // Cherry pick合并请求
    //
    // Cherry pick合并请求
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateCherryPickMergeRequestResponse> createCherryPickMergeRequest(
        CreateCherryPickMergeRequestRequest &request
    );
    // 创建代码组合并请求审核设置
    //
    // 创建代码组合并请求审核设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGroupMergeRequestApproverSettingResponse> createGroupMergeRequestApproverSetting(
        CreateGroupMergeRequestApproverSettingRequest &request
    );
    // 创建代码组合并请求模板
    //
    // 创建代码组合并请求模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGroupMergeRequestTemplateResponse> createGroupMergeRequestTemplate(
        CreateGroupMergeRequestTemplateRequest &request
    );
    // 创建合并请求
    //
    // 创建合并请求
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateMergeRequestResponse> createMergeRequest(
        CreateMergeRequestRequest &request
    );
    // 创建合并请求审核设置
    //
    // 创建合并请求审核设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateMergeRequestApproverSettingResponse> createMergeRequestApproverSetting(
        CreateMergeRequestApproverSettingRequest &request
    );
    // 创建合并请求模板
    //
    // 创建合并请求模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateMergeRequestTemplateResponse> createMergeRequestTemplate(
        CreateMergeRequestTemplateRequest &request
    );
    // 创建项目合并请求审核设置
    //
    // 创建项目合并请求审核设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateProjectMergeRequestApproverSettingResponse> createProjectMergeRequestApproverSetting(
        CreateProjectMergeRequestApproverSettingRequest &request
    );
    // 创建项目合并请求模板
    //
    // 创建项目合并请求模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateProjectMergeRequestTemplateResponse> createProjectMergeRequestTemplate(
        CreateProjectMergeRequestTemplateRequest &request
    );
    // 删除代码组合并请求审核配置
    //
    // 删除代码组合并请求审核配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGroupMergeRequestApproverSettingResponse> deleteGroupMergeRequestApproverSetting(
        DeleteGroupMergeRequestApproverSettingRequest &request
    );
    // 删除代码组合并请求模板
    //
    // 删除代码组合并请求模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGroupMergeRequestTemplateResponse> deleteGroupMergeRequestTemplate(
        DeleteGroupMergeRequestTemplateRequest &request
    );
    // 删除合并请求审核配置
    //
    // 删除合并请求审核配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteMergeRequestApproverSettingResponse> deleteMergeRequestApproverSetting(
        DeleteMergeRequestApproverSettingRequest &request
    );
    // 删除合并请求模板
    //
    // 删除合并请求模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteMergeRequestTemplateResponse> deleteMergeRequestTemplate(
        DeleteMergeRequestTemplateRequest &request
    );
    // 删除合并请求打分
    //
    // 删除合并请求打分
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteMergeRequestVoteResponse> deleteMergeRequestVote(
        DeleteMergeRequestVoteRequest &request
    );
    // 删除项目合并请求审核配置
    //
    // 删除项目合并请求审核配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteProjectMergeRequestApproverSettingResponse> deleteProjectMergeRequestApproverSetting(
        DeleteProjectMergeRequestApproverSettingRequest &request
    );
    // 删除项目合并请求模板
    //
    // 删除项目合并请求模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteProjectMergeRequestTemplateResponse> deleteProjectMergeRequestTemplate(
        DeleteProjectMergeRequestTemplateRequest &request
    );
    // 导入合并请求
    //
    // 导入合并请求
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ImportMergeRequestResponse> importMergeRequest(
        ImportMergeRequestRequest &request
    );
    // 获取提交关联的合并请求
    //
    // 获取提交关联的合并请求
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCommitAssociatedMergeRequestsResponse> listCommitAssociatedMergeRequests(
        ListCommitAssociatedMergeRequestsRequest &request
    );
    // 获取检视意见模板列表
    //
    // 获取检视意见模板列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDiscussionTemplatesResponse> listDiscussionTemplates(
        ListDiscussionTemplatesRequest &request
    );
    // 获取代码组合并请求审核设置列表
    //
    // 获取代码组合并请求审核设置列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupMergeRequestApproverSettingsResponse> listGroupMergeRequestApproverSettings(
        ListGroupMergeRequestApproverSettingsRequest &request
    );
    // 获取代码组检视人
    //
    // 获取代码组检视人
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupMergeRequestCanBeAssignedReviewersResponse> listGroupMergeRequestCanBeAssignedReviewers(
        ListGroupMergeRequestCanBeAssignedReviewersRequest &request
    );
    // 获取代码组合并请求模板列表
    //
    // 获取代码组合并请求模板列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupMergeRequestTemplatesResponse> listGroupMergeRequestTemplates(
        ListGroupMergeRequestTemplatesRequest &request
    );
    // 获取代码组审核人或合并人
    //
    // 获取代码组审核人或合并人
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupMergeRequestValidAssignedCandidatesResponse> listGroupMergeRequestValidAssignedCandidates(
        ListGroupMergeRequestValidAssignedCandidatesRequest &request
    );
    // 获取合并请求审核设置列表
    //
    // 获取合并请求审核设置列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeRequestApproverSettingsResponse> listMergeRequestApproverSettings(
        ListMergeRequestApproverSettingsRequest &request
    );
    // 获取合并请求审核人列表
    //
    // 获取合并请求审核人列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeRequestApproversResponse> listMergeRequestApprovers(
        ListMergeRequestApproversRequest &request
    );
    // 获取合并请求文件变更列表
    //
    // 获取合并请求文件变更列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeRequestChangesResponse> listMergeRequestChanges(
        ListMergeRequestChangesRequest &request
    );
    // 获取合并请求文件变更列表树
    //
    // 获取合并请求文件变更列表树
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeRequestChangesTreesResponse> listMergeRequestChangesTrees(
        ListMergeRequestChangesTreesRequest &request
    );
    // 获取合并请求commit列表
    //
    // 获取合并请求commit列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeRequestCommitsResponse> listMergeRequestCommits(
        ListMergeRequestCommitsRequest &request
    );
    // 获取所有的冲突文件
    //
    // 获取所有的冲突文件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeRequestConflictFilesResponse> listMergeRequestConflictFiles(
        ListMergeRequestConflictFilesRequest &request
    );
    // 获取合并请求评价列表
    //
    // 获取合并请求评价列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeRequestEvaluationsResponse> listMergeRequestEvaluations(
        ListMergeRequestEvaluationsRequest &request
    );
    // 获取合并请求参与者
    //
    // 获取合并请求参与者
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeRequestParticipantsResponse> listMergeRequestParticipants(
        ListMergeRequestParticipantsRequest &request
    );
    // 获取合并请求检视人列表
    //
    // 获取合并请求检视人列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeRequestReviewersResponse> listMergeRequestReviewers(
        ListMergeRequestReviewersRequest &request
    );
    // 获取合并请求模板列表
    //
    // 获取合并请求模板列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeRequestTemplatesResponse> listMergeRequestTemplates(
        ListMergeRequestTemplatesRequest &request
    );
    // 获取可选的合并请求检视人
    //
    // 获取可选的合并请求检视人
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeRequestValidAssignedCandidatesResponse> listMergeRequestValidAssignedCandidates(
        ListMergeRequestValidAssignedCandidatesRequest &request
    );
    // 获取文件变更历史版本列表
    //
    // 获取文件变更历史版本列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMergeRequestVersionsResponse> listMergeRequestVersions(
        ListMergeRequestVersionsRequest &request
    );
    // 获取个人首页mr列表
    //
    // 获取个人首页mr列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPersonalMergeRequestsResponse> listPersonalMergeRequests(
        ListPersonalMergeRequestsRequest &request
    );
    // 获取项目合并请求审核设置列表
    //
    // 获取项目合并请求审核设置列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectMergeRequestApproverSettingsResponse> listProjectMergeRequestApproverSettings(
        ListProjectMergeRequestApproverSettingsRequest &request
    );
    // 获取项目检视人
    //
    // 获取代码组检视人
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectMergeRequestCanBeAssignedReviewersResponse> listProjectMergeRequestCanBeAssignedReviewers(
        ListProjectMergeRequestCanBeAssignedReviewersRequest &request
    );
    // 获取项目审核人或合并人
    //
    // 获取代码组审核人或合并人
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectMergeRequestCanBeAssignedUsersResponse> listProjectMergeRequestCanBeAssignedUsers(
        ListProjectMergeRequestCanBeAssignedUsersRequest &request
    );
    // 获取项目合并请求模板列表
    //
    // 获取项目合并请求模板列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectMergeRequestTemplatesResponse> listProjectMergeRequestTemplates(
        ListProjectMergeRequestTemplatesRequest &request
    );
    // 获取仓库MR列表
    //
    // 获取仓库MR列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryMergeRequestsResponse> listRepositoryMergeRequests(
        ListRepositoryMergeRequestsRequest &request
    );
    // 合入合并请求
    //
    // 合入合并请求
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<MergeMergeRequestResponse> mergeMergeRequest(
        MergeMergeRequestRequest &request
    );
    // 变基合并请求
    //
    // 变基合并请求
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RebaseMergeRequestForOpenApiResponse> rebaseMergeRequestForOpenApi(
        RebaseMergeRequestForOpenApiRequest &request
    );
    // 在线解决合并请求冲突
    //
    // 在线解决合并请求冲突
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResolveMergeRequestConflictsResponse> resolveMergeRequestConflicts(
        ResolveMergeRequestConflictsRequest &request
    );
    // 检视合并请求
    //
    // 检视合并请求
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ReviewMergeRequestResponse> reviewMergeRequest(
        ReviewMergeRequestRequest &request
    );
    // 获取合并请求关联的最新流水线
    //
    // 获取合并请求关联的最新流水线
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowActualHeadPipelineResponse> showActualHeadPipeline(
        ShowActualHeadPipelineRequest &request
    );
    // 获取合并请求的平均评价
    //
    // 获取合并请求的平均评价
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAverageEvaluationResponse> showAverageEvaluation(
        ShowAverageEvaluationRequest &request
    );
    // 获取分支代码冲突
    //
    // 获取分支代码冲突
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBranchConflictResponse> showBranchConflict(
        ShowBranchConflictRequest &request
    );
    // 获取代码页单个提交下文件的检视意见
    //
    // 获取代码页单个提交下文件的检视意见
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCommitCommentsByLineResponse> showCommitCommentsByLine(
        ShowCommitCommentsByLineRequest &request
    );
    // 获取代码组合并请求设置
    //
    // 获取代码组合并请求设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGroupMergeRequestSettingResponse> showGroupMergeRequestSetting(
        ShowGroupMergeRequestSettingRequest &request
    );
    // 获取合并请求文件变更页单个文件下的检视意见
    //
    // 获取合并请求文件变更页单个文件下的检视意见
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMergeRequestCommentsByLineResponse> showMergeRequestCommentsByLine(
        ShowMergeRequestCommentsByLineRequest &request
    );
    // 获取MR详情
    //
    // 获取MR详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMergeRequestDetailResponse> showMergeRequestDetail(
        ShowMergeRequestDetailRequest &request
    );
    // 获取仓库合并请求设置
    //
    // 获取仓库合并请求设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMergeRequestSettingResponse> showMergeRequestSetting(
        ShowMergeRequestSettingRequest &request
    );
    // 获取单个合并请求模板
    //
    // 获取单个合并请求模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMergeRequestTemplateResponse> showMergeRequestTemplate(
        ShowMergeRequestTemplateRequest &request
    );
    // 获取合并请求打分
    //
    // 获取合并请求打分
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMergeRequestVotesDetailResponse> showMergeRequestVotesDetail(
        ShowMergeRequestVotesDetailRequest &request
    );
    // 获取合并请求的可合入状态。
    //
    // 获取合并请求的可合入状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMergeableStateOuterResponse> showMergeableStateOuter(
        ShowMergeableStateOuterRequest &request
    );
    // 获取项目合并请求设置
    //
    // 获取项目合并请求设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectMergeRequestSettingResponse> showProjectMergeRequestSetting(
        ShowProjectMergeRequestSettingRequest &request
    );
    // 获取仓库合并请求统计数据
    //
    // 获取仓库合并请求统计数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryMergeRequestsStatisticResponse> showRepositoryMergeRequestsStatistic(
        ShowRepositoryMergeRequestsStatisticRequest &request
    );
    // 更新代码组合并请求审核设置
    //
    // 更新代码组合并请求审核设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGroupMergeRequestApproverSettingResponse> updateGroupMergeRequestApproverSetting(
        UpdateGroupMergeRequestApproverSettingRequest &request
    );
    // 更新代码组合并请求模板
    //
    // 更新代码组合并请求模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGroupMergeRequestTemplateResponse> updateGroupMergeRequestTemplate(
        UpdateGroupMergeRequestTemplateRequest &request
    );
    // 更新合并请求
    //
    // 更新合并请求
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMergeRequestResponse> updateMergeRequest(
        UpdateMergeRequestRequest &request
    );
    // 更新合并请求审核设置
    //
    // 更新合并请求审核设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMergeRequestApproverSettingResponse> updateMergeRequestApproverSetting(
        UpdateMergeRequestApproverSettingRequest &request
    );
    // 更新合并请求的审核人列表
    //
    // 更新合并请求的审核人列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMergeRequestApproversResponse> updateMergeRequestApprovers(
        UpdateMergeRequestApproversRequest &request
    );
    // 更新合并请求的检视人列表
    //
    // 更新合并请求的检视人列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMergeRequestReviewersResponse> updateMergeRequestReviewers(
        UpdateMergeRequestReviewersRequest &request
    );
    // 更新仓库合并请求设置
    //
    // 更新仓库合并请求设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMergeRequestSettingResponse> updateMergeRequestSetting(
        UpdateMergeRequestSettingRequest &request
    );
    // 更新合并请求模板
    //
    // 更新合并请求模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMergeRequestTemplateResponse> updateMergeRequestTemplate(
        UpdateMergeRequestTemplateRequest &request
    );
    // 更新合并请求打分
    //
    // 更新合并请求打分
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMergeRequestVoteResponse> updateMergeRequestVote(
        UpdateMergeRequestVoteRequest &request
    );
    // 更新项目合并请求审核设置
    //
    // 更新项目合并请求审核设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProjectMergeRequestApproverSettingResponse> updateProjectMergeRequestApproverSetting(
        UpdateProjectMergeRequestApproverSettingRequest &request
    );
    // 更新项目合并请求模板
    //
    // 更新项目合并请求模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProjectMergeRequestTemplateResponse> updateProjectMergeRequestTemplate(
        UpdateProjectMergeRequestTemplateRequest &request
    );

    // 批量删除仓库文件推送权限
    //
    // 批量删除仓库文件推送权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteRepositoryFilePushPermissionsResponse> batchDeleteRepositoryFilePushPermissions(
        BatchDeleteRepositoryFilePushPermissionsRequest &request
    );
    // 批量更新仓库文件推送权限
    //
    // 批量更新仓库文件推送权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpdateRepositoryFilePushPermissionsResponse> batchUpdateRepositoryFilePushPermissions(
        BatchUpdateRepositoryFilePushPermissionsRequest &request
    );
    // 创建仓库文件推送权限
    //
    // 创建仓库文件推送权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateFilePushPermissionResponse> createFilePushPermission(
        CreateFilePushPermissionRequest &request
    );
    // 获取仓库文件推送权限列表
    //
    // 获取仓库文件推送权限列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryFilePushPermissionsResponse> listRepositoryFilePushPermissions(
        ListRepositoryFilePushPermissionsRequest &request
    );
    // 查询仓库权限矩阵配置
    //
    // 查询仓库权限矩阵配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryResourcePermissionsResponse> listRepositoryResourcePermissions(
        ListRepositoryResourcePermissionsRequest &request
    );
    // 查询仓库权限配置信息
    //
    // 查询仓库权限配置信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryPermissionInheritEnabledResponse> showRepositoryPermissionInheritEnabled(
        ShowRepositoryPermissionInheritEnabledRequest &request
    );
    // 更新仓库权限继承配置
    //
    // 更新仓库权限继承配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRepositoryPermissionInheritEnabledResponse> updateRepositoryPermissionInheritEnabled(
        UpdateRepositoryPermissionInheritEnabledRequest &request
    );
    // 更新仓库权限矩阵配置
    //
    // 更新仓库权限矩阵配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRepositoryResourcePermissionsResponse> updateRepositoryResourcePermissions(
        UpdateRepositoryResourcePermissionsRequest &request
    );

    // 获取流水线的关联的最新任务
    //
    // 获取流水线的关联的最新任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLatestPipelineJobsResponse> listLatestPipelineJobs(
        ListLatestPipelineJobsRequest &request
    );
    // 获取流水线的关联的任务列表
    //
    // 获取流水线的关联的任务列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPipelineJobsResponse> listPipelineJobs(
        ListPipelineJobsRequest &request
    );

    // 工作项关联的提交信息
    //
    // 工作项关联的提交信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListItemCommitsResponse> listItemCommits(
        ListItemCommitsRequest &request
    );
    // 获取项目下的代码组和仓库列表
    //
    // 获取项目下的代码组和仓库列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectSubgroupsAndRepositoriesResponse> listProjectSubgroupsAndRepositories(
        ListProjectSubgroupsAndRepositoriesRequest &request
    );
    // 获取指定项目的基本设置信息
    //
    // 获取指定项目的基本设置信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectGeneralPolicyResponse> showProjectGeneralPolicy(
        ShowProjectGeneralPolicyRequest &request
    );
    // 获取项目成员设置
    //
    // 获取项目成员设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectMemberSettingResponse> showProjectMemberSetting(
        ShowProjectMemberSettingRequest &request
    );
    // 获取项目继承设置项
    //
    // 获取项目继承设置项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectSettingsInheritCfgResponse> showProjectSettingsInheritCfg(
        ShowProjectSettingsInheritCfgRequest &request
    );
    // 获取项目水印设置
    //
    // 获取项目水印设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectWatermarkResponse> showProjectWatermark(
        ShowProjectWatermarkRequest &request
    );
    // 获取指定项目的基本设置信息
    //
    // 获取指定项目的基本设置信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectsGeneralPolicyResponse> showProjectsGeneralPolicy(
        ShowProjectsGeneralPolicyRequest &request
    );
    // 获取资源点对应的角色和权限
    //
    // 获取资源点对应的角色和权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowResourcePermissionsResponse> showResourcePermissions(
        ShowResourcePermissionsRequest &request
    );
    // 更新项目的基本设置信息
    //
    // 更新项目的基本设置信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProjectGeneralPolicyResponse> updateProjectGeneralPolicy(
        UpdateProjectGeneralPolicyRequest &request
    );
    // 更新项目继承设置项
    //
    // 更新项目继承设置项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProjectSettingsInheritCfgResponse> updateProjectSettingsInheritCfg(
        UpdateProjectSettingsInheritCfgRequest &request
    );
    // 更新项目水印设置
    //
    // 更新项目水印设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProjectWatermarkResponse> updateProjectWatermark(
        UpdateProjectWatermarkRequest &request
    );

    // 批量创建仓库保护分支
    //
    // 批量创建仓库保护分支
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateProtectedBranchResponse> batchCreateProtectedBranch(
        BatchCreateProtectedBranchRequest &request
    );
    // 批量创建仓库保护Tag
    //
    // 批量创建仓库保护Tag
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchCreateProtectedTagsResponse> batchCreateProtectedTags(
        BatchCreateProtectedTagsRequest &request
    );
    // 批量删除仓库保护分支
    //
    // 批量删除仓库保护分支
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteProtectedBranchesResponse> batchDeleteProtectedBranches(
        BatchDeleteProtectedBranchesRequest &request
    );
    // 批量删除仓库保护Tag
    //
    // 批量删除仓库保护Tag
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteProtectedTagsResponse> batchDeleteProtectedTags(
        BatchDeleteProtectedTagsRequest &request
    );
    // 批量更新仓库保护分支
    //
    // 批量更新仓库保护分支
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpdateProtectedBranchesResponse> batchUpdateProtectedBranches(
        BatchUpdateProtectedBranchesRequest &request
    );
    // 批量更新仓库保护Tag
    //
    // 批量更新仓库保护Tag
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpdateProtectedTagsResponse> batchUpdateProtectedTags(
        BatchUpdateProtectedTagsRequest &request
    );
    // 创建项目下保护分支
    //
    // 创建项目下保护分支
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateProjectProtectedBranchesResponse> createProjectProtectedBranches(
        CreateProjectProtectedBranchesRequest &request
    );
    // 创建项目下的保护tag
    //
    // 创建项目下的保护tag
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateProjectProtectedTagsResponse> createProjectProtectedTags(
        CreateProjectProtectedTagsRequest &request
    );
    // 删除仓库保护分支
    //
    // 删除仓库保护分支
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteProtectedBranchResponse> deleteProtectedBranch(
        DeleteProtectedBranchRequest &request
    );
    // 删除仓库保护Tag
    //
    // 删除仓库保护Tag
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteProtectedTagResponse> deleteProtectedTag(
        DeleteProtectedTagRequest &request
    );
    // 获取项目下保护分支列表
    //
    // 获取项目下保护分支列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectProtectedBranchesResponse> listProjectProtectedBranches(
        ListProjectProtectedBranchesRequest &request
    );
    // 获取指定项目的保护tag详情
    //
    // 获取指定项目的保护tag详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectProtectedTagsResponse> listProjectProtectedTags(
        ListProjectProtectedTagsRequest &request
    );
    // 获取仓库保护分支列表
    //
    // 获取仓库保护分支列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProtectedBranchesResponse> listProtectedBranches(
        ListProtectedBranchesRequest &request
    );
    // 获取仓库保护Tag列表
    //
    // 获取仓库保护Tag列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProtectedTagsResponse> listProtectedTags(
        ListProtectedTagsRequest &request
    );
    // 获取仓库保护分支
    //
    // 获取仓库保护分支
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProtectedBranchResponse> showProtectedBranch(
        ShowProtectedBranchRequest &request
    );
    // 获取仓库保护Tag
    //
    // 获取仓库保护Tag
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProtectedTagResponse> showProtectedTag(
        ShowProtectedTagRequest &request
    );
    // 更新仓库保护分支
    //
    // 更新仓库保护分支
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProtectedBranchResponse> updateProtectedBranch(
        UpdateProtectedBranchRequest &request
    );
    // 更新仓库保护Tag
    //
    // 更新仓库保护Tag
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProtectedTagResponse> updateProtectedTag(
        UpdateProtectedTagRequest &request
    );

    // 查看分支/tag列表
    //
    // 查看分支/tag列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRefsListResponse> listRefsList(
        ListRefsListRequest &request
    );

    // 批量删除分支
    //
    // 批量删除分支
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteBranchResponse> batchDeleteBranch(
        BatchDeleteBranchRequest &request
    );
    // 创建分支
    //
    // 创建分支
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateBranchResponse> createBranch(
        CreateBranchRequest &request
    );
    // 创建标签
    //
    // 创建标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTagResponse> createTag(
        CreateTagRequest &request
    );
    // 删除分支
    //
    // 删除分支
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteBranchResponse> deleteBranch(
        DeleteBranchRequest &request
    );
    // 删除标签
    //
    // 删除标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTagResponse> deleteTag(
        DeleteTagRequest &request
    );
    // 获取分支列表
    //
    // 获取分支列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBranchesResponse> listBranches(
        ListBranchesRequest &request
    );
    // 获取标签列表
    //
    // 获取标签列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTagsResponse> listTags(
        ListTagsRequest &request
    );
    // 获取分支详情
    //
    // 获取分支详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBranchResponse> showBranch(
        ShowBranchRequest &request
    );
    // 查看标签详情
    //
    // 查看标签详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTagResponse> showTag(
        ShowTagRequest &request
    );
    // 分支重命名
    //
    // 分支重命名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateBranchNameResponse> updateBranchName(
        UpdateBranchNameRequest &request
    );

    // 创建子模块
    //
    // 创建子模块
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddSubmoduleResponse> addSubmodule(
        AddSubmoduleRequest &request
    );
    // 添加仓库ip白名单
    //
    // 添加仓库ip白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddTrustedIpAddressResponse> addTrustedIpAddress(
        AddTrustedIpAddressRequest &request
    );
    // 将普通仓库与远程镜像关联
    //
    // 将普通仓库与远程镜像关联
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociateRemoteMirrorResponse> associateRemoteMirror(
        AssociateRemoteMirrorRequest &request
    );
    // 关联仓库与成员组
    //
    // 关联仓库与成员组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AssociateRepositoryUserGroupResponse> associateRepositoryUserGroup(
        AssociateRepositoryUserGroupRequest &request
    );
    // 批量检查仓库名
    //
    // 批量检查仓库名
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchValidateRepoNamesResponse> batchValidateRepoNames(
        BatchValidateRepoNamesRequest &request
    );
    // 创建指定分支下的目录
    //
    // 创建指定分支下的目录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDirResponse> createDir(
        CreateDirRequest &request
    );
    // 创建仓库提交规则
    //
    // 创建仓库提交规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRepositoryCommitRuleResponse> createRepositoryCommitRule(
        CreateRepositoryCommitRuleRequest &request
    );
    // 创建仓库标签
    //
    // 创建仓库标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRepositoryLabelResponse> createRepositoryLabel(
        CreateRepositoryLabelRequest &request
    );
    // 创建仓库系统标签
    //
    // 创建仓库系统标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRepositorySystemLabelsResponse> createRepositorySystemLabels(
        CreateRepositorySystemLabelsRequest &request
    );
    // 删除仓库标签
    //
    // 删除仓库标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRepositoryLabelResponse> deleteRepositoryLabel(
        DeleteRepositoryLabelRequest &request
    );
    // 删除仓库ip白名单
    //
    // 删除仓库ip白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTrustedIpAddressResponse> deleteTrustedIpAddress(
        DeleteTrustedIpAddressRequest &request
    );
    // 仓库下载
    //
    // 仓库下载
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadArchiveResponse> downloadArchive(
        DownloadArchiveRequest &request
    );
    // 触发仓库统计任务
    //
    // 触发仓库统计任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExecuteRepositoryStatisticsResponse> executeRepositoryStatistics(
        ExecuteRepositoryStatisticsRequest &request
    );
    // 获取当前登录用户仓库
    //
    // 获取当前登录用户仓库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCurrentUserRepositoriesResponse> listCurrentUserRepositories(
        ListCurrentUserRepositoriesRequest &request
    );
    // 获取代码组下仓库列表
    //
    // 获取代码组下仓库列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupRepositoriesResponse> listGroupRepositories(
        ListGroupRepositoriesRequest &request
    );
    // 获取当前用户最近提交动态列表
    //
    // 查询当前最近前N条提交动态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPersonalRecentPushEventsResponse> listPersonalRecentPushEvents(
        ListPersonalRecentPushEventsRequest &request
    );
    // 查看当前用户仓库导入任务列表
    //
    // 查看当前用户仓库导入任务列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPersonalRepositoryImportRecordsResponse> listPersonalRepositoryImportRecords(
        ListPersonalRepositoryImportRecordsRequest &request
    );
    // 获取项目下仓库列表
    //
    // 获取项目下仓库列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectRepositoriesResponse> listProjectRepositories(
        ListProjectRepositoriesRequest &request
    );
    // 查看仓库提交规则
    //
    // 查看仓库提交规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryCommitRulesResponse> listRepositoryCommitRules(
        ListRepositoryCommitRulesRequest &request
    );
    // 获取仓库贡献者列表
    //
    // 获取仓库贡献者列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryContributorsResponse> listRepositoryContributors(
        ListRepositoryContributorsRequest &request
    );
    // 获取仓库动态
    //
    // 获取仓库动态（当前仅开放推送动态）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryEventsResponse> listRepositoryEvents(
        ListRepositoryEventsRequest &request
    );
    // 获取仓库Fork列表
    //
    // 获取仓库Fork列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryForksResponse> listRepositoryForks(
        ListRepositoryForksRequest &request
    );
    // 获取仓库标签列表
    //
    // 获取仓库标签列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryLabelsResponse> listRepositoryLabels(
        ListRepositoryLabelsRequest &request
    );
    // 获取仓库默认分支语言统计
    //
    // 获取仓库默认分支语言统计
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryLanguagesResponse> listRepositoryLanguages(
        ListRepositoryLanguagesRequest &request
    );
    // 模板仓列表
    //
    // 模板仓列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryTemplatesResponse> listRepositoryTemplates(
        ListRepositoryTemplatesRequest &request
    );
    // 获取仓库指定分支或者标签子模块列表
    //
    // 获取仓库指定分支或者标签子模块列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSubmodulesResponse> listSubmodules(
        ListSubmodulesRequest &request
    );
    // 获取仓库ip白名单
    //
    // 获取仓库ip白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTrustedIpAddressesResponse> listTrustedIpAddresses(
        ListTrustedIpAddressesRequest &request
    );
    // 锁定仓库
    //
    // 锁定仓库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<LockRepositoryResponse> lockRepository(
        LockRepositoryRequest &request
    );
    // 删除仓库部署密钥
    //
    // 删除仓库部署密钥
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RemoveDeployKeyResponse> removeDeployKey(
        RemoveDeployKeyRequest &request
    );
    // 删除子仓库部署密钥
    //
    // 将该该仓库的部署密钥从子模组中删除
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RemoveDeployKeyFromSubmodulesResponse> removeDeployKeyFromSubmodules(
        RemoveDeployKeyFromSubmodulesRequest &request
    );
    // 获取文件内容
    //
    // 获取文件内容
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBlobsResponse> showBlobs(
        ShowBlobsRequest &request
    );
    // 获取仓库指定分支的提交统计信息
    //
    // 获取仓库指定分支的提交统计信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCommitStatisticsResponse> showCommitStatistics(
        ShowCommitStatisticsRequest &request
    );
    // 按行数查询提交文件内容
    //
    // 按行数查询提交文件内容，最大显示行数为1000行
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDiffLinesResponse> showDiffLines(
        ShowDiffLinesRequest &request
    );
    // 获取仓库最近推送事件
    //
    // 获取仓库最近推送事件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLastPushEventInRepositoryResponse> showLastPushEventInRepository(
        ShowLastPushEventInRepositoryRequest &request
    );
    // 获取仓库通知设置
    //
    // 获取仓库通知设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowNotificationSubscriptionResponse> showNotificationSubscription(
        ShowNotificationSubscriptionRequest &request
    );
    // 获取仓库通知设置启用状态
    //
    // 获取仓库通知设置启用状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowNotificationSubscriptionsStatusResponse> showNotificationSubscriptionsStatus(
        ShowNotificationSubscriptionsStatusRequest &request
    );
    // 分支、tags、提交对比
    //
    // 分支、tags、提交对比
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRefCompareResponse> showRefCompare(
        ShowRefCompareRequest &request
    );
    // 获取仓库镜像详情
    //
    // 获取仓库镜像详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRemoteMirrorResponse> showRemoteMirror(
        ShowRemoteMirrorRequest &request
    );
    // 获取仓库详情
    //
    // 获取仓库详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryResponse> showRepository(
        ShowRepositoryRequest &request
    );
    // 查看仓库通用提交规则
    //
    // 查看仓库通用提交规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryGeneralCommitRuleResponse> showRepositoryGeneralCommitRule(
        ShowRepositoryGeneralCommitRuleRequest &request
    );
    // 查看仓库通用策略
    //
    // 查看仓库通用策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryGeneralPolicyResponse> showRepositoryGeneralPolicy(
        ShowRepositoryGeneralPolicyRequest &request
    );
    // 查看仓库继承设置
    //
    // 查看仓库继承设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryInheritSettingResponse> showRepositoryInheritSetting(
        ShowRepositoryInheritSettingRequest &request
    );
    // 查看仓库继承设置源
    //
    // 查看仓库继承设置源
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryInheritSettingSourceResponse> showRepositoryInheritSettingSource(
        ShowRepositoryInheritSettingSourceRequest &request
    );
    // 获取仓库统计任务状态
    //
    // 获取仓库统计任务状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryStatisticsStatusResponse> showRepositoryStatisticsStatus(
        ShowRepositoryStatisticsStatusRequest &request
    );
    // 获取仓库统计摘要
    //
    // 获取仓库统计摘要
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryStatisticsSummaryResponse> showRepositoryStatisticsSummary(
        ShowRepositoryStatisticsSummaryRequest &request
    );
    // 获取仓库水印设置
    //
    // 获取仓库水印设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryWatermarkResponse> showRepositoryWatermark(
        ShowRepositoryWatermarkRequest &request
    );
    // 获取CR仓库用户分支或标签级权限
    //
    // 获取CR仓库用户分支或标签级权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUserRefPermissionResponse> showUserRefPermission(
        ShowUserRefPermissionRequest &request
    );
    // 启动仓库加速
    //
    // 启动仓库加速
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartHouseKeepingResponse> startHouseKeeping(
        StartHouseKeepingRequest &request
    );
    // 启动仓库镜像同步
    //
    // 启动仓库镜像同步
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartRemoteMirrorSynchronizationResponse> startRemoteMirrorSynchronization(
        StartRemoteMirrorSynchronizationRequest &request
    );
    // 仓库部署密钥同步到子仓
    //
    // 将该仓库的部署密钥同步到所有的子模组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SyncDeployKeyToSubmodulesResponse> syncDeployKeyToSubmodules(
        SyncDeployKeyToSubmodulesRequest &request
    );
    // 解锁仓库
    //
    // 解锁仓库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UnlockRepositoryResponse> unlockRepository(
        UnlockRepositoryRequest &request
    );
    // 修改仓库通知设置
    //
    // 修改仓库通知设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateNotificationSubscriptionResponse> updateNotificationSubscription(
        UpdateNotificationSubscriptionRequest &request
    );
    // 修改仓库提交规则
    //
    // 修改仓库提交规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRepositoryCommitRuleResponse> updateRepositoryCommitRule(
        UpdateRepositoryCommitRuleRequest &request
    );
    // 修改仓库通用提交规则
    //
    // 修改仓库通用提交规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRepositoryGeneralCommitRuleResponse> updateRepositoryGeneralCommitRule(
        UpdateRepositoryGeneralCommitRuleRequest &request
    );
    // 修改仓库通用策略
    //
    // 修改仓库通用策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRepositoryGeneralPolicyResponse> updateRepositoryGeneralPolicy(
        UpdateRepositoryGeneralPolicyRequest &request
    );
    // 修改仓库继承设置
    //
    // 修改仓库继承设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRepositoryInheritSettingResponse> updateRepositoryInheritSetting(
        UpdateRepositoryInheritSettingRequest &request
    );
    // 修改仓库标签
    //
    // 修改仓库标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRepositoryLabelResponse> updateRepositoryLabel(
        UpdateRepositoryLabelRequest &request
    );
    // 更新仓库镜像信息
    //
    // 更新仓库镜像信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRepositoryRemoteMirrorResponse> updateRepositoryRemoteMirror(
        UpdateRepositoryRemoteMirrorRequest &request
    );
    // 更新仓库水印设置
    //
    // 更新仓库水印设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRepositoryWatermarkResponse> updateRepositoryWatermark(
        UpdateRepositoryWatermarkRequest &request
    );
    // 修改仓库ip白名单
    //
    // 修改仓库ip白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTrustedIpAddressResponse> updateTrustedIpAddress(
        UpdateTrustedIpAddressRequest &request
    );

    // 添加租户ip白名单
    //
    // 添加租户ip白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddTenantTrustedIpAddressResponse> addTenantTrustedIpAddress(
        AddTenantTrustedIpAddressRequest &request
    );
    // 删除租户ip白名单
    //
    // 删除租户ip白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTenantTrustedIpAddressResponse> deleteTenantTrustedIpAddress(
        DeleteTenantTrustedIpAddressRequest &request
    );
    // 租户仓库列表
    //
    // 租户下所有占用资源的仓库列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExportTenantRepositoriesResponse> exportTenantRepositories(
        ExportTenantRepositoriesRequest &request
    );
    // 租户仓库列表
    //
    // 租户下所有占用资源的仓库列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTenantRepositoriesResponse> listTenantRepositories(
        ListTenantRepositoriesRequest &request
    );
    // 获取租户ip白名单
    //
    // 获取租户ip白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTenantTrustedIpAddressesResponse> listTenantTrustedIpAddresses(
        ListTenantTrustedIpAddressesRequest &request
    );
    // 修改租户ip白名单
    //
    // 修改租户ip白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTenantTrustedIpAddressResponse> updateTenantTrustedIpAddress(
        UpdateTenantTrustedIpAddressRequest &request
    );

    // 校验部署密钥在上层代码组或项目是否配置
    //
    // 校验部署密钥在上层代码组或项目是否配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckDeployKeyResponse> checkDeployKey(
        CheckDeployKeyRequest &request
    );
    // 校验代码组部署密钥在上层代码组或项目是否配置
    //
    // 校验代码组部署密钥在上层代码组或项目是否配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckGroupDeployKeyResponse> checkGroupDeployKey(
        CheckGroupDeployKeyRequest &request
    );
    // 获取仓库下指定分支的关联工作项列表
    //
    // 获取仓库下指定分支的关联工作项列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBranchRelatedWorkItemsResponse> listBranchRelatedWorkItems(
        ListBranchRelatedWorkItemsRequest &request
    );
    // 获取代码组下部署密钥列表
    //
    // 获取代码组下部署密钥列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupDeployKeysResponse> listGroupDeployKeys(
        ListGroupDeployKeysRequest &request
    );
    // 获取项目下部署密钥列表
    //
    // 获取项目下部署密钥列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectDeployKeysResponse> listProjectDeployKeys(
        ListProjectDeployKeysRequest &request
    );
    // 获取仓库下部署密钥列表
    //
    // 获取仓库下部署密钥列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryDeployKeysResponse> listRepositoryDeployKeys(
        ListRepositoryDeployKeysRequest &request
    );
    // 获取仓库下工作项列表
    //
    // 获取仓库下工作项列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryWorkItemsResponse> listRepositoryWorkItems(
        ListRepositoryWorkItemsRequest &request
    );
    // 获取代码组下E2E设置信息
    //
    // 获取代码组下E2E设置信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGroupE2eSettingResponse> showGroupE2eSetting(
        ShowGroupE2eSettingRequest &request
    );
    // 获取项目下E2E设置信息
    //
    // 获取项目下E2E设置信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectE2eSettingResponse> showProjectE2eSetting(
        ShowProjectE2eSettingRequest &request
    );
    // 获取仓库下E2E设置信息
    //
    // 获取仓库下E2E设置信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryE2eSettingResponse> showRepositoryE2eSetting(
        ShowRepositoryE2eSettingRequest &request
    );

    // 添加ssh公钥
    //
    // 添加ssh公钥
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddSshKeyResponse> addSshKey(
        AddSshKeyRequest &request
    );
    // 获取当前用户指定的代码组列表中的权限
    //
    // 获取当前用户指定的代码组列表中的权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchValidateUserGroupPermissionsResponse> batchValidateUserGroupPermissions(
        BatchValidateUserGroupPermissionsRequest &request
    );
    // 删除ssh公钥
    //
    // 删除ssh公钥
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSshKeyResponse> deleteSshKey(
        DeleteSshKeyRequest &request
    );
    // 获取用户的个人访问令牌
    //
    // 获取用户的个人访问令牌
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListImpersonationTokensResponse> listImpersonationTokens(
        ListImpersonationTokensRequest &request
    );
    // 获取当前用户的gpg_key列表
    //
    // 获取当前用户的gpg_key列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUserGpgKeysResponse> listUserGpgKeys(
        ListUserGpgKeysRequest &request
    );
    // 获取当前用户的密钥列表
    //
    // 获取当前用户的密钥列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUserKeysResponse> listUserKeys(
        ListUserKeysRequest &request
    );
    // 发送邮箱验证码
    //
    // 发送邮箱验证码
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SendUserEmailVerifyCodeResponse> sendUserEmailVerifyCode(
        SendUserEmailVerifyCodeRequest &request
    );
    // 获取https的验证方式
    //
    // 获取https的验证方式
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHttpsPasswordSettingResponse> showHttpsPasswordSetting(
        ShowHttpsPasswordSettingRequest &request
    );
    // 获取用户相关邮箱信息
    //
    // 获取用户相关邮箱信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUserEmailsResponse> showUserEmails(
        ShowUserEmailsRequest &request
    );
    // 修改https的验证方式
    //
    // 修改https的验证方式
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateHttpsPasswordSettingResponse> updateHttpsPasswordSetting(
        UpdateHttpsPasswordSettingRequest &request
    );
    // 更新邮箱
    //
    // 更新邮箱
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateUserEmailsResponse> updateUserEmails(
        UpdateUserEmailsRequest &request
    );

    // 添加代码组下Webhook
    //
    // 添加代码组下Webhook
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddGroupWebhookResponse> addGroupWebhook(
        AddGroupWebhookRequest &request
    );
    // 添加项目下Webhook
    //
    // 添加项目下Webhook
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddProjectWebhookResponse> addProjectWebhook(
        AddProjectWebhookRequest &request
    );
    // 添加仓库下Webhook
    //
    // 添加仓库下Webhook
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddRepositoryWebhookResponse> addRepositoryWebhook(
        AddRepositoryWebhookRequest &request
    );
    // 获取代码组下指定Webhook的日志列表
    //
    // 获取代码组下指定Webhook的日志列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupWebhookLogsResponse> listGroupWebhookLogs(
        ListGroupWebhookLogsRequest &request
    );
    // 获取代码组下Webhook列表
    //
    // 获取代码组下Webhook列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupWebhooksResponse> listGroupWebhooks(
        ListGroupWebhooksRequest &request
    );
    // 获取项目下指定Webhook的日志列表
    //
    // 获取项目下指定Webhook的日志列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectWebhookLogsResponse> listProjectWebhookLogs(
        ListProjectWebhookLogsRequest &request
    );
    // 获取项目下Webhook列表
    //
    // 获取项目下Webhook列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectWebhooksResponse> listProjectWebhooks(
        ListProjectWebhooksRequest &request
    );
    // 获取仓库下指定Webhook的日志列表
    //
    // 获取仓库下指定Webhook的日志列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryWebhookLogsResponse> listRepositoryWebhookLogs(
        ListRepositoryWebhookLogsRequest &request
    );
    // 获取仓库下Webhook列表
    //
    // 获取仓库下Webhook列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryWebhooksResponse> listRepositoryWebhooks(
        ListRepositoryWebhooksRequest &request
    );
    // 删除代码组下单个Webhook
    //
    // 删除代码组下单个Webhook
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RemoveGroupWebhookResponse> removeGroupWebhook(
        RemoveGroupWebhookRequest &request
    );
    // 删除项目下单个Webhook
    //
    // 删除项目下单个Webhook
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RemoveProjectWebhookResponse> removeProjectWebhook(
        RemoveProjectWebhookRequest &request
    );
    // 删除仓库下单个Webhook
    //
    // 删除仓库下单个Webhook
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RemoveRepositoryWebhookResponse> removeRepositoryWebhook(
        RemoveRepositoryWebhookRequest &request
    );
    // 获取代码组下单个Webhook数据
    //
    // 获取代码组下单个Webhook数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGroupWebhookResponse> showGroupWebhook(
        ShowGroupWebhookRequest &request
    );
    // 获取代码组下指定Webhook的指定日志详情
    //
    // 获取代码组下指定Webhook的指定日志详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGroupWebhookLogResponse> showGroupWebhookLog(
        ShowGroupWebhookLogRequest &request
    );
    // 获取项目下单个Webhook数据
    //
    // 获取项目下单个Webhook数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectWebhookResponse> showProjectWebhook(
        ShowProjectWebhookRequest &request
    );
    // 获取项目下指定Webhook的指定日志详情
    //
    // 获取项目下指定Webhook的指定日志详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectWebhookLogResponse> showProjectWebhookLog(
        ShowProjectWebhookLogRequest &request
    );
    // 获取仓库下单个Webhook数据
    //
    // 获取仓库下单个Webhook数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryWebhookResponse> showRepositoryWebhook(
        ShowRepositoryWebhookRequest &request
    );
    // 获取仓库下指定Webhook的指定日志详情
    //
    // 获取仓库下指定Webhook的指定日志详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRepositoryWebhookLogResponse> showRepositoryWebhookLog(
        ShowRepositoryWebhookLogRequest &request
    );
    // 更新代码组下单个Webhook数据
    //
    // 更新代码组下单个Webhook数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGroupWebhookResponse> updateGroupWebhook(
        UpdateGroupWebhookRequest &request
    );
    // 更新项目下单个Webhook数据
    //
    // 更新项目下单个Webhook数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProjectWebhookResponse> updateProjectWebhook(
        UpdateProjectWebhookRequest &request
    );
    // 更新仓库下单个Webhook数据
    //
    // 更新仓库下单个Webhook数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRepositoryWebhookResponse> updateRepositoryWebhook(
        UpdateRepositoryWebhookRequest &request
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

template class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Codeartsrepo::V4::CodeArtsRepoClient>;

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_CodeArtsRepoClient_H_

