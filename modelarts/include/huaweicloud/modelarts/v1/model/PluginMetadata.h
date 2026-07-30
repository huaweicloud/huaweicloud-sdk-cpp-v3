
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginMetadata_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginMetadata_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 插件实例的metadata信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PluginMetadata
    : public ModelBase
{
public:
    PluginMetadata();
    virtual ~PluginMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PluginMetadata members

    /// <summary>
    /// **参数解释**： 插件实例的名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建时间。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string creationTimestamp_;
    bool creationTimestampIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginMetadata_H_
