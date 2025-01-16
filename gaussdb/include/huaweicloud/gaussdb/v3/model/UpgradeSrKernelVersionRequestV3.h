
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeSrKernelVersionRequestV3_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeSrKernelVersionRequestV3_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// StarRocks内核版本升级请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpgradeSrKernelVersionRequestV3
    : public ModelBase
{
public:
    UpgradeSrKernelVersionRequestV3();
    virtual ~UpgradeSrKernelVersionRequestV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeSrKernelVersionRequestV3 members

    /// <summary>
    /// **参数解释**： 是否延时升级。  **约束限制**： 不涉及  **取值范围**： - true - false  **默认取值**： false。
    /// </summary>

    std::string getDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否跳过升级校验。  **约束限制**： 不涉及  **取值范围**： - true - false  **默认取值**： false。
    /// </summary>

    std::string getIsSkipValidate() const;
    bool isSkipValidateIsSet() const;
    void unsetisSkipValidate();
    void setIsSkipValidate(const std::string& value);


protected:
    std::string delay_;
    bool delayIsSet_;
    std::string isSkipValidate_;
    bool isSkipValidateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeSrKernelVersionRequestV3_H_
