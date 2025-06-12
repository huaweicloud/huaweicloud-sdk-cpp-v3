
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateFileResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateFileResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateFileResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateFileResponse();
    virtual ~CreateFileResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFileResponse members

    /// <summary>
    /// 文件ID。
    /// </summary>

    std::string getFileId() const;
    bool fileIdIsSet() const;
    void unsetfileId();
    void setFileId(const std::string& value);

    /// <summary>
    /// 文件上传地址，有效期为24小时。 &gt; * [调用OBS的[“PUT上传”](https://support.huaweicloud.com/api-obs/obs_04_0080.html)接口上传文件。](tag:hc) &gt; * [调用OBS的[“PUT上传”](https://support.huaweicloud.com/intl/zh-cn/api-obs/obs_04_0080.html)接口上传文件。](tag:hk) &gt; * [调用OBS的“PUT上传”接口上传文件。](tag:cmcc) &gt; * 调用上述接口时，Content-MD5头必须填写，填写的值跟file_md5中的值相同，md5值获取详情请参考[使用Java代码生成文件内容的MD5值](metastudio_02_0052.xml)。 &gt; * 调用上述接口时，Content-Type头必须填写，填写的值根据不同的文件类型有所不同。     文件类型为gif，Content-Type填写image/gif     文件类型为jpeg、jpg，Content-Type填写image/jpeg     文件类型为png，Content-Type填写image/png     文件类型为mp4，Content-Type填写video/mp4     文件类型为mp3，Content-Type填写audio/mp3     文件类型为wav，Content-Type填写audio/wav     其余所有类型，Content-Type填写application/octet-stream
    /// </summary>

    std::string getUploadUrl() const;
    bool uploadUrlIsSet() const;
    void unsetuploadUrl();
    void setUploadUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string fileId_;
    bool fileIdIsSet_;
    std::string uploadUrl_;
    bool uploadUrlIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateFileResponse_H_
