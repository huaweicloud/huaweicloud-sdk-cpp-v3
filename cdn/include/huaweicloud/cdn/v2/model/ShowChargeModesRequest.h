
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowChargeModesRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowChargeModesRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ShowChargeModesRequest
    : public ModelBase
{
public:
    ShowChargeModesRequest();
    virtual ~ShowChargeModesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowChargeModesRequest members

    /// <summary>
    /// **参数解释：** 加速类型 **约束限制：** 不涉及 **取值范围：** - base：基础加速 **默认取值：** 不涉及
    /// </summary>

    std::string getProductType() const;
    bool productTypeIsSet() const;
    void unsetproductType();
    void setProductType(const std::string& value);

    /// <summary>
    /// **参数解释：** 查询计费模式状态 **约束限制：** 不涉及 **取值范围：** - active：已生效 - upcoming：待生效 **默认取值：** active：已生效
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务范围 **约束限制：** 不涉及 **取值范围：** - mainland_china：中国大陆 - outside_mainland_china：中国大陆境外 **默认取值：** mainland_china：中国大陆
    /// </summary>

    std::string getServiceArea() const;
    bool serviceAreaIsSet() const;
    void unsetserviceArea();
    void setServiceArea(const std::string& value);


protected:
    std::string productType_;
    bool productTypeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string serviceArea_;
    bool serviceAreaIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowChargeModesRequest& dereference_from_shared_ptr(std::shared_ptr<ShowChargeModesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowChargeModesRequest_H_
