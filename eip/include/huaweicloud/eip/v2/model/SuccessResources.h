
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_SuccessResources_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_SuccessResources_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 带宽更新成功对象
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  SuccessResources
    : public ModelBase
{
public:
    SuccessResources();
    virtual ~SuccessResources();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SuccessResources members

    /// <summary>
    /// - 功能说明：更新成功的带宽id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_SuccessResources_H_
