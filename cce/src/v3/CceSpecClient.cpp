//
// Created by g00947603 on 2026/2/8.
//
#include <huaweicloud/cce/v3/CceSpecClient.h>
#include <huaweicloud/cce/v3/CceSpecMeta.h>

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
namespace Cce {
namespace V3 {

using namespace HuaweiCloud::Sdk::Cce::V3::Model;

CceSpecClient::CceSpecClient()
{
}

CceSpecClient::~CceSpecClient()
{
}

ClientBuilder<CceSpecClient> CceSpecClient::newBuilder()
{
    ClientBuilder<CceSpecClient> client = ClientBuilder<CceSpecClient>("");
    return client;
}

std::shared_ptr<DeleteAutopilotJobResponse> CceSpecClient::deleteAutopilotJob(DeleteAutopilotJobRequest &request)
{
    std::string localVarPath = "/autopilot/v2/projects/{project_id}/jobs/{job_id}";

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

    std::unique_ptr<HttpResponse> res = callApi("DELETE", localVarPath, localVarPathParams, localVarQueryParams,
                                                localVarHeaderParams, localVarHttpBody, CceSpecMeta::genRequestDefForDeleteAutopilotJob());

    std::shared_ptr<DeleteAutopilotJobResponse> localVarResult = std::make_shared<DeleteAutopilotJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<GetAutopilotOneJobResponse> CceSpecClient::getAutopilotOneJob(GetAutopilotOneJobRequest &request)
{
    std::string localVarPath = "/autopilot/v2/projects/{project_id}/jobs/{job_id}";

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
                                                localVarHeaderParams, localVarHttpBody, CceSpecMeta::genRequestDefForGetAutopilotOneJob());

    std::shared_ptr<GetAutopilotOneJobResponse> localVarResult = std::make_shared<GetAutopilotOneJobResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<ListAutopilotJobsResponse> CceSpecClient::listAutopilotJobs(ListAutopilotJobsRequest &request)
{
    std::string localVarPath = "/autopilot/v2/projects/{project_id}/jobs";

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
                                                localVarHeaderParams, localVarHttpBody, CceSpecMeta::genRequestDefForListAutopilotJobs());

    std::shared_ptr<ListAutopilotJobsResponse> localVarResult = std::make_shared<ListAutopilotJobsResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}

#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
        std::string CceSpecClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string CceSpecClient::parameterToString(std::string value)
{
    return value;
}

std::string CceSpecClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string CceSpecClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string CceSpecClient::parameterToString(float value)
{
    return toString(value);
}

std::string CceSpecClient::parameterToString(double value)
{
    return toString(value);
}

std::string CceSpecClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string CceSpecClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}
}
}
}
}