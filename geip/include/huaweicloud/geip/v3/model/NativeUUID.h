
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_NativeUUID_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_NativeUUID_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源ID标识符。
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  NativeUUID
    : public ModelBase
{
public:
    NativeUUID();
    virtual ~NativeUUID();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NativeUUID members


protected:

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_NativeUUID_H_
