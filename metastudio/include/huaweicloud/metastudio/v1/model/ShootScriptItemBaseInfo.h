
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShootScriptItemBaseInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShootScriptItemBaseInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShootScriptItemBaseInfo
    : public ModelBase
{
public:
    ShootScriptItemBaseInfo();
    virtual ~ShootScriptItemBaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShootScriptItemBaseInfo members

    /// <summary>
    /// **参数解释**： 剧本序号。 **约束限制**： 同一个剧本序号不重复。 **默认取值**： 不涉及。
    /// </summary>

    int32_t getSequenceNo() const;
    bool sequenceNoIsSet() const;
    void unsetsequenceNo();
    void setSequenceNo(int32_t value);


protected:
    int32_t sequenceNo_;
    bool sequenceNoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShootScriptItemBaseInfo_H_
