
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_UpdateInstance_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_UpdateInstance_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotdm/v5/model/OperateWindow.h>
#include <string>
#include <huaweicloud/iotdm/v5/model/UpdateAccessInfo.h>
#include <huaweicloud/iotdm/v5/model/UpdateForwardingInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  UpdateInstance
    : public ModelBase
{
public:
    UpdateInstance();
    virtual ~UpdateInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInstance members

    /// <summary>
    /// **参数说明**：实例名称。 **取值范围**：由中文字符，英文字母、数字及“_”、“-”组成，且长度为[1-64]个字符。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数说明**：设备接入实例的描述信息。 **取值范围**：长度不超过256，只允许中文、字母、数字、以及_，,.。、&amp;-等字符的组合 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OperateWindow getOperateWindow() const;
    bool operateWindowIsSet() const;
    void unsetoperateWindow();
    void setOperateWindow(const OperateWindow& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateForwardingInfo getForwardingInfo() const;
    bool forwardingInfoIsSet() const;
    void unsetforwardingInfo();
    void setForwardingInfo(const UpdateForwardingInfo& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateAccessInfo getAccessInfo() const;
    bool accessInfoIsSet() const;
    void unsetaccessInfo();
    void setAccessInfo(const UpdateAccessInfo& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    OperateWindow operateWindow_;
    bool operateWindowIsSet_;
    UpdateForwardingInfo forwardingInfo_;
    bool forwardingInfoIsSet_;
    UpdateAccessInfo accessInfo_;
    bool accessInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_UpdateInstance_H_
