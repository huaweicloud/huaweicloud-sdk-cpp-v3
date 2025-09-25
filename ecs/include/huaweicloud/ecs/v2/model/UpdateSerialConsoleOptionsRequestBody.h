
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateSerialConsoleOptionsRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateSerialConsoleOptionsRequestBody_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/UpdateSerialConsoleOptionsOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateSerialConsoleOptionsRequestBody
    : public ModelBase
{
public:
    UpdateSerialConsoleOptionsRequestBody();
    virtual ~UpdateSerialConsoleOptionsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSerialConsoleOptionsRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateSerialConsoleOptionsOption getSerialConsoleOptions() const;
    bool serialConsoleOptionsIsSet() const;
    void unsetserialConsoleOptions();
    void setSerialConsoleOptions(const UpdateSerialConsoleOptionsOption& value);


protected:
    UpdateSerialConsoleOptionsOption serialConsoleOptions_;
    bool serialConsoleOptionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateSerialConsoleOptionsRequestBody_H_
