
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginSpec_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginSpec_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Template.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 插件实例的具体信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PluginSpec
    : public ModelBase
{
public:
    PluginSpec();
    virtual ~PluginSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PluginSpec members

    /// <summary>
    /// 
    /// </summary>

    Template getTemplate() const;
    bool templateIsSet() const;
    void unsettemplate();
    void setTemplate(const Template& value);


protected:
    Template template_;
    bool templateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginSpec_H_
