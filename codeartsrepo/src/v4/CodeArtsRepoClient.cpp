#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoClient.h>
#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoMeta.h>

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
namespace Codeartsrepo {
namespace V4 {

using namespace HuaweiCloud::Sdk::Codeartsrepo::V4::Model;

CodeArtsRepoClient::CodeArtsRepoClient()
{
}

CodeArtsRepoClient::~CodeArtsRepoClient()
{
}

ClientBuilder<CodeArtsRepoClient> CodeArtsRepoClient::newBuilder()
{
    ClientBuilder<CodeArtsRepoClient> client = ClientBuilder<CodeArtsRepoClient>("");
    return client;
}
std::shared_ptr<BatchDeleteBranchResponse> CodeArtsRepoClient::batchDeleteBranch(BatchDeleteBranchRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/branches/batch-delete";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForBatchDeleteBranch());

    std::shared_ptr<BatchDeleteBranchResponse> localVarResult = std::make_shared<BatchDeleteBranchResponse>();
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
std::shared_ptr<CreateBranchResponse> CodeArtsRepoClient::createBranch(CreateBranchRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/branches";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateBranch());

    std::shared_ptr<CreateBranchResponse> localVarResult = std::make_shared<CreateBranchResponse>();
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
std::shared_ptr<DeleteBranchResponse> CodeArtsRepoClient::deleteBranch(DeleteBranchRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/branch";

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

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDeleteBranch());

    std::shared_ptr<DeleteBranchResponse> localVarResult = std::make_shared<DeleteBranchResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListBranchesResponse> CodeArtsRepoClient::listBranches(ListBranchesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/branches";

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

    if (request.branchTypeIsSet()) {
        localVarQueryParams["branch_type"] = parameterToString(request.getBranchType());
    }
    if (request.creatorIsSet()) {
        localVarQueryParams["creator"] = parameterToString(request.getCreator());
    }
    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }
    if (request.queryViewIsSet()) {
        localVarQueryParams["query_view"] = parameterToString(request.getQueryView());
    }
    if (request.viewIsSet()) {
        localVarQueryParams["view"] = parameterToString(request.getView());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListBranches());

    std::shared_ptr<ListBranchesResponse> localVarResult = std::make_shared<ListBranchesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowBranchResponse> CodeArtsRepoClient::showBranch(ShowBranchRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/branch";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowBranch());

    std::shared_ptr<ShowBranchResponse> localVarResult = std::make_shared<ShowBranchResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateBranchNameResponse> CodeArtsRepoClient::updateBranchName(UpdateBranchNameRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/branch";

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

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateBranchName());

    std::shared_ptr<UpdateBranchNameResponse> localVarResult = std::make_shared<UpdateBranchNameResponse>();
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
std::shared_ptr<CreateCommitResponse> CodeArtsRepoClient::createCommit(CreateCommitRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/commits";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateCommit());

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
std::shared_ptr<CreateCommitRevertResponse> CodeArtsRepoClient::createCommitRevert(CreateCommitRevertRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/commits/{sha}/revert";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["sha"] = parameterToString(request.getSha());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateCommitRevert());

    std::shared_ptr<CreateCommitRevertResponse> localVarResult = std::make_shared<CreateCommitRevertResponse>();
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
std::shared_ptr<ListCommitAssociatedRefsResponse> CodeArtsRepoClient::listCommitAssociatedRefs(ListCommitAssociatedRefsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/commits/{sha}/refs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["sha"] = parameterToString(request.getSha());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListCommitAssociatedRefs());

    std::shared_ptr<ListCommitAssociatedRefsResponse> localVarResult = std::make_shared<ListCommitAssociatedRefsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListCommitsResponse> CodeArtsRepoClient::listCommits(ListCommitsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/commit-list";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
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
    if (request.messageIsSet()) {
        localVarQueryParams["message"] = parameterToString(request.getMessage());
    }
    if (request.authorIsSet()) {
        localVarQueryParams["author"] = parameterToString(request.getAuthor());
    }
    if (request.orderByDateIsSet()) {
        localVarQueryParams["order_by_date"] = parameterToString(request.isOrderByDate());
    }
    if (request.followIsSet()) {
        localVarQueryParams["follow"] = parameterToString(request.isFollow());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListCommits());

    std::shared_ptr<ListCommitsResponse> localVarResult = std::make_shared<ListCommitsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowCommitResponse> CodeArtsRepoClient::showCommit(ShowCommitRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/commits";

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

    if (request.shaIsSet()) {
        localVarQueryParams["sha"] = parameterToString(request.getSha());
    }
    if (request.statsIsSet()) {
        localVarQueryParams["stats"] = parameterToString(request.isStats());
    }
    if (request.showCodeChangesIsSet()) {
        localVarQueryParams["show_code_changes"] = parameterToString(request.isShowCodeChanges());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowCommit());

    std::shared_ptr<ShowCommitResponse> localVarResult = std::make_shared<ShowCommitResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowCommitDiffMetadataResponse> CodeArtsRepoClient::showCommitDiffMetadata(ShowCommitDiffMetadataRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/commits/diff-metadata";

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

    if (request.shaIsSet()) {
        localVarQueryParams["sha"] = parameterToString(request.getSha());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowCommitDiffMetadata());

    std::shared_ptr<ShowCommitDiffMetadataResponse> localVarResult = std::make_shared<ShowCommitDiffMetadataResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowCommitFileDiffResponse> CodeArtsRepoClient::showCommitFileDiff(ShowCommitFileDiffRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/commits/file-diff";

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

    if (request.shaIsSet()) {
        localVarQueryParams["sha"] = parameterToString(request.getSha());
    }
    if (request.pathIsSet()) {
        localVarQueryParams["path"] = parameterToString(request.getPath());
    }
    if (request.oldPathIsSet()) {
        localVarQueryParams["old_path"] = parameterToString(request.getOldPath());
    }
    if (request.ignoreWhitespaceChangeIsSet()) {
        localVarQueryParams["ignore_whitespace_change"] = parameterToString(request.isIgnoreWhitespaceChange());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowCommitFileDiff());

    std::shared_ptr<ShowCommitFileDiffResponse> localVarResult = std::make_shared<ShowCommitFileDiffResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDiffCommitResponse> CodeArtsRepoClient::showDiffCommit(ShowDiffCommitRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/commits/diff";

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

    if (request.shaIsSet()) {
        localVarQueryParams["sha"] = parameterToString(request.getSha());
    }
    if (request.ignoreWhitespaceChangeIsSet()) {
        localVarQueryParams["ignore_whitespace_change"] = parameterToString(request.isIgnoreWhitespaceChange());
    }
    if (request.notStatisticIsSet()) {
        localVarQueryParams["not_statistic"] = parameterToString(request.isNotStatistic());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowDiffCommit());

    std::shared_ptr<ShowDiffCommitResponse> localVarResult = std::make_shared<ShowDiffCommitResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateMergeRequestDiscussionResponse> CodeArtsRepoClient::createMergeRequestDiscussion(CreateMergeRequestDiscussionRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/discussions";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateMergeRequestDiscussion());

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
std::shared_ptr<CreateMergeRequestDiscussionResponseResponse> CodeArtsRepoClient::createMergeRequestDiscussionResponse(CreateMergeRequestDiscussionResponseRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/discussions/{discussion_id}/notes";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateMergeRequestDiscussionResponse());

    std::shared_ptr<CreateMergeRequestDiscussionResponseResponse> localVarResult = std::make_shared<CreateMergeRequestDiscussionResponseResponse>();
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
std::shared_ptr<CreateReviewSettingResponse> CodeArtsRepoClient::createReviewSetting(CreateReviewSettingRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/review-settings";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateReviewSetting());

    std::shared_ptr<CreateReviewSettingResponse> localVarResult = std::make_shared<CreateReviewSettingResponse>();
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
std::shared_ptr<DeleteMergeRequestDiscussionResponse> CodeArtsRepoClient::deleteMergeRequestDiscussion(DeleteMergeRequestDiscussionRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/discussions/{discussion_id}/notes/{note_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["merge_request_iid"] = parameterToString(request.getMergeRequestIid());
    localVarPathParams["discussion_id"] = parameterToString(request.getDiscussionId());
    localVarPathParams["note_id"] = parameterToString(request.getNoteId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDeleteMergeRequestDiscussion());

    std::shared_ptr<DeleteMergeRequestDiscussionResponse> localVarResult = std::make_shared<DeleteMergeRequestDiscussionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListCommitDiscussionsResponse> CodeArtsRepoClient::listCommitDiscussions(ListCommitDiscussionsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/commits/{sha}/discussions";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["sha"] = parameterToString(request.getSha());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListCommitDiscussions());

    std::shared_ptr<ListCommitDiscussionsResponse> localVarResult = std::make_shared<ListCommitDiscussionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListDefaultReviewCategoriesResponse> CodeArtsRepoClient::listDefaultReviewCategories(ListDefaultReviewCategoriesRequest &request)
{
    std::string localVarPath = "/v4/default-review-categories";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListDefaultReviewCategories());

    std::shared_ptr<ListDefaultReviewCategoriesResponse> localVarResult = std::make_shared<ListDefaultReviewCategoriesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMergeRequestDiscussionsResponse> CodeArtsRepoClient::listMergeRequestDiscussions(ListMergeRequestDiscussionsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/discussions";

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

    if (request.unresolvedIsSet()) {
        localVarQueryParams["unresolved"] = parameterToString(request.getUnresolved());
    }
    if (request.authorIdIsSet()) {
        localVarQueryParams["author_id"] = parameterToString(request.getAuthorId());
    }
    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListMergeRequestDiscussions());

    std::shared_ptr<ListMergeRequestDiscussionsResponse> localVarResult = std::make_shared<ListMergeRequestDiscussionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMergeRequestSystemNotesResponse> CodeArtsRepoClient::listMergeRequestSystemNotes(ListMergeRequestSystemNotesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/system-notes";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListMergeRequestSystemNotes());

    std::shared_ptr<ListMergeRequestSystemNotesResponse> localVarResult = std::make_shared<ListMergeRequestSystemNotesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProjectNoteRequiredAttributesResponse> CodeArtsRepoClient::listProjectNoteRequiredAttributes(ListProjectNoteRequiredAttributesRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/setting/note-required-attributes";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListProjectNoteRequiredAttributes());

    std::shared_ptr<ListProjectNoteRequiredAttributesResponse> localVarResult = std::make_shared<ListProjectNoteRequiredAttributesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepositoryReviewAuthorsResponse> CodeArtsRepoClient::listRepositoryReviewAuthors(ListRepositoryReviewAuthorsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/review-authors";

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

    if (request.noteableTypeIsSet()) {
        localVarQueryParams["noteable_type"] = parameterToString(request.getNoteableType());
    }
    if (request.resolvedStatusIsSet()) {
        localVarQueryParams["resolved_status"] = parameterToString(request.getResolvedStatus());
    }
    if (request.reviewersFilterIsSet()) {
        localVarQueryParams["reviewers_filter"] = parameterToString(request.getReviewersFilter());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRepositoryReviewAuthors());

    std::shared_ptr<ListRepositoryReviewAuthorsResponse> localVarResult = std::make_shared<ListRepositoryReviewAuthorsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepositoryReviewsResponse> CodeArtsRepoClient::listRepositoryReviews(ListRepositoryReviewsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/reviews";

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

    if (request.noteableTypeIsSet()) {
        localVarQueryParams["noteable_type"] = parameterToString(request.getNoteableType());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.startDateIsSet()) {
        localVarQueryParams["start_date"] = parameterToString(request.getStartDate());
    }
    if (request.endDateIsSet()) {
        localVarQueryParams["end_date"] = parameterToString(request.getEndDate());
    }
    if (request.onlyCountIsSet()) {
        localVarQueryParams["only_count"] = parameterToString(request.isOnlyCount());
    }
    if (request.reviewCategoriesIsSet()) {
        localVarQueryParams["review_categories"] = parameterToString(request.getReviewCategories());
    }
    if (request.reviewModulesIsSet()) {
        localVarQueryParams["review_modules"] = parameterToString(request.getReviewModules());
    }
    if (request.severityIsSet()) {
        localVarQueryParams["severity"] = parameterToString(request.getSeverity());
    }
    if (request.assigneeIdIsSet()) {
        localVarQueryParams["assignee_id"] = parameterToString(request.getAssigneeId());
    }
    if (request.proposerIdIsSet()) {
        localVarQueryParams["proposer_id"] = parameterToString(request.getProposerId());
    }
    if (request.targetBranchIsSet()) {
        localVarQueryParams["target_branch"] = parameterToString(request.getTargetBranch());
    }
    if (request.includeReplyIsSet()) {
        localVarQueryParams["include_reply"] = parameterToString(request.isIncludeReply());
    }
    if (request.orderByIsSet()) {
        localVarQueryParams["order_by"] = parameterToString(request.getOrderBy());
    }
    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRepositoryReviews());

    std::shared_ptr<ListRepositoryReviewsResponse> localVarResult = std::make_shared<ListRepositoryReviewsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGroupNoteRequiredAttributesResponse> CodeArtsRepoClient::showGroupNoteRequiredAttributes(ShowGroupNoteRequiredAttributesRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/setting/note-required-attributes";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowGroupNoteRequiredAttributes());

    std::shared_ptr<ShowGroupNoteRequiredAttributesResponse> localVarResult = std::make_shared<ShowGroupNoteRequiredAttributesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGroupReviewSettingsResponse> CodeArtsRepoClient::showGroupReviewSettings(ShowGroupReviewSettingsRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/review-settings";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowGroupReviewSettings());

    std::shared_ptr<ShowGroupReviewSettingsResponse> localVarResult = std::make_shared<ShowGroupReviewSettingsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowMergeRequestDiscussionResponse> CodeArtsRepoClient::showMergeRequestDiscussion(ShowMergeRequestDiscussionRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/discussions/{discussion_id}";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowMergeRequestDiscussion());

    std::shared_ptr<ShowMergeRequestDiscussionResponse> localVarResult = std::make_shared<ShowMergeRequestDiscussionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowNoteRequiredAttributesResponse> CodeArtsRepoClient::showNoteRequiredAttributes(ShowNoteRequiredAttributesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/setting/note-required-attributes";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowNoteRequiredAttributes());

    std::shared_ptr<ShowNoteRequiredAttributesResponse> localVarResult = std::make_shared<ShowNoteRequiredAttributesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProjectReviewSettingsResponse> CodeArtsRepoClient::showProjectReviewSettings(ShowProjectReviewSettingsRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/review-settings";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowProjectReviewSettings());

    std::shared_ptr<ShowProjectReviewSettingsResponse> localVarResult = std::make_shared<ShowProjectReviewSettingsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowReviewSettingResponse> CodeArtsRepoClient::showReviewSetting(ShowReviewSettingRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/review-setting";

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

    if (request.withDefaultReviewCategoriesIsSet()) {
        localVarQueryParams["with_default_review_categories"] = parameterToString(request.isWithDefaultReviewCategories());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowReviewSetting());

    std::shared_ptr<ShowReviewSettingResponse> localVarResult = std::make_shared<ShowReviewSettingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateGroupNoteRequiredAttributesResponse> CodeArtsRepoClient::updateGroupNoteRequiredAttributes(UpdateGroupNoteRequiredAttributesRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/setting/note-required-attributes";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateGroupNoteRequiredAttributes());

    std::shared_ptr<UpdateGroupNoteRequiredAttributesResponse> localVarResult = std::make_shared<UpdateGroupNoteRequiredAttributesResponse>();
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
std::shared_ptr<UpdateGroupReviewSettingsResponse> CodeArtsRepoClient::updateGroupReviewSettings(UpdateGroupReviewSettingsRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/review-settings";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateGroupReviewSettings());

    std::shared_ptr<UpdateGroupReviewSettingsResponse> localVarResult = std::make_shared<UpdateGroupReviewSettingsResponse>();
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
std::shared_ptr<UpdateMergeRequestDiscussionResponse> CodeArtsRepoClient::updateMergeRequestDiscussion(UpdateMergeRequestDiscussionRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/discussions/{discussion_id}/notes/{note_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["merge_request_iid"] = parameterToString(request.getMergeRequestIid());
    localVarPathParams["discussion_id"] = parameterToString(request.getDiscussionId());
    localVarPathParams["note_id"] = parameterToString(request.getNoteId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateMergeRequestDiscussion());

    std::shared_ptr<UpdateMergeRequestDiscussionResponse> localVarResult = std::make_shared<UpdateMergeRequestDiscussionResponse>();
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
std::shared_ptr<UpdateMergeRequestDiscussionInfoResponse> CodeArtsRepoClient::updateMergeRequestDiscussionInfo(UpdateMergeRequestDiscussionInfoRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/discussions/{discussion_id}";

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

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateMergeRequestDiscussionInfo());

    std::shared_ptr<UpdateMergeRequestDiscussionInfoResponse> localVarResult = std::make_shared<UpdateMergeRequestDiscussionInfoResponse>();
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
std::shared_ptr<UpdateNoteRequiredAttributesResponse> CodeArtsRepoClient::updateNoteRequiredAttributes(UpdateNoteRequiredAttributesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/setting/note-required-attributes";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateNoteRequiredAttributes());

    std::shared_ptr<UpdateNoteRequiredAttributesResponse> localVarResult = std::make_shared<UpdateNoteRequiredAttributesResponse>();
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
std::shared_ptr<UpdateProjectNoteRequiredAttributesResponse> CodeArtsRepoClient::updateProjectNoteRequiredAttributes(UpdateProjectNoteRequiredAttributesRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/setting/note-required-attributes";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateProjectNoteRequiredAttributes());

    std::shared_ptr<UpdateProjectNoteRequiredAttributesResponse> localVarResult = std::make_shared<UpdateProjectNoteRequiredAttributesResponse>();
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
std::shared_ptr<UpdateProjectReviewSettingsResponse> CodeArtsRepoClient::updateProjectReviewSettings(UpdateProjectReviewSettingsRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/review-settings";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateProjectReviewSettings());

    std::shared_ptr<UpdateProjectReviewSettingsResponse> localVarResult = std::make_shared<UpdateProjectReviewSettingsResponse>();
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
std::shared_ptr<CreateFileResponse> CodeArtsRepoClient::createFile(CreateFileRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/files";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateFile());

    std::shared_ptr<CreateFileResponse> localVarResult = std::make_shared<CreateFileResponse>();
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
std::shared_ptr<DeleteFileResponse> CodeArtsRepoClient::deleteFile(DeleteFileRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/file";

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

    if (request.filePathIsSet()) {
        localVarQueryParams["file_path"] = parameterToString(request.getFilePath());
    }
    if (request.authorNameIsSet()) {
        localVarQueryParams["author_name"] = parameterToString(request.getAuthorName());
    }
    if (request.branchIsSet()) {
        localVarQueryParams["branch"] = parameterToString(request.getBranch());
    }
    if (request.commitMessageIsSet()) {
        localVarQueryParams["commit_message"] = parameterToString(request.getCommitMessage());
    }
    if (request.authorEmailIsSet()) {
        localVarQueryParams["author_email"] = parameterToString(request.getAuthorEmail());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDeleteFile());

    std::shared_ptr<DeleteFileResponse> localVarResult = std::make_shared<DeleteFileResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DownloadBlobsRawResponse> CodeArtsRepoClient::downloadBlobsRaw(DownloadBlobsRawRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/blobs/{blob_id}/raw";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["blob_id"] = parameterToString(request.getBlobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fileNameIsSet()) {
        localVarQueryParams["file_name"] = parameterToString(request.getFileName());
    }
    if (request.filePathIsSet()) {
        localVarQueryParams["file_path"] = parameterToString(request.getFilePath());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDownloadBlobsRaw());

    std::shared_ptr<DownloadBlobsRawResponse> localVarResult = std::make_shared<DownloadBlobsRawResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFileBlameLinesResponse> CodeArtsRepoClient::listFileBlameLines(ListFileBlameLinesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/blame";

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

    if (request.filePathIsSet()) {
        localVarQueryParams["file_path"] = parameterToString(request.getFilePath());
    }
    if (request.shaIsSet()) {
        localVarQueryParams["sha"] = parameterToString(request.getSha());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListFileBlameLines());

    std::shared_ptr<ListFileBlameLinesResponse> localVarResult = std::make_shared<ListFileBlameLinesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFileUpperTreeEntriesResponse> CodeArtsRepoClient::listFileUpperTreeEntries(ListFileUpperTreeEntriesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/upper-files-tree";

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

    if (request.filePathIsSet()) {
        localVarQueryParams["file_path"] = parameterToString(request.getFilePath());
    }
    if (request.refNameIsSet()) {
        localVarQueryParams["ref_name"] = parameterToString(request.getRefName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListFileUpperTreeEntries());

    std::shared_ptr<ListFileUpperTreeEntriesResponse> localVarResult = std::make_shared<ListFileUpperTreeEntriesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListFilesResponse> CodeArtsRepoClient::listFiles(ListFilesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/file-list";

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
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListFiles());

    std::shared_ptr<ListFilesResponse> localVarResult = std::make_shared<ListFilesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowFileResponse> CodeArtsRepoClient::showFile(ShowFileRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/file";

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

    if (request.refIsSet()) {
        localVarQueryParams["ref"] = parameterToString(request.getRef());
    }
    if (request.filePathIsSet()) {
        localVarQueryParams["file_path"] = parameterToString(request.getFilePath());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowFile());

    std::shared_ptr<ShowFileResponse> localVarResult = std::make_shared<ShowFileResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowFileContentResponse> CodeArtsRepoClient::showFileContent(ShowFileContentRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/file-content";

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

    if (request.filePathIsSet()) {
        localVarQueryParams["file_path"] = parameterToString(request.getFilePath());
    }
    if (request.shaIsSet()) {
        localVarQueryParams["sha"] = parameterToString(request.getSha());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowFileContent());

    std::shared_ptr<ShowFileContentResponse> localVarResult = std::make_shared<ShowFileContentResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowReadmeFileResponse> CodeArtsRepoClient::showReadmeFile(ShowReadmeFileRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/readme-file";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowReadmeFile());

    std::shared_ptr<ShowReadmeFileResponse> localVarResult = std::make_shared<ShowReadmeFileResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateFileResponse> CodeArtsRepoClient::updateFile(UpdateFileRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/file";

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

    if (request.filePathIsSet()) {
        localVarQueryParams["file_path"] = parameterToString(request.getFilePath());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateFile());

    std::shared_ptr<UpdateFileResponse> localVarResult = std::make_shared<UpdateFileResponse>();
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
std::shared_ptr<BatchDeleteRepositoryFilePushPermissionsResponse> CodeArtsRepoClient::batchDeleteRepositoryFilePushPermissions(BatchDeleteRepositoryFilePushPermissionsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/file-push-permissions/batch-delete";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForBatchDeleteRepositoryFilePushPermissions());

    std::shared_ptr<BatchDeleteRepositoryFilePushPermissionsResponse> localVarResult = std::make_shared<BatchDeleteRepositoryFilePushPermissionsResponse>();
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
std::shared_ptr<BatchUpdateRepositoryFilePushPermissionsResponse> CodeArtsRepoClient::batchUpdateRepositoryFilePushPermissions(BatchUpdateRepositoryFilePushPermissionsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/file-push-permissions";

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

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForBatchUpdateRepositoryFilePushPermissions());

    std::shared_ptr<BatchUpdateRepositoryFilePushPermissionsResponse> localVarResult = std::make_shared<BatchUpdateRepositoryFilePushPermissionsResponse>();
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
std::shared_ptr<CreateFilePushPermissionResponse> CodeArtsRepoClient::createFilePushPermission(CreateFilePushPermissionRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/file-push-permissions";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateFilePushPermission());

    std::shared_ptr<CreateFilePushPermissionResponse> localVarResult = std::make_shared<CreateFilePushPermissionResponse>();
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
std::shared_ptr<ListRepositoryFilePushPermissionsResponse> CodeArtsRepoClient::listRepositoryFilePushPermissions(ListRepositoryFilePushPermissionsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/file-push-permissions";

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

    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRepositoryFilePushPermissions());

    std::shared_ptr<ListRepositoryFilePushPermissionsResponse> localVarResult = std::make_shared<ListRepositoryFilePushPermissionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<AssociateGroupUserGroupResponse> CodeArtsRepoClient::associateGroupUserGroup(AssociateGroupUserGroupRequest &request)
{
    std::string localVarPath = "/v4/{project_id}/groups/{group_id}/user-group/{user_group_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());
    localVarPathParams["group_id"] = parameterToString(request.getGroupId());
    localVarPathParams["user_group_id"] = parameterToString(request.getUserGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForAssociateGroupUserGroup());

    std::shared_ptr<AssociateGroupUserGroupResponse> localVarResult = std::make_shared<AssociateGroupUserGroupResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateGroupResponse> CodeArtsRepoClient::createGroup(CreateGroupRequest &request)
{
    std::string localVarPath = "/v4/{project_id}/groups";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateGroup());

    std::shared_ptr<CreateGroupResponse> localVarResult = std::make_shared<CreateGroupResponse>();
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
std::shared_ptr<DeleteGroupResponse> CodeArtsRepoClient::deleteGroup(DeleteGroupRequest &request)
{
    std::string localVarPath = "/v4/{project_id}/groups/{group_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());
    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDeleteGroup());

    std::shared_ptr<DeleteGroupResponse> localVarResult = std::make_shared<DeleteGroupResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGroupAddableMembersResponse> CodeArtsRepoClient::listGroupAddableMembers(ListGroupAddableMembersRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/members/addable-list";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.projectIdIsSet()) {
        localVarQueryParams["project_id"] = parameterToString(request.getProjectId());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListGroupAddableMembers());

    std::shared_ptr<ListGroupAddableMembersResponse> localVarResult = std::make_shared<ListGroupAddableMembersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGroupAddableUserGroupsResponse> CodeArtsRepoClient::listGroupAddableUserGroups(ListGroupAddableUserGroupsRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/user-groups/addable-list";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.projectIdIsSet()) {
        localVarQueryParams["project_id"] = parameterToString(request.getProjectId());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListGroupAddableUserGroups());

    std::shared_ptr<ListGroupAddableUserGroupsResponse> localVarResult = std::make_shared<ListGroupAddableUserGroupsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGroupMembersResponse> CodeArtsRepoClient::listGroupMembers(ListGroupMembersRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/members/list";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.projectIdIsSet()) {
        localVarQueryParams["project_id"] = parameterToString(request.getProjectId());
    }
    if (request.queryIsSet()) {
        localVarQueryParams["query"] = parameterToString(request.getQuery());
    }
    if (request.joinWayIsSet()) {
        localVarQueryParams["join_way"] = parameterToString(request.getJoinWay());
    }
    if (request.accessLevelIsSet()) {
        localVarQueryParams["access_level"] = parameterToString(request.getAccessLevel());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListGroupMembers());

    std::shared_ptr<ListGroupMembersResponse> localVarResult = std::make_shared<ListGroupMembersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGroupPermissionResourcesResponse> CodeArtsRepoClient::listGroupPermissionResources(ListGroupPermissionResourcesRequest &request)
{
    std::string localVarPath = "/v4/groups/permissions/resources";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.scopeIsSet()) {
        localVarQueryParams["scope"] = parameterToString(request.getScope());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListGroupPermissionResources());

    std::shared_ptr<ListGroupPermissionResourcesResponse> localVarResult = std::make_shared<ListGroupPermissionResourcesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGroupSubgroupsAndRepositoriesResponse> CodeArtsRepoClient::listGroupSubgroupsAndRepositories(ListGroupSubgroupsAndRepositoriesRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/subgroups-and-repositories";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.filterIsSet()) {
        localVarQueryParams["filter"] = parameterToString(request.getFilter());
    }
    if (request.orderByIsSet()) {
        localVarQueryParams["order_by"] = parameterToString(request.getOrderBy());
    }
    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }
    if (request.archivedIsSet()) {
        localVarQueryParams["archived"] = parameterToString(request.isArchived());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListGroupSubgroupsAndRepositories());

    std::shared_ptr<ListGroupSubgroupsAndRepositoriesResponse> localVarResult = std::make_shared<ListGroupSubgroupsAndRepositoriesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGroupUserGroupsResponse> CodeArtsRepoClient::listGroupUserGroups(ListGroupUserGroupsRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/user-groups";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListGroupUserGroups());

    std::shared_ptr<ListGroupUserGroupsResponse> localVarResult = std::make_shared<ListGroupUserGroupsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGroupsResponse> CodeArtsRepoClient::listGroups(ListGroupsRequest &request)
{
    std::string localVarPath = "/v4/groups/list";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.allAvailableIsSet()) {
        localVarQueryParams["all_available"] = parameterToString(request.isAllAvailable());
    }
    if (request.orderByIsSet()) {
        localVarQueryParams["order_by"] = parameterToString(request.getOrderBy());
    }
    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }
    if (request.starredIsSet()) {
        localVarQueryParams["starred"] = parameterToString(request.isStarred());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.ownedIsSet()) {
        localVarQueryParams["owned"] = parameterToString(request.isOwned());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListGroups());

    std::shared_ptr<ListGroupsResponse> localVarResult = std::make_shared<ListGroupsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListImpersonationTokensResponse> CodeArtsRepoClient::listImpersonationTokens(ListImpersonationTokensRequest &request)
{
    std::string localVarPath = "/v4/users/impersonation-tokens";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.stateIsSet()) {
        localVarQueryParams["state"] = parameterToString(request.getState());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListImpersonationTokens());

    std::shared_ptr<ListImpersonationTokensResponse> localVarResult = std::make_shared<ListImpersonationTokensResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProductPermissionResourcesGrantedUsersResponse> CodeArtsRepoClient::listProductPermissionResourcesGrantedUsers(ListProductPermissionResourcesGrantedUsersRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/members";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.queryIsSet()) {
        localVarQueryParams["query"] = parameterToString(request.getQuery());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListProductPermissionResourcesGrantedUsers());

    std::shared_ptr<ListProductPermissionResourcesGrantedUsersResponse> localVarResult = std::make_shared<ListProductPermissionResourcesGrantedUsersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProjectSubgroupsAndRepositoriesResponse> CodeArtsRepoClient::listProjectSubgroupsAndRepositories(ListProjectSubgroupsAndRepositoriesRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/subgroups-and-repositories";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.filterIsSet()) {
        localVarQueryParams["filter"] = parameterToString(request.getFilter());
    }
    if (request.orderByIsSet()) {
        localVarQueryParams["order_by"] = parameterToString(request.getOrderBy());
    }
    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }
    if (request.archivedIsSet()) {
        localVarQueryParams["archived"] = parameterToString(request.isArchived());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListProjectSubgroupsAndRepositories());

    std::shared_ptr<ListProjectSubgroupsAndRepositoriesResponse> localVarResult = std::make_shared<ListProjectSubgroupsAndRepositoriesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGroupResponse> CodeArtsRepoClient::showGroup(ShowGroupRequest &request)
{
    std::string localVarPath = "/v4/{project_id}/groups/{group_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());
    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowGroup());

    std::shared_ptr<ShowGroupResponse> localVarResult = std::make_shared<ShowGroupResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGroupGeneralPolicyResponse> CodeArtsRepoClient::showGroupGeneralPolicy(ShowGroupGeneralPolicyRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/policies/general";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowGroupGeneralPolicy());

    std::shared_ptr<ShowGroupGeneralPolicyResponse> localVarResult = std::make_shared<ShowGroupGeneralPolicyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGroupInheritSettingResponse> CodeArtsRepoClient::showGroupInheritSetting(ShowGroupInheritSettingRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/inherit-setting";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowGroupInheritSetting());

    std::shared_ptr<ShowGroupInheritSettingResponse> localVarResult = std::make_shared<ShowGroupInheritSettingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGroupPermissionInheritEnabledResponse> CodeArtsRepoClient::showGroupPermissionInheritEnabled(ShowGroupPermissionInheritEnabledRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/permission-inherit-enabled";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowGroupPermissionInheritEnabled());

    std::shared_ptr<ShowGroupPermissionInheritEnabledResponse> localVarResult = std::make_shared<ShowGroupPermissionInheritEnabledResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGroupSettingsInheritCfgResponse> CodeArtsRepoClient::showGroupSettingsInheritCfg(ShowGroupSettingsInheritCfgRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/settings-inherit-cfg";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowGroupSettingsInheritCfg());

    std::shared_ptr<ShowGroupSettingsInheritCfgResponse> localVarResult = std::make_shared<ShowGroupSettingsInheritCfgResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGroupWatermarkResponse> CodeArtsRepoClient::showGroupWatermark(ShowGroupWatermarkRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/watermark";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowGroupWatermark());

    std::shared_ptr<ShowGroupWatermarkResponse> localVarResult = std::make_shared<ShowGroupWatermarkResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGroupsGeneralPolicyResponse> CodeArtsRepoClient::showGroupsGeneralPolicy(ShowGroupsGeneralPolicyRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/general-policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowGroupsGeneralPolicy());

    std::shared_ptr<ShowGroupsGeneralPolicyResponse> localVarResult = std::make_shared<ShowGroupsGeneralPolicyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGroupsInheritResponse> CodeArtsRepoClient::showGroupsInherit(ShowGroupsInheritRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/inherit";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.settingTypeIsSet()) {
        localVarQueryParams["setting_type"] = parameterToString(request.getSettingType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowGroupsInherit());

    std::shared_ptr<ShowGroupsInheritResponse> localVarResult = std::make_shared<ShowGroupsInheritResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProjectGeneralPolicyResponse> CodeArtsRepoClient::showProjectGeneralPolicy(ShowProjectGeneralPolicyRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/policies/general";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowProjectGeneralPolicy());

    std::shared_ptr<ShowProjectGeneralPolicyResponse> localVarResult = std::make_shared<ShowProjectGeneralPolicyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProjectMemberSettingResponse> CodeArtsRepoClient::showProjectMemberSetting(ShowProjectMemberSettingRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/member-setting";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowProjectMemberSetting());

    std::shared_ptr<ShowProjectMemberSettingResponse> localVarResult = std::make_shared<ShowProjectMemberSettingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProjectSettingsInheritCfgResponse> CodeArtsRepoClient::showProjectSettingsInheritCfg(ShowProjectSettingsInheritCfgRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/settings-inherit-cfg";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowProjectSettingsInheritCfg());

    std::shared_ptr<ShowProjectSettingsInheritCfgResponse> localVarResult = std::make_shared<ShowProjectSettingsInheritCfgResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<TransferGroupResponse> CodeArtsRepoClient::transferGroup(TransferGroupRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/transfer";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForTransferGroup());

    std::shared_ptr<TransferGroupResponse> localVarResult = std::make_shared<TransferGroupResponse>();
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
std::shared_ptr<UpdateGroupGeneralPolicyResponse> CodeArtsRepoClient::updateGroupGeneralPolicy(UpdateGroupGeneralPolicyRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/general-policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateGroupGeneralPolicy());

    std::shared_ptr<UpdateGroupGeneralPolicyResponse> localVarResult = std::make_shared<UpdateGroupGeneralPolicyResponse>();
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
std::shared_ptr<UpdateGroupWatermarkResponse> CodeArtsRepoClient::updateGroupWatermark(UpdateGroupWatermarkRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/watermark";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateGroupWatermark());

    std::shared_ptr<UpdateGroupWatermarkResponse> localVarResult = std::make_shared<UpdateGroupWatermarkResponse>();
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
std::shared_ptr<UpdateProjectSettingsInheritCfgResponse> CodeArtsRepoClient::updateProjectSettingsInheritCfg(UpdateProjectSettingsInheritCfgRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/settings-inherit-cfg";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateProjectSettingsInheritCfg());

    std::shared_ptr<UpdateProjectSettingsInheritCfgResponse> localVarResult = std::make_shared<UpdateProjectSettingsInheritCfgResponse>();
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
std::shared_ptr<CreateRepositoryLabelResponse> CodeArtsRepoClient::createRepositoryLabel(CreateRepositoryLabelRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/labels";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateRepositoryLabel());

    std::shared_ptr<CreateRepositoryLabelResponse> localVarResult = std::make_shared<CreateRepositoryLabelResponse>();
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
std::shared_ptr<CreateRepositorySystemLabelsResponse> CodeArtsRepoClient::createRepositorySystemLabels(CreateRepositorySystemLabelsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/system-labels";

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

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateRepositorySystemLabels());

    std::shared_ptr<CreateRepositorySystemLabelsResponse> localVarResult = std::make_shared<CreateRepositorySystemLabelsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteRepositoryLabelResponse> CodeArtsRepoClient::deleteRepositoryLabel(DeleteRepositoryLabelRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/label";

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

    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDeleteRepositoryLabel());

    std::shared_ptr<DeleteRepositoryLabelResponse> localVarResult = std::make_shared<DeleteRepositoryLabelResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepositoryLabelsResponse> CodeArtsRepoClient::listRepositoryLabels(ListRepositoryLabelsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/labels";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }
    if (request.includeExpiredIsSet()) {
        localVarQueryParams["include_expired"] = parameterToString(request.isIncludeExpired());
    }
    if (request.viewIsSet()) {
        localVarQueryParams["view"] = parameterToString(request.getView());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRepositoryLabels());

    std::shared_ptr<ListRepositoryLabelsResponse> localVarResult = std::make_shared<ListRepositoryLabelsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateRepositoryLabelResponse> CodeArtsRepoClient::updateRepositoryLabel(UpdateRepositoryLabelRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/label";

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

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateRepositoryLabel());

    std::shared_ptr<UpdateRepositoryLabelResponse> localVarResult = std::make_shared<UpdateRepositoryLabelResponse>();
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
std::shared_ptr<AddRepositoryMembersResponse> CodeArtsRepoClient::addRepositoryMembers(AddRepositoryMembersRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/members";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForAddRepositoryMembers());

    std::shared_ptr<AddRepositoryMembersResponse> localVarResult = std::make_shared<AddRepositoryMembersResponse>();
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
std::shared_ptr<ListGroupProtectedRefsUserGroupsResponse> CodeArtsRepoClient::listGroupProtectedRefsUserGroups(ListGroupProtectedRefsUserGroupsRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/protected-refs/user-groups";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListGroupProtectedRefsUserGroups());

    std::shared_ptr<ListGroupProtectedRefsUserGroupsResponse> localVarResult = std::make_shared<ListGroupProtectedRefsUserGroupsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMembersResponse> CodeArtsRepoClient::listMembers(ListMembersRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/members";

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

    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.permissionIsSet()) {
        localVarQueryParams["permission"] = parameterToString(request.getPermission());
    }
    if (request.actionIsSet()) {
        localVarQueryParams["action"] = parameterToString(request.getAction());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListMembers());

    std::shared_ptr<ListMembersResponse> localVarResult = std::make_shared<ListMembersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProjectProtectedRefsUserGroupsResponse> CodeArtsRepoClient::listProjectProtectedRefsUserGroups(ListProjectProtectedRefsUserGroupsRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/protected-refs/user-groups";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListProjectProtectedRefsUserGroups());

    std::shared_ptr<ListProjectProtectedRefsUserGroupsResponse> localVarResult = std::make_shared<ListProjectProtectedRefsUserGroupsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepositoryProtectedRefsUserGroupsResponse> CodeArtsRepoClient::listRepositoryProtectedRefsUserGroups(ListRepositoryProtectedRefsUserGroupsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/protected-refs/user-groups";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRepositoryProtectedRefsUserGroups());

    std::shared_ptr<ListRepositoryProtectedRefsUserGroupsResponse> localVarResult = std::make_shared<ListRepositoryProtectedRefsUserGroupsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepositoryUserGroupsResponse> CodeArtsRepoClient::listRepositoryUserGroups(ListRepositoryUserGroupsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/user-groups";

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

    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRepositoryUserGroups());

    std::shared_ptr<ListRepositoryUserGroupsResponse> localVarResult = std::make_shared<ListRepositoryUserGroupsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ApprovalMergeRequestResponse> CodeArtsRepoClient::approvalMergeRequest(ApprovalMergeRequestRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/approval";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForApprovalMergeRequest());

    std::shared_ptr<ApprovalMergeRequestResponse> localVarResult = std::make_shared<ApprovalMergeRequestResponse>();
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
std::shared_ptr<CreateCherryPickMergeRequestResponse> CodeArtsRepoClient::createCherryPickMergeRequest(CreateCherryPickMergeRequestRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/cherry-pick";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateCherryPickMergeRequest());

    std::shared_ptr<CreateCherryPickMergeRequestResponse> localVarResult = std::make_shared<CreateCherryPickMergeRequestResponse>();
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
std::shared_ptr<CreateGroupMergeRequestApproverSettingResponse> CodeArtsRepoClient::createGroupMergeRequestApproverSetting(CreateGroupMergeRequestApproverSettingRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/approver-settings";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateGroupMergeRequestApproverSetting());

    std::shared_ptr<CreateGroupMergeRequestApproverSettingResponse> localVarResult = std::make_shared<CreateGroupMergeRequestApproverSettingResponse>();
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
std::shared_ptr<CreateGroupMergeRequestTemplateResponse> CodeArtsRepoClient::createGroupMergeRequestTemplate(CreateGroupMergeRequestTemplateRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/merge-requests/templates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateGroupMergeRequestTemplate());

    std::shared_ptr<CreateGroupMergeRequestTemplateResponse> localVarResult = std::make_shared<CreateGroupMergeRequestTemplateResponse>();
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
std::shared_ptr<CreateMergeRequestResponse> CodeArtsRepoClient::createMergeRequest(CreateMergeRequestRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateMergeRequest());

    std::shared_ptr<CreateMergeRequestResponse> localVarResult = std::make_shared<CreateMergeRequestResponse>();
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
std::shared_ptr<CreateMergeRequestApproverSettingResponse> CodeArtsRepoClient::createMergeRequestApproverSetting(CreateMergeRequestApproverSettingRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/approver-settings";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateMergeRequestApproverSetting());

    std::shared_ptr<CreateMergeRequestApproverSettingResponse> localVarResult = std::make_shared<CreateMergeRequestApproverSettingResponse>();
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
std::shared_ptr<CreateMergeRequestTemplateResponse> CodeArtsRepoClient::createMergeRequestTemplate(CreateMergeRequestTemplateRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/templates";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateMergeRequestTemplate());

    std::shared_ptr<CreateMergeRequestTemplateResponse> localVarResult = std::make_shared<CreateMergeRequestTemplateResponse>();
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
std::shared_ptr<CreateProjectMergeRequestApproverSettingResponse> CodeArtsRepoClient::createProjectMergeRequestApproverSetting(CreateProjectMergeRequestApproverSettingRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/approver-settings";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateProjectMergeRequestApproverSetting());

    std::shared_ptr<CreateProjectMergeRequestApproverSettingResponse> localVarResult = std::make_shared<CreateProjectMergeRequestApproverSettingResponse>();
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
std::shared_ptr<CreateProjectMergeRequestTemplateResponse> CodeArtsRepoClient::createProjectMergeRequestTemplate(CreateProjectMergeRequestTemplateRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/merge-requests/templates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateProjectMergeRequestTemplate());

    std::shared_ptr<CreateProjectMergeRequestTemplateResponse> localVarResult = std::make_shared<CreateProjectMergeRequestTemplateResponse>();
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
std::shared_ptr<DeleteGroupMergeRequestApproverSettingResponse> CodeArtsRepoClient::deleteGroupMergeRequestApproverSetting(DeleteGroupMergeRequestApproverSettingRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/approver-settings/{setting_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());
    localVarPathParams["setting_id"] = parameterToString(request.getSettingId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDeleteGroupMergeRequestApproverSetting());

    std::shared_ptr<DeleteGroupMergeRequestApproverSettingResponse> localVarResult = std::make_shared<DeleteGroupMergeRequestApproverSettingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteGroupMergeRequestTemplateResponse> CodeArtsRepoClient::deleteGroupMergeRequestTemplate(DeleteGroupMergeRequestTemplateRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/merge-requests/template/{template_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());
    localVarPathParams["template_id"] = parameterToString(request.getTemplateId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDeleteGroupMergeRequestTemplate());

    std::shared_ptr<DeleteGroupMergeRequestTemplateResponse> localVarResult = std::make_shared<DeleteGroupMergeRequestTemplateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteMergeRequestApproverSettingResponse> CodeArtsRepoClient::deleteMergeRequestApproverSetting(DeleteMergeRequestApproverSettingRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/approver-settings/{setting_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["setting_id"] = parameterToString(request.getSettingId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDeleteMergeRequestApproverSetting());

    std::shared_ptr<DeleteMergeRequestApproverSettingResponse> localVarResult = std::make_shared<DeleteMergeRequestApproverSettingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteMergeRequestTemplateResponse> CodeArtsRepoClient::deleteMergeRequestTemplate(DeleteMergeRequestTemplateRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/template/{template_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["template_id"] = parameterToString(request.getTemplateId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDeleteMergeRequestTemplate());

    std::shared_ptr<DeleteMergeRequestTemplateResponse> localVarResult = std::make_shared<DeleteMergeRequestTemplateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteMergeRequestVoteResponse> CodeArtsRepoClient::deleteMergeRequestVote(DeleteMergeRequestVoteRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/vote";

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

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDeleteMergeRequestVote());

    std::shared_ptr<DeleteMergeRequestVoteResponse> localVarResult = std::make_shared<DeleteMergeRequestVoteResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteProjectMergeRequestApproverSettingResponse> CodeArtsRepoClient::deleteProjectMergeRequestApproverSetting(DeleteProjectMergeRequestApproverSettingRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/approver-settings/{setting_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());
    localVarPathParams["setting_id"] = parameterToString(request.getSettingId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDeleteProjectMergeRequestApproverSetting());

    std::shared_ptr<DeleteProjectMergeRequestApproverSettingResponse> localVarResult = std::make_shared<DeleteProjectMergeRequestApproverSettingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteProjectMergeRequestTemplateResponse> CodeArtsRepoClient::deleteProjectMergeRequestTemplate(DeleteProjectMergeRequestTemplateRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/merge-requests/template/{template_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());
    localVarPathParams["template_id"] = parameterToString(request.getTemplateId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDeleteProjectMergeRequestTemplate());

    std::shared_ptr<DeleteProjectMergeRequestTemplateResponse> localVarResult = std::make_shared<DeleteProjectMergeRequestTemplateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ImportMergeRequestResponse> CodeArtsRepoClient::importMergeRequest(ImportMergeRequestRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/import-merge-requests";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForImportMergeRequest());

    std::shared_ptr<ImportMergeRequestResponse> localVarResult = std::make_shared<ImportMergeRequestResponse>();
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
std::shared_ptr<ListDiscussionTemplatesResponse> CodeArtsRepoClient::listDiscussionTemplates(ListDiscussionTemplatesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/discussion/templates";

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

    if (request.isDefaultIsSet()) {
        localVarQueryParams["is_default"] = parameterToString(request.isIsDefault());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListDiscussionTemplates());

    std::shared_ptr<ListDiscussionTemplatesResponse> localVarResult = std::make_shared<ListDiscussionTemplatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGroupMergeRequestApproverSettingsResponse> CodeArtsRepoClient::listGroupMergeRequestApproverSettings(ListGroupMergeRequestApproverSettingsRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/approver-settings";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListGroupMergeRequestApproverSettings());

    std::shared_ptr<ListGroupMergeRequestApproverSettingsResponse> localVarResult = std::make_shared<ListGroupMergeRequestApproverSettingsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGroupMergeRequestCanBeAssignedReviewersResponse> CodeArtsRepoClient::listGroupMergeRequestCanBeAssignedReviewers(ListGroupMergeRequestCanBeAssignedReviewersRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/merge-requests/reviewers";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListGroupMergeRequestCanBeAssignedReviewers());

    std::shared_ptr<ListGroupMergeRequestCanBeAssignedReviewersResponse> localVarResult = std::make_shared<ListGroupMergeRequestCanBeAssignedReviewersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGroupMergeRequestTemplatesResponse> CodeArtsRepoClient::listGroupMergeRequestTemplates(ListGroupMergeRequestTemplatesRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/merge-requests/templates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.templateNameIsSet()) {
        localVarQueryParams["template_name"] = parameterToString(request.getTemplateName());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListGroupMergeRequestTemplates());

    std::shared_ptr<ListGroupMergeRequestTemplatesResponse> localVarResult = std::make_shared<ListGroupMergeRequestTemplatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGroupMergeRequestValidAssignedCandidatesResponse> CodeArtsRepoClient::listGroupMergeRequestValidAssignedCandidates(ListGroupMergeRequestValidAssignedCandidatesRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/merge-requests/assignee-candidates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListGroupMergeRequestValidAssignedCandidates());

    std::shared_ptr<ListGroupMergeRequestValidAssignedCandidatesResponse> localVarResult = std::make_shared<ListGroupMergeRequestValidAssignedCandidatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMergeRequestApproverSettingsResponse> CodeArtsRepoClient::listMergeRequestApproverSettings(ListMergeRequestApproverSettingsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/approver-settings";

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

    if (request.targetTypeIsSet()) {
        localVarQueryParams["target_type"] = parameterToString(request.getTargetType());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListMergeRequestApproverSettings());

    std::shared_ptr<ListMergeRequestApproverSettingsResponse> localVarResult = std::make_shared<ListMergeRequestApproverSettingsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMergeRequestApproversResponse> CodeArtsRepoClient::listMergeRequestApprovers(ListMergeRequestApproversRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/approval-approvers";

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

    if (request.targetBranchIsSet()) {
        localVarQueryParams["target_branch"] = parameterToString(request.getTargetBranch());
    }
    if (request.sourceBranchIsSet()) {
        localVarQueryParams["source_branch"] = parameterToString(request.getSourceBranch());
    }
    if (request.mergeRequestIidIsSet()) {
        localVarQueryParams["merge_request_iid"] = parameterToString(request.getMergeRequestIid());
    }
    if (request.targetRepositoryIdIsSet()) {
        localVarQueryParams["target_repository_id"] = parameterToString(request.getTargetRepositoryId());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListMergeRequestApprovers());

    std::shared_ptr<ListMergeRequestApproversResponse> localVarResult = std::make_shared<ListMergeRequestApproversResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMergeRequestChangesResponse> CodeArtsRepoClient::listMergeRequestChanges(ListMergeRequestChangesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/changes";

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

    if (request.ignoreWhitespaceChangeIsSet()) {
        localVarQueryParams["ignore_whitespace_change"] = parameterToString(request.isIgnoreWhitespaceChange());
    }
    if (request.forceEncodeIsSet()) {
        localVarQueryParams["force_encode"] = parameterToString(request.isForceEncode());
    }
    if (request.filePathIsSet()) {
        localVarQueryParams["file_path"] = parameterToString(request.getFilePath());
    }
    if (request.fromDiffIdIsSet()) {
        localVarQueryParams["from_diff_id"] = parameterToString(request.getFromDiffId());
    }
    if (request.toDiffIdIsSet()) {
        localVarQueryParams["to_diff_id"] = parameterToString(request.getToDiffId());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListMergeRequestChanges());

    std::shared_ptr<ListMergeRequestChangesResponse> localVarResult = std::make_shared<ListMergeRequestChangesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMergeRequestChangesTreesResponse> CodeArtsRepoClient::listMergeRequestChangesTrees(ListMergeRequestChangesTreesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/changes-trees";

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

    if (request.approvalUserIdIsSet()) {
        localVarQueryParams["approval_user_id"] = parameterToString(request.getApprovalUserId());
    }
    if (request.commitIdIsSet()) {
        localVarQueryParams["commit_id"] = parameterToString(request.getCommitId());
    }
    if (request.fromDiffIdIsSet()) {
        localVarQueryParams["from_diff_id"] = parameterToString(request.getFromDiffId());
    }
    if (request.toDiffIdIsSet()) {
        localVarQueryParams["to_diff_id"] = parameterToString(request.getToDiffId());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListMergeRequestChangesTrees());

    std::shared_ptr<ListMergeRequestChangesTreesResponse> localVarResult = std::make_shared<ListMergeRequestChangesTreesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMergeRequestCommitsResponse> CodeArtsRepoClient::listMergeRequestCommits(ListMergeRequestCommitsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/commits";

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
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListMergeRequestCommits());

    std::shared_ptr<ListMergeRequestCommitsResponse> localVarResult = std::make_shared<ListMergeRequestCommitsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMergeRequestConflictFilesResponse> CodeArtsRepoClient::listMergeRequestConflictFiles(ListMergeRequestConflictFilesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/conflict-files";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.hideContentIsSet()) {
        localVarQueryParams["hide_content"] = parameterToString(request.isHideContent());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListMergeRequestConflictFiles());

    std::shared_ptr<ListMergeRequestConflictFilesResponse> localVarResult = std::make_shared<ListMergeRequestConflictFilesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMergeRequestEvaluationsResponse> CodeArtsRepoClient::listMergeRequestEvaluations(ListMergeRequestEvaluationsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/evaluations";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListMergeRequestEvaluations());

    std::shared_ptr<ListMergeRequestEvaluationsResponse> localVarResult = std::make_shared<ListMergeRequestEvaluationsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMergeRequestReviewersResponse> CodeArtsRepoClient::listMergeRequestReviewers(ListMergeRequestReviewersRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/approval-reviewers";

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

    if (request.targetBranchIsSet()) {
        localVarQueryParams["target_branch"] = parameterToString(request.getTargetBranch());
    }
    if (request.sourceBranchIsSet()) {
        localVarQueryParams["source_branch"] = parameterToString(request.getSourceBranch());
    }
    if (request.mergeRequestIidIsSet()) {
        localVarQueryParams["merge_request_iid"] = parameterToString(request.getMergeRequestIid());
    }
    if (request.targetRepositoryIdIsSet()) {
        localVarQueryParams["target_repository_id"] = parameterToString(request.getTargetRepositoryId());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListMergeRequestReviewers());

    std::shared_ptr<ListMergeRequestReviewersResponse> localVarResult = std::make_shared<ListMergeRequestReviewersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMergeRequestTemplatesResponse> CodeArtsRepoClient::listMergeRequestTemplates(ListMergeRequestTemplatesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/templates";

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

    if (request.viewIsSet()) {
        localVarQueryParams["view"] = parameterToString(request.getView());
    }
    if (request.templateNameIsSet()) {
        localVarQueryParams["template_name"] = parameterToString(request.getTemplateName());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListMergeRequestTemplates());

    std::shared_ptr<ListMergeRequestTemplatesResponse> localVarResult = std::make_shared<ListMergeRequestTemplatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMergeRequestValidAssignedCandidatesResponse> CodeArtsRepoClient::listMergeRequestValidAssignedCandidates(ListMergeRequestValidAssignedCandidatesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/assignee-candidates";

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

    if (request.targetBranchIsSet()) {
        localVarQueryParams["target_branch"] = parameterToString(request.getTargetBranch());
    }
    if (request.mergeRequestIidIsSet()) {
        localVarQueryParams["merge_request_iid"] = parameterToString(request.getMergeRequestIid());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.searchByNameListIsSet()) {
        localVarQueryParams["search_by_name_list"] = parameterToString(request.getSearchByNameList());
    }
    if (request.targetProjectIdIsSet()) {
        localVarQueryParams["target_project_id"] = parameterToString(request.getTargetProjectId());
    }
    if (request.viewIsSet()) {
        localVarQueryParams["view"] = parameterToString(request.getView());
    }
    if (request.modeIsSet()) {
        localVarQueryParams["mode"] = parameterToString(request.getMode());
    }
    if (request.onlyDevelopersIsSet()) {
        localVarQueryParams["only_developers"] = parameterToString(request.isOnlyDevelopers());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListMergeRequestValidAssignedCandidates());

    std::shared_ptr<ListMergeRequestValidAssignedCandidatesResponse> localVarResult = std::make_shared<ListMergeRequestValidAssignedCandidatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMergeRequestVersionsResponse> CodeArtsRepoClient::listMergeRequestVersions(ListMergeRequestVersionsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/versions";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListMergeRequestVersions());

    std::shared_ptr<ListMergeRequestVersionsResponse> localVarResult = std::make_shared<ListMergeRequestVersionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProjectMergeRequestApproverSettingsResponse> CodeArtsRepoClient::listProjectMergeRequestApproverSettings(ListProjectMergeRequestApproverSettingsRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/approver-settings";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListProjectMergeRequestApproverSettings());

    std::shared_ptr<ListProjectMergeRequestApproverSettingsResponse> localVarResult = std::make_shared<ListProjectMergeRequestApproverSettingsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProjectMergeRequestCanBeAssignedReviewersResponse> CodeArtsRepoClient::listProjectMergeRequestCanBeAssignedReviewers(ListProjectMergeRequestCanBeAssignedReviewersRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/merge-requests/reviewers";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListProjectMergeRequestCanBeAssignedReviewers());

    std::shared_ptr<ListProjectMergeRequestCanBeAssignedReviewersResponse> localVarResult = std::make_shared<ListProjectMergeRequestCanBeAssignedReviewersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProjectMergeRequestCanBeAssignedUsersResponse> CodeArtsRepoClient::listProjectMergeRequestCanBeAssignedUsers(ListProjectMergeRequestCanBeAssignedUsersRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/merge-requests/assignee-candidates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListProjectMergeRequestCanBeAssignedUsers());

    std::shared_ptr<ListProjectMergeRequestCanBeAssignedUsersResponse> localVarResult = std::make_shared<ListProjectMergeRequestCanBeAssignedUsersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProjectMergeRequestTemplatesResponse> CodeArtsRepoClient::listProjectMergeRequestTemplates(ListProjectMergeRequestTemplatesRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/merge-requests/templates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.templateNameIsSet()) {
        localVarQueryParams["template_name"] = parameterToString(request.getTemplateName());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListProjectMergeRequestTemplates());

    std::shared_ptr<ListProjectMergeRequestTemplatesResponse> localVarResult = std::make_shared<ListProjectMergeRequestTemplatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepositoryMergeRequestsResponse> CodeArtsRepoClient::listRepositoryMergeRequests(ListRepositoryMergeRequestsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.stateIsSet()) {
        localVarQueryParams["state"] = parameterToString(request.getState());
    }
    if (request.orderByIsSet()) {
        localVarQueryParams["order_by"] = parameterToString(request.getOrderBy());
    }
    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }
    if (request.authorIdIsSet()) {
        localVarQueryParams["author_id"] = parameterToString(request.getAuthorId());
    }
    if (request.sourceBranchIsSet()) {
        localVarQueryParams["source_branch"] = parameterToString(request.getSourceBranch());
    }
    if (request.targetBranchIsSet()) {
        localVarQueryParams["target_branch"] = parameterToString(request.getTargetBranch());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.sourceRepositoryIdIsSet()) {
        localVarQueryParams["source_repository_id"] = parameterToString(request.getSourceRepositoryId());
    }
    if (request.onlyCountIsSet()) {
        localVarQueryParams["only_count"] = parameterToString(request.isOnlyCount());
    }
    if (request.labelsIsSet()) {
        localVarQueryParams["labels"] = parameterToString(request.getLabels());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRepositoryMergeRequests());

    std::shared_ptr<ListRepositoryMergeRequestsResponse> localVarResult = std::make_shared<ListRepositoryMergeRequestsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<MergeMergeRequestResponse> CodeArtsRepoClient::mergeMergeRequest(MergeMergeRequestRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/merge";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForMergeMergeRequest());

    std::shared_ptr<MergeMergeRequestResponse> localVarResult = std::make_shared<MergeMergeRequestResponse>();
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
std::shared_ptr<RebaseMergeRequestForOpenApiResponse> CodeArtsRepoClient::rebaseMergeRequestForOpenApi(RebaseMergeRequestForOpenApiRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/rebase";

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

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForRebaseMergeRequestForOpenApi());

    std::shared_ptr<RebaseMergeRequestForOpenApiResponse> localVarResult = std::make_shared<RebaseMergeRequestForOpenApiResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ResolveMergeRequestConflictsResponse> CodeArtsRepoClient::resolveMergeRequestConflicts(ResolveMergeRequestConflictsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/resolve-conflicts";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForResolveMergeRequestConflicts());

    std::shared_ptr<ResolveMergeRequestConflictsResponse> localVarResult = std::make_shared<ResolveMergeRequestConflictsResponse>();
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
std::shared_ptr<ReviewMergeRequestResponse> CodeArtsRepoClient::reviewMergeRequest(ReviewMergeRequestRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/approval-review";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForReviewMergeRequest());

    std::shared_ptr<ReviewMergeRequestResponse> localVarResult = std::make_shared<ReviewMergeRequestResponse>();
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
std::shared_ptr<ShowActualHeadPipelineResponse> CodeArtsRepoClient::showActualHeadPipeline(ShowActualHeadPipelineRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/actual-head-pipeline";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowActualHeadPipeline());

    std::shared_ptr<ShowActualHeadPipelineResponse> localVarResult = std::make_shared<ShowActualHeadPipelineResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAverageEvaluationResponse> CodeArtsRepoClient::showAverageEvaluation(ShowAverageEvaluationRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/average-evaluation";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowAverageEvaluation());

    std::shared_ptr<ShowAverageEvaluationResponse> localVarResult = std::make_shared<ShowAverageEvaluationResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowBranchConflictResponse> CodeArtsRepoClient::showBranchConflict(ShowBranchConflictRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/conflict";

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

    if (request.sourceRepositoryIdIsSet()) {
        localVarQueryParams["source_repository_id"] = parameterToString(request.getSourceRepositoryId());
    }
    if (request.sourceBranchIsSet()) {
        localVarQueryParams["source_branch"] = parameterToString(request.getSourceBranch());
    }
    if (request.targetBranchIsSet()) {
        localVarQueryParams["target_branch"] = parameterToString(request.getTargetBranch());
    }
    if (request.targetRepositoryIdIsSet()) {
        localVarQueryParams["target_repository_id"] = parameterToString(request.getTargetRepositoryId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowBranchConflict());

    std::shared_ptr<ShowBranchConflictResponse> localVarResult = std::make_shared<ShowBranchConflictResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowCommitCommentsByLineResponse> CodeArtsRepoClient::showCommitCommentsByLine(ShowCommitCommentsByLineRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/commits/{sha}/comments-by-line";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["sha"] = parameterToString(request.getSha());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowCommitCommentsByLine());

    std::shared_ptr<ShowCommitCommentsByLineResponse> localVarResult = std::make_shared<ShowCommitCommentsByLineResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGroupMergeRequestSettingResponse> CodeArtsRepoClient::showGroupMergeRequestSetting(ShowGroupMergeRequestSettingRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/merge-requests/setting";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowGroupMergeRequestSetting());

    std::shared_ptr<ShowGroupMergeRequestSettingResponse> localVarResult = std::make_shared<ShowGroupMergeRequestSettingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowMergeRequestCommentsByLineResponse> CodeArtsRepoClient::showMergeRequestCommentsByLine(ShowMergeRequestCommentsByLineRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/comments-by-line";

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

    if (request.lineIsSet()) {
        localVarQueryParams["line"] = parameterToString(request.getLine());
    }
    if (request.withCommitCommentsIsSet()) {
        localVarQueryParams["with_commit_comments"] = parameterToString(request.isWithCommitComments());
    }
    if (request.pathIsSet()) {
        localVarQueryParams["path"] = parameterToString(request.getPath());
    }
    if (request.viewIsSet()) {
        localVarQueryParams["view"] = parameterToString(request.getView());
    }
    if (request.baseShaIsSet()) {
        localVarQueryParams["base_sha"] = parameterToString(request.getBaseSha());
    }
    if (request.startShaIsSet()) {
        localVarQueryParams["start_sha"] = parameterToString(request.getStartSha());
    }
    if (request.headShaIsSet()) {
        localVarQueryParams["head_sha"] = parameterToString(request.getHeadSha());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowMergeRequestCommentsByLine());

    std::shared_ptr<ShowMergeRequestCommentsByLineResponse> localVarResult = std::make_shared<ShowMergeRequestCommentsByLineResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowMergeRequestDetailResponse> CodeArtsRepoClient::showMergeRequestDetail(ShowMergeRequestDetailRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowMergeRequestDetail());

    std::shared_ptr<ShowMergeRequestDetailResponse> localVarResult = std::make_shared<ShowMergeRequestDetailResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowMergeRequestSettingResponse> CodeArtsRepoClient::showMergeRequestSetting(ShowMergeRequestSettingRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/setting";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowMergeRequestSetting());

    std::shared_ptr<ShowMergeRequestSettingResponse> localVarResult = std::make_shared<ShowMergeRequestSettingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowMergeRequestTemplateResponse> CodeArtsRepoClient::showMergeRequestTemplate(ShowMergeRequestTemplateRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/template/{template_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["template_id"] = parameterToString(request.getTemplateId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowMergeRequestTemplate());

    std::shared_ptr<ShowMergeRequestTemplateResponse> localVarResult = std::make_shared<ShowMergeRequestTemplateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowMergeRequestVotesDetailResponse> CodeArtsRepoClient::showMergeRequestVotesDetail(ShowMergeRequestVotesDetailRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/votes";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowMergeRequestVotesDetail());

    std::shared_ptr<ShowMergeRequestVotesDetailResponse> localVarResult = std::make_shared<ShowMergeRequestVotesDetailResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowMergeableStateOuterResponse> CodeArtsRepoClient::showMergeableStateOuter(ShowMergeableStateOuterRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/mergeable-state-out";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowMergeableStateOuter());

    std::shared_ptr<ShowMergeableStateOuterResponse> localVarResult = std::make_shared<ShowMergeableStateOuterResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProjectMergeRequestSettingResponse> CodeArtsRepoClient::showProjectMergeRequestSetting(ShowProjectMergeRequestSettingRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/merge-requests/setting";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowProjectMergeRequestSetting());

    std::shared_ptr<ShowProjectMergeRequestSettingResponse> localVarResult = std::make_shared<ShowProjectMergeRequestSettingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateGroupMergeRequestApproverSettingResponse> CodeArtsRepoClient::updateGroupMergeRequestApproverSetting(UpdateGroupMergeRequestApproverSettingRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/approver-settings/{setting_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());
    localVarPathParams["setting_id"] = parameterToString(request.getSettingId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateGroupMergeRequestApproverSetting());

    std::shared_ptr<UpdateGroupMergeRequestApproverSettingResponse> localVarResult = std::make_shared<UpdateGroupMergeRequestApproverSettingResponse>();
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
std::shared_ptr<UpdateGroupMergeRequestTemplateResponse> CodeArtsRepoClient::updateGroupMergeRequestTemplate(UpdateGroupMergeRequestTemplateRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/merge-requests/template/{template_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());
    localVarPathParams["template_id"] = parameterToString(request.getTemplateId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateGroupMergeRequestTemplate());

    std::shared_ptr<UpdateGroupMergeRequestTemplateResponse> localVarResult = std::make_shared<UpdateGroupMergeRequestTemplateResponse>();
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
std::shared_ptr<UpdateMergeRequestResponse> CodeArtsRepoClient::updateMergeRequest(UpdateMergeRequestRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateMergeRequest());

    std::shared_ptr<UpdateMergeRequestResponse> localVarResult = std::make_shared<UpdateMergeRequestResponse>();
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
std::shared_ptr<UpdateMergeRequestApproverSettingResponse> CodeArtsRepoClient::updateMergeRequestApproverSetting(UpdateMergeRequestApproverSettingRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/approver-settings/{setting_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["setting_id"] = parameterToString(request.getSettingId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateMergeRequestApproverSetting());

    std::shared_ptr<UpdateMergeRequestApproverSettingResponse> localVarResult = std::make_shared<UpdateMergeRequestApproverSettingResponse>();
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
std::shared_ptr<UpdateMergeRequestApproversResponse> CodeArtsRepoClient::updateMergeRequestApprovers(UpdateMergeRequestApproversRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/approval-approvers";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateMergeRequestApprovers());

    std::shared_ptr<UpdateMergeRequestApproversResponse> localVarResult = std::make_shared<UpdateMergeRequestApproversResponse>();
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
std::shared_ptr<UpdateMergeRequestReviewersResponse> CodeArtsRepoClient::updateMergeRequestReviewers(UpdateMergeRequestReviewersRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/approval-reviewers";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateMergeRequestReviewers());

    std::shared_ptr<UpdateMergeRequestReviewersResponse> localVarResult = std::make_shared<UpdateMergeRequestReviewersResponse>();
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
std::shared_ptr<UpdateMergeRequestSettingResponse> CodeArtsRepoClient::updateMergeRequestSetting(UpdateMergeRequestSettingRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/setting";

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

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateMergeRequestSetting());

    std::shared_ptr<UpdateMergeRequestSettingResponse> localVarResult = std::make_shared<UpdateMergeRequestSettingResponse>();
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
std::shared_ptr<UpdateMergeRequestTemplateResponse> CodeArtsRepoClient::updateMergeRequestTemplate(UpdateMergeRequestTemplateRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/template/{template_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["template_id"] = parameterToString(request.getTemplateId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateMergeRequestTemplate());

    std::shared_ptr<UpdateMergeRequestTemplateResponse> localVarResult = std::make_shared<UpdateMergeRequestTemplateResponse>();
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
std::shared_ptr<UpdateMergeRequestVoteResponse> CodeArtsRepoClient::updateMergeRequestVote(UpdateMergeRequestVoteRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/vote";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateMergeRequestVote());

    std::shared_ptr<UpdateMergeRequestVoteResponse> localVarResult = std::make_shared<UpdateMergeRequestVoteResponse>();
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
std::shared_ptr<UpdateProjectMergeRequestApproverSettingResponse> CodeArtsRepoClient::updateProjectMergeRequestApproverSetting(UpdateProjectMergeRequestApproverSettingRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/approver-settings/{setting_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());
    localVarPathParams["setting_id"] = parameterToString(request.getSettingId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateProjectMergeRequestApproverSetting());

    std::shared_ptr<UpdateProjectMergeRequestApproverSettingResponse> localVarResult = std::make_shared<UpdateProjectMergeRequestApproverSettingResponse>();
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
std::shared_ptr<UpdateProjectMergeRequestTemplateResponse> CodeArtsRepoClient::updateProjectMergeRequestTemplate(UpdateProjectMergeRequestTemplateRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/merge-requests/template/{template_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());
    localVarPathParams["template_id"] = parameterToString(request.getTemplateId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateProjectMergeRequestTemplate());

    std::shared_ptr<UpdateProjectMergeRequestTemplateResponse> localVarResult = std::make_shared<UpdateProjectMergeRequestTemplateResponse>();
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
std::shared_ptr<ListCommitAssociatedMergeRequestsResponse> CodeArtsRepoClient::listCommitAssociatedMergeRequests(ListCommitAssociatedMergeRequestsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/commits/{sha}/merge-requests";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["sha"] = parameterToString(request.getSha());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListCommitAssociatedMergeRequests());

    std::shared_ptr<ListCommitAssociatedMergeRequestsResponse> localVarResult = std::make_shared<ListCommitAssociatedMergeRequestsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListPersonalMergeRequestsResponse> CodeArtsRepoClient::listPersonalMergeRequests(ListPersonalMergeRequestsRequest &request)
{
    std::string localVarPath = "/v4/merge-requests";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.stateIsSet()) {
        localVarQueryParams["state"] = parameterToString(request.getState());
    }
    if (request.orderByIsSet()) {
        localVarQueryParams["order_by"] = parameterToString(request.getOrderBy());
    }
    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }
    if (request.labelsIsSet()) {
        localVarQueryParams["labels"] = parameterToString(request.getLabels());
    }
    if (request.createdBeforeIsSet()) {
        localVarQueryParams["created_before"] = parameterToString(request.getCreatedBefore());
    }
    if (request.createdAfterIsSet()) {
        localVarQueryParams["created_after"] = parameterToString(request.getCreatedAfter());
    }
    if (request.updatedAfterIsSet()) {
        localVarQueryParams["updated_after"] = parameterToString(request.getUpdatedAfter());
    }
    if (request.updatedBeforeIsSet()) {
        localVarQueryParams["updated_before"] = parameterToString(request.getUpdatedBefore());
    }
    if (request.viewIsSet()) {
        localVarQueryParams["view"] = parameterToString(request.getView());
    }
    if (request.authorIdIsSet()) {
        localVarQueryParams["author_id"] = parameterToString(request.getAuthorId());
    }
    if (request.scopeIsSet()) {
        localVarQueryParams["scope"] = parameterToString(request.getScope());
    }
    if (request.sourceBranchIsSet()) {
        localVarQueryParams["source_branch"] = parameterToString(request.getSourceBranch());
    }
    if (request.targetBranchIsSet()) {
        localVarQueryParams["target_branch"] = parameterToString(request.getTargetBranch());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.wipIsSet()) {
        localVarQueryParams["wip"] = parameterToString(request.getWip());
    }
    if (request.mergedByIsSet()) {
        localVarQueryParams["merged_by"] = parameterToString(request.getMergedBy());
    }
    if (request.mergedAfterIsSet()) {
        localVarQueryParams["merged_after"] = parameterToString(request.getMergedAfter());
    }
    if (request.mergedBeforeIsSet()) {
        localVarQueryParams["merged_before"] = parameterToString(request.getMergedBefore());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.onlyCountIsSet()) {
        localVarQueryParams["only_count"] = parameterToString(request.isOnlyCount());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListPersonalMergeRequests());

    std::shared_ptr<ListPersonalMergeRequestsResponse> localVarResult = std::make_shared<ListPersonalMergeRequestsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryMergeRequestsStatisticResponse> CodeArtsRepoClient::showRepositoryMergeRequestsStatistic(ShowRepositoryMergeRequestsStatisticRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/statistic";

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

    if (request.iidsIsSet()) {
        localVarQueryParams["iids"] = parameterToString(request.getIids());
    }
    if (request.fieldsIsSet()) {
        localVarQueryParams["fields"] = parameterToString(request.getFields());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowRepositoryMergeRequestsStatistic());

    std::shared_ptr<ShowRepositoryMergeRequestsStatisticResponse> localVarResult = std::make_shared<ShowRepositoryMergeRequestsStatisticResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListMergeRequestParticipantsResponse> CodeArtsRepoClient::listMergeRequestParticipants(ListMergeRequestParticipantsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/merge-requests/{merge_request_iid}/participants";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListMergeRequestParticipants());

    std::shared_ptr<ListMergeRequestParticipantsResponse> localVarResult = std::make_shared<ListMergeRequestParticipantsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepositoryResourcePermissionsResponse> CodeArtsRepoClient::listRepositoryResourcePermissions(ListRepositoryResourcePermissionsRequest &request)
{
    std::string localVarPath = "/v4/repository/{repository_id}/permissions/{resource_name}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["resource_name"] = parameterToString(request.getResourceName());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRepositoryResourcePermissions());

    std::shared_ptr<ListRepositoryResourcePermissionsResponse> localVarResult = std::make_shared<ListRepositoryResourcePermissionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryPermissionInheritEnabledResponse> CodeArtsRepoClient::showRepositoryPermissionInheritEnabled(ShowRepositoryPermissionInheritEnabledRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/permission-inherit-setting";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowRepositoryPermissionInheritEnabled());

    std::shared_ptr<ShowRepositoryPermissionInheritEnabledResponse> localVarResult = std::make_shared<ShowRepositoryPermissionInheritEnabledResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateRepositoryPermissionInheritEnabledResponse> CodeArtsRepoClient::updateRepositoryPermissionInheritEnabled(UpdateRepositoryPermissionInheritEnabledRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/permission-inherit-setting";

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

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateRepositoryPermissionInheritEnabled());

    std::shared_ptr<UpdateRepositoryPermissionInheritEnabledResponse> localVarResult = std::make_shared<UpdateRepositoryPermissionInheritEnabledResponse>();
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
std::shared_ptr<UpdateRepositoryResourcePermissionsResponse> CodeArtsRepoClient::updateRepositoryResourcePermissions(UpdateRepositoryResourcePermissionsRequest &request)
{
    std::string localVarPath = "/v4/repository/{repository_id}/permissions/{resource_name}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["resource_name"] = parameterToString(request.getResourceName());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateRepositoryResourcePermissions());

    std::shared_ptr<UpdateRepositoryResourcePermissionsResponse> localVarResult = std::make_shared<UpdateRepositoryResourcePermissionsResponse>();
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
std::shared_ptr<ListLatestPipelineJobsResponse> CodeArtsRepoClient::listLatestPipelineJobs(ListLatestPipelineJobsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/pipelines/{pipeline_id}/latest-jobs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["pipeline_id"] = parameterToString(request.getPipelineId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListLatestPipelineJobs());

    std::shared_ptr<ListLatestPipelineJobsResponse> localVarResult = std::make_shared<ListLatestPipelineJobsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListPipelineJobsResponse> CodeArtsRepoClient::listPipelineJobs(ListPipelineJobsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/pipelines/{pipeline_id}/jobs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["pipeline_id"] = parameterToString(request.getPipelineId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListPipelineJobs());

    std::shared_ptr<ListPipelineJobsResponse> localVarResult = std::make_shared<ListPipelineJobsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListItemCommitsResponse> CodeArtsRepoClient::listItemCommits(ListItemCommitsRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/items/{item_id}/commits";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());
    localVarPathParams["item_id"] = parameterToString(request.getItemId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListItemCommits());

    std::shared_ptr<ListItemCommitsResponse> localVarResult = std::make_shared<ListItemCommitsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProjectWatermarkResponse> CodeArtsRepoClient::showProjectWatermark(ShowProjectWatermarkRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/watermark";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowProjectWatermark());

    std::shared_ptr<ShowProjectWatermarkResponse> localVarResult = std::make_shared<ShowProjectWatermarkResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProjectsGeneralPolicyResponse> CodeArtsRepoClient::showProjectsGeneralPolicy(ShowProjectsGeneralPolicyRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/general-policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowProjectsGeneralPolicy());

    std::shared_ptr<ShowProjectsGeneralPolicyResponse> localVarResult = std::make_shared<ShowProjectsGeneralPolicyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowResourcePermissionsResponse> CodeArtsRepoClient::showResourcePermissions(ShowResourcePermissionsRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/permissions-resources/{resource_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());
    localVarPathParams["resource_id"] = parameterToString(request.getResourceId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowResourcePermissions());

    std::shared_ptr<ShowResourcePermissionsResponse> localVarResult = std::make_shared<ShowResourcePermissionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateProjectGeneralPolicyResponse> CodeArtsRepoClient::updateProjectGeneralPolicy(UpdateProjectGeneralPolicyRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/general-policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateProjectGeneralPolicy());

    std::shared_ptr<UpdateProjectGeneralPolicyResponse> localVarResult = std::make_shared<UpdateProjectGeneralPolicyResponse>();
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
std::shared_ptr<UpdateProjectWatermarkResponse> CodeArtsRepoClient::updateProjectWatermark(UpdateProjectWatermarkRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/watermark";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateProjectWatermark());

    std::shared_ptr<UpdateProjectWatermarkResponse> localVarResult = std::make_shared<UpdateProjectWatermarkResponse>();
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
std::shared_ptr<BatchCreateProtectedBranchResponse> CodeArtsRepoClient::batchCreateProtectedBranch(BatchCreateProtectedBranchRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/protected-branches";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForBatchCreateProtectedBranch());

    std::shared_ptr<BatchCreateProtectedBranchResponse> localVarResult = std::make_shared<BatchCreateProtectedBranchResponse>();
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
std::shared_ptr<BatchDeleteProtectedBranchesResponse> CodeArtsRepoClient::batchDeleteProtectedBranches(BatchDeleteProtectedBranchesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/protected-branches/bulk-deletion";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForBatchDeleteProtectedBranches());

    std::shared_ptr<BatchDeleteProtectedBranchesResponse> localVarResult = std::make_shared<BatchDeleteProtectedBranchesResponse>();
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
std::shared_ptr<BatchUpdateProtectedBranchesResponse> CodeArtsRepoClient::batchUpdateProtectedBranches(BatchUpdateProtectedBranchesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/protected-branches";

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

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForBatchUpdateProtectedBranches());

    std::shared_ptr<BatchUpdateProtectedBranchesResponse> localVarResult = std::make_shared<BatchUpdateProtectedBranchesResponse>();
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
std::shared_ptr<CreateProjectProtectedBranchesResponse> CodeArtsRepoClient::createProjectProtectedBranches(CreateProjectProtectedBranchesRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/protected-branches";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateProjectProtectedBranches());

    std::shared_ptr<CreateProjectProtectedBranchesResponse> localVarResult = std::make_shared<CreateProjectProtectedBranchesResponse>();
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
std::shared_ptr<DeleteProtectedBranchResponse> CodeArtsRepoClient::deleteProtectedBranch(DeleteProtectedBranchRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/protected-branch";

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

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDeleteProtectedBranch());

    std::shared_ptr<DeleteProtectedBranchResponse> localVarResult = std::make_shared<DeleteProtectedBranchResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProjectProtectedBranchesResponse> CodeArtsRepoClient::listProjectProtectedBranches(ListProjectProtectedBranchesRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/protected-branches";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.userActionsIsSet()) {
        localVarQueryParams["user_actions"] = parameterToString(request.isUserActions());
    }
    if (request.viewIsSet()) {
        localVarQueryParams["view"] = parameterToString(request.getView());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListProjectProtectedBranches());

    std::shared_ptr<ListProjectProtectedBranchesResponse> localVarResult = std::make_shared<ListProjectProtectedBranchesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProtectedBranchesResponse> CodeArtsRepoClient::listProtectedBranches(ListProtectedBranchesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/protected-branches";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListProtectedBranches());

    std::shared_ptr<ListProtectedBranchesResponse> localVarResult = std::make_shared<ListProtectedBranchesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProtectedBranchResponse> CodeArtsRepoClient::showProtectedBranch(ShowProtectedBranchRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/protected-branch";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowProtectedBranch());

    std::shared_ptr<ShowProtectedBranchResponse> localVarResult = std::make_shared<ShowProtectedBranchResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateProtectedBranchResponse> CodeArtsRepoClient::updateProtectedBranch(UpdateProtectedBranchRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/protected-branch";

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
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateProtectedBranch());

    std::shared_ptr<UpdateProtectedBranchResponse> localVarResult = std::make_shared<UpdateProtectedBranchResponse>();
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
std::shared_ptr<BatchCreateProtectedTagsResponse> CodeArtsRepoClient::batchCreateProtectedTags(BatchCreateProtectedTagsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/protected-tags";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForBatchCreateProtectedTags());

    std::shared_ptr<BatchCreateProtectedTagsResponse> localVarResult = std::make_shared<BatchCreateProtectedTagsResponse>();
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
std::shared_ptr<BatchDeleteProtectedTagsResponse> CodeArtsRepoClient::batchDeleteProtectedTags(BatchDeleteProtectedTagsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/protected-tags/bulk-deletion";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForBatchDeleteProtectedTags());

    std::shared_ptr<BatchDeleteProtectedTagsResponse> localVarResult = std::make_shared<BatchDeleteProtectedTagsResponse>();
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
std::shared_ptr<BatchUpdateProtectedTagsResponse> CodeArtsRepoClient::batchUpdateProtectedTags(BatchUpdateProtectedTagsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/protected-tags";

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

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForBatchUpdateProtectedTags());

    std::shared_ptr<BatchUpdateProtectedTagsResponse> localVarResult = std::make_shared<BatchUpdateProtectedTagsResponse>();
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
std::shared_ptr<CreateProjectProtectedTagsResponse> CodeArtsRepoClient::createProjectProtectedTags(CreateProjectProtectedTagsRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/protected-tags";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateProjectProtectedTags());

    std::shared_ptr<CreateProjectProtectedTagsResponse> localVarResult = std::make_shared<CreateProjectProtectedTagsResponse>();
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
std::shared_ptr<DeleteProtectedTagResponse> CodeArtsRepoClient::deleteProtectedTag(DeleteProtectedTagRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/protected-tag";

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

    if (request.tagNameIsSet()) {
        localVarQueryParams["tag_name"] = parameterToString(request.getTagName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDeleteProtectedTag());

    std::shared_ptr<DeleteProtectedTagResponse> localVarResult = std::make_shared<DeleteProtectedTagResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProjectProtectedTagsResponse> CodeArtsRepoClient::listProjectProtectedTags(ListProjectProtectedTagsRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/protected-tags";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListProjectProtectedTags());

    std::shared_ptr<ListProjectProtectedTagsResponse> localVarResult = std::make_shared<ListProjectProtectedTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProtectedTagsResponse> CodeArtsRepoClient::listProtectedTags(ListProtectedTagsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/protected-tags";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListProtectedTags());

    std::shared_ptr<ListProtectedTagsResponse> localVarResult = std::make_shared<ListProtectedTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProtectedTagResponse> CodeArtsRepoClient::showProtectedTag(ShowProtectedTagRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/protected-tag";

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

    if (request.tagNameIsSet()) {
        localVarQueryParams["tag_name"] = parameterToString(request.getTagName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowProtectedTag());

    std::shared_ptr<ShowProtectedTagResponse> localVarResult = std::make_shared<ShowProtectedTagResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateProtectedTagResponse> CodeArtsRepoClient::updateProtectedTag(UpdateProtectedTagRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/protected-tag";

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

    if (request.tagNameIsSet()) {
        localVarQueryParams["tag_name"] = parameterToString(request.getTagName());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateProtectedTag());

    std::shared_ptr<UpdateProtectedTagResponse> localVarResult = std::make_shared<UpdateProtectedTagResponse>();
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
std::shared_ptr<ListLogsTreeResponse> CodeArtsRepoClient::listLogsTree(ListLogsTreeRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/logs-tree";

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

    if (request.refIsSet()) {
        localVarQueryParams["ref"] = parameterToString(request.getRef());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListLogsTree());

    std::shared_ptr<ListLogsTreeResponse> localVarResult = std::make_shared<ListLogsTreeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRefsListResponse> CodeArtsRepoClient::listRefsList(ListRefsListRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/refs";

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

    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRefsList());

    std::shared_ptr<ListRefsListResponse> localVarResult = std::make_shared<ListRefsListResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RenameFileResponse> CodeArtsRepoClient::renameFile(RenameFileRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/rename-file";

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

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForRenameFile());

    std::shared_ptr<RenameFileResponse> localVarResult = std::make_shared<RenameFileResponse>();
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
std::shared_ptr<ShowFileRawResponse> CodeArtsRepoClient::showFileRaw(ShowFileRawRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/files/raw";

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

    if (request.filePathIsSet()) {
        localVarQueryParams["file_path"] = parameterToString(request.getFilePath());
    }
    if (request.refIsSet()) {
        localVarQueryParams["ref"] = parameterToString(request.getRef());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowFileRaw());

    std::shared_ptr<ShowFileRawResponse> localVarResult = std::make_shared<ShowFileRawResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ExecuteRepositoryStatisticsResponse> CodeArtsRepoClient::executeRepositoryStatistics(ExecuteRepositoryStatisticsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/statistics";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForExecuteRepositoryStatistics());

    std::shared_ptr<ExecuteRepositoryStatisticsResponse> localVarResult = std::make_shared<ExecuteRepositoryStatisticsResponse>();
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
std::shared_ptr<AddSubmoduleResponse> CodeArtsRepoClient::addSubmodule(AddSubmoduleRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/submodules";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForAddSubmodule());

    std::shared_ptr<AddSubmoduleResponse> localVarResult = std::make_shared<AddSubmoduleResponse>();
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
std::shared_ptr<AddTrustedIpAddressResponse> CodeArtsRepoClient::addTrustedIpAddress(AddTrustedIpAddressRequest &request)
{
    std::string localVarPath = "/v4/projects/{id}/trusted-ip-addresses";

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
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForAddTrustedIpAddress());

    std::shared_ptr<AddTrustedIpAddressResponse> localVarResult = std::make_shared<AddTrustedIpAddressResponse>();
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
std::shared_ptr<AssociateRemoteMirrorResponse> CodeArtsRepoClient::associateRemoteMirror(AssociateRemoteMirrorRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/remote-mirror/associate";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForAssociateRemoteMirror());

    std::shared_ptr<AssociateRemoteMirrorResponse> localVarResult = std::make_shared<AssociateRemoteMirrorResponse>();
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
std::shared_ptr<AssociateRepositoryUserGroupResponse> CodeArtsRepoClient::associateRepositoryUserGroup(AssociateRepositoryUserGroupRequest &request)
{
    std::string localVarPath = "/v4/{project_id}/repositories/{repository_id}/user-group/{user_group_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());
    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["user_group_id"] = parameterToString(request.getUserGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForAssociateRepositoryUserGroup());

    std::shared_ptr<AssociateRepositoryUserGroupResponse> localVarResult = std::make_shared<AssociateRepositoryUserGroupResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<BatchValidateRepoNamesResponse> CodeArtsRepoClient::batchValidateRepoNames(BatchValidateRepoNamesRequest &request)
{
    std::string localVarPath = "/v4/repository-names/validations";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForBatchValidateRepoNames());

    std::shared_ptr<BatchValidateRepoNamesResponse> localVarResult = std::make_shared<BatchValidateRepoNamesResponse>();
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
std::shared_ptr<CreateDirResponse> CodeArtsRepoClient::createDir(CreateDirRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/dir";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateDir());

    std::shared_ptr<CreateDirResponse> localVarResult = std::make_shared<CreateDirResponse>();
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
std::shared_ptr<CreateRepositoryCommitRuleResponse> CodeArtsRepoClient::createRepositoryCommitRule(CreateRepositoryCommitRuleRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/commit-rules";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateRepositoryCommitRule());

    std::shared_ptr<CreateRepositoryCommitRuleResponse> localVarResult = std::make_shared<CreateRepositoryCommitRuleResponse>();
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
std::shared_ptr<DeleteTrustedIpAddressResponse> CodeArtsRepoClient::deleteTrustedIpAddress(DeleteTrustedIpAddressRequest &request)
{
    std::string localVarPath = "/v4/projects/{id}/trusted-ip-addresses/{ip_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["id"] = parameterToString(request.getId());
    localVarPathParams["ip_id"] = parameterToString(request.getIpId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDeleteTrustedIpAddress());

    std::shared_ptr<DeleteTrustedIpAddressResponse> localVarResult = std::make_shared<DeleteTrustedIpAddressResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DownloadArchiveResponse> CodeArtsRepoClient::downloadArchive(DownloadArchiveRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/archive";

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

    if (request.shaIsSet()) {
        localVarQueryParams["sha"] = parameterToString(request.getSha());
    }
    if (request.pathIsSet()) {
        localVarQueryParams["path"] = parameterToString(request.getPath());
    }
    if (request.archiveFormatIsSet()) {
        localVarQueryParams["archive_format"] = parameterToString(request.getArchiveFormat());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDownloadArchive());

    std::shared_ptr<DownloadArchiveResponse> localVarResult = std::make_shared<DownloadArchiveResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListCurrentUserRepositoriesResponse> CodeArtsRepoClient::listCurrentUserRepositories(ListCurrentUserRepositoriesRequest &request)
{
    std::string localVarPath = "/v4/user/repositories";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.orderByIsSet()) {
        localVarQueryParams["order_by"] = parameterToString(request.getOrderBy());
    }
    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }
    if (request.archivedIsSet()) {
        localVarQueryParams["archived"] = parameterToString(request.isArchived());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.starredIsSet()) {
        localVarQueryParams["starred"] = parameterToString(request.isStarred());
    }
    if (request.membershipIsSet()) {
        localVarQueryParams["membership"] = parameterToString(request.isMembership());
    }
    if (request.userCreatedIsSet()) {
        localVarQueryParams["user_created"] = parameterToString(request.isUserCreated());
    }
    if (request.includeAbnormalIsSet()) {
        localVarQueryParams["include_abnormal"] = parameterToString(request.isIncludeAbnormal());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListCurrentUserRepositories());

    std::shared_ptr<ListCurrentUserRepositoriesResponse> localVarResult = std::make_shared<ListCurrentUserRepositoriesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGroupRepositoriesResponse> CodeArtsRepoClient::listGroupRepositories(ListGroupRepositoriesRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/repositories";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.orderByIsSet()) {
        localVarQueryParams["order_by"] = parameterToString(request.getOrderBy());
    }
    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListGroupRepositories());

    std::shared_ptr<ListGroupRepositoriesResponse> localVarResult = std::make_shared<ListGroupRepositoriesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListManageableGroupsResponse> CodeArtsRepoClient::listManageableGroups(ListManageableGroupsRequest &request)
{
    std::string localVarPath = "/v4/{project_id}/manageable-groups";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.scopeIsSet()) {
        localVarQueryParams["scope"] = parameterToString(request.getScope());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListManageableGroups());

    std::shared_ptr<ListManageableGroupsResponse> localVarResult = std::make_shared<ListManageableGroupsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListPersonalRecentPushEventsResponse> CodeArtsRepoClient::listPersonalRecentPushEvents(ListPersonalRecentPushEventsRequest &request)
{
    std::string localVarPath = "/v4/user/recent-push-events";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.projectIdIsSet()) {
        localVarQueryParams["project_id"] = parameterToString(request.getProjectId());
    }
    if (request.sizeIsSet()) {
        localVarQueryParams["size"] = parameterToString(request.getSize());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListPersonalRecentPushEvents());

    std::shared_ptr<ListPersonalRecentPushEventsResponse> localVarResult = std::make_shared<ListPersonalRecentPushEventsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListPersonalRepositoryImportRecordsResponse> CodeArtsRepoClient::listPersonalRepositoryImportRecords(ListPersonalRepositoryImportRecordsRequest &request)
{
    std::string localVarPath = "/v4/user/repository-import-records";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.stateIsSet()) {
        localVarQueryParams["state"] = parameterToString(request.getState());
    }
    if (request.sourceTypeIsSet()) {
        localVarQueryParams["source_type"] = parameterToString(request.getSourceType());
    }
    if (request.createdAfterIsSet()) {
        localVarQueryParams["created_after"] = parameterToString(request.getCreatedAfter());
    }
    if (request.createdBeforeIsSet()) {
        localVarQueryParams["created_before"] = parameterToString(request.getCreatedBefore());
    }
    if (request.finishedAfterIsSet()) {
        localVarQueryParams["finished_after"] = parameterToString(request.getFinishedAfter());
    }
    if (request.finishedBeforeIsSet()) {
        localVarQueryParams["finished_before"] = parameterToString(request.getFinishedBefore());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.orderByIsSet()) {
        localVarQueryParams["order_by"] = parameterToString(request.getOrderBy());
    }
    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListPersonalRepositoryImportRecords());

    std::shared_ptr<ListPersonalRepositoryImportRecordsResponse> localVarResult = std::make_shared<ListPersonalRepositoryImportRecordsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProjectRepositoriesResponse> CodeArtsRepoClient::listProjectRepositories(ListProjectRepositoriesRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/repositories";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.orderByIsSet()) {
        localVarQueryParams["order_by"] = parameterToString(request.getOrderBy());
    }
    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListProjectRepositories());

    std::shared_ptr<ListProjectRepositoriesResponse> localVarResult = std::make_shared<ListProjectRepositoriesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepositoryCommitRulesResponse> CodeArtsRepoClient::listRepositoryCommitRules(ListRepositoryCommitRulesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/commit-rules";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRepositoryCommitRules());

    std::shared_ptr<ListRepositoryCommitRulesResponse> localVarResult = std::make_shared<ListRepositoryCommitRulesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepositoryContributorsResponse> CodeArtsRepoClient::listRepositoryContributors(ListRepositoryContributorsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/contributors";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.orderByIsSet()) {
        localVarQueryParams["order_by"] = parameterToString(request.getOrderBy());
    }
    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }
    if (request.refNameIsSet()) {
        localVarQueryParams["ref_name"] = parameterToString(request.getRefName());
    }
    if (request.skipMergeIsSet()) {
        localVarQueryParams["skip_merge"] = parameterToString(request.isSkipMerge());
    }
    if (request.authorIsSet()) {
        localVarQueryParams["author"] = parameterToString(request.getAuthor());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRepositoryContributors());

    std::shared_ptr<ListRepositoryContributorsResponse> localVarResult = std::make_shared<ListRepositoryContributorsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepositoryEventsResponse> CodeArtsRepoClient::listRepositoryEvents(ListRepositoryEventsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/events";

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

    if (request.authorIdIsSet()) {
        localVarQueryParams["author_id"] = parameterToString(request.getAuthorId());
    }
    if (request.filterIsSet()) {
        localVarQueryParams["filter"] = parameterToString(request.getFilter());
    }
    if (request.beforeIsSet()) {
        localVarQueryParams["before"] = parameterToString(request.getBefore());
    }
    if (request.afterIsSet()) {
        localVarQueryParams["after"] = parameterToString(request.getAfter());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRepositoryEvents());

    std::shared_ptr<ListRepositoryEventsResponse> localVarResult = std::make_shared<ListRepositoryEventsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepositoryForksResponse> CodeArtsRepoClient::listRepositoryForks(ListRepositoryForksRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/forks";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.orderByIsSet()) {
        localVarQueryParams["order_by"] = parameterToString(request.getOrderBy());
    }
    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }
    if (request.viewIsSet()) {
        localVarQueryParams["view"] = parameterToString(request.getView());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRepositoryForks());

    std::shared_ptr<ListRepositoryForksResponse> localVarResult = std::make_shared<ListRepositoryForksResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepositoryLanguagesResponse> CodeArtsRepoClient::listRepositoryLanguages(ListRepositoryLanguagesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/languages";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRepositoryLanguages());

    std::shared_ptr<ListRepositoryLanguagesResponse> localVarResult = std::make_shared<ListRepositoryLanguagesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepositoryTemplatesResponse> CodeArtsRepoClient::listRepositoryTemplates(ListRepositoryTemplatesRequest &request)
{
    std::string localVarPath = "/v4/repository-templates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.platformIsSet()) {
        localVarQueryParams["platform"] = parameterToString(request.getPlatform());
    }
    if (request.pipelineIsSet()) {
        localVarQueryParams["pipeline"] = parameterToString(request.getPipeline());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.enterTypeIsSet()) {
        localVarQueryParams["enter_type"] = parameterToString(request.getEnterType());
    }
    if (request.dateOrderIsSet()) {
        localVarQueryParams["date_order"] = parameterToString(request.getDateOrder());
    }
    if (request.languageIsSet()) {
        localVarQueryParams["language"] = parameterToString(request.getLanguage());
    }
    if (request.projectIdIsSet()) {
        localVarQueryParams["project_id"] = parameterToString(request.getProjectId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRepositoryTemplates());

    std::shared_ptr<ListRepositoryTemplatesResponse> localVarResult = std::make_shared<ListRepositoryTemplatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListSubmodulesResponse> CodeArtsRepoClient::listSubmodules(ListSubmodulesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/submodules";

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

    if (request.shaIsSet()) {
        localVarQueryParams["sha"] = parameterToString(request.getSha());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListSubmodules());

    std::shared_ptr<ListSubmodulesResponse> localVarResult = std::make_shared<ListSubmodulesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListTreesResponse> CodeArtsRepoClient::listTrees(ListTreesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/trees";

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

    if (request.refIsSet()) {
        localVarQueryParams["ref"] = parameterToString(request.getRef());
    }
    if (request.pathIsSet()) {
        localVarQueryParams["path"] = parameterToString(request.getPath());
    }
    if (request.recursiveIsSet()) {
        localVarQueryParams["recursive"] = parameterToString(request.isRecursive());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListTrees());

    std::shared_ptr<ListTreesResponse> localVarResult = std::make_shared<ListTreesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListTrustedIpAddressesResponse> CodeArtsRepoClient::listTrustedIpAddresses(ListTrustedIpAddressesRequest &request)
{
    std::string localVarPath = "/v4/projects/{id}/trusted-ip-addresses";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListTrustedIpAddresses());

    std::shared_ptr<ListTrustedIpAddressesResponse> localVarResult = std::make_shared<ListTrustedIpAddressesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<LockRepositoryResponse> CodeArtsRepoClient::lockRepository(LockRepositoryRequest &request)
{
    std::string localVarPath = "/v4/{project_id}/repositories/{repository_id}/lock";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());
    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForLockRepository());

    std::shared_ptr<LockRepositoryResponse> localVarResult = std::make_shared<LockRepositoryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RemoveDeployKeyResponse> CodeArtsRepoClient::removeDeployKey(RemoveDeployKeyRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/deploy-keys/{key_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["key_id"] = parameterToString(request.getKeyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForRemoveDeployKey());

    std::shared_ptr<RemoveDeployKeyResponse> localVarResult = std::make_shared<RemoveDeployKeyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RemoveDeployKeyFromSubmodulesResponse> CodeArtsRepoClient::removeDeployKeyFromSubmodules(RemoveDeployKeyFromSubmodulesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/deploy-keys/{key_id}/submodules";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["key_id"] = parameterToString(request.getKeyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForRemoveDeployKeyFromSubmodules());

    std::shared_ptr<RemoveDeployKeyFromSubmodulesResponse> localVarResult = std::make_shared<RemoveDeployKeyFromSubmodulesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowBlobsResponse> CodeArtsRepoClient::showBlobs(ShowBlobsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/blobs";

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

    if (request.blobIdIsSet()) {
        localVarQueryParams["blob_id"] = parameterToString(request.getBlobId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowBlobs());

    std::shared_ptr<ShowBlobsResponse> localVarResult = std::make_shared<ShowBlobsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowCommitStatisticsResponse> CodeArtsRepoClient::showCommitStatistics(ShowCommitStatisticsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/commit-statistics";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowCommitStatistics());

    std::shared_ptr<ShowCommitStatisticsResponse> localVarResult = std::make_shared<ShowCommitStatisticsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDiffLinesResponse> CodeArtsRepoClient::showDiffLines(ShowDiffLinesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/diff-lines";

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

    if (request.filePathIsSet()) {
        localVarQueryParams["file_path"] = parameterToString(request.getFilePath());
    }
    if (request.commitIdIsSet()) {
        localVarQueryParams["commit_id"] = parameterToString(request.getCommitId());
    }
    if (request.startIsSet()) {
        localVarQueryParams["start"] = parameterToString(request.getStart());
    }
    if (request.endIsSet()) {
        localVarQueryParams["end"] = parameterToString(request.getEnd());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowDiffLines());

    std::shared_ptr<ShowDiffLinesResponse> localVarResult = std::make_shared<ShowDiffLinesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowLastPushEventInRepositoryResponse> CodeArtsRepoClient::showLastPushEventInRepository(ShowLastPushEventInRepositoryRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/last-push-event";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowLastPushEventInRepository());

    std::shared_ptr<ShowLastPushEventInRepositoryResponse> localVarResult = std::make_shared<ShowLastPushEventInRepositoryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowNotificationSubscriptionResponse> CodeArtsRepoClient::showNotificationSubscription(ShowNotificationSubscriptionRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/notification-subscriptions/subscription";

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

    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowNotificationSubscription());

    std::shared_ptr<ShowNotificationSubscriptionResponse> localVarResult = std::make_shared<ShowNotificationSubscriptionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowNotificationSubscriptionsStatusResponse> CodeArtsRepoClient::showNotificationSubscriptionsStatus(ShowNotificationSubscriptionsStatusRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/notification-subscriptions/status";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowNotificationSubscriptionsStatus());

    std::shared_ptr<ShowNotificationSubscriptionsStatusResponse> localVarResult = std::make_shared<ShowNotificationSubscriptionsStatusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRefCompareResponse> CodeArtsRepoClient::showRefCompare(ShowRefCompareRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/compare";

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

    if (request.fromIsSet()) {
        localVarQueryParams["from"] = parameterToString(request.getFrom());
    }
    if (request.toIsSet()) {
        localVarQueryParams["to"] = parameterToString(request.getTo());
    }
    if (request.compareTypeIsSet()) {
        localVarQueryParams["compare_type"] = parameterToString(request.getCompareType());
    }
    if (request.targetIdIsSet()) {
        localVarQueryParams["target_id"] = parameterToString(request.getTargetId());
    }
    if (request.straightIsSet()) {
        localVarQueryParams["straight"] = parameterToString(request.isStraight());
    }
    if (request.ignoreWhitespaceChangeIsSet()) {
        localVarQueryParams["ignore_whitespace_change"] = parameterToString(request.isIgnoreWhitespaceChange());
    }
    if (request.viewIsSet()) {
        localVarQueryParams["view"] = parameterToString(request.getView());
    }
    if (request.onlyCountIsSet()) {
        localVarQueryParams["only_count"] = parameterToString(request.isOnlyCount());
    }
    if (request.filePathIsSet()) {
        localVarQueryParams["file_path"] = parameterToString(request.getFilePath());
    }
    if (request.additionalFieldsIsSet()) {
        localVarQueryParams["additional_fields"] = parameterToString(request.getAdditionalFields());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowRefCompare());

    std::shared_ptr<ShowRefCompareResponse> localVarResult = std::make_shared<ShowRefCompareResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRemoteMirrorResponse> CodeArtsRepoClient::showRemoteMirror(ShowRemoteMirrorRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/remote-mirror";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowRemoteMirror());

    std::shared_ptr<ShowRemoteMirrorResponse> localVarResult = std::make_shared<ShowRemoteMirrorResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryResponse> CodeArtsRepoClient::showRepository(ShowRepositoryRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowRepository());

    std::shared_ptr<ShowRepositoryResponse> localVarResult = std::make_shared<ShowRepositoryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryGeneralCommitRuleResponse> CodeArtsRepoClient::showRepositoryGeneralCommitRule(ShowRepositoryGeneralCommitRuleRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/general-commit-rule";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowRepositoryGeneralCommitRule());

    std::shared_ptr<ShowRepositoryGeneralCommitRuleResponse> localVarResult = std::make_shared<ShowRepositoryGeneralCommitRuleResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryGeneralPolicyResponse> CodeArtsRepoClient::showRepositoryGeneralPolicy(ShowRepositoryGeneralPolicyRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/general-policy";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowRepositoryGeneralPolicy());

    std::shared_ptr<ShowRepositoryGeneralPolicyResponse> localVarResult = std::make_shared<ShowRepositoryGeneralPolicyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryInheritSettingResponse> CodeArtsRepoClient::showRepositoryInheritSetting(ShowRepositoryInheritSettingRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/inherit-setting";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowRepositoryInheritSetting());

    std::shared_ptr<ShowRepositoryInheritSettingResponse> localVarResult = std::make_shared<ShowRepositoryInheritSettingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryInheritSettingSourceResponse> CodeArtsRepoClient::showRepositoryInheritSettingSource(ShowRepositoryInheritSettingSourceRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/inherit-setting-source";

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

    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowRepositoryInheritSettingSource());

    std::shared_ptr<ShowRepositoryInheritSettingSourceResponse> localVarResult = std::make_shared<ShowRepositoryInheritSettingSourceResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryStatisticsStatusResponse> CodeArtsRepoClient::showRepositoryStatisticsStatus(ShowRepositoryStatisticsStatusRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/statistics-status";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowRepositoryStatisticsStatus());

    std::shared_ptr<ShowRepositoryStatisticsStatusResponse> localVarResult = std::make_shared<ShowRepositoryStatisticsStatusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryStatisticsSummaryResponse> CodeArtsRepoClient::showRepositoryStatisticsSummary(ShowRepositoryStatisticsSummaryRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/statistics-summary";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowRepositoryStatisticsSummary());

    std::shared_ptr<ShowRepositoryStatisticsSummaryResponse> localVarResult = std::make_shared<ShowRepositoryStatisticsSummaryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryWatermarkResponse> CodeArtsRepoClient::showRepositoryWatermark(ShowRepositoryWatermarkRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/watermark";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowRepositoryWatermark());

    std::shared_ptr<ShowRepositoryWatermarkResponse> localVarResult = std::make_shared<ShowRepositoryWatermarkResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowUserRefPermissionResponse> CodeArtsRepoClient::showUserRefPermission(ShowUserRefPermissionRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/user-ref-permission";

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

    if (request.targetRefIsSet()) {
        localVarQueryParams["target_ref"] = parameterToString(request.getTargetRef());
    }
    if (request.actionIsSet()) {
        localVarQueryParams["action"] = parameterToString(request.getAction());
    }
    if (request.changeRequestIidIsSet()) {
        localVarQueryParams["change_request_iid"] = parameterToString(request.getChangeRequestIid());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowUserRefPermission());

    std::shared_ptr<ShowUserRefPermissionResponse> localVarResult = std::make_shared<ShowUserRefPermissionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<StartHouseKeepingResponse> CodeArtsRepoClient::startHouseKeeping(StartHouseKeepingRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/housekeeping";

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

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForStartHouseKeeping());

    std::shared_ptr<StartHouseKeepingResponse> localVarResult = std::make_shared<StartHouseKeepingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<StartRemoteMirrorSynchronizationResponse> CodeArtsRepoClient::startRemoteMirrorSynchronization(StartRemoteMirrorSynchronizationRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/remote-mirror";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForStartRemoteMirrorSynchronization());

    std::shared_ptr<StartRemoteMirrorSynchronizationResponse> localVarResult = std::make_shared<StartRemoteMirrorSynchronizationResponse>();
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
std::shared_ptr<SyncDeployKeyToSubmodulesResponse> CodeArtsRepoClient::syncDeployKeyToSubmodules(SyncDeployKeyToSubmodulesRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/deploy-keys/{key_id}/submodules";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["key_id"] = parameterToString(request.getKeyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForSyncDeployKeyToSubmodules());

    std::shared_ptr<SyncDeployKeyToSubmodulesResponse> localVarResult = std::make_shared<SyncDeployKeyToSubmodulesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UnlockRepositoryResponse> CodeArtsRepoClient::unlockRepository(UnlockRepositoryRequest &request)
{
    std::string localVarPath = "/v4/{project_id}/repositories/{repository_id}/unlock";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());
    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUnlockRepository());

    std::shared_ptr<UnlockRepositoryResponse> localVarResult = std::make_shared<UnlockRepositoryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateNotificationSubscriptionResponse> CodeArtsRepoClient::updateNotificationSubscription(UpdateNotificationSubscriptionRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/notification-subscriptions/subscription";

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

    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }

    std::string localVarHttpBody;
    if (isJson) {
        // handle json input
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateNotificationSubscription());

    std::shared_ptr<UpdateNotificationSubscriptionResponse> localVarResult = std::make_shared<UpdateNotificationSubscriptionResponse>();
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
std::shared_ptr<UpdateRepositoryCommitRuleResponse> CodeArtsRepoClient::updateRepositoryCommitRule(UpdateRepositoryCommitRuleRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/commit-rules/{commit_rule_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["commit_rule_id"] = parameterToString(request.getCommitRuleId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateRepositoryCommitRule());

    std::shared_ptr<UpdateRepositoryCommitRuleResponse> localVarResult = std::make_shared<UpdateRepositoryCommitRuleResponse>();
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
std::shared_ptr<UpdateRepositoryGeneralCommitRuleResponse> CodeArtsRepoClient::updateRepositoryGeneralCommitRule(UpdateRepositoryGeneralCommitRuleRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/general-commit-rule";

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

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateRepositoryGeneralCommitRule());

    std::shared_ptr<UpdateRepositoryGeneralCommitRuleResponse> localVarResult = std::make_shared<UpdateRepositoryGeneralCommitRuleResponse>();
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
std::shared_ptr<UpdateRepositoryGeneralPolicyResponse> CodeArtsRepoClient::updateRepositoryGeneralPolicy(UpdateRepositoryGeneralPolicyRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/general-policy";

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

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateRepositoryGeneralPolicy());

    std::shared_ptr<UpdateRepositoryGeneralPolicyResponse> localVarResult = std::make_shared<UpdateRepositoryGeneralPolicyResponse>();
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
std::shared_ptr<UpdateRepositoryInheritSettingResponse> CodeArtsRepoClient::updateRepositoryInheritSetting(UpdateRepositoryInheritSettingRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/inherit-setting";

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

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateRepositoryInheritSetting());

    std::shared_ptr<UpdateRepositoryInheritSettingResponse> localVarResult = std::make_shared<UpdateRepositoryInheritSettingResponse>();
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
std::shared_ptr<UpdateRepositoryRemoteMirrorResponse> CodeArtsRepoClient::updateRepositoryRemoteMirror(UpdateRepositoryRemoteMirrorRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/remote-mirror";

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

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateRepositoryRemoteMirror());

    std::shared_ptr<UpdateRepositoryRemoteMirrorResponse> localVarResult = std::make_shared<UpdateRepositoryRemoteMirrorResponse>();
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
std::shared_ptr<UpdateRepositoryWatermarkResponse> CodeArtsRepoClient::updateRepositoryWatermark(UpdateRepositoryWatermarkRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/watermark";

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

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateRepositoryWatermark());

    std::shared_ptr<UpdateRepositoryWatermarkResponse> localVarResult = std::make_shared<UpdateRepositoryWatermarkResponse>();
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
std::shared_ptr<UpdateTrustedIpAddressResponse> CodeArtsRepoClient::updateTrustedIpAddress(UpdateTrustedIpAddressRequest &request)
{
    std::string localVarPath = "/v4/projects/{id}/trusted-ip-addresses/{ip_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["id"] = parameterToString(request.getId());
    localVarPathParams["ip_id"] = parameterToString(request.getIpId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateTrustedIpAddress());

    std::shared_ptr<UpdateTrustedIpAddressResponse> localVarResult = std::make_shared<UpdateTrustedIpAddressResponse>();
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
std::shared_ptr<CreateTagResponse> CodeArtsRepoClient::createTag(CreateTagRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/tags";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCreateTag());

    std::shared_ptr<CreateTagResponse> localVarResult = std::make_shared<CreateTagResponse>();
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
std::shared_ptr<DeleteTagResponse> CodeArtsRepoClient::deleteTag(DeleteTagRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/tag";

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

    if (request.tagNameIsSet()) {
        localVarQueryParams["tag_name"] = parameterToString(request.getTagName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDeleteTag());

    std::shared_ptr<DeleteTagResponse> localVarResult = std::make_shared<DeleteTagResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListTagsResponse> CodeArtsRepoClient::listTags(ListTagsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/tags";

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

    if (request.creatorIsSet()) {
        localVarQueryParams["creator"] = parameterToString(request.getCreator());
    }
    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.orderByIsSet()) {
        localVarQueryParams["order_by"] = parameterToString(request.getOrderBy());
    }
    if (request.viewIsSet()) {
        localVarQueryParams["view"] = parameterToString(request.getView());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListTags());

    std::shared_ptr<ListTagsResponse> localVarResult = std::make_shared<ListTagsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowTagResponse> CodeArtsRepoClient::showTag(ShowTagRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/repository/tag";

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

    if (request.tagNameIsSet()) {
        localVarQueryParams["tag_name"] = parameterToString(request.getTagName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowTag());

    std::shared_ptr<ShowTagResponse> localVarResult = std::make_shared<ShowTagResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<AddTenantTrustedIpAddressResponse> CodeArtsRepoClient::addTenantTrustedIpAddress(AddTenantTrustedIpAddressRequest &request)
{
    std::string localVarPath = "/v4/tenant/trusted-ip-addresses";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForAddTenantTrustedIpAddress());

    std::shared_ptr<AddTenantTrustedIpAddressResponse> localVarResult = std::make_shared<AddTenantTrustedIpAddressResponse>();
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
std::shared_ptr<DeleteTenantTrustedIpAddressResponse> CodeArtsRepoClient::deleteTenantTrustedIpAddress(DeleteTenantTrustedIpAddressRequest &request)
{
    std::string localVarPath = "/v4/tenant/trusted-ip-addresses/{ip_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["ip_id"] = parameterToString(request.getIpId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDeleteTenantTrustedIpAddress());

    std::shared_ptr<DeleteTenantTrustedIpAddressResponse> localVarResult = std::make_shared<DeleteTenantTrustedIpAddressResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ExportTenantRepositoriesResponse> CodeArtsRepoClient::exportTenantRepositories(ExportTenantRepositoriesRequest &request)
{
    std::string localVarPath = "/v4/tenant/repositories/export";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForExportTenantRepositories());

    std::shared_ptr<ExportTenantRepositoriesResponse> localVarResult = std::make_shared<ExportTenantRepositoriesResponse>();
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
std::shared_ptr<ListTenantRepositoriesResponse> CodeArtsRepoClient::listTenantRepositories(ListTenantRepositoriesRequest &request)
{
    std::string localVarPath = "/v4/tenant/repositories";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.repositoryNameIsSet()) {
        localVarQueryParams["repository_name"] = parameterToString(request.getRepositoryName());
    }
    if (request.memberNumberIsSet()) {
        localVarQueryParams["member_number"] = parameterToString(request.getMemberNumber());
    }
    if (request.statusIsSet()) {
        localVarQueryParams["status"] = parameterToString(request.getStatus());
    }
    if (request.ownerIsSet()) {
        localVarQueryParams["owner"] = parameterToString(request.getOwner());
    }
    if (request.createdAfterIsSet()) {
        localVarQueryParams["created_after"] = parameterToString(request.getCreatedAfter());
    }
    if (request.createdBeforeIsSet()) {
        localVarQueryParams["created_before"] = parameterToString(request.getCreatedBefore());
    }
    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }
    if (request.sortFieldIsSet()) {
        localVarQueryParams["sort_field"] = parameterToString(request.getSortField());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListTenantRepositories());

    std::shared_ptr<ListTenantRepositoriesResponse> localVarResult = std::make_shared<ListTenantRepositoriesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListTenantTrustedIpAddressesResponse> CodeArtsRepoClient::listTenantTrustedIpAddresses(ListTenantTrustedIpAddressesRequest &request)
{
    std::string localVarPath = "/v4/tenant/trusted-ip-addresses";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListTenantTrustedIpAddresses());

    std::shared_ptr<ListTenantTrustedIpAddressesResponse> localVarResult = std::make_shared<ListTenantTrustedIpAddressesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateTenantTrustedIpAddressResponse> CodeArtsRepoClient::updateTenantTrustedIpAddress(UpdateTenantTrustedIpAddressRequest &request)
{
    std::string localVarPath = "/v4/tenant/trusted-ip-addresses/{ip_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["ip_id"] = parameterToString(request.getIpId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateTenantTrustedIpAddress());

    std::shared_ptr<UpdateTenantTrustedIpAddressResponse> localVarResult = std::make_shared<UpdateTenantTrustedIpAddressResponse>();
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
std::shared_ptr<CheckDeployKeyResponse> CodeArtsRepoClient::checkDeployKey(CheckDeployKeyRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/deploy-keys/check-key";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCheckDeployKey());

    std::shared_ptr<CheckDeployKeyResponse> localVarResult = std::make_shared<CheckDeployKeyResponse>();
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
std::shared_ptr<CheckGroupDeployKeyResponse> CodeArtsRepoClient::checkGroupDeployKey(CheckGroupDeployKeyRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/deploy-keys/check-key";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForCheckGroupDeployKey());

    std::shared_ptr<CheckGroupDeployKeyResponse> localVarResult = std::make_shared<CheckGroupDeployKeyResponse>();
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
std::shared_ptr<ListBranchRelatedWorkItemsResponse> CodeArtsRepoClient::listBranchRelatedWorkItems(ListBranchRelatedWorkItemsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/branch/work-items";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListBranchRelatedWorkItems());

    std::shared_ptr<ListBranchRelatedWorkItemsResponse> localVarResult = std::make_shared<ListBranchRelatedWorkItemsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGroupDeployKeysResponse> CodeArtsRepoClient::listGroupDeployKeys(ListGroupDeployKeysRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/deploy-keys";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListGroupDeployKeys());

    std::shared_ptr<ListGroupDeployKeysResponse> localVarResult = std::make_shared<ListGroupDeployKeysResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProjectDeployKeysResponse> CodeArtsRepoClient::listProjectDeployKeys(ListProjectDeployKeysRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/deploy-keys";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListProjectDeployKeys());

    std::shared_ptr<ListProjectDeployKeysResponse> localVarResult = std::make_shared<ListProjectDeployKeysResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepositoryDeployKeysResponse> CodeArtsRepoClient::listRepositoryDeployKeys(ListRepositoryDeployKeysRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/deploy-keys";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRepositoryDeployKeys());

    std::shared_ptr<ListRepositoryDeployKeysResponse> localVarResult = std::make_shared<ListRepositoryDeployKeysResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepositoryWorkItemsResponse> CodeArtsRepoClient::listRepositoryWorkItems(ListRepositoryWorkItemsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/work-items";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.projectIdIsSet()) {
        localVarQueryParams["project_id"] = parameterToString(request.getProjectId());
    }
    if (request.isIpdIsSet()) {
        localVarQueryParams["is_ipd"] = parameterToString(request.isIsIpd());
    }
    if (request.subjectIsSet()) {
        localVarQueryParams["subject"] = parameterToString(request.getSubject());
    }
    if (request.targetBranchIsSet()) {
        localVarQueryParams["target_branch"] = parameterToString(request.getTargetBranch());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRepositoryWorkItems());

    std::shared_ptr<ListRepositoryWorkItemsResponse> localVarResult = std::make_shared<ListRepositoryWorkItemsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGroupE2eSettingResponse> CodeArtsRepoClient::showGroupE2eSetting(ShowGroupE2eSettingRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/e2e-setting";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowGroupE2eSetting());

    std::shared_ptr<ShowGroupE2eSettingResponse> localVarResult = std::make_shared<ShowGroupE2eSettingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProjectE2eSettingResponse> CodeArtsRepoClient::showProjectE2eSetting(ShowProjectE2eSettingRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/e2e-setting";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowProjectE2eSetting());

    std::shared_ptr<ShowProjectE2eSettingResponse> localVarResult = std::make_shared<ShowProjectE2eSettingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryE2eSettingResponse> CodeArtsRepoClient::showRepositoryE2eSetting(ShowRepositoryE2eSettingRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/e2e-setting";

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

    if (request.takeEffectIsSet()) {
        localVarQueryParams["take_effect"] = parameterToString(request.isTakeEffect());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowRepositoryE2eSetting());

    std::shared_ptr<ShowRepositoryE2eSettingResponse> localVarResult = std::make_shared<ShowRepositoryE2eSettingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<AddSshKeyResponse> CodeArtsRepoClient::addSshKey(AddSshKeyRequest &request)
{
    std::string localVarPath = "/v4/user/keys";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForAddSshKey());

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
std::shared_ptr<BatchValidateUserGroupPermissionsResponse> CodeArtsRepoClient::batchValidateUserGroupPermissions(BatchValidateUserGroupPermissionsRequest &request)
{
    std::string localVarPath = "/v4/user/groups/group-permissions";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForBatchValidateUserGroupPermissions());

    std::shared_ptr<BatchValidateUserGroupPermissionsResponse> localVarResult = std::make_shared<BatchValidateUserGroupPermissionsResponse>();
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
std::shared_ptr<DeleteSshKeyResponse> CodeArtsRepoClient::deleteSshKey(DeleteSshKeyRequest &request)
{
    std::string localVarPath = "/v4/user/keys/{key_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["key_id"] = parameterToString(request.getKeyId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForDeleteSshKey());

    std::shared_ptr<DeleteSshKeyResponse> localVarResult = std::make_shared<DeleteSshKeyResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListUserGpgKeysResponse> CodeArtsRepoClient::listUserGpgKeys(ListUserGpgKeysRequest &request)
{
    std::string localVarPath = "/v4/user/gpg-keys";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.queryIsSet()) {
        localVarQueryParams["query"] = parameterToString(request.getQuery());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListUserGpgKeys());

    std::shared_ptr<ListUserGpgKeysResponse> localVarResult = std::make_shared<ListUserGpgKeysResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListUserKeysResponse> CodeArtsRepoClient::listUserKeys(ListUserKeysRequest &request)
{
    std::string localVarPath = "/v4/user/keys";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.queryIsSet()) {
        localVarQueryParams["query"] = parameterToString(request.getQuery());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListUserKeys());

    std::shared_ptr<ListUserKeysResponse> localVarResult = std::make_shared<ListUserKeysResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SendUserEmailVerifyCodeResponse> CodeArtsRepoClient::sendUserEmailVerifyCode(SendUserEmailVerifyCodeRequest &request)
{
    std::string localVarPath = "/v4/user/email-verify-code";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForSendUserEmailVerifyCode());

    std::shared_ptr<SendUserEmailVerifyCodeResponse> localVarResult = std::make_shared<SendUserEmailVerifyCodeResponse>();
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
std::shared_ptr<ShowHttpsPasswordSettingResponse> CodeArtsRepoClient::showHttpsPasswordSetting(ShowHttpsPasswordSettingRequest &request)
{
    std::string localVarPath = "/v4/user/https-password-setting";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowHttpsPasswordSetting());

    std::shared_ptr<ShowHttpsPasswordSettingResponse> localVarResult = std::make_shared<ShowHttpsPasswordSettingResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowUserEmailsResponse> CodeArtsRepoClient::showUserEmails(ShowUserEmailsRequest &request)
{
    std::string localVarPath = "/v4/user/emails";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowUserEmails());

    std::shared_ptr<ShowUserEmailsResponse> localVarResult = std::make_shared<ShowUserEmailsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateHttpsPasswordSettingResponse> CodeArtsRepoClient::updateHttpsPasswordSetting(UpdateHttpsPasswordSettingRequest &request)
{
    std::string localVarPath = "/v4/user/https-password-setting";

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

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateHttpsPasswordSetting());

    std::shared_ptr<UpdateHttpsPasswordSettingResponse> localVarResult = std::make_shared<UpdateHttpsPasswordSettingResponse>();
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
std::shared_ptr<UpdateUserEmailsResponse> CodeArtsRepoClient::updateUserEmails(UpdateUserEmailsRequest &request)
{
    std::string localVarPath = "/v4/user/emails";

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

    std::unique_ptr<HttpResponse> res = callApi("PUT", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateUserEmails());

    std::shared_ptr<UpdateUserEmailsResponse> localVarResult = std::make_shared<UpdateUserEmailsResponse>();
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
std::shared_ptr<AddGroupWebhookResponse> CodeArtsRepoClient::addGroupWebhook(AddGroupWebhookRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/hooks";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForAddGroupWebhook());

    std::shared_ptr<AddGroupWebhookResponse> localVarResult = std::make_shared<AddGroupWebhookResponse>();
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
std::shared_ptr<AddProjectWebhookResponse> CodeArtsRepoClient::addProjectWebhook(AddProjectWebhookRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/hooks";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForAddProjectWebhook());

    std::shared_ptr<AddProjectWebhookResponse> localVarResult = std::make_shared<AddProjectWebhookResponse>();
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
std::shared_ptr<AddRepositoryWebhookResponse> CodeArtsRepoClient::addRepositoryWebhook(AddRepositoryWebhookRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/hooks";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForAddRepositoryWebhook());

    std::shared_ptr<AddRepositoryWebhookResponse> localVarResult = std::make_shared<AddRepositoryWebhookResponse>();
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
std::shared_ptr<ListGroupWebhookLogsResponse> CodeArtsRepoClient::listGroupWebhookLogs(ListGroupWebhookLogsRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/hooks/{hook_id}/logs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());
    localVarPathParams["hook_id"] = parameterToString(request.getHookId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.repositoryIdIsSet()) {
        localVarQueryParams["repository_id"] = parameterToString(request.getRepositoryId());
    }
    if (request.uuidIsSet()) {
        localVarQueryParams["uuid"] = parameterToString(request.getUuid());
    }
    if (request.createdAfterIsSet()) {
        localVarQueryParams["created_after"] = parameterToString(request.getCreatedAfter());
    }
    if (request.createdBeforeIsSet()) {
        localVarQueryParams["created_before"] = parameterToString(request.getCreatedBefore());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListGroupWebhookLogs());

    std::shared_ptr<ListGroupWebhookLogsResponse> localVarResult = std::make_shared<ListGroupWebhookLogsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListGroupWebhooksResponse> CodeArtsRepoClient::listGroupWebhooks(ListGroupWebhooksRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/hooks";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListGroupWebhooks());

    std::shared_ptr<ListGroupWebhooksResponse> localVarResult = std::make_shared<ListGroupWebhooksResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProjectWebhookLogsResponse> CodeArtsRepoClient::listProjectWebhookLogs(ListProjectWebhookLogsRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/hooks/{hook_id}/logs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());
    localVarPathParams["hook_id"] = parameterToString(request.getHookId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.repositoryIdIsSet()) {
        localVarQueryParams["repository_id"] = parameterToString(request.getRepositoryId());
    }
    if (request.uuidIsSet()) {
        localVarQueryParams["uuid"] = parameterToString(request.getUuid());
    }
    if (request.createdAfterIsSet()) {
        localVarQueryParams["created_after"] = parameterToString(request.getCreatedAfter());
    }
    if (request.createdBeforeIsSet()) {
        localVarQueryParams["created_before"] = parameterToString(request.getCreatedBefore());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListProjectWebhookLogs());

    std::shared_ptr<ListProjectWebhookLogsResponse> localVarResult = std::make_shared<ListProjectWebhookLogsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProjectWebhooksResponse> CodeArtsRepoClient::listProjectWebhooks(ListProjectWebhooksRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/hooks";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListProjectWebhooks());

    std::shared_ptr<ListProjectWebhooksResponse> localVarResult = std::make_shared<ListProjectWebhooksResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepositoryWebhookLogsResponse> CodeArtsRepoClient::listRepositoryWebhookLogs(ListRepositoryWebhookLogsRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/hooks/{hook_id}/logs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["hook_id"] = parameterToString(request.getHookId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.uuidIsSet()) {
        localVarQueryParams["uuid"] = parameterToString(request.getUuid());
    }
    if (request.createdAfterIsSet()) {
        localVarQueryParams["created_after"] = parameterToString(request.getCreatedAfter());
    }
    if (request.createdBeforeIsSet()) {
        localVarQueryParams["created_before"] = parameterToString(request.getCreatedBefore());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRepositoryWebhookLogs());

    std::shared_ptr<ListRepositoryWebhookLogsResponse> localVarResult = std::make_shared<ListRepositoryWebhookLogsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRepositoryWebhooksResponse> CodeArtsRepoClient::listRepositoryWebhooks(ListRepositoryWebhooksRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/hooks";

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

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForListRepositoryWebhooks());

    std::shared_ptr<ListRepositoryWebhooksResponse> localVarResult = std::make_shared<ListRepositoryWebhooksResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RemoveGroupWebhookResponse> CodeArtsRepoClient::removeGroupWebhook(RemoveGroupWebhookRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/hooks/{hook_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());
    localVarPathParams["hook_id"] = parameterToString(request.getHookId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForRemoveGroupWebhook());

    std::shared_ptr<RemoveGroupWebhookResponse> localVarResult = std::make_shared<RemoveGroupWebhookResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RemoveProjectWebhookResponse> CodeArtsRepoClient::removeProjectWebhook(RemoveProjectWebhookRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/hooks/{hook_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());
    localVarPathParams["hook_id"] = parameterToString(request.getHookId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForRemoveProjectWebhook());

    std::shared_ptr<RemoveProjectWebhookResponse> localVarResult = std::make_shared<RemoveProjectWebhookResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RemoveRepositoryWebhookResponse> CodeArtsRepoClient::removeRepositoryWebhook(RemoveRepositoryWebhookRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/hooks/{hook_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["hook_id"] = parameterToString(request.getHookId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForRemoveRepositoryWebhook());

    std::shared_ptr<RemoveRepositoryWebhookResponse> localVarResult = std::make_shared<RemoveRepositoryWebhookResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGroupWebhookResponse> CodeArtsRepoClient::showGroupWebhook(ShowGroupWebhookRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/hooks/{hook_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());
    localVarPathParams["hook_id"] = parameterToString(request.getHookId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowGroupWebhook());

    std::shared_ptr<ShowGroupWebhookResponse> localVarResult = std::make_shared<ShowGroupWebhookResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowGroupWebhookLogResponse> CodeArtsRepoClient::showGroupWebhookLog(ShowGroupWebhookLogRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/hooks/{hook_id}/logs/{log_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());
    localVarPathParams["hook_id"] = parameterToString(request.getHookId());
    localVarPathParams["log_id"] = parameterToString(request.getLogId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowGroupWebhookLog());

    std::shared_ptr<ShowGroupWebhookLogResponse> localVarResult = std::make_shared<ShowGroupWebhookLogResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProjectWebhookResponse> CodeArtsRepoClient::showProjectWebhook(ShowProjectWebhookRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/hooks/{hook_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());
    localVarPathParams["hook_id"] = parameterToString(request.getHookId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowProjectWebhook());

    std::shared_ptr<ShowProjectWebhookResponse> localVarResult = std::make_shared<ShowProjectWebhookResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProjectWebhookLogResponse> CodeArtsRepoClient::showProjectWebhookLog(ShowProjectWebhookLogRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/hooks/{hook_id}/logs/{log_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());
    localVarPathParams["hook_id"] = parameterToString(request.getHookId());
    localVarPathParams["log_id"] = parameterToString(request.getLogId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowProjectWebhookLog());

    std::shared_ptr<ShowProjectWebhookLogResponse> localVarResult = std::make_shared<ShowProjectWebhookLogResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryWebhookResponse> CodeArtsRepoClient::showRepositoryWebhook(ShowRepositoryWebhookRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/hooks/{hook_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["hook_id"] = parameterToString(request.getHookId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowRepositoryWebhook());

    std::shared_ptr<ShowRepositoryWebhookResponse> localVarResult = std::make_shared<ShowRepositoryWebhookResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryWebhookLogResponse> CodeArtsRepoClient::showRepositoryWebhookLog(ShowRepositoryWebhookLogRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/hooks/{hook_id}/logs/{log_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["hook_id"] = parameterToString(request.getHookId());
    localVarPathParams["log_id"] = parameterToString(request.getLogId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForShowRepositoryWebhookLog());

    std::shared_ptr<ShowRepositoryWebhookLogResponse> localVarResult = std::make_shared<ShowRepositoryWebhookLogResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateGroupWebhookResponse> CodeArtsRepoClient::updateGroupWebhook(UpdateGroupWebhookRequest &request)
{
    std::string localVarPath = "/v4/groups/{group_id}/hooks/{hook_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["group_id"] = parameterToString(request.getGroupId());
    localVarPathParams["hook_id"] = parameterToString(request.getHookId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateGroupWebhook());

    std::shared_ptr<UpdateGroupWebhookResponse> localVarResult = std::make_shared<UpdateGroupWebhookResponse>();
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
std::shared_ptr<UpdateProjectWebhookResponse> CodeArtsRepoClient::updateProjectWebhook(UpdateProjectWebhookRequest &request)
{
    std::string localVarPath = "/v4/projects/{project_id}/hooks/{hook_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["project_id"] = parameterToString(request.getProjectId());
    localVarPathParams["hook_id"] = parameterToString(request.getHookId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateProjectWebhook());

    std::shared_ptr<UpdateProjectWebhookResponse> localVarResult = std::make_shared<UpdateProjectWebhookResponse>();
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
std::shared_ptr<UpdateRepositoryWebhookResponse> CodeArtsRepoClient::updateRepositoryWebhook(UpdateRepositoryWebhookRequest &request)
{
    std::string localVarPath = "/v4/repositories/{repository_id}/hooks/{hook_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["repository_id"] = parameterToString(request.getRepositoryId());
    localVarPathParams["hook_id"] = parameterToString(request.getHookId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsRepoMeta::genRequestDefForUpdateRepositoryWebhook());

    std::shared_ptr<UpdateRepositoryWebhookResponse> localVarResult = std::make_shared<UpdateRepositoryWebhookResponse>();
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
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
std::string CodeArtsRepoClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string CodeArtsRepoClient::parameterToString(std::string value)
{
    return value;
}

std::string CodeArtsRepoClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string CodeArtsRepoClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string CodeArtsRepoClient::parameterToString(float value)
{
    return toString(value);
}

std::string CodeArtsRepoClient::parameterToString(double value)
{
    return toString(value);
}

std::string CodeArtsRepoClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string CodeArtsRepoClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

