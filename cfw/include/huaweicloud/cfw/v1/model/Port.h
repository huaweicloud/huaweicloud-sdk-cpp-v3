
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_Port_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_Port_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CFW_V1_EXPORT  Port
    : public ModelBase
{
public:
    Port();
    virtual ~Port();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Port members

    /// <summary>
    /// **参数解释**： 端口类型，-1 Any，0 包含，1 排除 **取值范围**： 不涉及
    /// </summary>

    int32_t getPortType() const;
    bool portTypeIsSet() const;
    void unsetportType();
    void setPortType(int32_t value);

    /// <summary>
    /// **参数解释**： 端口 **取值范围**： 不涉及
    /// </summary>

    std::string getPorts() const;
    bool portsIsSet() const;
    void unsetports();
    void setPorts(const std::string& value);


protected:
    int32_t portType_;
    bool portTypeIsSet_;
    std::string ports_;
    bool portsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_Port_H_
