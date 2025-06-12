
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SubtitleFileDetail_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SubtitleFileDetail_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SubtitleFileDetail
    : public ModelBase
{
public:
    SubtitleFileDetail();
    virtual ~SubtitleFileDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubtitleFileDetail members

    /// <summary>
    /// 剧本序号。
    /// </summary>

    int32_t getSequenceNo() const;
    bool sequenceNoIsSet() const;
    void unsetsequenceNo();
    void setSequenceNo(int32_t value);

    /// <summary>
    /// 字幕文件生成状态。 * GENERATING：字幕文件生成中。 * GENERATE_SUCCEED：字幕文件生成成功。 * GENERATE_FAILED：字幕文件生成失败。
    /// </summary>

    std::string getSubtitleFileState() const;
    bool subtitleFileStateIsSet() const;
    void unsetsubtitleFileState();
    void setSubtitleFileState(const std::string& value);

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
    /// 字幕文件生成时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getGenerateTime() const;
    bool generateTimeIsSet() const;
    void unsetgenerateTime();
    void setGenerateTime(const std::string& value);


protected:
    int32_t sequenceNo_;
    bool sequenceNoIsSet_;
    std::string subtitleFileState_;
    bool subtitleFileStateIsSet_;
    std::string subtitleFileDownloadUrl_;
    bool subtitleFileDownloadUrlIsSet_;
    std::string subtitleFileUploadUrl_;
    bool subtitleFileUploadUrlIsSet_;
    std::string generateTime_;
    bool generateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SubtitleFileDetail_H_
