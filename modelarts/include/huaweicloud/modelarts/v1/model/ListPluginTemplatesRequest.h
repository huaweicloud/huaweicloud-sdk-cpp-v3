
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListPluginTemplatesRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListPluginTemplatesRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListPluginTemplatesRequest
    : public ModelBase
{
public:
    ListPluginTemplatesRequest();
    virtual ~ListPluginTemplatesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPluginTemplatesRequest members

    /// <summary>
    /// **参数解释**：指定的插件名称，填写则查询指定名称的插件。 **约束限制**：不涉及 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// **参数解释**：指定的资源池名称，填写则查询符合资源池安装条件的插件列表。 **约束限制**：不涉及 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolName() const;
    bool poolNameIsSet() const;
    void unsetpoolName();
    void setPoolName(const std::string& value);


protected:
    std::string templateName_;
    bool templateNameIsSet_;
    std::string poolName_;
    bool poolNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPluginTemplatesRequest& dereference_from_shared_ptr(std::shared_ptr<ListPluginTemplatesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListPluginTemplatesRequest_H_
