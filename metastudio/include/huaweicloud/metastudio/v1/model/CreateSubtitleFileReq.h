
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateSubtitleFileReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateSubtitleFileReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/CallBackConfig.h>
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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateSubtitleFileReq
    : public ModelBase
{
public:
    CreateSubtitleFileReq();
    virtual ~CreateSubtitleFileReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSubtitleFileReq members

    /// <summary>
    /// 剧本ID。
    /// </summary>

    std::string getScriptId() const;
    bool scriptIdIsSet() const;
    void unsetscriptId();
    void setScriptId(const std::string& value);

    /// <summary>
    /// 剧本序号。  &gt; * 剧本序号不填生成所有场景的字幕；如果需要生成单场景的字幕，需要填剧本序号。
    /// </summary>

    int32_t getSequenceNo() const;
    bool sequenceNoIsSet() const;
    void unsetsequenceNo();
    void setSequenceNo(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    CallBackConfig getCallbackConfig() const;
    bool callbackConfigIsSet() const;
    void unsetcallbackConfig();
    void setCallbackConfig(const CallBackConfig& value);


protected:
    std::string scriptId_;
    bool scriptIdIsSet_;
    int32_t sequenceNo_;
    bool sequenceNoIsSet_;
    CallBackConfig callbackConfig_;
    bool callbackConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateSubtitleFileReq_H_
