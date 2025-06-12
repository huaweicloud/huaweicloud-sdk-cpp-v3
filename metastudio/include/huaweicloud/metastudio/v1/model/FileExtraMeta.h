
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_FileExtraMeta_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_FileExtraMeta_H_


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
/// 文件数据。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  FileExtraMeta
    : public ModelBase
{
public:
    FileExtraMeta();
    virtual ~FileExtraMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FileExtraMeta members

    /// <summary>
    /// 视频转码状态。 * WAITING：等待 * TRANSCODING：转码中 * FAILED：失败 * SUCCEEDED：成功
    /// </summary>

    std::string getVideoTranscodingStatus() const;
    bool videoTranscodingStatusIsSet() const;
    void unsetvideoTranscodingStatus();
    void setVideoTranscodingStatus(const std::string& value);


protected:
    std::string videoTranscodingStatus_;
    bool videoTranscodingStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_FileExtraMeta_H_
