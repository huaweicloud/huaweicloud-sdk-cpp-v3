
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShootScriptItem_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShootScriptItem_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/ShootScript.h>
#include <huaweicloud/metastudio/v1/model/ShootScriptItemBaseInfo.h>
#include <huaweicloud/metastudio/v1/model/SubtitleFiles.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 剧本参数配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShootScriptItem
    : public ModelBase
{
public:
    ShootScriptItem();
    virtual ~ShootScriptItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShootScriptItem members

    /// <summary>
    /// **参数解释**： 剧本序号。 **约束限制**： 同一个剧本序号不重复。 **默认取值**： 不涉及。
    /// </summary>

    int32_t getSequenceNo() const;
    bool sequenceNoIsSet() const;
    void unsetsequenceNo();
    void setSequenceNo(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ShootScript getShootScript() const;
    bool shootScriptIsSet() const;
    void unsetshootScript();
    void setShootScript(const ShootScript& value);

    /// <summary>
    /// 
    /// </summary>

    SubtitleFiles getSubtitleFileInfo() const;
    bool subtitleFileInfoIsSet() const;
    void unsetsubtitleFileInfo();
    void setSubtitleFileInfo(const SubtitleFiles& value);


protected:
    int32_t sequenceNo_;
    bool sequenceNoIsSet_;
    ShootScript shootScript_;
    bool shootScriptIsSet_;
    SubtitleFiles subtitleFileInfo_;
    bool subtitleFileInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShootScriptItem_H_
