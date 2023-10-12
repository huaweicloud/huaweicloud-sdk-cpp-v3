
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetTempAuthorityRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetTempAuthorityRequest_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// Request Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ShowAssetTempAuthorityRequest
    : public ModelBase
{
public:
    ShowAssetTempAuthorityRequest();
    virtual ~ShowAssetTempAuthorityRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAssetTempAuthorityRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。 
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 分段上传时调用OBS接口的HTTP方法，具体操作需要的HTTP方法请参考OBS的接口文档。  - 初始化上传任务：POST - 上传段：PUT - 合并段：POST - 取消段：DELETE - 列举已上传段：GET
    /// </summary>

    std::string getHttpVerb() const;
    bool httpVerbIsSet() const;
    void unsethttpVerb();
    void setHttpVerb(const std::string& value);

    /// <summary>
    /// 桶名。  调用[创建媒资：上传方式](https://support.huaweicloud.com/api-vod/vod_04_0196.html)接口中返回的响应体中的target字段获得的bucket值。
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// 对象名。  调用[创建媒资：上传方式](https://support.huaweicloud.com/api-vod/vod_04_0196.html)接口中返回的响应体中的target字段获得的object值。
    /// </summary>

    std::string getObjectKey() const;
    bool objectKeyIsSet() const;
    void unsetobjectKey();
    void setObjectKey(const std::string& value);

    /// <summary>
    /// 文件类型对应的content-type，如MP4对应video/mp4。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 上传段时每段的MD5。
    /// </summary>

    std::string getContentMd5() const;
    bool contentMd5IsSet() const;
    void unsetcontentMd5();
    void setContentMd5(const std::string& value);

    /// <summary>
    /// 每一个上传任务的id，是OBS进行初始段后OBS返回的。
    /// </summary>

    std::string getUploadId() const;
    bool uploadIdIsSet() const;
    void unsetuploadId();
    void setUploadId(const std::string& value);

    /// <summary>
    /// 上传段时每一段的id。  取值范围：[1,10000]。
    /// </summary>

    int32_t getPartNumber() const;
    bool partNumberIsSet() const;
    void unsetpartNumber();
    void setPartNumber(int32_t value);


protected:
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string httpVerb_;
    bool httpVerbIsSet_;
    std::string bucket_;
    bool bucketIsSet_;
    std::string objectKey_;
    bool objectKeyIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;
    std::string contentMd5_;
    bool contentMd5IsSet_;
    std::string uploadId_;
    bool uploadIdIsSet_;
    int32_t partNumber_;
    bool partNumberIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAssetTempAuthorityRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAssetTempAuthorityRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowAssetTempAuthorityRequest_H_
