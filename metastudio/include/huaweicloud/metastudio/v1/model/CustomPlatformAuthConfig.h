
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CustomPlatformAuthConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CustomPlatformAuthConfig_H_


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
/// 自定义直播平台鉴权配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CustomPlatformAuthConfig
    : public ModelBase
{
public:
    CustomPlatformAuthConfig();
    virtual ~CustomPlatformAuthConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomPlatformAuthConfig members

    /// <summary>
    /// 密钥Key。调用自定义直播平台时使用。 使用方式： 调用接口时，增加两个头域：x-hw-mss-time，x-hw-mss-secret * x-hw-mss-time：当前时间戳。Unix时间戳的十六进制结果。1分钟内有效。   示例： 66df9308（即2024.09.10 08:30:00） * x-hw-mss-secret：鉴权串。hmac_sha256(Key, URI（product_query_url,query参数按照Key的字典序排列）+ x-hw-mss-time)  示例： URL  https://api.example.com/v1/products?live_id&#x3D;111&amp;limit&#x3D;10&amp;offset&#x3D;0   Key：GCTbw44s6MPLh4GqgDpnfuFHgy25Enly   hwTime：66df9308   x-hw-mss-secret&#x3D;hmac_sha256(GCTbw44s6MPLh4GqgDpnfuFHgy25Enly,api.example.com/v1/products?limit&#x3D;10&amp;live_id&#x3D;111&amp;offset&#x3D;066df9308)&#x3D;5e7fe8869a12a87ea966d9edbc02e38cd4ce62c73b8b05c638f15835e78902d7   x-hw-mss-secret: 5e7fe8869a12a87ea966d9edbc02e38cd4ce62c73b8b05c638f15835e78902d7
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CustomPlatformAuthConfig_H_
