
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetTempAuthorityResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetTempAuthorityResponse_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ShowAssetTempAuthorityResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAssetTempAuthorityResponse();
    virtual ~ShowAssetTempAuthorityResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowAssetTempAuthorityResponse members

    /// <summary>
    /// 带授权签名字符串的URL。具体调用示例请参见[示例2：媒资分段上传（20M以上）](https://support.huaweicloud.com/api-vod/vod_04_0216.html)。  示例：https://{obs_domain}/{bucket}?AWSAccessKeyId&#x3D;{AccessKeyID}&amp;Expires&#x3D;{ExpiresValue}&amp;Signature&#x3D;{Signature}
    /// </summary>

    std::string getSignStr() const;
    bool signStrIsSet() const;
    void unsetsignStr();
    void setSignStr(const std::string& value);


protected:
    std::string signStr_;
    bool signStrIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetTempAuthorityResponse_H_
