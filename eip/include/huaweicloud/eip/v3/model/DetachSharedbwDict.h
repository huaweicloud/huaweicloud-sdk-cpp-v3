
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachSharedbwDict_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachSharedbwDict_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 弹性公网IP移出共享带宽后带宽的参数
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  DetachSharedbwDict
    : public ModelBase
{
public:
    DetachSharedbwDict();
    virtual ~DetachSharedbwDict();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetachSharedbwDict members

    /// <summary>
    /// - 功能说明：带宽名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// - 功能说明：带宽大小
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// - 功能说明：带宽计费模式
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string chargeMode_;
    bool chargeModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_DetachSharedbwDict_H_
