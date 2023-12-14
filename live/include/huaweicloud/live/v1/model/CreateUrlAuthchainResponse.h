
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateUrlAuthchainResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateUrlAuthchainResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CreateUrlAuthchainResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateUrlAuthchainResponse();
    virtual ~CreateUrlAuthchainResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateUrlAuthchainResponse members

    /// <summary>
    /// 生成的鉴权串列表
    /// </summary>

    std::vector<std::string>& getKeychain();
    bool keychainIsSet() const;
    void unsetkeychain();
    void setKeychain(const std::vector<std::string>& value);


protected:
    std::vector<std::string> keychain_;
    bool keychainIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateUrlAuthchainResponse_H_
