
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowControlOperateResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowControlOperateResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/ControlOperation.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowControlOperateResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowControlOperateResponse();
    virtual ~ShowControlOperateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowControlOperateResponse members

    /// <summary>
    /// 
    /// </summary>

    ControlOperation getControlOperation() const;
    bool controlOperationIsSet() const;
    void unsetcontrolOperation();
    void setControlOperation(const ControlOperation& value);


protected:
    ControlOperation controlOperation_;
    bool controlOperationIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowControlOperateResponse_H_
