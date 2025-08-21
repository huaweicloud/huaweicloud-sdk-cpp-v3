
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_Eip_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_Eip_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/ChangedVO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  Eip
    : public ModelBase
{
public:
    Eip();
    virtual ~Eip();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Eip members

    /// <summary>
    /// 
    /// </summary>

    ChangedVO getProtected() const;
    bool protectedIsSet() const;
    void unsetprotected();
    void setProtected(const ChangedVO& value);

    /// <summary>
    /// **参数解释**： EIP数量 **取值范围**： 不涉及
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    ChangedVO protected_;
    bool protectedIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_Eip_H_
