
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateBandwidthOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateBandwidthOption_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  TemplateBandwidthOption
    : public ModelBase
{
public:
    TemplateBandwidthOption();
    virtual ~TemplateBandwidthOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateBandwidthOption members

    /// <summary>
    /// 带宽类型
    /// </summary>

    std::string getShareType() const;
    bool shareTypeIsSet() const;
    void unsetshareType();
    void setShareType(const std::string& value);

    /// <summary>
    /// 带宽大小
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 计费类型
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 带宽ID，创建WHOLE类型带宽的弹性IP时可以指定之前的共享带宽创建
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string shareType_;
    bool shareTypeIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string chargeMode_;
    bool chargeModeIsSet_;
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateBandwidthOption_H_
