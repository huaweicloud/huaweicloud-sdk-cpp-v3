
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_EipBypassDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_EipBypassDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CFW_V1_EXPORT  EipBypassDto
    : public ModelBase
{
public:
    EipBypassDto();
    virtual ~EipBypassDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EipBypassDto members

    /// <summary>
    /// 防护操作类型，1表示一键关闭防护，0表示一键恢复防护
    /// </summary>

    int32_t getBypassOperation() const;
    bool bypassOperationIsSet() const;
    void unsetbypassOperation();
    void setBypassOperation(int32_t value);


protected:
    int32_t bypassOperation_;
    bool bypassOperationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_EipBypassDto_H_
