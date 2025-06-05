#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildClient.h>
#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildMeta.h>

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
namespace Codeartsbuild {
namespace V3 {

using namespace HuaweiCloud::Sdk::Codeartsbuild::V3::Model;

CodeArtsBuildClient::CodeArtsBuildClient()
{
}

CodeArtsBuildClient::~CodeArtsBuildClient()
{
}

ClientBuilder<CodeArtsBuildClient> CodeArtsBuildClient::newBuilder()
{
    return ClientBuilder<CodeArtsBuildClient>("");
}
std::shared_ptr<CheckJobNameIsExistsResponse> CodeArtsBuildClient::checkJobNameIsExists(CheckJobNameIsExistsRequest &request)
{
    std::string localVarPath = "/v1/job/check/exist";

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
    if (request.jobNameIsSet()) {
        localVarQueryParams["job_name"] = parameterToString(request.getJobName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForCheckJobNameIsExists());

    std::shared_ptr<CheckJobNameIsExistsResponse> localVarResult = std::make_shared<CheckJobNameIsExistsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<CreateBuildJobResponse> CodeArtsBuildClient::createBuildJob(CreateBuildJobRequest &request)
{
    std::string localVarPath = "/v3/jobs/create";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForCreateBuildJob());

    std::shared_ptr<CreateBuildJobResponse> localVarResult = std::make_shared<CreateBuildJobResponse>();
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
std::shared_ptr<CreateTemplatesResponse> CodeArtsBuildClient::createTemplates(CreateTemplatesRequest &request)
{
    std::string localVarPath = "/v3/templates/create";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForCreateTemplates());

    std::shared_ptr<CreateTemplatesResponse> localVarResult = std::make_shared<CreateTemplatesResponse>();
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
std::shared_ptr<DeleteBuildJobResponse> CodeArtsBuildClient::deleteBuildJob(DeleteBuildJobRequest &request)
{
    std::string localVarPath = "/v3/jobs/{job_id}/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForDeleteBuildJob());

    std::shared_ptr<DeleteBuildJobResponse> localVarResult = std::make_shared<DeleteBuildJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DeleteTemplatesResponse> CodeArtsBuildClient::deleteTemplates(DeleteTemplatesRequest &request)
{
    std::string localVarPath = "/v3/templates/{uuid}/delete";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["uuid"] = parameterToString(request.getUuid());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForDeleteTemplates());

    std::shared_ptr<DeleteTemplatesResponse> localVarResult = std::make_shared<DeleteTemplatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DisableBuildJobResponse> CodeArtsBuildClient::disableBuildJob(DisableBuildJobRequest &request)
{
    std::string localVarPath = "/v3/jobs/{job_id}/disable";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForDisableBuildJob());

    std::shared_ptr<DisableBuildJobResponse> localVarResult = std::make_shared<DisableBuildJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DisableNoticeResponse> CodeArtsBuildClient::disableNotice(DisableNoticeRequest &request)
{
    std::string localVarPath = "/v3/jobs/notice/{job_id}/disable";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.noticeTypeIsSet()) {
        localVarQueryParams["notice_type"] = parameterToString(request.getNoticeType());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForDisableNotice());

    std::shared_ptr<DisableNoticeResponse> localVarResult = std::make_shared<DisableNoticeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DownloadBuildLogResponse> CodeArtsBuildClient::downloadBuildLog(DownloadBuildLogRequest &request)
{
    std::string localVarPath = "/v4/{record_id}/download-log";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["record_id"] = parameterToString(request.getRecordId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.logLevelIsSet()) {
        localVarQueryParams["log_level"] = parameterToString(request.getLogLevel());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForDownloadBuildLog());

    std::shared_ptr<DownloadBuildLogResponse> localVarResult = std::make_shared<DownloadBuildLogResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DownloadKeystoreResponse> CodeArtsBuildClient::downloadKeystore(DownloadKeystoreRequest &request)
{
    std::string localVarPath = "/v3/keystore";

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
    if (request.domainIdIsSet()) {
        localVarQueryParams["domain_id"] = parameterToString(request.getDomainId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForDownloadKeystore());

    std::shared_ptr<DownloadKeystoreResponse> localVarResult = std::make_shared<DownloadKeystoreResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DownloadKeystoreByNameResponse> CodeArtsBuildClient::downloadKeystoreByName(DownloadKeystoreByNameRequest &request)
{
    std::string localVarPath = "/v2/keystore/download";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.domainIdIsSet()) {
        localVarQueryParams["domain_id"] = parameterToString(request.getDomainId());
    }
    if (request.idIsSet()) {
        localVarQueryParams["id"] = parameterToString(request.getId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForDownloadKeystoreByName());

    std::shared_ptr<DownloadKeystoreByNameResponse> localVarResult = std::make_shared<DownloadKeystoreByNameResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DownloadRealTimeLogResponse> CodeArtsBuildClient::downloadRealTimeLog(DownloadRealTimeLogRequest &request)
{
    std::string localVarPath = "/v3/jobs/{job_id}/{build_no}/real-time-log";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());
    localVarPathParams["build_no"] = parameterToString(request.getBuildNo());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.offsetIsSet()) {
        localVarQueryParams["offset"] = parameterToString(request.getOffset());
    }
    if (request.lengthIsSet()) {
        localVarQueryParams["length"] = parameterToString(request.getLength());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForDownloadRealTimeLog());

    std::shared_ptr<DownloadRealTimeLogResponse> localVarResult = std::make_shared<DownloadRealTimeLogResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<DownloadTaskLogResponse> CodeArtsBuildClient::downloadTaskLog(DownloadTaskLogRequest &request)
{
    std::string localVarPath = "/v4/{record_id}/task-log";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["record_id"] = parameterToString(request.getRecordId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.taskNameIsSet()) {
        localVarQueryParams["task_name"] = parameterToString(request.getTaskName());
    }
    if (request.logLevelIsSet()) {
        localVarQueryParams["log_level"] = parameterToString(request.getLogLevel());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForDownloadTaskLog());

    std::shared_ptr<DownloadTaskLogResponse> localVarResult = std::make_shared<DownloadTaskLogResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<EnableBuildJobResponse> CodeArtsBuildClient::enableBuildJob(EnableBuildJobRequest &request)
{
    std::string localVarPath = "/v3/jobs/{job_id}/recover";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForEnableBuildJob());

    std::shared_ptr<EnableBuildJobResponse> localVarResult = std::make_shared<EnableBuildJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListBuildInfoRecordResponse> CodeArtsBuildClient::listBuildInfoRecord(ListBuildInfoRecordRequest &request)
{
    std::string localVarPath = "/v3/jobs/{job_id}/build-info-records";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.pageIndexIsSet()) {
        localVarQueryParams["page_index"] = parameterToString(request.getPageIndex());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForListBuildInfoRecord());

    std::shared_ptr<ListBuildInfoRecordResponse> localVarResult = std::make_shared<ListBuildInfoRecordResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListBuildInfoRecordByJobIdResponse> CodeArtsBuildClient::listBuildInfoRecordByJobId(ListBuildInfoRecordByJobIdRequest &request)
{
    std::string localVarPath = "/v1/record/{job_id}/list";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }
    if (request.pageIndexIsSet()) {
        localVarQueryParams["page_index"] = parameterToString(request.getPageIndex());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForListBuildInfoRecordByJobId());

    std::shared_ptr<ListBuildInfoRecordByJobIdResponse> localVarResult = std::make_shared<ListBuildInfoRecordByJobIdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListJobConfigResponse> CodeArtsBuildClient::listJobConfig(ListJobConfigRequest &request)
{
    std::string localVarPath = "/v3/jobs/{job_id}/query";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.getAllParamsIsSet()) {
        localVarQueryParams["get_all_params"] = parameterToString(request.getGetAllParams());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForListJobConfig());

    std::shared_ptr<ListJobConfigResponse> localVarResult = std::make_shared<ListJobConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListKeystoreResponse> CodeArtsBuildClient::listKeystore(ListKeystoreRequest &request)
{
    std::string localVarPath = "/v2/keystore/name";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForListKeystore());

    std::shared_ptr<ListKeystoreResponse> localVarResult = std::make_shared<ListKeystoreResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListNoticeResponse> CodeArtsBuildClient::listNotice(ListNoticeRequest &request)
{
    std::string localVarPath = "/v3/jobs/notice/{job_id}/query";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForListNotice());

    std::shared_ptr<ListNoticeResponse> localVarResult = std::make_shared<ListNoticeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListOfficialTemplateResponse> CodeArtsBuildClient::listOfficialTemplate(ListOfficialTemplateRequest &request)
{
    std::string localVarPath = "/v1/template/officialtemplates";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.pageIsSet()) {
        localVarQueryParams["page"] = parameterToString(request.getPage());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForListOfficialTemplate());

    std::shared_ptr<ListOfficialTemplateResponse> localVarResult = std::make_shared<ListOfficialTemplateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListProjectJobsResponse> CodeArtsBuildClient::listProjectJobs(ListProjectJobsRequest &request)
{
    std::string localVarPath = "/v1/job/{project_id}/list";

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

    if (request.pageIndexIsSet()) {
        localVarQueryParams["page_index"] = parameterToString(request.getPageIndex());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }
    if (request.sortFieldIsSet()) {
        localVarQueryParams["sort_field"] = parameterToString(request.getSortField());
    }
    if (request.sortOrderIsSet()) {
        localVarQueryParams["sort_order"] = parameterToString(request.getSortOrder());
    }
    if (request.creatorIdIsSet()) {
        localVarQueryParams["creator_id"] = parameterToString(request.getCreatorId());
    }
    if (request.buildStatusIsSet()) {
        localVarQueryParams["build_status"] = parameterToString(request.getBuildStatus());
    }
    if (request.byGroupIsSet()) {
        localVarQueryParams["by_group"] = parameterToString(request.isByGroup());
    }
    if (request.groupPathIdIsSet()) {
        localVarQueryParams["group_path_id"] = parameterToString(request.getGroupPathId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForListProjectJobs());

    std::shared_ptr<ListProjectJobsResponse> localVarResult = std::make_shared<ListProjectJobsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRecordsResponse> CodeArtsBuildClient::listRecords(ListRecordsRequest &request)
{
    std::string localVarPath = "/v1/record/{build_project_id}/records";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["build_project_id"] = parameterToString(request.getBuildProjectId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageIsSet()) {
        localVarQueryParams["page"] = parameterToString(request.getPage());
    }
    if (request.limitIsSet()) {
        localVarQueryParams["limit"] = parameterToString(request.getLimit());
    }
    if (request.triggersIsSet()) {
        localVarQueryParams["triggers"] = parameterToString(request.getTriggers());
    }
    if (request.branchesIsSet()) {
        localVarQueryParams["branches"] = parameterToString(request.getBranches());
    }
    if (request.tagsIsSet()) {
        localVarQueryParams["tags"] = parameterToString(request.getTags());
    }
    if (request.fromDateIsSet()) {
        localVarQueryParams["from_date"] = parameterToString(request.getFromDate());
    }
    if (request.toDateIsSet()) {
        localVarQueryParams["to_date"] = parameterToString(request.getToDate());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForListRecords());

    std::shared_ptr<ListRecordsResponse> localVarResult = std::make_shared<ListRecordsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRecyclingJobResponse> CodeArtsBuildClient::listRecyclingJob(ListRecyclingJobRequest &request)
{
    std::string localVarPath = "/v1/job/recycling-jobs";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.pageNoIsSet()) {
        localVarQueryParams["page_no"] = parameterToString(request.getPageNo());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForListRecyclingJob());

    std::shared_ptr<ListRecyclingJobResponse> localVarResult = std::make_shared<ListRecyclingJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListRelatedProjectInfoResponse> CodeArtsBuildClient::listRelatedProjectInfo(ListRelatedProjectInfoRequest &request)
{
    std::string localVarPath = "/v1/domain/project/related-page";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.pageNoIsSet()) {
        localVarQueryParams["page_no"] = parameterToString(request.getPageNo());
    }
    if (request.searchIsSet()) {
        localVarQueryParams["search"] = parameterToString(request.getSearch());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForListRelatedProjectInfo());

    std::shared_ptr<ListRelatedProjectInfoResponse> localVarResult = std::make_shared<ListRelatedProjectInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListTemplatesResponse> CodeArtsBuildClient::listTemplates(ListTemplatesRequest &request)
{
    std::string localVarPath = "/v3/templates/query";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.nameIsSet()) {
        localVarQueryParams["name"] = parameterToString(request.getName());
    }
    if (request.pageIsSet()) {
        localVarQueryParams["page"] = parameterToString(request.getPage());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForListTemplates());

    std::shared_ptr<ListTemplatesResponse> localVarResult = std::make_shared<ListTemplatesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RunJobResponse> CodeArtsBuildClient::runJob(RunJobRequest &request)
{
    std::string localVarPath = "/v3/jobs/build";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForRunJob());

    std::shared_ptr<RunJobResponse> localVarResult = std::make_shared<RunJobResponse>();
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
std::shared_ptr<ShowBuildInfoRecordResponse> CodeArtsBuildClient::showBuildInfoRecord(ShowBuildInfoRecordRequest &request)
{
    std::string localVarPath = "/v1/record/{job_id}/{build_no}/build-info-record";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());
    localVarPathParams["build_no"] = parameterToString(request.getBuildNo());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowBuildInfoRecord());

    std::shared_ptr<ShowBuildInfoRecordResponse> localVarResult = std::make_shared<ShowBuildInfoRecordResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowBuildParamsListResponse> CodeArtsBuildClient::showBuildParamsList(ShowBuildParamsListRequest &request)
{
    std::string localVarPath = "/v1/job/build-params";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowBuildParamsList());

    std::shared_ptr<ShowBuildParamsListResponse> localVarResult = std::make_shared<ShowBuildParamsListResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowBuildRecordResponse> CodeArtsBuildClient::showBuildRecord(ShowBuildRecordRequest &request)
{
    std::string localVarPath = "/v1/record/{record_id}/info";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["record_id"] = parameterToString(request.getRecordId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowBuildRecord());

    std::shared_ptr<ShowBuildRecordResponse> localVarResult = std::make_shared<ShowBuildRecordResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowBuildRecordBuildScriptResponse> CodeArtsBuildClient::showBuildRecordBuildScript(ShowBuildRecordBuildScriptRequest &request)
{
    std::string localVarPath = "/v1/record/{record_id}/build-script";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["record_id"] = parameterToString(request.getRecordId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowBuildRecordBuildScript());

    std::shared_ptr<ShowBuildRecordBuildScriptResponse> localVarResult = std::make_shared<ShowBuildRecordBuildScriptResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowBuildRecordFullStagesResponse> CodeArtsBuildClient::showBuildRecordFullStages(ShowBuildRecordFullStagesRequest &request)
{
    std::string localVarPath = "/v1/record/{record_id}/full-stages";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["record_id"] = parameterToString(request.getRecordId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.cascadeIsSet()) {
        localVarQueryParams["cascade"] = parameterToString(request.isCascade());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowBuildRecordFullStages());

    std::shared_ptr<ShowBuildRecordFullStagesResponse> localVarResult = std::make_shared<ShowBuildRecordFullStagesResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDefaultBuildParametersResponse> CodeArtsBuildClient::showDefaultBuildParameters(ShowDefaultBuildParametersRequest &request)
{
    std::string localVarPath = "/v1/job/default-parameters";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowDefaultBuildParameters());

    std::shared_ptr<ShowDefaultBuildParametersResponse> localVarResult = std::make_shared<ShowDefaultBuildParametersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowDockerfileTemplateResponse> CodeArtsBuildClient::showDockerfileTemplate(ShowDockerfileTemplateRequest &request)
{
    std::string localVarPath = "/v1/image/dockerfile-template";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.imageIdIsSet()) {
        localVarQueryParams["image_id"] = parameterToString(request.getImageId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowDockerfileTemplate());

    std::shared_ptr<ShowDockerfileTemplateResponse> localVarResult = std::make_shared<ShowDockerfileTemplateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowHistoryDetailsResponse> CodeArtsBuildClient::showHistoryDetails(ShowHistoryDetailsRequest &request)
{
    std::string localVarPath = "/v3/jobs/{job_id}/{build_number}/history-details";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());
    localVarPathParams["build_number"] = parameterToString(request.getBuildNumber());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowHistoryDetails());

    std::shared_ptr<ShowHistoryDetailsResponse> localVarResult = std::make_shared<ShowHistoryDetailsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowImageTemplateListResponse> CodeArtsBuildClient::showImageTemplateList(ShowImageTemplateListRequest &request)
{
    std::string localVarPath = "/v1/image/templates";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowImageTemplateList());

    std::shared_ptr<ShowImageTemplateListResponse> localVarResult = std::make_shared<ShowImageTemplateListResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowJobBuildSuccessRatioResponse> CodeArtsBuildClient::showJobBuildSuccessRatio(ShowJobBuildSuccessRatioRequest &request)
{
    std::string localVarPath = "/v1/report/ratio";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.jobIdIsSet()) {
        localVarQueryParams["job_id"] = parameterToString(request.getJobId());
    }
    if (request.repositoryNameIsSet()) {
        localVarQueryParams["repository_name"] = parameterToString(request.getRepositoryName());
    }
    if (request.branchIsSet()) {
        localVarQueryParams["branch"] = parameterToString(request.getBranch());
    }
    if (request.intervalIsSet()) {
        localVarQueryParams["interval"] = parameterToString(request.getInterval());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowJobBuildSuccessRatio());

    std::shared_ptr<ShowJobBuildSuccessRatioResponse> localVarResult = std::make_shared<ShowJobBuildSuccessRatioResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowJobBuildTimeResponse> CodeArtsBuildClient::showJobBuildTime(ShowJobBuildTimeRequest &request)
{
    std::string localVarPath = "/v1/report/time";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.jobIdIsSet()) {
        localVarQueryParams["job_id"] = parameterToString(request.getJobId());
    }
    if (request.repositoryNameIsSet()) {
        localVarQueryParams["repository_name"] = parameterToString(request.getRepositoryName());
    }
    if (request.branchIsSet()) {
        localVarQueryParams["branch"] = parameterToString(request.getBranch());
    }
    if (request.intervalIsSet()) {
        localVarQueryParams["interval"] = parameterToString(request.getInterval());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowJobBuildTime());

    std::shared_ptr<ShowJobBuildTimeResponse> localVarResult = std::make_shared<ShowJobBuildTimeResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowJobConfigResponse> CodeArtsBuildClient::showJobConfig(ShowJobConfigRequest &request)
{
    std::string localVarPath = "/v1/job/{job_id}/config";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.getAllParamsIsSet()) {
        localVarQueryParams["get_all_params"] = parameterToString(request.getGetAllParams());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowJobConfig());

    std::shared_ptr<ShowJobConfigResponse> localVarResult = std::make_shared<ShowJobConfigResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowJobConfigDiffResponse> CodeArtsBuildClient::showJobConfigDiff(ShowJobConfigDiffRequest &request)
{
    std::string localVarPath = "/v1/job/{job_id}/diff";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.revisedlNoIsSet()) {
        localVarQueryParams["revisedl_no"] = parameterToString(request.getRevisedlNo());
    }
    if (request.originalNoIsSet()) {
        localVarQueryParams["original_no"] = parameterToString(request.getOriginalNo());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowJobConfigDiff());

    std::shared_ptr<ShowJobConfigDiffResponse> localVarResult = std::make_shared<ShowJobConfigDiffResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowJobInfoResponse> CodeArtsBuildClient::showJobInfo(ShowJobInfoRequest &request)
{
    std::string localVarPath = "/v1/job/{job_id}/info";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowJobInfo());

    std::shared_ptr<ShowJobInfoResponse> localVarResult = std::make_shared<ShowJobInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowJobListByProjectIdResponse> CodeArtsBuildClient::showJobListByProjectId(ShowJobListByProjectIdRequest &request)
{
    std::string localVarPath = "/v3/{project_id}/jobs";

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

    if (request.pageIndexIsSet()) {
        localVarQueryParams["page_index"] = parameterToString(request.getPageIndex());
    }
    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowJobListByProjectId());

    std::shared_ptr<ShowJobListByProjectIdResponse> localVarResult = std::make_shared<ShowJobListByProjectIdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowJobNoticeConfigInfoResponse> CodeArtsBuildClient::showJobNoticeConfigInfo(ShowJobNoticeConfigInfoRequest &request)
{
    std::string localVarPath = "/v1/job/{job_id}/notice";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowJobNoticeConfigInfo());

    std::shared_ptr<ShowJobNoticeConfigInfoResponse> localVarResult = std::make_shared<ShowJobNoticeConfigInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowJobRolePermissionResponse> CodeArtsBuildClient::showJobRolePermission(ShowJobRolePermissionRequest &request)
{
    std::string localVarPath = "/v1/job/permission/role";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.jobIdIsSet()) {
        localVarQueryParams["job_id"] = parameterToString(request.getJobId());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowJobRolePermission());

    std::shared_ptr<ShowJobRolePermissionResponse> localVarResult = std::make_shared<ShowJobRolePermissionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowJobStatusResponse> CodeArtsBuildClient::showJobStatus(ShowJobStatusRequest &request)
{
    std::string localVarPath = "/v3/jobs/{job_id}/status";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowJobStatus());

    std::shared_ptr<ShowJobStatusResponse> localVarResult = std::make_shared<ShowJobStatusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowJobSuccessRatioResponse> CodeArtsBuildClient::showJobSuccessRatio(ShowJobSuccessRatioRequest &request)
{
    std::string localVarPath = "/v3/jobs/{job_id}/success-ratio";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowJobSuccessRatio());

    std::shared_ptr<ShowJobSuccessRatioResponse> localVarResult = std::make_shared<ShowJobSuccessRatioResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowJobSystemParametersResponse> CodeArtsBuildClient::showJobSystemParameters(ShowJobSystemParametersRequest &request)
{
    std::string localVarPath = "/v1/job/system-parameters";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowJobSystemParameters());

    std::shared_ptr<ShowJobSystemParametersResponse> localVarResult = std::make_shared<ShowJobSystemParametersResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowKeystorePermissionResponse> CodeArtsBuildClient::showKeystorePermission(ShowKeystorePermissionRequest &request)
{
    std::string localVarPath = "/v2/keystore/permission/{keystore_id}/query";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["keystore_id"] = parameterToString(request.getKeystoreId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.pageSizeIsSet()) {
        localVarQueryParams["page_size"] = parameterToString(request.getPageSize());
    }
    if (request.pageIsSet()) {
        localVarQueryParams["page"] = parameterToString(request.getPage());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowKeystorePermission());

    std::shared_ptr<ShowKeystorePermissionResponse> localVarResult = std::make_shared<ShowKeystorePermissionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowLastHistoryResponse> CodeArtsBuildClient::showLastHistory(ShowLastHistoryRequest &request)
{
    std::string localVarPath = "/v3/jobs/{project_id}/last-history";

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

    if (request.repositoryNameIsSet()) {
        localVarQueryParams["repository_name"] = parameterToString(request.getRepositoryName());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowLastHistory());

    std::shared_ptr<ShowLastHistoryResponse> localVarResult = std::make_shared<ShowLastHistoryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowListHistoryResponse> CodeArtsBuildClient::showListHistory(ShowListHistoryRequest &request)
{
    std::string localVarPath = "/v3/jobs/{job_id}/history";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

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
    if (request.intervalIsSet()) {
        localVarQueryParams["interval"] = parameterToString(request.getInterval());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowListHistory());

    std::shared_ptr<ShowListHistoryResponse> localVarResult = std::make_shared<ShowListHistoryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowListPeriodHistoryResponse> CodeArtsBuildClient::showListPeriodHistory(ShowListPeriodHistoryRequest &request)
{
    std::string localVarPath = "/v3/jobs/{job_id}/period-history";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

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
    if (request.startTimeIsSet()) {
        localVarQueryParams["start_time"] = parameterToString(request.getStartTime());
    }
    if (request.endTimeIsSet()) {
        localVarQueryParams["end_time"] = parameterToString(request.getEndTime());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowListPeriodHistory());

    std::shared_ptr<ShowListPeriodHistoryResponse> localVarResult = std::make_shared<ShowListPeriodHistoryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowOutputInfoResponse> CodeArtsBuildClient::showOutputInfo(ShowOutputInfoRequest &request)
{
    std::string localVarPath = "/v3/jobs/{job_id}/{build_no}/output-info";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());
    localVarPathParams["build_no"] = parameterToString(request.getBuildNo());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowOutputInfo());

    std::shared_ptr<ShowOutputInfoResponse> localVarResult = std::make_shared<ShowOutputInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowProjectPermissionResponse> CodeArtsBuildClient::showProjectPermission(ShowProjectPermissionRequest &request)
{
    std::string localVarPath = "/v1/domain/user-permission";

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

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowProjectPermission());

    std::shared_ptr<ShowProjectPermissionResponse> localVarResult = std::make_shared<ShowProjectPermissionResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRecordDetailResponse> CodeArtsBuildClient::showRecordDetail(ShowRecordDetailRequest &request)
{
    std::string localVarPath = "/v4/jobs/{job_id}/{build_no}/record-info";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());
    localVarPathParams["build_no"] = parameterToString(request.getBuildNo());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowRecordDetail());

    std::shared_ptr<ShowRecordDetailResponse> localVarResult = std::make_shared<ShowRecordDetailResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRelatedProjectResponse> CodeArtsBuildClient::showRelatedProject(ShowRelatedProjectRequest &request)
{
    std::string localVarPath = "/v1/domain/project/related";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowRelatedProject());

    std::shared_ptr<ShowRelatedProjectResponse> localVarResult = std::make_shared<ShowRelatedProjectResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowReportSummaryResponse> CodeArtsBuildClient::showReportSummary(ShowReportSummaryRequest &request)
{
    std::string localVarPath = "/v1/report/{job_id}/summary";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.buildNoIsSet()) {
        localVarQueryParams["build_no"] = parameterToString(request.getBuildNo());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowReportSummary());

    std::shared_ptr<ShowReportSummaryResponse> localVarResult = std::make_shared<ShowReportSummaryResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRunningStatusResponse> CodeArtsBuildClient::showRunningStatus(ShowRunningStatusRequest &request)
{
    std::string localVarPath = "/v1/job/{job_id}/running-status";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowRunningStatus());

    std::shared_ptr<ShowRunningStatusResponse> localVarResult = std::make_shared<ShowRunningStatusResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowYamlTemplateResponse> CodeArtsBuildClient::showYamlTemplate(ShowYamlTemplateRequest &request)
{
    std::string localVarPath = "/v1/template/{job_id}/default-template";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.defaultHostIsSet()) {
        localVarQueryParams["default_host"] = parameterToString(request.getDefaultHost());
    }

    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowYamlTemplate());

    std::shared_ptr<ShowYamlTemplateResponse> localVarResult = std::make_shared<ShowYamlTemplateResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<StopBuildJobResponse> CodeArtsBuildClient::stopBuildJob(StopBuildJobRequest &request)
{
    std::string localVarPath = "/v3/jobs/{job_id}/{build_no}/stop";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());
    localVarPathParams["build_no"] = parameterToString(request.getBuildNo());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForStopBuildJob());

    std::shared_ptr<StopBuildJobResponse> localVarResult = std::make_shared<StopBuildJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<UpdateBuildJobResponse> CodeArtsBuildClient::updateBuildJob(UpdateBuildJobRequest &request)
{
    std::string localVarPath = "/v3/jobs/update";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForUpdateBuildJob());

    std::shared_ptr<UpdateBuildJobResponse> localVarResult = std::make_shared<UpdateBuildJobResponse>();
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
std::shared_ptr<UpdateNoticeResponse> CodeArtsBuildClient::updateNotice(UpdateNoticeRequest &request)
{
    std::string localVarPath = "/v3/jobs/notice/{job_id}/update";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());

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
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForUpdateNotice());

    std::shared_ptr<UpdateNoticeResponse> localVarResult = std::make_shared<UpdateNoticeResponse>();
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
std::shared_ptr<DownloadLogByRecordIdResponse> CodeArtsBuildClient::downloadLogByRecordId(DownloadLogByRecordIdRequest &request)
{
    std::string localVarPath = "/v3/{record_id}/download-log";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["record_id"] = parameterToString(request.getRecordId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForDownloadLogByRecordId());

    std::shared_ptr<DownloadLogByRecordIdResponse> localVarResult = std::make_shared<DownloadLogByRecordIdResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowFlowGraphResponse> CodeArtsBuildClient::showFlowGraph(ShowFlowGraphRequest &request)
{
    std::string localVarPath = "/v3/{build_flow_record_id}/flow-graph";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["build_flow_record_id"] = parameterToString(request.getBuildFlowRecordId());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowFlowGraph());

    std::shared_ptr<ShowFlowGraphResponse> localVarResult = std::make_shared<ShowFlowGraphResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ShowRecordInfoResponse> CodeArtsBuildClient::showRecordInfo(ShowRecordInfoRequest &request)
{
    std::string localVarPath = "/v3/jobs/{job_id}/{build_no}/record-info";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;

    localVarPathParams["job_id"] = parameterToString(request.getJobId());
    localVarPathParams["build_no"] = parameterToString(request.getBuildNo());

    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/json", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;

    std::unique_ptr<HttpResponse> res = callApi("GET", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForShowRecordInfo());

    std::shared_ptr<ShowRecordInfoResponse> localVarResult = std::make_shared<ShowRecordInfoResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<StopJobResponse> CodeArtsBuildClient::stopJob(StopJobRequest &request)
{
    std::string localVarPath = "/v3/jobs/stop";

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
        localVarHeaderParams, localVarHttpBody, CodeArtsBuildMeta::genRequestDefForStopJob());

    std::shared_ptr<StopJobResponse> localVarResult = std::make_shared<StopJobResponse>();
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
std::string CodeArtsBuildClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string CodeArtsBuildClient::parameterToString(std::string value)
{
    return value;
}

std::string CodeArtsBuildClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string CodeArtsBuildClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string CodeArtsBuildClient::parameterToString(float value)
{
    return toString(value);
}

std::string CodeArtsBuildClient::parameterToString(double value)
{
    return toString(value);
}

std::string CodeArtsBuildClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string CodeArtsBuildClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

