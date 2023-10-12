
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_PostMultiModalAssessmentReq_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_PostMultiModalAssessmentReq_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/sis/v1/model/MultiModalConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  PostMultiModalAssessmentReq
    : public ModelBase
{
public:
    PostMultiModalAssessmentReq();
    virtual ~PostMultiModalAssessmentReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostMultiModalAssessmentReq members

    /// <summary>
    /// 
    /// </summary>

    MultiModalConfig getConfig() const;
    bool configIsSet() const;
    void unsetconfig();
    void setConfig(const MultiModalConfig& value);

    /// <summary>
    /// 视频数据，Base64编码，要求Base64编码后大小不超过10M。  注意评测接口使用次数定义为：每8秒的视频作为一次，不足8秒按一次计算。例如传入4秒或8秒的视频，都算作使用一次，传入9秒的视频则视为调用2次。
    /// </summary>

    std::string getVideoData() const;
    bool videoDataIsSet() const;
    void unsetvideoData();
    void setVideoData(const std::string& value);

    /// <summary>
    /// 被评估视频和语音数据对应的试题文本，长度不可超过256字节。
    /// </summary>

    std::string getRefText() const;
    bool refTextIsSet() const;
    void unsetrefText();
    void setRefText(const std::string& value);


protected:
    MultiModalConfig config_;
    bool configIsSet_;
    std::string videoData_;
    bool videoDataIsSet_;
    std::string refText_;
    bool refTextIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_PostMultiModalAssessmentReq_H_
