
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateAudioRecordConfigReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateAudioRecordConfigReq_H_


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
/// 修改语音录制配置请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateAudioRecordConfigReq
    : public ModelBase
{
public:
    UpdateAudioRecordConfigReq();
    virtual ~UpdateAudioRecordConfigReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAudioRecordConfigReq members

    /// <summary>
    /// **参数解释**： 接收语音录制的obs桶名。 **约束限制**： 不涉及 **取值范围**： 字符长度1-64 **默认取值**： 不涉及
    /// </summary>

    std::string getObsBucketName() const;
    bool obsBucketNameIsSet() const;
    void unsetobsBucketName();
    void setObsBucketName(const std::string& value);

    /// <summary>
    /// **参数解释**： 接收语音录制的obs终端节点。 **约束限制**： 需要为obs合法终端节点。 **取值范围**： 字符长度1-64 **默认取值**： 不涉及
    /// </summary>

    std::string getObsEndpoint() const;
    bool obsEndpointIsSet() const;
    void unsetobsEndpoint();
    void setObsEndpoint(const std::string& value);

    /// <summary>
    /// 语音录制开关
    /// </summary>

    bool isEnableAudioRecord() const;
    bool enableAudioRecordIsSet() const;
    void unsetenableAudioRecord();
    void setEnableAudioRecord(bool value);


protected:
    std::string obsBucketName_;
    bool obsBucketNameIsSet_;
    std::string obsEndpoint_;
    bool obsEndpointIsSet_;
    bool enableAudioRecord_;
    bool enableAudioRecordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateAudioRecordConfigReq_H_
