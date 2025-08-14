
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_InitialDesired_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_InitialDesired_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设备初始配置数据结构体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  InitialDesired
    : public ModelBase
{
public:
    InitialDesired();
    virtual ~InitialDesired();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InitialDesired members

    /// <summary>
    /// **参数说明**：设备的服务ID，在设备关联的产品模型中定义。 **取值范围**：长度不超过32，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合。
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// **参数说明**：设备初始配置属性数据，Json格式，里面是一个个键值对，每个键都是产品模型中属性的参数名(property_name)，目前如样例所示只支持一层结构；这里设置的属性值与产品中对应属性的默认值比对，如果不同，则将以该字段中设置的属性值为准写入到设备影子中；如果想要删除整个desired可以填写空object(例如\&quot;desired\&quot;:{})，如果想要删除某一个属性期望值可以将属性置位null(例如{\&quot;temperature\&quot;:null})
    /// </summary>

    Object getDesired() const;
    bool desiredIsSet() const;
    void unsetdesired();
    void setDesired(const Object& value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    Object desired_;
    bool desiredIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_InitialDesired_H_
