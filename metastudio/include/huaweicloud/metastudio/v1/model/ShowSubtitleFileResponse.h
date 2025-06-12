
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowSubtitleFileResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowSubtitleFileResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/SubtitleFileDetail.h>
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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowSubtitleFileResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSubtitleFileResponse();
    virtual ~ShowSubtitleFileResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSubtitleFileResponse members

    /// <summary>
    /// 字幕文件所有任务状态。 * GENERATING：字幕文件任务生成中。 * GENERATED：字幕文件生成结束。
    /// </summary>

    std::string getJobState() const;
    bool jobStateIsSet() const;
    void unsetjobState();
    void setJobState(const std::string& value);

    /// <summary>
    /// 字幕文件列表。
    /// </summary>

    std::vector<SubtitleFileDetail>& getSubtitleFileInfo();
    bool subtitleFileInfoIsSet() const;
    void unsetsubtitleFileInfo();
    void setSubtitleFileInfo(const std::vector<SubtitleFileDetail>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string jobState_;
    bool jobStateIsSet_;
    std::vector<SubtitleFileDetail> subtitleFileInfo_;
    bool subtitleFileInfoIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowSubtitleFileResponse_H_
