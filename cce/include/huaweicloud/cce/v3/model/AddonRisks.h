
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonRisks_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonRisks_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点风险来源
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AddonRisks
    : public ModelBase
{
public:
    AddonRisks();
    virtual ~AddonRisks();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddonRisks members

    /// <summary>
    /// 插件模板名称
    /// </summary>

    std::string getAddonTemplateName() const;
    bool addonTemplateNameIsSet() const;
    void unsetaddonTemplateName();
    void setAddonTemplateName(const std::string& value);

    /// <summary>
    /// 插件别名
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);


protected:
    std::string addonTemplateName_;
    bool addonTemplateNameIsSet_;
    std::string alias_;
    bool aliasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonRisks_H_
