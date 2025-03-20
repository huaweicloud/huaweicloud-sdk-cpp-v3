#include <huaweicloud/kvs/v1/KvsClient.h>
#include <huaweicloud/kvs/v1/KvsMeta.h>

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
namespace Kvs {
namespace V1 {

using namespace HuaweiCloud::Sdk::Kvs::V1::Model;

KvsClient::KvsClient()
{
}

KvsClient::~KvsClient()
{
}

ClientBuilder<KvsClient> KvsClient::newBuilder()
{
    return ClientBuilder<KvsClient>("BasicCredentials,KvsCredentials");
}
std::shared_ptr<CreateTableResponse> KvsClient::createTable(CreateTableRequest &request)
{
    std::string localVarPath = "/v1/create-table";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/bson", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.storeNameIsSet()) {
        localVarQueryParams["store_name"] = parameterToString(request.getStoreName());
    }

    std::string localVarHttpBody;
    if (isBson) {
        spdlog::info("parse bson format request");
        Builder builder = Builder::document();
        request.getBody().toBson(builder);
        Document doc = builder << Builder::DocumentEnd;
        localVarHttpBody.assign((const char *)doc.data(), doc.length());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, KvsMeta::genRequestDefForCreateTable());

    std::shared_ptr<CreateTableResponse> localVarResult = std::make_shared<CreateTableResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse bson format response");
        const std::string &body = localVarResult->getHttpBodyRef();
        Document doc((const uint8_t *)body.data(), body.length());
        Viewer viewer(doc);
        localVarResult->fromBson(viewer);
    }

