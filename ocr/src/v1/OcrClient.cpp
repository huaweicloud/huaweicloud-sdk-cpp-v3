#include <huaweicloud/ocr/v1/OcrClient.h>
#include <huaweicloud/core/utils/MultipartFormData.h>

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
namespace Ocr {
namespace V1 {

using namespace HuaweiCloud::Sdk::Ocr::V1::Model;

OcrClient::OcrClient()
{
}

OcrClient::~OcrClient()
{
}

ClientBuilder<OcrClient> OcrClient::newBuilder()
{
    return ClientBuilder<OcrClient>("BasicCredentials");
}
std::shared_ptr<RecognizeAutoClassificationResponse> OcrClient::recognizeAutoClassification(RecognizeAutoClassificationRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/auto-classification";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeAutoClassificationResponse> localVarResult = std::make_shared<RecognizeAutoClassificationResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeBankcardResponse> OcrClient::recognizeBankcard(RecognizeBankcardRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/bankcard";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeBankcardResponse> localVarResult = std::make_shared<RecognizeBankcardResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeBusinessCardResponse> OcrClient::recognizeBusinessCard(RecognizeBusinessCardRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/business-card";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeBusinessCardResponse> localVarResult = std::make_shared<RecognizeBusinessCardResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeBusinessLicenseResponse> OcrClient::recognizeBusinessLicense(RecognizeBusinessLicenseRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/business-license";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeBusinessLicenseResponse> localVarResult = std::make_shared<RecognizeBusinessLicenseResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeCambodianIdCardResponse> OcrClient::recognizeCambodianIdCard(RecognizeCambodianIdCardRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/cambodian-idcard";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeCambodianIdCardResponse> localVarResult = std::make_shared<RecognizeCambodianIdCardResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeChileIdCardResponse> OcrClient::recognizeChileIdCard(RecognizeChileIdCardRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/chile-id-card";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeChileIdCardResponse> localVarResult = std::make_shared<RecognizeChileIdCardResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeDriverLicenseResponse> OcrClient::recognizeDriverLicense(RecognizeDriverLicenseRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/driver-license";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeDriverLicenseResponse> localVarResult = std::make_shared<RecognizeDriverLicenseResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeExitEntryPermitResponse> OcrClient::recognizeExitEntryPermit(RecognizeExitEntryPermitRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/exit-entry-permit";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeExitEntryPermitResponse> localVarResult = std::make_shared<RecognizeExitEntryPermitResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeFinancialStatementResponse> OcrClient::recognizeFinancialStatement(RecognizeFinancialStatementRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/financial-statement";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeFinancialStatementResponse> localVarResult = std::make_shared<RecognizeFinancialStatementResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeFlightItineraryResponse> OcrClient::recognizeFlightItinerary(RecognizeFlightItineraryRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/flight-itinerary";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeFlightItineraryResponse> localVarResult = std::make_shared<RecognizeFlightItineraryResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeGeneralTableResponse> OcrClient::recognizeGeneralTable(RecognizeGeneralTableRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/general-table";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeGeneralTableResponse> localVarResult = std::make_shared<RecognizeGeneralTableResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeGeneralTextResponse> OcrClient::recognizeGeneralText(RecognizeGeneralTextRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/general-text";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeGeneralTextResponse> localVarResult = std::make_shared<RecognizeGeneralTextResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeHandwritingResponse> OcrClient::recognizeHandwriting(RecognizeHandwritingRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/handwriting";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeHandwritingResponse> localVarResult = std::make_shared<RecognizeHandwritingResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeHealthCodeResponse> OcrClient::recognizeHealthCode(RecognizeHealthCodeRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/health-code";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeHealthCodeResponse> localVarResult = std::make_shared<RecognizeHealthCodeResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeHkIdCardResponse> OcrClient::recognizeHkIdCard(RecognizeHkIdCardRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/hk-id-card";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeHkIdCardResponse> localVarResult = std::make_shared<RecognizeHkIdCardResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeIdCardResponse> OcrClient::recognizeIdCard(RecognizeIdCardRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/id-card";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeIdCardResponse> localVarResult = std::make_shared<RecognizeIdCardResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeIdDocumentResponse> OcrClient::recognizeIdDocument(RecognizeIdDocumentRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/id-document";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeIdDocumentResponse> localVarResult = std::make_shared<RecognizeIdDocumentResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeInsurancePolicyResponse> OcrClient::recognizeInsurancePolicy(RecognizeInsurancePolicyRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/insurance-policy";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeInsurancePolicyResponse> localVarResult = std::make_shared<RecognizeInsurancePolicyResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeInvoiceVerificationResponse> OcrClient::recognizeInvoiceVerification(RecognizeInvoiceVerificationRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/invoice-verification";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeInvoiceVerificationResponse> localVarResult = std::make_shared<RecognizeInvoiceVerificationResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeLicensePlateResponse> OcrClient::recognizeLicensePlate(RecognizeLicensePlateRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/license-plate";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeLicensePlateResponse> localVarResult = std::make_shared<RecognizeLicensePlateResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeMacaoIdCardResponse> OcrClient::recognizeMacaoIdCard(RecognizeMacaoIdCardRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/macao-id-card";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeMacaoIdCardResponse> localVarResult = std::make_shared<RecognizeMacaoIdCardResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeMainlandTravelPermitResponse> OcrClient::recognizeMainlandTravelPermit(RecognizeMainlandTravelPermitRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/mainland-travel-permit";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeMainlandTravelPermitResponse> localVarResult = std::make_shared<RecognizeMainlandTravelPermitResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeMvsInvoiceResponse> OcrClient::recognizeMvsInvoice(RecognizeMvsInvoiceRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/mvs-invoice";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeMvsInvoiceResponse> localVarResult = std::make_shared<RecognizeMvsInvoiceResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeMyanmarDriverLicenseResponse> OcrClient::recognizeMyanmarDriverLicense(RecognizeMyanmarDriverLicenseRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/myanmar-driver-license";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeMyanmarDriverLicenseResponse> localVarResult = std::make_shared<RecognizeMyanmarDriverLicenseResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeMyanmarIdcardResponse> OcrClient::recognizeMyanmarIdcard(RecognizeMyanmarIdcardRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/myanmar-id-card";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeMyanmarIdcardResponse> localVarResult = std::make_shared<RecognizeMyanmarIdcardResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizePassportResponse> OcrClient::recognizePassport(RecognizePassportRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/passport";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizePassportResponse> localVarResult = std::make_shared<RecognizePassportResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizePcrTestRecordResponse> OcrClient::recognizePcrTestRecord(RecognizePcrTestRecordRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/pcr-test-record";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizePcrTestRecordResponse> localVarResult = std::make_shared<RecognizePcrTestRecordResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeQualificationCertificateResponse> OcrClient::recognizeQualificationCertificate(RecognizeQualificationCertificateRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/transportation-qualification-certificate";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeQualificationCertificateResponse> localVarResult = std::make_shared<RecognizeQualificationCertificateResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeQuotaInvoiceResponse> OcrClient::recognizeQuotaInvoice(RecognizeQuotaInvoiceRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/quota-invoice";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeQuotaInvoiceResponse> localVarResult = std::make_shared<RecognizeQuotaInvoiceResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeSmartDocumentRecognizerResponse> OcrClient::recognizeSmartDocumentRecognizer(RecognizeSmartDocumentRecognizerRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/smart-document-recognizer";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeSmartDocumentRecognizerResponse> localVarResult = std::make_shared<RecognizeSmartDocumentRecognizerResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeTaxiInvoiceResponse> OcrClient::recognizeTaxiInvoice(RecognizeTaxiInvoiceRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/taxi-invoice";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeTaxiInvoiceResponse> localVarResult = std::make_shared<RecognizeTaxiInvoiceResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeThailandIdcardResponse> OcrClient::recognizeThailandIdcard(RecognizeThailandIdcardRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/thailand-id-card";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeThailandIdcardResponse> localVarResult = std::make_shared<RecognizeThailandIdcardResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeThailandLicensePlateResponse> OcrClient::recognizeThailandLicensePlate(RecognizeThailandLicensePlateRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/thailand-license-plate";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeThailandLicensePlateResponse> localVarResult = std::make_shared<RecognizeThailandLicensePlateResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeTollInvoiceResponse> OcrClient::recognizeTollInvoice(RecognizeTollInvoiceRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/toll-invoice";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeTollInvoiceResponse> localVarResult = std::make_shared<RecognizeTollInvoiceResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeTrainTicketResponse> OcrClient::recognizeTrainTicket(RecognizeTrainTicketRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/train-ticket";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeTrainTicketResponse> localVarResult = std::make_shared<RecognizeTrainTicketResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeTransportationLicenseResponse> OcrClient::recognizeTransportationLicense(RecognizeTransportationLicenseRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/transportation-license";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeTransportationLicenseResponse> localVarResult = std::make_shared<RecognizeTransportationLicenseResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeVatInvoiceResponse> OcrClient::recognizeVatInvoice(RecognizeVatInvoiceRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/vat-invoice";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeVatInvoiceResponse> localVarResult = std::make_shared<RecognizeVatInvoiceResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeVehicleLicenseResponse> OcrClient::recognizeVehicleLicense(RecognizeVehicleLicenseRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/vehicle-license";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeVehicleLicenseResponse> localVarResult = std::make_shared<RecognizeVehicleLicenseResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeWaybillElectronicResponse> OcrClient::recognizeWaybillElectronic(RecognizeWaybillElectronicRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/waybill-electronic";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeWaybillElectronicResponse> localVarResult = std::make_shared<RecognizeWaybillElectronicResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeWebImageResponse> OcrClient::recognizeWebImage(RecognizeWebImageRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/web-image";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeWebImageResponse> localVarResult = std::make_shared<RecognizeWebImageResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeCustomTemplateResponse> OcrClient::recognizeCustomTemplate(RecognizeCustomTemplateRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/custom-template";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeCustomTemplateResponse> localVarResult = std::make_shared<RecognizeCustomTemplateResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
std::shared_ptr<RecognizeVinResponse> OcrClient::recognizeVin(RecognizeVinRequest &request)
{
    std::string localVarPath = "/v2/{project_id}/ocr/vin";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;
    std::map<std::string, std::shared_ptr<HttpContent>> localVarFileParams;


    bool isJson = false;
    bool isMultiPart = false;
    std::string contentType = getContentType("application/json;charset=UTF-8", isJson, isMultiPart);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.enterpriseProjectIdIsSet()) {
        localVarHeaderParams["Enterprise-Project-Id"] = parameterToString(request.getEnterpriseProjectId());
    }

    std::string localVarHttpBody;
    if (isJson) {
        web::json::value localVarJson;
        localVarJson = ModelBase::toJson(request.getBody());
        localVarHttpBody = utility::conversions::to_utf8string(localVarJson.serialize());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams, localVarHeaderParams, localVarHttpBody);

    std::shared_ptr<RecognizeVinResponse> localVarResult = std::make_shared<RecognizeVinResponse>();

    if (!res->getHttpBody().empty()) {
        utility::string_t localVarResponse = utility::conversions::to_string_t(res->getHttpBody());
        web::json::value localVarJson = web::json::value::parse(localVarResponse);
        localVarResult->fromJson(localVarJson);
    }
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());

    return localVarResult;
}
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
std::string OcrClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string OcrClient::parameterToString(std::string value)
{
    return value;
}

std::string OcrClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string OcrClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string OcrClient::parameterToString(float value)
{
    return toString(value);
}

std::string OcrClient::parameterToString(double value)
{
    return toString(value);
}

std::string OcrClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string OcrClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

