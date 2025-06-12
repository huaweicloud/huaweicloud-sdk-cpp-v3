
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StandardPlatformApiConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StandardPlatformApiConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自定义直播平台回调配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  StandardPlatformApiConfig
    : public ModelBase
{
public:
    StandardPlatformApiConfig();
    virtual ~StandardPlatformApiConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StandardPlatformApiConfig members

    /// <summary>
    /// API类型。 * PRODUCT_QUERY: 查询商品 * LIVE_EVENT_CALLBACK: 直播事件回调
    /// </summary>

    std::string getApiType() const;
    bool apiTypeIsSet() const;
    void unsetapiType();
    void setApiType(const std::string& value);

    /// <summary>
    /// URL。仅支持HTTPS形式URL
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);


protected:
    std::string apiType_;
    bool apiTypeIsSet_;
    std::string url_;
    bool urlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StandardPlatformApiConfig_H_
