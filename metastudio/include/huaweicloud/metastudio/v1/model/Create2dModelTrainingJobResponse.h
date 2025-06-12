
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Create2dModelTrainingJobResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Create2dModelTrainingJobResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  Create2dModelTrainingJobResponse
    : public ModelBase, public HttpResponse
{
public:
    Create2dModelTrainingJobResponse();
    virtual ~Create2dModelTrainingJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Create2dModelTrainingJobResponse members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 分身数字人训练视频上传URL。该url在文件上传成功后失效，只能上传一次。注意：视频必须是1080p或者4K分辨率（横、竖屏皆可）的mp4格式，视频长度须大于等于3分钟且小于等于10分钟，否则审核会不通过。 &gt; 通过该地址上传时，需设置content-type为application/octet-stream
    /// </summary>

    std::vector<std::string>& getTrainingVideoUploadUrl();
    bool trainingVideoUploadUrlIsSet() const;
    void unsettrainingVideoUploadUrl();
    void setTrainingVideoUploadUrl(const std::vector<std::string>& value);

    /// <summary>
    /// 分身数字人训练视频上传URL。该url在文件上传成功后失效，只能上传一次。注意：视频必须是1080p或者4K分辨率（横、竖屏皆可）的mp4格式，视频长度须大于等于3分钟且小于等于10分钟，否则审核会不通过。 &gt; 通过该地址上传时，需设置content-type为application/octet-stream
    /// </summary>

    std::vector<std::string>& getActionVideoUploadUrl();
    bool actionVideoUploadUrlIsSet() const;
    void unsetactionVideoUploadUrl();
    void setActionVideoUploadUrl(const std::vector<std::string>& value);

    /// <summary>
    /// 音频数据训练上传URL。该url在文件上传成功后失效，只能上传一次 &gt; 通过该地址上传时，需设置content-type为application/zip。
    /// </summary>

    std::string getAudioUploadUrl() const;
    bool audioUploadUrlIsSet() const;
    void unsetaudioUploadUrl();
    void setAudioUploadUrl(const std::string& value);

    /// <summary>
    /// 模型封面上传URL。该URL在文件上传成功后失效，只能上传一次。 &gt; 通过该地址上传时，需设置content-type为application/octet-stream
    /// </summary>

    std::string getCoverUploadUrl() const;
    bool coverUploadUrlIsSet() const;
    void unsetcoverUploadUrl();
    void setCoverUploadUrl(const std::string& value);

    /// <summary>
    /// 身份证正面照片上传URL。该URL在文件上传成功后失效，只能上传一次。注意：非NA用户必须上传，否则审核会不通过。 &gt; 通过该地址上传时，需设置content-type为application/octet-stream
    /// </summary>

    std::string getIdCardImage1UploadUrl() const;
    bool idCardImage1UploadUrlIsSet() const;
    void unsetidCardImage1UploadUrl();
    void setIdCardImage1UploadUrl(const std::string& value);

    /// <summary>
    /// 身份证反面照片上传URL。该URL在文件上传成功后失效，只能上传一次。注意：非NA用户必须上传，否则审核会不通过。 &gt; 通过该地址上传时，需设置content-type为application/octet-stream
    /// </summary>

    std::string getIdCardImage2UploadUrl() const;
    bool idCardImage2UploadUrlIsSet() const;
    void unsetidCardImage2UploadUrl();
    void setIdCardImage2UploadUrl(const std::string& value);

    /// <summary>
    /// 授权书上传URL。该URL在文件上传成功后失效，只能上传一次。注意：非NA用户必须上传，否则审核会不通过。 &gt; 通过该地址上传时，需设置content-type为application/octet-stream
    /// </summary>

    std::string getGrantFileUploadUrl() const;
    bool grantFileUploadUrlIsSet() const;
    void unsetgrantFileUploadUrl();
    void setGrantFileUploadUrl(const std::string& value);

    /// <summary>
    /// 美白前图片上传url。 &gt; 通过该地址上传时，需设置content-type为application/octet-stream
    /// </summary>

    std::string getPreBeautyImageUploadUrl() const;
    bool preBeautyImageUploadUrlIsSet() const;
    void unsetpreBeautyImageUploadUrl();
    void setPreBeautyImageUploadUrl(const std::string& value);

    /// <summary>
    /// 美白后图片上传url。 &gt; 通过该地址上传时，需设置content-type为application/octet-stream
    /// </summary>

    std::string getPostBeautyImageUploadUrl() const;
    bool postBeautyImageUploadUrlIsSet() const;
    void unsetpostBeautyImageUploadUrl();
    void setPostBeautyImageUploadUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::vector<std::string> trainingVideoUploadUrl_;
    bool trainingVideoUploadUrlIsSet_;
    std::vector<std::string> actionVideoUploadUrl_;
    bool actionVideoUploadUrlIsSet_;
    std::string audioUploadUrl_;
    bool audioUploadUrlIsSet_;
    std::string coverUploadUrl_;
    bool coverUploadUrlIsSet_;
    std::string idCardImage1UploadUrl_;
    bool idCardImage1UploadUrlIsSet_;
    std::string idCardImage2UploadUrl_;
    bool idCardImage2UploadUrlIsSet_;
    std::string grantFileUploadUrl_;
    bool grantFileUploadUrlIsSet_;
    std::string preBeautyImageUploadUrl_;
    bool preBeautyImageUploadUrlIsSet_;
    std::string postBeautyImageUploadUrl_;
    bool postBeautyImageUploadUrlIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Create2dModelTrainingJobResponse_H_
