
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ResizeFlavorRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ResizeFlavorRequest_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ResizeFlavorObject.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 变更实例规格时必填。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ResizeFlavorRequest
    : public ModelBase
{
public:
    ResizeFlavorRequest();
    virtual ~ResizeFlavorRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResizeFlavorRequest members

    /// <summary>
    /// 
    /// </summary>

    ResizeFlavorObject getResizeFlavor() const;
    bool resizeFlavorIsSet() const;
    void unsetresizeFlavor();
    void setResizeFlavor(const ResizeFlavorObject& value);


protected:
    ResizeFlavorObject resizeFlavor_;
    bool resizeFlavorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ResizeFlavorRequest_H_
