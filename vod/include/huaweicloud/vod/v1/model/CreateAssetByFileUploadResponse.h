
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateAssetByFileUploadResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateAssetByFileUploadResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/File_addr.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_VOD_V1_EXPORT  CreateAssetByFileUploadResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateAssetByFileUploadResponse();
    virtual ~CreateAssetByFileUploadResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAssetByFileUploadResponse members

    /// <summary>
    /// 媒体ID 
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 视频上传URL 
    /// </summary>

    std::string getVideoUploadUrl() const;
    bool videoUploadUrlIsSet() const;
    void unsetvideoUploadUrl();
    void setVideoUploadUrl(const std::string& value);

    /// <summary>
    /// 封面上传地址 
    /// </summary>

    std::string getCoverUploadUrl() const;
    bool coverUploadUrlIsSet() const;
    void unsetcoverUploadUrl();
    void setCoverUploadUrl(const std::string& value);

    /// <summary>
    /// 字幕文件上传url数组 
    /// </summary>

    std::vector<std::string>& getSubtitleUploadUrls();
    bool subtitleUploadUrlsIsSet() const;
    void unsetsubtitleUploadUrls();
    void setSubtitleUploadUrls(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    File_addr getTarget() const;
    bool targetIsSet() const;
    void unsettarget();
    void setTarget(const File_addr& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string videoUploadUrl_;
    bool videoUploadUrlIsSet_;
    std::string coverUploadUrl_;
    bool coverUploadUrlIsSet_;
    std::vector<std::string> subtitleUploadUrls_;
    bool subtitleUploadUrlsIsSet_;
    File_addr target_;
    bool targetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CreateAssetByFileUploadResponse_H_
