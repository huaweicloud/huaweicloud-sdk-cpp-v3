
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotConfigurationItem_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotConfigurationItem_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AutopilotConfigurationItem
    : public ModelBase
{
public:
    AutopilotConfigurationItem();
    virtual ~AutopilotConfigurationItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutopilotConfigurationItem members

    /// <summary>
    /// 组件配置项名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 组件配置项值
    /// </summary>

    Object getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const Object& value);


protected:
    std::string name_;
    bool nameIsSet_;
    Object value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotConfigurationItem_H_
