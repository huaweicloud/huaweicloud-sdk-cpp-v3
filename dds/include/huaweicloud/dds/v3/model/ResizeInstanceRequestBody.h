
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ResizeInstanceRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ResizeInstanceRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/ResizeInstanceOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ResizeInstanceRequestBody
    : public ModelBase
{
public:
    ResizeInstanceRequestBody();
    virtual ~ResizeInstanceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResizeInstanceRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ResizeInstanceOption getResize() const;
    bool resizeIsSet() const;
    void unsetresize();
    void setResize(const ResizeInstanceOption& value);

    /// <summary>
    /// **参数解释：** 变更包年包月实例规格时可指定，表示是否自动从账户中支付，此字段不影响自动续订的支付方式。 **约束限制：** 对于降低规格场景，该字段无效。 **取值范围：** 对于扩大规格场景： - true，表示自动从账户中支付。 - false，表示手动从账户中支付，默认为该方式。 **默认取值：** false。
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);

    /// <summary>
    /// **参数解释：** 标识是否进行强制规格变更操作。 **约束限制：** 集群的dds mongos节点和只读节点不支持强制规格变更。 **取值范围：** 对于规格变更： - true，表示执行强制规格变更。 - 不传此参数，表示执行正常规格变更。 **默认取值：** 不传此参数。
    /// </summary>

    bool isIsForceResize() const;
    bool isForceResizeIsSet() const;
    void unsetisForceResize();
    void setIsForceResize(bool value);


protected:
    ResizeInstanceOption resize_;
    bool resizeIsSet_;
    bool isAutoPay_;
    bool isAutoPayIsSet_;
    bool isForceResize_;
    bool isForceResizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ResizeInstanceRequestBody_H_
