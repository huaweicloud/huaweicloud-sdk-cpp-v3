
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListGlobalConfigResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListGlobalConfigResponse_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/aad/v2/model/CipherInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ListGlobalConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ListGlobalConfigResponse();
    virtual ~ListGlobalConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGlobalConfigResponse members

    /// <summary>
    /// 支持的tls版本列表
    /// </summary>

    std::vector<std::string>& getSupportTls();
    bool supportTlsIsSet() const;
    void unsetsupportTls();
    void setSupportTls(const std::vector<std::string>& value);

    /// <summary>
    /// 加密套件列表
    /// </summary>

    std::vector<CipherInfo>& getCipher();
    bool cipherIsSet() const;
    void unsetcipher();
    void setCipher(const std::vector<CipherInfo>& value);


protected:
    std::vector<std::string> supportTls_;
    bool supportTlsIsSet_;
    std::vector<CipherInfo> cipher_;
    bool cipherIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListGlobalConfigResponse_H_
