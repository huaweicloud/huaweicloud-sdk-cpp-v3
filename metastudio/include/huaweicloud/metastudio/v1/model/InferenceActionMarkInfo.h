
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InferenceActionMarkInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InferenceActionMarkInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/ActionMarkItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 分身数字人推理预处理动作标记信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  InferenceActionMarkInfo
    : public ModelBase
{
public:
    InferenceActionMarkInfo();
    virtual ~InferenceActionMarkInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InferenceActionMarkInfo members

    /// <summary>
    /// 动作列表。
    /// </summary>

    std::vector<ActionMarkItem>& getActionInfo();
    bool actionInfoIsSet() const;
    void unsetactionInfo();
    void setActionInfo(const std::vector<ActionMarkItem>& value);


protected:
    std::vector<ActionMarkItem> actionInfo_;
    bool actionInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InferenceActionMarkInfo_H_
