
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateLivePlatformReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateLivePlatformReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/CustomPlatformAuthConfig.h>
#include <huaweicloud/metastudio/v1/model/StandardPlatformApiConfig.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自定义直播平台创建请求
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateLivePlatformReq
    : public ModelBase
{
public:
    CreateLivePlatformReq();
    virtual ~CreateLivePlatformReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateLivePlatformReq members

    /// <summary>
    /// 直播平台名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CustomPlatformAuthConfig getAuthConfig() const;
    bool authConfigIsSet() const;
    void unsetauthConfig();
    void setAuthConfig(const CustomPlatformAuthConfig& value);

    /// <summary>
    /// 自定义直播平台回调配置。同一种类型仅保留一个配置，如果配置多个会随机保存一个。
    /// </summary>

    std::vector<StandardPlatformApiConfig>& getCallbackConfig();
    bool callbackConfigIsSet() const;
    void unsetcallbackConfig();
    void setCallbackConfig(const std::vector<StandardPlatformApiConfig>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    CustomPlatformAuthConfig authConfig_;
    bool authConfigIsSet_;
    std::vector<StandardPlatformApiConfig> callbackConfig_;
    bool callbackConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateLivePlatformReq_H_
