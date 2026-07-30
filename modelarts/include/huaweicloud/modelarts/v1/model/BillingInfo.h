
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BillingInfo_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BillingInfo_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BillingInfo
    : public ModelBase
{
public:
    BillingInfo();
    virtual ~BillingInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BillingInfo members

    /// <summary>
    /// **参数解释**：计费码。 **取值范围**：不涉及。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// **参数解释**：计费单元。 **取值范围**：不涉及。
    /// </summary>

    int32_t getUnitNum() const;
    bool unitNumIsSet() const;
    void unsetunitNum();
    void setUnitNum(int32_t value);


protected:
    std::string code_;
    bool codeIsSet_;
    int32_t unitNum_;
    bool unitNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BillingInfo_H_
