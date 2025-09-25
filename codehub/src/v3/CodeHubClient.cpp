#include <huaweicloud/codehub/v3/CodeHubClient.h>
#include <huaweicloud/codehub/v3/CodeHubMeta.h>

#include <unordered_set>

#include <boost/algorithm/string/replace.hpp>

template <typename T>
std::string toString(const T value)
{
    std::ostringstream out;
    out << std::setprecision(std::numeric_limits<T>::digits10) << std::fixed << value;
    return out.str();
}

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {

using namespace HuaweiCloud::Sdk::Codehub::V3::Model;

CodeHubClient::CodeHubClient()
{
}

CodeHubClient::~CodeHubClient()
{
}

ClientBuilder<CodeHubClient> CodeHubClient::newBuilder()
{
    ClientBuilder<CodeHubClient> client = ClientBuilder<CodeHubClient>("");
    return client;
}
std::shared_ptr<CreateCommitResponse> CodeHubClient::createCommit(CreateCommitRequest &request)
{
    std::string localVarPath = "/v2/projects/{repo_id}/repository/commits";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repo_id"] = parameterToString(request.getRepoId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForCreateCommit());

    std::shared_ptr<CreateCommitResponse> localVarResult = std::make_shared<CreateCommitResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ListCommitsResponse> CodeHubClient::listCommits(ListCommitsRequest &request)
{
    std::string localVarPath = "/v2/projects/{repo_id}/repository/commits";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repo_id"] = parameterToString(request.getRepoId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.refNameIsSet()) {
        localVarQueryParams["ref_name"] = parameterToString(request.getRefName());
    }
    if (request.sinceIsSet()) {
        localVarQueryParams["since"] = parameterToString(request.getSince());
    }
    if (request.untilIsSet()) {
        localVarQueryParams["until"] = parameterToString(request.getUntil());
    }
    if (request.pathIsSet()) {
        localVarQueryParams["path"] = parameterToString(request.getPath());
    }
    if (request.allIsSet()) {
        localVarQueryParams["all"] = parameterToString(request.isAll());
    }
    if (request.withStatsIsSet()) {
        localVarQueryParams["with_stats"] = parameterToString(request.isWithStats());
    }
    if (request.pageIsSet()) {
        localVarQueryParams["page"] = parameterToString(request.getPage());
    }
    if (request.perPageIsSet()) {
        localVarQueryParams["per_page"] = parameterToString(request.getPerPage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListCommits());

    std::shared_ptr<ListCommitsResponse> localVarResult = std::make_shared<ListCommitsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDiffCommitResponse> CodeHubClient::showDiffCommit(ShowDiffCommitRequest &request)
{
    std::string localVarPath = "/v2/projects/{repo_id}/repository/commits/{sha}/diff";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repo_id"] = parameterToString(request.getRepoId());
    localVarPathParams["sha"] = parameterToString(request.getSha());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowDiffCommit());

    std::shared_ptr<ShowDiffCommitResponse> localVarResult = std::make_shared<ShowDiffCommitResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowSingleCommitResponse> CodeHubClient::showSingleCommit(ShowSingleCommitRequest &request)
{
    std::string localVarPath = "/v2/projects/{repo_id}/repository/commits/{sha}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repo_id"] = parameterToString(request.getRepoId());
    localVarPathParams["sha"] = parameterToString(request.getSha());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.statsIsSet()) {
        localVarQueryParams["stats"] = parameterToString(request.isStats());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowSingleCommit());

    std::shared_ptr<ShowSingleCommitResponse> localVarResult = std::make_shared<ShowSingleCommitResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateMergeRequestDiscussionResponse> CodeHubClient::createMergeRequestDiscussion(CreateMergeRequestDiscussionRequest &request)
{
    std::string localVarPath = "/v2/repositories/{repository_id}/merge_requests/{merge_request_iid}/discussions";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["merge_request_iid"] = parameterToString(request.getMergeRequestIid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForCreateMergeRequestDiscussion());

    std::shared_ptr<CreateMergeRequestDiscussionResponse> localVarResult = std::make_shared<CreateMergeRequestDiscussionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateMergeRequestDiscussionNoteResponse> CodeHubClient::createMergeRequestDiscussionNote(CreateMergeRequestDiscussionNoteRequest &request)
{
    std::string localVarPath = "/v2/repositories/{repository_id}/merge_requests/{merge_request_iid}/discussions/{discussion_id}/notes";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["merge_request_iid"] = parameterToString(request.getMergeRequestIid());
    localVarPathParams["discussion_id"] = parameterToString(request.getDiscussionId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForCreateMergeRequestDiscussionNote());

    std::shared_ptr<CreateMergeRequestDiscussionNoteResponse> localVarResult = std::make_shared<CreateMergeRequestDiscussionNoteResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ShowReviewSettingResponse> CodeHubClient::showReviewSetting(ShowReviewSettingRequest &request)
{
    std::string localVarPath = "/v2/repositories/{repository_id}/review_setting";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowReviewSetting());

    std::shared_ptr<ShowReviewSettingResponse> localVarResult = std::make_shared<ShowReviewSettingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFilesByQueryResponse> CodeHubClient::listFilesByQuery(ListFilesByQueryRequest &request)
{
    std::string localVarPath = "/v2/projects/{repo_id}/repository/files";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repo_id"] = parameterToString(request.getRepoId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.filePathIsSet()) {
        localVarQueryParams["file_path"] = parameterToString(request.getFilePath());
    }
    if (request.refIsSet()) {
        localVarQueryParams["ref"] = parameterToString(request.getRef());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListFilesByQuery());

    std::shared_ptr<ListFilesByQueryResponse> localVarResult = std::make_shared<ListFilesByQueryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowFileResponse> CodeHubClient::showFile(ShowFileRequest &request)
{
    std::string localVarPath = "/v2/projects/{repo_id}/repository/files/{file_path}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repo_id"] = parameterToString(request.getRepoId());
    localVarPathParams["file_path"] = parameterToString(request.getFilePath());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.refIsSet()) {
        localVarQueryParams["ref"] = parameterToString(request.getRef());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowFile());

    std::shared_ptr<ShowFileResponse> localVarResult = std::make_shared<ShowFileResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GetAllRepositoryByProjectIdResponse> CodeHubClient::getAllRepositoryByProjectId(GetAllRepositoryByProjectIdRequest &request)
{
    std::string localVarPath = "/v1/projects/{project_uuid}/repositories";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_uuid"] = parameterToString(request.getProjectUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageIndexIsSet()) {
        localVarQueryParams["page_index"] = parameterToString(request.getPageIndex());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForGetAllRepositoryByProjectId());

    std::shared_ptr<GetAllRepositoryByProjectIdResponse> localVarResult = std::make_shared<GetAllRepositoryByProjectIdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GetProductTemplatesResponse> CodeHubClient::getProductTemplates(GetProductTemplatesRequest &request)
{
    std::string localVarPath = "/v1/projects/{project_uuid}/repositories/template_status";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_uuid"] = parameterToString(request.getProjectUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageNoIsSet()) {
        localVarQueryParams["page_no"] = parameterToString(request.getPageNo());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForGetProductTemplates());

    std::shared_ptr<GetProductTemplatesResponse> localVarResult = std::make_shared<GetProductTemplatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProductTwoTemplatesResponse> CodeHubClient::listProductTwoTemplates(ListProductTwoTemplatesRequest &request)
{
    std::string localVarPath = "/v2/projects/{project_uuid}/repositories/template-status";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_uuid"] = parameterToString(request.getProjectUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageNoIsSet()) {
        localVarQueryParams["page_no"] = parameterToString(request.getPageNo());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListProductTwoTemplates());

    std::shared_ptr<ListProductTwoTemplatesResponse> localVarResult = std::make_shared<ListProductTwoTemplatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryNameExistResponse> CodeHubClient::showRepositoryNameExist(ShowRepositoryNameExistRequest &request)
{
    std::string localVarPath = "/v1/projects/{project_uuid}/repositories/validation/{repository_name}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_uuid"] = parameterToString(request.getProjectUuid());
    localVarPathParams["repository_name"] = parameterToString(request.getRepositoryName());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowRepositoryNameExist());

    std::shared_ptr<ShowRepositoryNameExistResponse> localVarResult = std::make_shared<ShowRepositoryNameExistResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<AddRepoMembersResponse> CodeHubClient::addRepoMembers(AddRepoMembersRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_uuid}/members";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_uuid"] = parameterToString(request.getRepositoryUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForAddRepoMembers());

    std::shared_ptr<AddRepoMembersResponse> localVarResult = std::make_shared<AddRepoMembersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DeleteRepoMemberResponse> CodeHubClient::deleteRepoMember(DeleteRepoMemberRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_uuid}/members/{member_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["member_id"] = parameterToString(request.getMemberId());
    localVarPathParams["repository_uuid"] = parameterToString(request.getRepositoryUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForDeleteRepoMember());

    std::shared_ptr<DeleteRepoMemberResponse> localVarResult = std::make_shared<DeleteRepoMemberResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepoMembersResponse> CodeHubClient::listRepoMembers(ListRepoMembersRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_uuid}/members";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_uuid"] = parameterToString(request.getRepositoryUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageIndexIsSet()) {
        localVarQueryParams["page_index"] = parameterToString(request.getPageIndex());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.subjectIsSet()) {
        localVarQueryParams["subject"] = parameterToString(request.getSubject());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListRepoMembers());

    std::shared_ptr<ListRepoMembersResponse> localVarResult = std::make_shared<ListRepoMembersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SetRepoRoleResponse> CodeHubClient::setRepoRole(SetRepoRoleRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_uuid}/members/{member_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["member_id"] = parameterToString(request.getMemberId());
    localVarPathParams["repository_uuid"] = parameterToString(request.getRepositoryUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForSetRepoRole());

    std::shared_ptr<SetRepoRoleResponse> localVarResult = std::make_shared<SetRepoRoleResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddDeployKeyResponse> CodeHubClient::addDeployKey(AddDeployKeyRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_id}/deploy_keys";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForAddDeployKey());

    std::shared_ptr<AddDeployKeyResponse> localVarResult = std::make_shared<AddDeployKeyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddDeployKeyV2Response> CodeHubClient::addDeployKeyV2(AddDeployKeyV2Request &request)
{
    std::string localVarPath = "/v2/repositories/{repository_id}/deploy-keys";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForAddDeployKeyV2());

    std::shared_ptr<AddDeployKeyV2Response> localVarResult = std::make_shared<AddDeployKeyV2Response>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddProtectBranchV2Response> CodeHubClient::addProtectBranchV2(AddProtectBranchV2Request &request)
{
    std::string localVarPath = "/v2/repositories/{repository_id}/branch/{branch_name}/protect";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["branch_name"] = parameterToString(request.getBranchName());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForAddProtectBranchV2());

    std::shared_ptr<AddProtectBranchV2Response> localVarResult = std::make_shared<AddProtectBranchV2Response>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddTagV2Response> CodeHubClient::addTagV2(AddTagV2Request &request)
{
    std::string localVarPath = "/v2/repositories/{repository_id}/tags";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForAddTagV2());

    std::shared_ptr<AddTagV2Response> localVarResult = std::make_shared<AddTagV2Response>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateRepositoryResponse> CodeHubClient::createRepository(CreateRepositoryRequest &request)
{
    std::string localVarPath = "/v1/repositories";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForCreateRepository());

    std::shared_ptr<CreateRepositoryResponse> localVarResult = std::make_shared<CreateRepositoryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DeleteDeployKeyResponse> CodeHubClient::deleteDeployKey(DeleteDeployKeyRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_id}/deploy_keys/{key_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["key_id"] = parameterToString(request.getKeyId());
    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForDeleteDeployKey());

    std::shared_ptr<DeleteDeployKeyResponse> localVarResult = std::make_shared<DeleteDeployKeyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteDeployKeyV2Response> CodeHubClient::deleteDeployKeyV2(DeleteDeployKeyV2Request &request)
{
    std::string localVarPath = "/v2/repositories/{repository_id}/deploy-keys/{key_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["key_id"] = parameterToString(request.getKeyId());
    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForDeleteDeployKeyV2());

    std::shared_ptr<DeleteDeployKeyV2Response> localVarResult = std::make_shared<DeleteDeployKeyV2Response>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteRepositoryResponse> CodeHubClient::deleteRepository(DeleteRepositoryRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_uuid}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_uuid"] = parameterToString(request.getRepositoryUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForDeleteRepository());

    std::shared_ptr<DeleteRepositoryResponse> localVarResult = std::make_shared<DeleteRepositoryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GetRepositoryByProjectIdResponse> CodeHubClient::getRepositoryByProjectId(GetRepositoryByProjectIdRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_uuid}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_uuid"] = parameterToString(request.getRepositoryUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForGetRepositoryByProjectId());

    std::shared_ptr<GetRepositoryByProjectIdResponse> localVarResult = std::make_shared<GetRepositoryByProjectIdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GetTemplatesResponse> CodeHubClient::getTemplates(GetTemplatesRequest &request)
{
    std::string localVarPath = "/v1/repositories/repository_templates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.platformIsSet()) {
        localVarQueryParams["platform"] = parameterToString(request.getPlatform());
    }
    if (request.languageIsSet()) {
        localVarQueryParams["language"] = parameterToString(request.getLanguage());
    }
    if (request.pipelineIsSet()) {
        localVarQueryParams["pipeline"] = parameterToString(request.getPipeline());
    }
    if (request.entertypeIsSet()) {
        localVarQueryParams["entertype"] = parameterToString(request.getEntertype());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.dateorderIsSet()) {
        localVarQueryParams["dateorder"] = parameterToString(request.getDateorder());
    }
    if (request.usedtimeorderIsSet()) {
        localVarQueryParams["usedtimeorder"] = parameterToString(request.getUsedtimeorder());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.regionIsSet()) {
        localVarQueryParams["region"] = parameterToString(request.getRegion());
    }
    if (request.pageNoIsSet()) {
        localVarQueryParams["page_no"] = parameterToString(request.getPageNo());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForGetTemplates());

    std::shared_ptr<GetTemplatesResponse> localVarResult = std::make_shared<GetTemplatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListBranchesByRepositoryIdResponse> CodeHubClient::listBranchesByRepositoryId(ListBranchesByRepositoryIdRequest &request)
{
    std::string localVarPath = "/v2/repositories/{repository_id}/branches";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageIsSet()) {
        localVarQueryParams["page"] = parameterToString(request.getPage());
    }
    if (request.perPageIsSet()) {
        localVarQueryParams["per_page"] = parameterToString(request.getPerPage());
    }
    if (request.matchIsSet()) {
        localVarQueryParams["match"] = parameterToString(request.getMatch());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListBranchesByRepositoryId());

    std::shared_ptr<ListBranchesByRepositoryIdResponse> localVarResult = std::make_shared<ListBranchesByRepositoryIdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListCommitStatisticsResponse> CodeHubClient::listCommitStatistics(ListCommitStatisticsRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_id}/statistics";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.branchNameIsSet()) {
        localVarQueryParams["branch_name"] = parameterToString(request.getBranchName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListCommitStatistics());

    std::shared_ptr<ListCommitStatisticsResponse> localVarResult = std::make_shared<ListCommitStatisticsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFilesResponse> CodeHubClient::listFiles(ListFilesRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_uuid}/branch/{branch_name}/file";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_uuid"] = parameterToString(request.getRepositoryUuid());
    localVarPathParams["branch_name"] = parameterToString(request.getBranchName());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pathIsSet()) {
        localVarQueryParams["path"] = parameterToString(request.getPath());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListFiles());

    std::shared_ptr<ListFilesResponse> localVarResult = std::make_shared<ListFilesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMergeChangesResponse> CodeHubClient::listMergeChanges(ListMergeChangesRequest &request)
{
    std::string localVarPath = "/v2/repositories/{repository_id}/merge-requests/{merge_request_iid}/changes";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["merge_request_iid"] = parameterToString(request.getMergeRequestIid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.filePathIsSet()) {
        localVarQueryParams["file_path"] = parameterToString(request.getFilePath());
    }
    if (request.ignoreWhitespaceChangeIsSet()) {
        localVarQueryParams["ignore_whitespace_change"] = parameterToString(request.isIgnoreWhitespaceChange());
    }
    if (request.forceEncodeIsSet()) {
        localVarQueryParams["force_encode"] = parameterToString(request.isForceEncode());
    }
    if (request.viewIsSet()) {
        localVarQueryParams["view"] = parameterToString(request.getView());
    }
    if (request.commitIdIsSet()) {
        localVarQueryParams["commit_id"] = parameterToString(request.getCommitId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListMergeChanges());

    std::shared_ptr<ListMergeChangesResponse> localVarResult = std::make_shared<ListMergeChangesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMergeChangesTreesResponse> CodeHubClient::listMergeChangesTrees(ListMergeChangesTreesRequest &request)
{
    std::string localVarPath = "/v2/repositories/{repository_id}/merge-requests/{merge_request_iid}/changes-trees";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["merge_request_iid"] = parameterToString(request.getMergeRequestIid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.viewIsSet()) {
        localVarQueryParams["view"] = parameterToString(request.getView());
    }
    if (request.commitIdIsSet()) {
        localVarQueryParams["commit_id"] = parameterToString(request.getCommitId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListMergeChangesTrees());

    std::shared_ptr<ListMergeChangesTreesResponse> localVarResult = std::make_shared<ListMergeChangesTreesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMergeRequestResponse> CodeHubClient::listMergeRequest(ListMergeRequestRequest &request)
{
    std::string localVarPath = "/v2/repositories/{repository_id}/merge_request";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.stateIsSet()) {
        localVarQueryParams["state"] = parameterToString(request.getState());
    }
    if (request.pageIsSet()) {
        localVarQueryParams["page"] = parameterToString(request.getPage());
    }
    if (request.perPageIsSet()) {
        localVarQueryParams["per_page"] = parameterToString(request.getPerPage());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListMergeRequest());

    std::shared_ptr<ListMergeRequestResponse> localVarResult = std::make_shared<ListMergeRequestResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMergeRequestReviewersResponse> CodeHubClient::listMergeRequestReviewers(ListMergeRequestReviewersRequest &request)
{
    std::string localVarPath = "/v2/repositories/{repository_id}/merge-requests/{merge_request_iid}/approval-reviewers";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["merge_request_iid"] = parameterToString(request.getMergeRequestIid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageIsSet()) {
        localVarQueryParams["page"] = parameterToString(request.getPage());
    }
    if (request.perPageIsSet()) {
        localVarQueryParams["per_page"] = parameterToString(request.getPerPage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListMergeRequestReviewers());

    std::shared_ptr<ListMergeRequestReviewersResponse> localVarResult = std::make_shared<ListMergeRequestReviewersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRelatedCommitsResponse> CodeHubClient::listRelatedCommits(ListRelatedCommitsRequest &request)
{
    std::string localVarPath = "/v2/repositories/{repository_uuid}/related-commits";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_uuid"] = parameterToString(request.getRepositoryUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.pageIsSet()) {
        localVarQueryParams["page"] = parameterToString(request.getPage());
    }
    if (request.perPageIsSet()) {
        localVarQueryParams["per_page"] = parameterToString(request.getPerPage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListRelatedCommits());

    std::shared_ptr<ListRelatedCommitsResponse> localVarResult = std::make_shared<ListRelatedCommitsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepositoryStatusResponse> CodeHubClient::listRepositoryStatus(ListRepositoryStatusRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_uuid}/status";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_uuid"] = parameterToString(request.getRepositoryUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListRepositoryStatus());

    std::shared_ptr<ListRepositoryStatusResponse> localVarResult = std::make_shared<ListRepositoryStatusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListSubfilesResponse> CodeHubClient::listSubfiles(ListSubfilesRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_uuid}/branch/{branch_name}/sub-files";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_uuid"] = parameterToString(request.getRepositoryUuid());
    localVarPathParams["branch_name"] = parameterToString(request.getBranchName());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pathIsSet()) {
        localVarQueryParams["path"] = parameterToString(request.getPath());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListSubfiles());

    std::shared_ptr<ListSubfilesResponse> localVarResult = std::make_shared<ListSubfilesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListTemplatesTwoResponse> CodeHubClient::listTemplatesTwo(ListTemplatesTwoRequest &request)
{
    std::string localVarPath = "/v2/repositories/{repository_uuid}/template-status";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_uuid"] = parameterToString(request.getRepositoryUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListTemplatesTwo());

    std::shared_ptr<ListTemplatesTwoResponse> localVarResult = std::make_shared<ListTemplatesTwoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ListTwoTemplatesResponse> CodeHubClient::listTwoTemplates(ListTwoTemplatesRequest &request)
{
    std::string localVarPath = "/v2/repositories/repository-templates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.platformIsSet()) {
        localVarQueryParams["platform"] = parameterToString(request.getPlatform());
    }
    if (request.languageIsSet()) {
        localVarQueryParams["language"] = parameterToString(request.getLanguage());
    }
    if (request.pipelineIsSet()) {
        localVarQueryParams["pipeline"] = parameterToString(request.getPipeline());
    }
    if (request.enterTypeIsSet()) {
        localVarQueryParams["enter_type"] = parameterToString(request.getEnterType());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.dateOrderIsSet()) {
        localVarQueryParams["date_order"] = parameterToString(request.getDateOrder());
    }
    if (request.usedTimeOrderIsSet()) {
        localVarQueryParams["used_time_order"] = parameterToString(request.getUsedTimeOrder());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.regionIsSet()) {
        localVarQueryParams["region"] = parameterToString(request.getRegion());
    }
    if (request.pageNoIsSet()) {
        localVarQueryParams["page_no"] = parameterToString(request.getPageNo());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListTwoTemplates());

    std::shared_ptr<ListTwoTemplatesResponse> localVarResult = std::make_shared<ListTwoTemplatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShareTemplatesResponse> CodeHubClient::shareTemplates(ShareTemplatesRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_uuid}/template_status";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_uuid"] = parameterToString(request.getRepositoryUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShareTemplates());

    std::shared_ptr<ShareTemplatesResponse> localVarResult = std::make_shared<ShareTemplatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ShowBranchesByRepositoryIdResponse> CodeHubClient::showBranchesByRepositoryId(ShowBranchesByRepositoryIdRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_id}/branches";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowBranchesByRepositoryId());

    std::shared_ptr<ShowBranchesByRepositoryIdResponse> localVarResult = std::make_shared<ShowBranchesByRepositoryIdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowBranchesByTwoRepositoryIdResponse> CodeHubClient::showBranchesByTwoRepositoryId(ShowBranchesByTwoRepositoryIdRequest &request)
{
    std::string localVarPath = "/v2/repositories/{repository_id}/tags";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowBranchesByTwoRepositoryId());

    std::shared_ptr<ShowBranchesByTwoRepositoryIdResponse> localVarResult = std::make_shared<ShowBranchesByTwoRepositoryIdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowCommitsByBranchResponse> CodeHubClient::showCommitsByBranch(ShowCommitsByBranchRequest &request)
{
    std::string localVarPath = "/v1/repositories/{group_name}/{repository_name}/commits";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_name"] = parameterToString(request.getGroupName());
    localVarPathParams["repository_name"] = parameterToString(request.getRepositoryName());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageIndexIsSet()) {
        localVarQueryParams["page_index"] = parameterToString(request.getPageIndex());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.refNameIsSet()) {
        localVarQueryParams["ref_name"] = parameterToString(request.getRefName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowCommitsByBranch());

    std::shared_ptr<ShowCommitsByBranchResponse> localVarResult = std::make_shared<ShowCommitsByBranchResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowCommitsByRepoIdResponse> CodeHubClient::showCommitsByRepoId(ShowCommitsByRepoIdRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_id}/commits";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.authorIsSet()) {
        localVarQueryParams["author"] = parameterToString(request.getAuthor());
    }
    if (request.beginDateIsSet()) {
        localVarQueryParams["begin_date"] = parameterToString(request.getBeginDate());
    }
    if (request.endDateIsSet()) {
        localVarQueryParams["end_date"] = parameterToString(request.getEndDate());
    }
    if (request.messageIsSet()) {
        localVarQueryParams["message"] = parameterToString(request.getMessage());
    }
    if (request.pageIndexIsSet()) {
        localVarQueryParams["page_index"] = parameterToString(request.getPageIndex());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.pathIsSet()) {
        localVarQueryParams["path"] = parameterToString(request.getPath());
    }
    if (request.refNameIsSet()) {
        localVarQueryParams["ref_name"] = parameterToString(request.getRefName());
    }
    if (request.statFormatIsSet()) {
        localVarQueryParams["stat_format"] = parameterToString(request.getStatFormat());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowCommitsByRepoId());

    std::shared_ptr<ShowCommitsByRepoIdResponse> localVarResult = std::make_shared<ShowCommitsByRepoIdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowHasPipelineResponse> CodeHubClient::showHasPipeline(ShowHasPipelineRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_uuid}/pipeline";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_uuid"] = parameterToString(request.getRepositoryUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowHasPipeline());

    std::shared_ptr<ShowHasPipelineResponse> localVarResult = std::make_shared<ShowHasPipelineResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowImageBlobResponse> CodeHubClient::showImageBlob(ShowImageBlobRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_uuid}/branch/{branch_name}/image";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_uuid"] = parameterToString(request.getRepositoryUuid());
    localVarPathParams["branch_name"] = parameterToString(request.getBranchName());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pathIsSet()) {
        localVarQueryParams["path"] = parameterToString(request.getPath());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowImageBlob());

    std::shared_ptr<ShowImageBlobResponse> localVarResult = std::make_shared<ShowImageBlobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowMasterResponse> CodeHubClient::showMaster(ShowMasterRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_uuid}/master";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_uuid"] = parameterToString(request.getRepositoryUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowMaster());

    std::shared_ptr<ShowMasterResponse> localVarResult = std::make_shared<ShowMasterResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowMergeRequestResponse> CodeHubClient::showMergeRequest(ShowMergeRequestRequest &request)
{
    std::string localVarPath = "/v2/repositories/{repository_id}/merge_request/{merge_request_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["merge_request_id"] = parameterToString(request.getMergeRequestId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowMergeRequest());

    std::shared_ptr<ShowMergeRequestResponse> localVarResult = std::make_shared<ShowMergeRequestResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepoIdResponse> CodeHubClient::showRepoId(ShowRepoIdRequest &request)
{
    std::string localVarPath = "/v1/repositories/repoid";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.groupNameIsSet()) {
        localVarQueryParams["group_name"] = parameterToString(request.getGroupName());
    }
    if (request.repositoryNameIsSet()) {
        localVarQueryParams["repository_name"] = parameterToString(request.getRepositoryName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowRepoId());

    std::shared_ptr<ShowRepoIdResponse> localVarResult = std::make_shared<ShowRepoIdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryArchiveResponse> CodeHubClient::showRepositoryArchive(ShowRepositoryArchiveRequest &request)
{
    std::string localVarPath = "/v2/repositories/{repository_uuid}/archive";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_uuid"] = parameterToString(request.getRepositoryUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.shaIsSet()) {
        localVarQueryParams["sha"] = parameterToString(request.getSha());
    }
    if (request.formatIsSet()) {
        localVarQueryParams["format"] = parameterToString(request.getFormat());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowRepositoryArchive());

    std::shared_ptr<ShowRepositoryArchiveResponse> localVarResult = std::make_shared<ShowRepositoryArchiveResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryByUuidResponse> CodeHubClient::showRepositoryByUuid(ShowRepositoryByUuidRequest &request)
{
    std::string localVarPath = "/v2/repositories/{repository_uuid}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_uuid"] = parameterToString(request.getRepositoryUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowRepositoryByUuid());

    std::shared_ptr<ShowRepositoryByUuidResponse> localVarResult = std::make_shared<ShowRepositoryByUuidResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryStatisticsResponse> CodeHubClient::showRepositoryStatistics(ShowRepositoryStatisticsRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_id}/statistics";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowRepositoryStatistics());

    std::shared_ptr<ShowRepositoryStatisticsResponse> localVarResult = std::make_shared<ShowRepositoryStatisticsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ShowStatisticCommitResponse> CodeHubClient::showStatisticCommit(ShowStatisticCommitRequest &request)
{
    std::string localVarPath = "/v2/repositories/{repository_id}/commit_lines";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.refNameIsSet()) {
        localVarQueryParams["ref_name"] = parameterToString(request.getRefName());
    }
    if (request.beginDateIsSet()) {
        localVarQueryParams["begin_date"] = parameterToString(request.getBeginDate());
    }
    if (request.endDateIsSet()) {
        localVarQueryParams["end_date"] = parameterToString(request.getEndDate());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowStatisticCommit());

    std::shared_ptr<ShowStatisticCommitResponse> localVarResult = std::make_shared<ShowStatisticCommitResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowStatisticCommitV3Response> CodeHubClient::showStatisticCommitV3(ShowStatisticCommitV3Request &request)
{
    std::string localVarPath = "/v3/repositories/{repository_id}/commit-lines";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.refNameIsSet()) {
        localVarQueryParams["ref_name"] = parameterToString(request.getRefName());
    }
    if (request.beginDateIsSet()) {
        localVarQueryParams["begin_date"] = parameterToString(request.getBeginDate());
    }
    if (request.endDateIsSet()) {
        localVarQueryParams["end_date"] = parameterToString(request.getEndDate());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowStatisticCommitV3());

    std::shared_ptr<ShowStatisticCommitV3Response> localVarResult = std::make_shared<ShowStatisticCommitV3Response>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowStatisticalDataResponse> CodeHubClient::showStatisticalData(ShowStatisticalDataRequest &request)
{
    std::string localVarPath = "/v1/repositories/{repository_uuid}/statistic-data";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_uuid"] = parameterToString(request.getRepositoryUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowStatisticalData());

    std::shared_ptr<ShowStatisticalDataResponse> localVarResult = std::make_shared<ShowStatisticalDataResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateMergeRequestApprovalStateResponse> CodeHubClient::updateMergeRequestApprovalState(UpdateMergeRequestApprovalStateRequest &request)
{
    std::string localVarPath = "/v2/repositories/{repository_id}/merge-requests/{merge_request_iid}/approval";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["merge_request_iid"] = parameterToString(request.getMergeRequestIid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForUpdateMergeRequestApprovalState());

    std::shared_ptr<UpdateMergeRequestApprovalStateResponse> localVarResult = std::make_shared<UpdateMergeRequestApprovalStateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AddSshKeyResponse> CodeHubClient::addSshKey(AddSshKeyRequest &request)
{
    std::string localVarPath = "/v1/users/sshkey";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForAddSshKey());

    std::shared_ptr<AddSshKeyResponse> localVarResult = std::make_shared<AddSshKeyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DeleteSShkeyResponse> CodeHubClient::deleteSShkey(DeleteSShkeyRequest &request)
{
    std::string localVarPath = "/v1/users/sshkey/{id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["id"] = parameterToString(request.getId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForDeleteSShkey());

    std::shared_ptr<DeleteSShkeyResponse> localVarResult = std::make_shared<DeleteSShkeyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListSshKeysResponse> CodeHubClient::listSshKeys(ListSshKeysRequest &request)
{
    std::string localVarPath = "/v1/users/sshkey";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListSshKeys());

    std::shared_ptr<ListSshKeysResponse> localVarResult = std::make_shared<ListSshKeysResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowPrivateKeyVerifyResponse> CodeHubClient::showPrivateKeyVerify(ShowPrivateKeyVerifyRequest &request)
{
    std::string localVarPath = "/v1/users/sshkey/privatekey/verify";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowPrivateKeyVerify());

    std::shared_ptr<ShowPrivateKeyVerifyResponse> localVarResult = std::make_shared<ShowPrivateKeyVerifyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ValidateHttpsInfoResponse> CodeHubClient::validateHttpsInfo(ValidateHttpsInfoRequest &request)
{
    std::string localVarPath = "/v1/user/{iam_user_uuid}/validateHttpsInfo";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["iam_user_uuid"] = parameterToString(request.getIamUserUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForValidateHttpsInfo());

    std::shared_ptr<ValidateHttpsInfoResponse> localVarResult = std::make_shared<ValidateHttpsInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ValidateHttpsInfoV2Response> CodeHubClient::validateHttpsInfoV2(ValidateHttpsInfoV2Request &request)
{
    std::string localVarPath = "/v2/user/{iam_user_uuid}/validate-https-info";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["iam_user_uuid"] = parameterToString(request.getIamUserUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForValidateHttpsInfoV2());

    std::shared_ptr<ValidateHttpsInfoV2Response> localVarResult = std::make_shared<ValidateHttpsInfoV2Response>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateNewBranchResponse> CodeHubClient::createNewBranch(CreateNewBranchRequest &request)
{
    std::string localVarPath = "/v2/repositories/{repository_id}/branches";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForCreateNewBranch());

    std::shared_ptr<CreateNewBranchResponse> localVarResult = std::make_shared<CreateNewBranchResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<AssociateIssuesResponse> CodeHubClient::associateIssues(AssociateIssuesRequest &request)
{
    std::string localVarPath = "/v2/projects/issues";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForAssociateIssues());

    std::shared_ptr<AssociateIssuesResponse> localVarResult = std::make_shared<AssociateIssuesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateProjectAndRepositoriesResponse> CodeHubClient::createProjectAndRepositories(CreateProjectAndRepositoriesRequest &request)
{
    std::string localVarPath = "/v2/projects/repositories";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForCreateProjectAndRepositories());

    std::shared_ptr<CreateProjectAndRepositoriesResponse> localVarResult = std::make_shared<CreateProjectAndRepositoriesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<CreateProjectAndforkRepositoriesResponse> CodeHubClient::createProjectAndforkRepositories(CreateProjectAndforkRepositoriesRequest &request)
{
    std::string localVarPath = "/v2/projects/repositories/fork";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForCreateProjectAndforkRepositories());

    std::shared_ptr<CreateProjectAndforkRepositoriesResponse> localVarResult = std::make_shared<CreateProjectAndforkRepositoriesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<ListUserAllRepositoriesResponse> CodeHubClient::listUserAllRepositories(ListUserAllRepositoriesRequest &request)
{
    std::string localVarPath = "/v2/projects/repositories";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageIndexIsSet()) {
        localVarQueryParams["page_index"] = parameterToString(request.getPageIndex());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListUserAllRepositories());

    std::shared_ptr<ListUserAllRepositoriesResponse> localVarResult = std::make_shared<ListUserAllRepositoriesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAllRepositoryByTwoProjectIdResponse> CodeHubClient::showAllRepositoryByTwoProjectId(ShowAllRepositoryByTwoProjectIdRequest &request)
{
    std::string localVarPath = "/v2/projects/{project_uuid}/repositories";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_uuid"] = parameterToString(request.getProjectUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageIndexIsSet()) {
        localVarQueryParams["page_index"] = parameterToString(request.getPageIndex());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForShowAllRepositoryByTwoProjectId());

    std::shared_ptr<ShowAllRepositoryByTwoProjectIdResponse> localVarResult = std::make_shared<ShowAllRepositoryByTwoProjectIdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<AddHooksResponse> CodeHubClient::addHooks(AddHooksRequest &request)
{
    std::string localVarPath = "/v1/repositories/{group_name}/{repository_name}/hooks";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_name"] = parameterToString(request.getGroupName());
    localVarPathParams["repository_name"] = parameterToString(request.getRepositoryName());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForAddHooks());

    std::shared_ptr<AddHooksResponse> localVarResult = std::make_shared<AddHooksResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse json format response");
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }

    return localVarResult;
}
std::shared_ptr<DeleteHooksResponse> CodeHubClient::deleteHooks(DeleteHooksRequest &request)
{
    std::string localVarPath = "/v1/repositories/{group_name}/{repository_name}/hooks/{hook_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_name"] = parameterToString(request.getGroupName());
    localVarPathParams["hook_id"] = parameterToString(request.getHookId());
    localVarPathParams["repository_name"] = parameterToString(request.getRepositoryName());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForDeleteHooks());

    std::shared_ptr<DeleteHooksResponse> localVarResult = std::make_shared<DeleteHooksResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListHooksResponse> CodeHubClient::listHooks(ListHooksRequest &request)
{
    std::string localVarPath = "/v1/repositories/{group_name}/{repository_name}/hooks";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_name"] = parameterToString(request.getGroupName());
    localVarPathParams["repository_name"] = parameterToString(request.getRepositoryName());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.hookIdIsSet()) {
        localVarQueryParams["hook_id"] = parameterToString(request.getHookId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeHubMeta::genRequestDefForListHooks());

    std::shared_ptr<ListHooksResponse> localVarResult = std::make_shared<ListHooksResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
std::string CodeHubClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string CodeHubClient::parameterToString(std::string value)
{
    return value;
}

std::string CodeHubClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string CodeHubClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string CodeHubClient::parameterToString(float value)
{
    return toString(value);
}

std::string CodeHubClient::parameterToString(double value)
{
    return toString(value);
}

std::string CodeHubClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string CodeHubClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

