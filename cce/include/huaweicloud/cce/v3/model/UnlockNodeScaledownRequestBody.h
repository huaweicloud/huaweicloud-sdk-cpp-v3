
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UnlockNodeScaledownRequestBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UnlockNodeScaledownRequestBody_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_CCE_V3_EXPORT  UnlockNodeScaledownRequestBody
    : public ModelBase
{
public:
    UnlockNodeScaledownRequestBody();
    virtual ~UnlockNodeScaledownRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnlockNodeScaledownRequestBody members

    /// <summary>
    /// **参数解释**： API版本，固定值“v3”。 **约束限制**： 不涉及 **取值范围**： 只能为固定值“v3”。 **默认取值**： 不涉及
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： API版本，固定值“List”。 **约束限制**： 不涉及 **取值范围**： 只能为固定值“v3”。 **默认取值**： 不涉及
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// **参数解释**： 需要关闭缩容保护的节点ID列表，节点ID获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。 **约束限制**： 不涉及
    /// </summary>

    std::vector<std::string>& getNodeList();
    bool nodeListIsSet() const;
    void unsetnodeList();
    void setNodeList(const std::vector<std::string>& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    std::vector<std::string> nodeList_;
    bool nodeListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UnlockNodeScaledownRequestBody_H_
