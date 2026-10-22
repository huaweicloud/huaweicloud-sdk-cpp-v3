
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SmartRoutingEnable_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SmartRoutingEnable_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 智能分流开启字段。 **取值范围：** [true, false]。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  SmartRoutingEnable
    : public ModelBase
{
public:
    SmartRoutingEnable();
    virtual ~SmartRoutingEnable();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartRoutingEnable members


protected:

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SmartRoutingEnable_H_
