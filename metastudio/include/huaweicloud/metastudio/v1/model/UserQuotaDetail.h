
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UserQuotaDetail_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UserQuotaDetail_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配额信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UserQuotaDetail
    : public ModelBase
{
public:
    UserQuotaDetail();
    virtual ~UserQuotaDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserQuotaDetail members

    /// <summary>
    /// 分身数字人训练模型数量。-1表示无限制。
    /// </summary>

    int32_t getModelingCount2dModel() const;
    bool modelingCount2dModelIsSet() const;
    void unsetmodelingCount2dModel();
    void setModelingCount2dModel(int32_t value);

    /// <summary>
    /// 分身数字人flexus版训练模型数量。-1表示无限制。
    /// </summary>

    int32_t getModelingCount2dModelFlexus() const;
    bool modelingCount2dModelFlexusIsSet() const;
    void unsetmodelingCount2dModelFlexus();
    void setModelingCount2dModelFlexus(int32_t value);

    /// <summary>
    /// 分身数字人视频制作内容时间，单位分钟。-1表示无限制。
    /// </summary>

    int32_t getVideoTime2dModel() const;
    bool videoTime2dModelIsSet() const;
    void unsetvideoTime2dModel();
    void setVideoTime2dModel(int32_t value);

    /// <summary>
    /// 分身数字人视频制作flexus版内容时间，单位分钟。-1表示无限制。
    /// </summary>

    int32_t getVideoTimeFlexus2dModel() const;
    bool videoTimeFlexus2dModelIsSet() const;
    void unsetvideoTimeFlexus2dModel();
    void setVideoTimeFlexus2dModel(int32_t value);

    /// <summary>
    /// 声音克隆基础版。-1表示无限制。
    /// </summary>

    int32_t getVoiceCloneBasic() const;
    bool voiceCloneBasicIsSet() const;
    void unsetvoiceCloneBasic();
    void setVoiceCloneBasic(int32_t value);

    /// <summary>
    /// 声音克隆进阶版。-1表示无限制。
    /// </summary>

    int32_t getVoiceCloneMiddle() const;
    bool voiceCloneMiddleIsSet() const;
    void unsetvoiceCloneMiddle();
    void setVoiceCloneMiddle(int32_t value);

    /// <summary>
    /// 声音克隆高级版。-1表示无限制。
    /// </summary>

    int32_t getVoiceCloneAdvance() const;
    bool voiceCloneAdvanceIsSet() const;
    void unsetvoiceCloneAdvance();
    void setVoiceCloneAdvance(int32_t value);

    /// <summary>
    /// 声音克隆flexus版。-1表示无限制。
    /// </summary>

    int32_t getVoiceCloneFlexus() const;
    bool voiceCloneFlexusIsSet() const;
    void unsetvoiceCloneFlexus();
    void setVoiceCloneFlexus(int32_t value);


protected:
    int32_t modelingCount2dModel_;
    bool modelingCount2dModelIsSet_;
    int32_t modelingCount2dModelFlexus_;
    bool modelingCount2dModelFlexusIsSet_;
    int32_t videoTime2dModel_;
    bool videoTime2dModelIsSet_;
    int32_t videoTimeFlexus2dModel_;
    bool videoTimeFlexus2dModelIsSet_;
    int32_t voiceCloneBasic_;
    bool voiceCloneBasicIsSet_;
    int32_t voiceCloneMiddle_;
    bool voiceCloneMiddleIsSet_;
    int32_t voiceCloneAdvance_;
    bool voiceCloneAdvanceIsSet_;
    int32_t voiceCloneFlexus_;
    bool voiceCloneFlexusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UserQuotaDetail_H_
