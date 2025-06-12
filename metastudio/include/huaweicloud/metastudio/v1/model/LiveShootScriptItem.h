
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveShootScriptItem_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveShootScriptItem_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/TextConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/RelationProductInfo.h>
#include <huaweicloud/metastudio/v1/model/LiveAudioConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 直播话术配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LiveShootScriptItem
    : public ModelBase
{
public:
    LiveShootScriptItem();
    virtual ~LiveShootScriptItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LiveShootScriptItem members

    /// <summary>
    /// **参数解释**： 剧本序号。 **约束限制**： 不涉及
    /// </summary>

    int32_t getSequenceNo() const;
    bool sequenceNoIsSet() const;
    void unsetsequenceNo();
    void setSequenceNo(int32_t value);

    /// <summary>
    /// **参数解释**： 段落标题。 **约束限制**： 不涉及 **取值范围**： 字符长度0-256位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TextConfig getTextConfig() const;
    bool textConfigIsSet() const;
    void unsettextConfig();
    void setTextConfig(const TextConfig& value);

    /// <summary>
    /// 
    /// </summary>

    LiveAudioConfig getAudioConfig() const;
    bool audioConfigIsSet() const;
    void unsetaudioConfig();
    void setAudioConfig(const LiveAudioConfig& value);

    /// <summary>
    /// 
    /// </summary>

    RelationProductInfo getRelationProduct() const;
    bool relationProductIsSet() const;
    void unsetrelationProduct();
    void setRelationProduct(const RelationProductInfo& value);


protected:
    int32_t sequenceNo_;
    bool sequenceNoIsSet_;
    std::string title_;
    bool titleIsSet_;
    TextConfig textConfig_;
    bool textConfigIsSet_;
    LiveAudioConfig audioConfig_;
    bool audioConfigIsSet_;
    RelationProductInfo relationProduct_;
    bool relationProductIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveShootScriptItem_H_