    return localVarResult;
}
std::shared_ptr<DeleteTableResponse> KvsClient::deleteTable(DeleteTableRequest &request)
{
    std::string localVarPath = "/v1/delete-table";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/bson", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.storeNameIsSet()) {
        localVarQueryParams["store_name"] = parameterToString(request.getStoreName());
    }

    std::string localVarHttpBody;
    if (isBson) {
        spdlog::info("parse bson format request");
        Builder builder = Builder::document();
        request.getBody().toBson(builder);
        Document doc = builder << Builder::DocumentEnd;
        localVarHttpBody.assign((const char *)doc.data(), doc.length());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, KvsMeta::genRequestDefForDeleteTable());

    std::shared_ptr<DeleteTableResponse> localVarResult = std::make_shared<DeleteTableResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse bson format response");
        const std::string &body = localVarResult->getHttpBodyRef();
        Document doc((const uint8_t *)body.data(), body.length());
        Viewer viewer(doc);
        localVarResult->fromBson(viewer);
    }

    return localVarResult;
}
std::shared_ptr<DescribeTableResponse> KvsClient::describeTable(DescribeTableRequest &request)
{
    std::string localVarPath = "/v1/describe-table";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/bson", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.storeNameIsSet()) {
        localVarQueryParams["store_name"] = parameterToString(request.getStoreName());
    }

    std::string localVarHttpBody;
    if (isBson) {
        spdlog::info("parse bson format request");
        Builder builder = Builder::document();
        request.getBody().toBson(builder);
        Document doc = builder << Builder::DocumentEnd;
        localVarHttpBody.assign((const char *)doc.data(), doc.length());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, KvsMeta::genRequestDefForDescribeTable());

    std::shared_ptr<DescribeTableResponse> localVarResult = std::make_shared<DescribeTableResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse bson format response");
        const std::string &body = localVarResult->getHttpBodyRef();
        Document doc((const uint8_t *)body.data(), body.length());
        Viewer viewer(doc);
        localVarResult->fromBson(viewer);
    }

    return localVarResult;
}
std::shared_ptr<ListStoreResponse> KvsClient::listStore(ListStoreRequest &request)
{
    std::string localVarPath = "/v1/list-store";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/bson", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isBson) {
        spdlog::info("parse bson format request");
        Builder builder = Builder::document();
        request.getBody().toBson(builder);
        Document doc = builder << Builder::DocumentEnd;
        localVarHttpBody.assign((const char *)doc.data(), doc.length());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, KvsMeta::genRequestDefForListStore());

    std::shared_ptr<ListStoreResponse> localVarResult = std::make_shared<ListStoreResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse bson format response");
        const std::string &body = localVarResult->getHttpBodyRef();
        Document doc((const uint8_t *)body.data(), body.length());
        Viewer viewer(doc);
        localVarResult->fromBson(viewer);
    }

    return localVarResult;
}
std::shared_ptr<ListTableResponse> KvsClient::listTable(ListTableRequest &request)
{
    std::string localVarPath = "/v1/list-table";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/bson", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.storeNameIsSet()) {
        localVarQueryParams["store_name"] = parameterToString(request.getStoreName());
    }

    std::string localVarHttpBody;
    if (isBson) {
        spdlog::info("parse bson format request");
        Builder builder = Builder::document();
        request.getBody().toBson(builder);
        Document doc = builder << Builder::DocumentEnd;
        localVarHttpBody.assign((const char *)doc.data(), doc.length());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, KvsMeta::genRequestDefForListTable());

    std::shared_ptr<ListTableResponse> localVarResult = std::make_shared<ListTableResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse bson format response");
        const std::string &body = localVarResult->getHttpBodyRef();
        Document doc((const uint8_t *)body.data(), body.length());
        Viewer viewer(doc);
        localVarResult->fromBson(viewer);
    }

    return localVarResult;
}
std::shared_ptr<CheckHealthResponse> KvsClient::checkHealth(CheckHealthRequest &request)
{
    std::string localVarPath = "/v1/check-health";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/bson", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;


    std::string localVarHttpBody;
    if (isBson) {
        spdlog::info("parse bson format request");
        Builder builder = Builder::document();
        request.getBody().toBson(builder);
        Document doc = builder << Builder::DocumentEnd;
        localVarHttpBody.assign((const char *)doc.data(), doc.length());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, KvsMeta::genRequestDefForCheckHealth());

    std::shared_ptr<CheckHealthResponse> localVarResult = std::make_shared<CheckHealthResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse bson format response");
        const std::string &body = localVarResult->getHttpBodyRef();
        Document doc((const uint8_t *)body.data(), body.length());
        Viewer viewer(doc);
        localVarResult->fromBson(viewer);
    }

    return localVarResult;
}
std::shared_ptr<BatchWriteKvResponse> KvsClient::batchWriteKv(BatchWriteKvRequest &request)
{
    std::string localVarPath = "/v1/batch-write-kv";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/bson", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.storeNameIsSet()) {
        localVarQueryParams["store_name"] = parameterToString(request.getStoreName());
    }

    std::string localVarHttpBody;
    if (isBson) {
        spdlog::info("parse bson format request");
        Builder builder = Builder::document();
        request.getBody().toBson(builder);
        Document doc = builder << Builder::DocumentEnd;
        localVarHttpBody.assign((const char *)doc.data(), doc.length());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, KvsMeta::genRequestDefForBatchWriteKv());

    std::shared_ptr<BatchWriteKvResponse> localVarResult = std::make_shared<BatchWriteKvResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse bson format response");
        const std::string &body = localVarResult->getHttpBodyRef();
        Document doc((const uint8_t *)body.data(), body.length());
        Viewer viewer(doc);
        localVarResult->fromBson(viewer);
    }

    return localVarResult;
}
std::shared_ptr<DeleteKvResponse> KvsClient::deleteKv(DeleteKvRequest &request)
{
    std::string localVarPath = "/v1/delete-kv";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/bson", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.storeNameIsSet()) {
        localVarQueryParams["store_name"] = parameterToString(request.getStoreName());
    }

    std::string localVarHttpBody;
    if (isBson) {
        spdlog::info("parse bson format request");
        Builder builder = Builder::document();
        request.getBody().toBson(builder);
        Document doc = builder << Builder::DocumentEnd;
        localVarHttpBody.assign((const char *)doc.data(), doc.length());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, KvsMeta::genRequestDefForDeleteKv());

    std::shared_ptr<DeleteKvResponse> localVarResult = std::make_shared<DeleteKvResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse bson format response");
        const std::string &body = localVarResult->getHttpBodyRef();
        Document doc((const uint8_t *)body.data(), body.length());
        Viewer viewer(doc);
        localVarResult->fromBson(viewer);
    }

    return localVarResult;
}
std::shared_ptr<GetKvResponse> KvsClient::getKv(GetKvRequest &request)
{
    std::string localVarPath = "/v1/get-kv";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/bson", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.storeNameIsSet()) {
        localVarQueryParams["store_name"] = parameterToString(request.getStoreName());
    }

    std::string localVarHttpBody;
    if (isBson) {
        spdlog::info("parse bson format request");
        Builder builder = Builder::document();
        request.getBody().toBson(builder);
        Document doc = builder << Builder::DocumentEnd;
        localVarHttpBody.assign((const char *)doc.data(), doc.length());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, KvsMeta::genRequestDefForGetKv());

    std::shared_ptr<GetKvResponse> localVarResult = std::make_shared<GetKvResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse bson format response");
        const std::string &body = localVarResult->getHttpBodyRef();
        Document doc((const uint8_t *)body.data(), body.length());
        Viewer viewer(doc);
        localVarResult->fromBson(viewer);
    }

    return localVarResult;
}
std::shared_ptr<PutKvResponse> KvsClient::putKv(PutKvRequest &request)
{
    std::string localVarPath = "/v1/put-kv";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/bson", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.storeNameIsSet()) {
        localVarQueryParams["store_name"] = parameterToString(request.getStoreName());
    }

    std::string localVarHttpBody;
    if (isBson) {
        spdlog::info("parse bson format request");
        Builder builder = Builder::document();
        request.getBody().toBson(builder);
        Document doc = builder << Builder::DocumentEnd;
        localVarHttpBody.assign((const char *)doc.data(), doc.length());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, KvsMeta::genRequestDefForPutKv());

    std::shared_ptr<PutKvResponse> localVarResult = std::make_shared<PutKvResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse bson format response");
        const std::string &body = localVarResult->getHttpBodyRef();
        Document doc((const uint8_t *)body.data(), body.length());
        Viewer viewer(doc);
        localVarResult->fromBson(viewer);
    }

    return localVarResult;
}
std::shared_ptr<ScanKvResponse> KvsClient::scanKv(ScanKvRequest &request)
{
    std::string localVarPath = "/v1/scan-kv";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/bson", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.storeNameIsSet()) {
        localVarQueryParams["store_name"] = parameterToString(request.getStoreName());
    }

    std::string localVarHttpBody;
    if (isBson) {
        spdlog::info("parse bson format request");
        Builder builder = Builder::document();
        request.getBody().toBson(builder);
        Document doc = builder << Builder::DocumentEnd;
        localVarHttpBody.assign((const char *)doc.data(), doc.length());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, KvsMeta::genRequestDefForScanKv());

    std::shared_ptr<ScanKvResponse> localVarResult = std::make_shared<ScanKvResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse bson format response");
        const std::string &body = localVarResult->getHttpBodyRef();
        Document doc((const uint8_t *)body.data(), body.length());
        Viewer viewer(doc);
        localVarResult->fromBson(viewer);
    }

    return localVarResult;
}
std::shared_ptr<ScanSkeyKvResponse> KvsClient::scanSkeyKv(ScanSkeyKvRequest &request)
{
    std::string localVarPath = "/v1/scan-skey-kv";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/bson", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.storeNameIsSet()) {
        localVarQueryParams["store_name"] = parameterToString(request.getStoreName());
    }

    std::string localVarHttpBody;
    if (isBson) {
        spdlog::info("parse bson format request");
        Builder builder = Builder::document();
        request.getBody().toBson(builder);
        Document doc = builder << Builder::DocumentEnd;
        localVarHttpBody.assign((const char *)doc.data(), doc.length());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, KvsMeta::genRequestDefForScanSkeyKv());

    std::shared_ptr<ScanSkeyKvResponse> localVarResult = std::make_shared<ScanSkeyKvResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse bson format response");
        const std::string &body = localVarResult->getHttpBodyRef();
        Document doc((const uint8_t *)body.data(), body.length());
        Viewer viewer(doc);
        localVarResult->fromBson(viewer);
    }

    return localVarResult;
}
std::shared_ptr<UpdateKvResponse> KvsClient::updateKv(UpdateKvRequest &request)
{
    std::string localVarPath = "/v1/update-kv";

    std::map<std::string, std::string> localVarQueryParams;
    std::map<std::string, std::string> localVarHeaderParams;
    std::map<std::string, std::string> localVarFormParams;
    std::map<std::string, std::string> localVarPathParams;


    bool isJson = false;
    bool isMultiPart = false;
    bool isBson = false;
    std::string contentType = getContentType("application/bson", isJson, isMultiPart, isBson);
    localVarHeaderParams["Content-Type"] = contentType;

    if (request.storeNameIsSet()) {
        localVarQueryParams["store_name"] = parameterToString(request.getStoreName());
    }

    std::string localVarHttpBody;
    if (isBson) {
        spdlog::info("parse bson format request");
        Builder builder = Builder::document();
        request.getBody().toBson(builder);
        Document doc = builder << Builder::DocumentEnd;
        localVarHttpBody.assign((const char *)doc.data(), doc.length());
    }

    std::unique_ptr<HttpResponse> res = callApi("POST", localVarPath, localVarPathParams, localVarQueryParams,
        localVarHeaderParams, localVarHttpBody, KvsMeta::genRequestDefForUpdateKv());

    std::shared_ptr<UpdateKvResponse> localVarResult = std::make_shared<UpdateKvResponse>();
    localVarResult->setStatusCode(res->getStatusCode());
    localVarResult->setHeaderParams(res->getHeaderParams());
    localVarResult->setHttpBody(res->getHttpBody());
    if (!res->getHttpBody().empty()) {
        spdlog::info("parse bson format response");
        const std::string &body = localVarResult->getHttpBodyRef();
        Document doc((const uint8_t *)body.data(), body.length());
        Viewer viewer(doc);
        localVarResult->fromBson(viewer);
    }

    return localVarResult;
}
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
std::string KvsClient::parameterToString(utility::string_t value)
{
    return utility::conversions::to_utf8string(value);
}
#endif
std::string KvsClient::parameterToString(std::string value)
{
    return value;
}

std::string KvsClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string KvsClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return valueAsStringStream.str();
}

std::string KvsClient::parameterToString(float value)
{
    return toString(value);
}

std::string KvsClient::parameterToString(double value)
{
    return toString(value);
}

std::string KvsClient::parameterToString(const Object& obj)
{
    auto val = obj.toJson();
    std::string value;
    ModelBase::fromJson(val, value);
    return value;
}
std::string KvsClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_utf8string(value.to_string(utility::datetime::ISO_8601));
}

}
}
}
}

