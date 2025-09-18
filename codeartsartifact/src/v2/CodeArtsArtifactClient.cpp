#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactClient.h>
#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactMeta.h>

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
namespace Codeartsartifact {
namespace V2 {

using namespace HuaweiCloud::Sdk::Codeartsartifact::V2::Model;

CodeArtsArtifactClient::CodeArtsArtifactClient()
{
}

CodeArtsArtifactClient::~CodeArtsArtifactClient()
{
}

ClientBuilder<CodeArtsArtifactClient> CodeArtsArtifactClient::newBuilder()
{
    ClientBuilder<CodeArtsArtifactClient> client = ClientBuilder<CodeArtsArtifactClient>("");
    return client;
}
std::shared_ptr<BatchDeleteTrashesResponse> CodeArtsArtifactClient::batchDeleteTrashes(BatchDeleteTrashesRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/trashes";

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

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForBatchDeleteTrashes());

    std::shared_ptr<BatchDeleteTrashesResponse> localVarResult = std::make_shared<BatchDeleteTrashesResponse>();
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
std::shared_ptr<BatchRestoreRepoResponse> CodeArtsArtifactClient::batchRestoreRepo(BatchRestoreRepoRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/trashes";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForBatchRestoreRepo());

    std::shared_ptr<BatchRestoreRepoResponse> localVarResult = std::make_shared<BatchRestoreRepoResponse>();
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
std::shared_ptr<CreateArtifactoryResponse> CodeArtsArtifactClient::createArtifactory(CreateArtifactoryRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/artifact/";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForCreateArtifactory());

    std::shared_ptr<CreateArtifactoryResponse> localVarResult = std::make_shared<CreateArtifactoryResponse>();
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
std::shared_ptr<CreateAttentionResponse> CodeArtsArtifactClient::createAttention(CreateAttentionRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/attention";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForCreateAttention());

    std::shared_ptr<CreateAttentionResponse> localVarResult = std::make_shared<CreateAttentionResponse>();
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
std::shared_ptr<CreateDockerRepositoriesResponse> CodeArtsArtifactClient::createDockerRepositories(CreateDockerRepositoriesRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/repositories";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForCreateDockerRepositories());

    std::shared_ptr<CreateDockerRepositoriesResponse> localVarResult = std::make_shared<CreateDockerRepositoriesResponse>();
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
std::shared_ptr<CreateMavenRepoResponse> CodeArtsArtifactClient::createMavenRepo(CreateMavenRepoRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/maven/repositories";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForCreateMavenRepo());

    std::shared_ptr<CreateMavenRepoResponse> localVarResult = std::make_shared<CreateMavenRepoResponse>();
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
std::shared_ptr<CreateProjectRelatedRepositoryResponse> CodeArtsArtifactClient::createProjectRelatedRepository(CreateProjectRelatedRepositoryRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/maven/project/repository";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForCreateProjectRelatedRepository());

    std::shared_ptr<CreateProjectRelatedRepositoryResponse> localVarResult = std::make_shared<CreateProjectRelatedRepositoryResponse>();
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
std::shared_ptr<DeleteArtifactFileResponse> CodeArtsArtifactClient::deleteArtifactFile(DeleteArtifactFileRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/file";

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

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForDeleteArtifactFile());

    std::shared_ptr<DeleteArtifactFileResponse> localVarResult = std::make_shared<DeleteArtifactFileResponse>();
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
std::shared_ptr<DeleteRepositoryResponse> CodeArtsArtifactClient::deleteRepository(DeleteRepositoryRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/repositories";

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

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForDeleteRepository());

    std::shared_ptr<DeleteRepositoryResponse> localVarResult = std::make_shared<DeleteRepositoryResponse>();
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
std::shared_ptr<ListAllRepositoriesResponse> CodeArtsArtifactClient::listAllRepositories(ListAllRepositoriesRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/{tenant_id}/{project_id}/repositories";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["tenant_id"] = parameterToString(request.getTenantId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.groupIdIsSet()) {
        localVarQueryParams["group_id"] = parameterToString(request.getGroupId());
    }
    if (request.pageNoIsSet()) {
        localVarQueryParams["page_no"] = parameterToString(request.getPageNo());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.sortIsSet()) {
        localVarQueryParams["sort"] = parameterToString(request.getSort());
    }
    if (request.qnameIsSet()) {
        localVarQueryParams["qname"] = parameterToString(request.getQname());
    }
    if (request.typeIsSet()) {
        localVarQueryParams["type"] = parameterToString(request.getType());
    }
    if (request.formatIsSet()) {
        localVarQueryParams["format"] = parameterToString(request.getFormat());
    }
    if (request.formatListIsSet()) {
        localVarQueryParams["format_list"] = parameterToString(request.getFormatList());
    }
    if (request.isRecycleBinIsSet()) {
        localVarQueryParams["is_recycle_bin"] = parameterToString(request.isIsRecycleBin());
    }
    if (request.isNeedPagingIsSet()) {
        localVarQueryParams["is_need_paging"] = parameterToString(request.isIsNeedPaging());
    }
    if (request.inProjectIsSet()) {
        localVarQueryParams["in_project"] = parameterToString(request.isInProject());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForListAllRepositories());

    std::shared_ptr<ListAllRepositoriesResponse> localVarResult = std::make_shared<ListAllRepositoriesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListArtifactoryComponentResponse> CodeArtsArtifactClient::listArtifactoryComponent(ListArtifactoryComponentRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/{tenant_id}/{project_id}/{repo_name}/file-detail";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["tenant_id"] = parameterToString(request.getTenantId());
    localVarPathParams["repo_name"] = parameterToString(request.getRepoName());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pathIsSet()) {
        localVarQueryParams["path"] = parameterToString(request.getPath());
    }
    if (request.formatIsSet()) {
        localVarQueryParams["format"] = parameterToString(request.getFormat());
    }
    if (request.instanceIdIsSet()) {
        localVarQueryParams["instance_id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForListArtifactoryComponent());

    std::shared_ptr<ListArtifactoryComponentResponse> localVarResult = std::make_shared<ListArtifactoryComponentResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListArtifactoryStorageStatisticResponse> CodeArtsArtifactClient::listArtifactoryStorageStatistic(ListArtifactoryStorageStatisticRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/{tenant_id}/{project_id}/storageinfo/statistic";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["tenant_id"] = parameterToString(request.getTenantId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.repoIsSet()) {
        localVarQueryParams["repo"] = parameterToString(request.getRepo());
    }
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.instanceIdIsSet()) {
        localVarQueryParams["instance_id"] = parameterToString(request.getInstanceId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForListArtifactoryStorageStatistic());

    std::shared_ptr<ListArtifactoryStorageStatisticResponse> localVarResult = std::make_shared<ListArtifactoryStorageStatisticResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListAttentionsResponse> CodeArtsArtifactClient::listAttentions(ListAttentionsRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/attention/artifacts";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


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
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForListAttentions());

    std::shared_ptr<ListAttentionsResponse> localVarResult = std::make_shared<ListAttentionsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ModifyRepositoryResponse> CodeArtsArtifactClient::modifyRepository(ModifyRepositoryRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/repositories/tab/{tab_id}";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["tab_id"] = parameterToString(request.getTabId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForModifyRepository());

    std::shared_ptr<ModifyRepositoryResponse> localVarResult = std::make_shared<ModifyRepositoryResponse>();
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
std::shared_ptr<ResetUserPasswordResponse> CodeArtsArtifactClient::resetUserPassword(ResetUserPasswordRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/maven/users/me";

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

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForResetUserPassword());

    std::shared_ptr<ResetUserPasswordResponse> localVarResult = std::make_shared<ResetUserPasswordResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<SearchArtifactsResponse> CodeArtsArtifactClient::searchArtifacts(SearchArtifactsRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/tree/repos/artifacts";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForSearchArtifacts());

    std::shared_ptr<SearchArtifactsResponse> localVarResult = std::make_shared<SearchArtifactsResponse>();
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
std::shared_ptr<SearchByChecksumResponse> CodeArtsArtifactClient::searchByChecksum(SearchByChecksumRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/search/checksum";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.checksumIsSet()) {
        localVarQueryParams["checksum"] = parameterToString(request.getChecksum());
    }
    if (request.pageNoIsSet()) {
        localVarQueryParams["page_no"] = parameterToString(request.getPageNo());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.formatIsSet()) {
        localVarQueryParams["format"] = parameterToString(request.getFormat());
    }
    if (request.inProjectIsSet()) {
        localVarQueryParams["in_project"] = parameterToString(request.getInProject());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForSearchByChecksum());

    std::shared_ptr<SearchByChecksumResponse> localVarResult = std::make_shared<SearchByChecksumResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowAuditResponse> CodeArtsArtifactClient::showAudit(ShowAuditRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/{tenant_id}/{project_id}/{module}/{repo}/audit";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["tenant_id"] = parameterToString(request.getTenantId());
    localVarPathParams["module"] = parameterToString(request.getModule());
    localVarPathParams["repo"] = parameterToString(request.getRepo());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.userIdIsSet()) {
        localVarQueryParams["user_id"] = parameterToString(request.getUserId());
    }
    if (request.instanceIdIsSet()) {
        localVarQueryParams["instance_id"] = parameterToString(request.getInstanceId());
    }
    if (request.pageNumIsSet()) {
        localVarQueryParams["page_num"] = parameterToString(request.getPageNum());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForShowAudit());

    std::shared_ptr<ShowAuditResponse> localVarResult = std::make_shared<ShowAuditResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowFileTreeResponse> CodeArtsArtifactClient::showFileTree(ShowFileTreeRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/{tenant_id}/{project_id}/{repo_name}/file-tree";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["tenant_id"] = parameterToString(request.getTenantId());
    localVarPathParams["repo_name"] = parameterToString(request.getRepoName());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pathIsSet()) {
        localVarQueryParams["path"] = parameterToString(request.getPath());
    }
    if (request.instanceIdIsSet()) {
        localVarQueryParams["instance_id"] = parameterToString(request.getInstanceId());
    }
    if (request.isRecycleBinIsSet()) {
        localVarQueryParams["is_recycle_bin"] = parameterToString(request.isIsRecycleBin());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForShowFileTree());

    std::shared_ptr<ShowFileTreeResponse> localVarResult = std::make_shared<ShowFileTreeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowMavenInfoResponse> CodeArtsArtifactClient::showMavenInfo(ShowMavenInfoRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/maven/info";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.policyIsSet()) {
        localVarQueryParams["policy"] = parameterToString(request.getPolicy());
    }
    if (request.accessIsSet()) {
        localVarQueryParams["access"] = parameterToString(request.getAccess());
    }
    if (request.defaultIsSet()) {
        localVarQueryParams["default"] = parameterToString(request.getDefault());
    }
    if (request.idsIsSet()) {
        localVarQueryParams["ids"] = parameterToString(request.getIds());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForShowMavenInfo());

    std::shared_ptr<ShowMavenInfoResponse> localVarResult = std::make_shared<ShowMavenInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProjectListResponse> CodeArtsArtifactClient::showProjectList(ShowProjectListRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/maven/repository/list";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForShowProjectList());

    std::shared_ptr<ShowProjectListResponse> localVarResult = std::make_shared<ShowProjectListResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProjectReleaseFilesResponse> CodeArtsArtifactClient::showProjectReleaseFiles(ShowProjectReleaseFilesRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/release/files";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fileNameIsSet()) {
        localVarQueryParams["file_name"] = parameterToString(request.getFileName());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForShowProjectReleaseFiles());

    std::shared_ptr<ShowProjectReleaseFilesResponse> localVarResult = std::make_shared<ShowProjectReleaseFilesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowReleaseProjectFilesResponse> CodeArtsArtifactClient::showReleaseProjectFiles(ShowReleaseProjectFilesRequest &request)
{
    std::string localVarPath = "/devreposerver/v2/release/{project_id}/files";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.fileNameIsSet()) {
        localVarQueryParams["file_name"] = parameterToString(request.getFileName());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForShowReleaseProjectFiles());

    std::shared_ptr<ShowReleaseProjectFilesResponse> localVarResult = std::make_shared<ShowReleaseProjectFilesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryResponse> CodeArtsArtifactClient::showRepository(ShowRepositoryRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/{tenant_id}/{project_id}/{repo_id}/repositories";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["tenant_id"] = parameterToString(request.getTenantId());
    localVarPathParams["repo_id"] = parameterToString(request.getRepoId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.regionIsSet()) {
        localVarQueryParams["region"] = parameterToString(request.getRegion());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForShowRepository());

    std::shared_ptr<ShowRepositoryResponse> localVarResult = std::make_shared<ShowRepositoryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRepositoryInfoResponse> CodeArtsArtifactClient::showRepositoryInfo(ShowRepositoryInfoRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/repositories/{repo_id}";

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

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForShowRepositoryInfo());

    std::shared_ptr<ShowRepositoryInfoResponse> localVarResult = std::make_shared<ShowRepositoryInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowStorageResponse> CodeArtsArtifactClient::showStorage(ShowStorageRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/storage";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.formatListIsSet()) {
        localVarQueryParams["format_list"] = parameterToString(request.getFormatList());
    }
    if (request.inProjectIsSet()) {
        localVarQueryParams["in_project"] = parameterToString(request.getInProject());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForShowStorage());

    std::shared_ptr<ShowStorageResponse> localVarResult = std::make_shared<ShowStorageResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowUserPrivilegesResponse> CodeArtsArtifactClient::showUserPrivileges(ShowUserPrivilegesRequest &request)
{
    std::string localVarPath = "/cloudartifact/v3/user/{project_id}/privileges";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForShowUserPrivileges());

    std::shared_ptr<ShowUserPrivilegesResponse> localVarResult = std::make_shared<ShowUserPrivilegesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateArtifactoryResponse> CodeArtsArtifactClient::updateArtifactory(UpdateArtifactoryRequest &request)
{
    std::string localVarPath = "/cloudartifact/v5/artifact/";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsArtifactMeta::genRequestDefForUpdateArtifactory());

    std::shared_ptr<UpdateArtifactoryResponse> localVarResult = std::make_shared<UpdateArtifactoryResponse>();
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
std::string CodeArtsArtifactClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string CodeArtsArtifactClient::parameterToString(std::string value)
{
    return value;
}

std::string CodeArtsArtifactClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string CodeArtsArtifactClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string CodeArtsArtifactClient::parameterToString(float value)
{
    return toString(value);
}

std::string CodeArtsArtifactClient::parameterToString(double value)
{
    return toString(value);
}

std::string CodeArtsArtifactClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string CodeArtsArtifactClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

