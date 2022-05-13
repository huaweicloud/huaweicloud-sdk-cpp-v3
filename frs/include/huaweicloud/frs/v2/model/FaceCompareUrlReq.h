
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceCompareUrlReq_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceCompareUrlReq_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  FaceCompareUrlReq
    : public ModelBase
{
public:
    FaceCompareUrlReq();
    virtual ~FaceCompareUrlReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// FaceCompareUrlReq members

    /// <summary>
    /// [图片的URL路径，目前仅支持华为云上OBS的URL，且人脸识别服务有权限读取该OBS桶的数据。 开通读取权限的操作请参见[服务授权](https://support.huaweicloud.com/api-face/face_02_0006.html)。  与image1_file、image1_base64三选一 ](tag:hc) [图片的URL路径，目前仅支持华为云上OBS的URL，且人脸识别服务有权限读取该OBS桶的数据。 开通读取权限的操作请参见[服务授权](https://support.huaweicloud.com/intl/zh-cn/api-face/face_02_0006.html)。  与image1_file、image1_base64三选一 ](tag:hk)
    /// </summary>

    std::string getImage1Url() const;
    bool image1UrlIsSet() const;
    void unsetimage1Url();
    void setImage1Url(const std::string& value);

    /// <summary>
    /// [图片的URL路径，目前仅支持华为云上OBS的URL，且人脸识别服务有权限读取该OBS桶的数据。 开通读取权限的操作请参见[服务授权](https://support.huaweicloud.com/api-face/face_02_0006.html)。  与image2_file、image2_base64三选一](tag:hc) [图片的URL路径，目前仅支持华为云上OBS的URL，且人脸识别服务有权限读取该OBS桶的数据。 开通读取权限的操作请参见[服务授权](https://support.huaweicloud.com/intl/zh-cn/api-face/face_02_0006.html)。  与image2_file、image2_base64三选一](tag:hk)
    /// </summary>

    std::string getImage2Url() const;
    bool image2UrlIsSet() const;
    void unsetimage2Url();
    void setImage2Url(const std::string& value);


protected:
    std::string image1Url_;
    bool image1UrlIsSet_;
    std::string image2Url_;
    bool image2UrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceCompareUrlReq_H_
