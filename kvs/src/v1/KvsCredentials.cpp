#include <utility>
#include <huaweicloud/core/auth/Signer.h>
#include <huaweicloud/kvs/v1/KvsCredentials.h>
#include <huaweicloud/core/exception/SdkException.h>

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;
using namespace HuaweiCloud::Sdk::Kvs::V1;

KvsCredentials::KvsCredentials() = default;

KvsCredentials::~KvsCredentials() = default;

KvsCredentials::KvsCredentials(std::string ak, std::string sk, std::string securityToken, std::string projectId):
    BasicCredentials(std::move(ak), std::move(sk), std::move(securityToken), std::move(projectId)){}

KvsCredentials::KvsCredentials(std::string ak, std::string sk, std::string projectId):
        BasicCredentials(std::move(ak), std::move(sk), std::move(projectId)){}

KvsCredentials &KvsCredentials::withEnableBodySignature(bool enableBodySignature) {
    enableBodySignature_ = enableBodySignature;
    return *this;
}

bool KvsCredentials::getEnableBodySignature() {
    return enableBodySignature_;
}

KvsCredentials &KvsCredentials::withSk(std::string sk)
{
    sk_ = std::move(sk);
    return *this;
}

KvsCredentials &KvsCredentials::withSecurityToken(std::string securityToken)
{
    securityToken_ = std::move(securityToken);
    return *this;
}

KvsCredentials &KvsCredentials::withProjectId(std::string projectId)
{
    projectId_ = std::move(projectId);
    return *this;
}

KvsCredentials &KvsCredentials::withAk(std::string ak)
{
    ak_ = std::move(ak);
    return *this;
}

KvsCredentials &KvsCredentials::withIamEndpoint(std::string iamEndpoint) {
    iamEndpoint_ = std::move(iamEndpoint);
    return *this;
}

KvsCredentials &KvsCredentials::withIamService(std::unique_ptr<IamService> iamService_) {
    iamService = std::move(iamService_);
    return *this;
}

std::string KvsCredentials::processAuthRequest(HuaweiCloud::Sdk::Core::RequestParams &requestParams,
                                                 HuaweiCloud::Sdk::Core::Http::HttpConfig &httpConfig)
{
    requestParams.addHeader("X-Project-Id", projectId_);
    if (!securityToken_.empty()) {
        requestParams.addHeader("X-Security-Token", securityToken_);
    }
    if (!enableBodySignature_) {
        requestParams.addHeader("X-Sdk-Content-Sha256", "UNSIGNED-PAYLOAD");
    }
    std::unique_ptr<Signer> signer = getAlgorithmSigner(httpConfig.getAlgorithm(), ak_, sk_);
    std::string signature = signer->createSignature(requestParams);
    return signature;
}