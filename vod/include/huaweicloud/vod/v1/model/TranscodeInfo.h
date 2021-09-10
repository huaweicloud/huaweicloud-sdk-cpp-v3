
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_TranscodeInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_TranscodeInfo_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/Output.h>
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
/// 转码生成文件信息。  &gt; 仅当转码成功后才能查询到此信息，未转码、正在转码以及转码失败时，无此字段信息。
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  TranscodeInfo
    : public ModelBase
{
public:
    TranscodeInfo();
    virtual ~TranscodeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TranscodeInfo members

    /// <summary>
    /// 转码模板组名称。
    /// </summary>

    std::string getTemplateGroupName() const;
    bool templateGroupNameIsSet() const;
    void unsettemplateGroupName();
    void setTemplateGroupName(const std::string& value);

    /// <summary>
    /// 转码输出数组。 - HLS或DASH格式：此数组的成员个数为n+1，n为转码输出路数。 - MP4格式：此数组的成员个数为n，n为转码输出路数。
    /// </summary>

    std::vector<Output>& getOutput();
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const std::vector<Output>& value);

    /// <summary>
    /// 执行情况描述。
    /// </summary>

    std::string getExecDesc() const;
    bool execDescIsSet() const;
    void unsetexecDesc();
    void setExecDesc(const std::string& value);

    /// <summary>
    /// 转码状态。  取值如下： - UN_TRANSCODE：未转码 - WAITING_TRANSCODE：待转码 - TRANSCODING：转码中 - TRANSCODE_SUCCEED：转码成功 - TRANSCODE_FAILED：转码失败
    /// </summary>

    std::string getTranscodeStatus() const;
    bool transcodeStatusIsSet() const;
    void unsettranscodeStatus();
    void setTranscodeStatus(const std::string& value);


protected:
    std::string templateGroupName_;
    bool templateGroupNameIsSet_;
    std::vector<Output> output_;
    bool outputIsSet_;
    std::string execDesc_;
    bool execDescIsSet_;
    std::string transcodeStatus_;
    bool transcodeStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_TranscodeInfo_H_
