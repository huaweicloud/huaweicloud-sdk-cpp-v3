#ifndef HUAWEICLOUD_SDK_CORE_AUTH_KVSCREDENTIALS_H
#define HUAWEICLOUD_SDK_CORE_AUTH_KVSCREDENTIALS_H

#include <memory>
#include <string>
#include <huaweicloud/core/auth/BasicCredentials.h>
#include <huaweicloud/kvs/v1/KvsExport.h>
#include <huaweicloud/core/auth/Credentials.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Auth;

class HUAWEICLOUD_KVS_V1_EXPORT KvsCredentials : public BasicCredentials {
public:
    KvsCredentials();
    KvsCredentials(std::string ak, std::string sk, std::string securityToken, std::string projectId);
    KvsCredentials(std::string ak, std::string sk, std::string projectId);
    ~KvsCredentials();

    bool getEnableBodySignature();
    KvsCredentials &withAk(std::string ak);
    KvsCredentials &withSk(std::string sk);
    KvsCredentials &withSecurityToken(std::string securityToken);
    KvsCredentials &withProjectId(std::string projectId);
    KvsCredentials &withIamEndpoint(std::string IamEndpoint);
    KvsCredentials &withIamService(std::unique_ptr<IamService> iamService);
    KvsCredentials &withEnableBodySignature(bool enableBodySignature);
    std::string processAuthRequest(HuaweiCloud::Sdk::Core::RequestParams &requestParams,
                                   HuaweiCloud::Sdk::Core::Http::HttpConfig &httpConfig) override;

private:
    bool enableBodySignature_;
    std::string ak_;
    std::string sk_;
    std::string securityToken_;
    std::string projectId_;
    std::string iamEndpoint_;
    std::unique_ptr<IamService> iamService;
};
}
}
}
}

#endif // HUAWEICLOUD_SDK_CORE_AUTH_KVSCREDENTIALS_H
