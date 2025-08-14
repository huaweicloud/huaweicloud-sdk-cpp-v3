
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDesireds_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDesireds_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/UpdateDesired.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改设备影子预期数据结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateDesireds
    : public ModelBase
{
public:
    UpdateDesireds();
    virtual ~UpdateDesireds();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDesireds members

    /// <summary>
    /// **参数说明**：设备影子期望值构体。
    /// </summary>

    std::vector<UpdateDesired>& getShadow();
    bool shadowIsSet() const;
    void unsetshadow();
    void setShadow(const std::vector<UpdateDesired>& value);


protected:
    std::vector<UpdateDesired> shadow_;
    bool shadowIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDesireds_H_
