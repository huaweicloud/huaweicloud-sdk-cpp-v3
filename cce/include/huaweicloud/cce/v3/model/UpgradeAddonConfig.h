
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeAddonConfig_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeAddonConfig_H_


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
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeAddonConfig
    : public ModelBase
{
public:
    UpgradeAddonConfig();
    virtual ~UpgradeAddonConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeAddonConfig members

    /// <summary>
    /// 插件名称
    /// </summary>

    std::string getAddonTemplateName() const;
    bool addonTemplateNameIsSet() const;
    void unsetaddonTemplateName();
    void setAddonTemplateName(const std::string& value);

    /// <summary>
    /// 执行动作，当前升级场景支持操作为\&quot;patch\&quot;
    /// </summary>

    std::string getOperation() const;
    bool operationIsSet() const;
    void unsetoperation();
    void setOperation(const std::string& value);

    /// <summary>
    /// 目标插件版本号
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 插件参数列表，Key:Value格式
    /// </summary>

    Object getValues() const;
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const Object& value);


protected:
    std::string addonTemplateName_;
    bool addonTemplateNameIsSet_;
    std::string operation_;
    bool operationIsSet_;
    std::string version_;
    bool versionIsSet_;
    Object values_;
    bool valuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeAddonConfig_H_
