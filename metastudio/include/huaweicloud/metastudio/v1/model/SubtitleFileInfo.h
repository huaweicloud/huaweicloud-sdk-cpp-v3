
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SubtitleFileInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SubtitleFileInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SubtitleFileInfo
    : public ModelBase
{
public:
    SubtitleFileInfo();
    virtual ~SubtitleFileInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubtitleFileInfo members

    /// <summary>
    /// 字幕文件下载链接。
    /// </summary>

    std::string getSubtitleFileDownloadUrl() const;
    bool subtitleFileDownloadUrlIsSet() const;
    void unsetsubtitleFileDownloadUrl();
    void setSubtitleFileDownloadUrl(const std::string& value);

    /// <summary>
    /// 字幕文件上传链接。
    /// </summary>

    std::string getSubtitleFileUploadUrl() const;
    bool subtitleFileUploadUrlIsSet() const;
    void unsetsubtitleFileUploadUrl();
    void setSubtitleFileUploadUrl(const std::string& value);

    /// <summary>
    /// 字幕文件生成状态。 * GENERATING：字幕文件生成中。 * GENERATE_SUCCEED：字幕文件生成成功。 * GENERATE_FAILED：字幕文件生成失败。
    /// </summary>

    std::string getSubtitleFileState() const;
    bool subtitleFileStateIsSet() const;
    void unsetsubtitleFileState();
    void setSubtitleFileState(const std::string& value);

    /// <summary>
    /// 字幕文件生成任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    std::string subtitleFileDownloadUrl_;
    bool subtitleFileDownloadUrlIsSet_;
    std::string subtitleFileUploadUrl_;
    bool subtitleFileUploadUrlIsSet_;
    std::string subtitleFileState_;
    bool subtitleFileStateIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SubtitleFileInfo_H_
