
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AffinityResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AffinityResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 节点亲和类型。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AffinityResponse
    : public ModelBase
{
public:
    AffinityResponse();
    virtual ~AffinityResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AffinityResponse members

    /// <summary>
    /// **参数解释：** 节点亲和类型。 **取值范围：** - AFFINITY：亲和。 - ANTI_AFFINITY：反亲和。
    /// </summary>

    std::string getAffinityType() const;
    bool affinityTypeIsSet() const;
    void unsetaffinityType();
    void setAffinityType(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否设置强亲和。 **取值范围：** - true：设置强亲和。 - false：不设置强亲和。
    /// </summary>

    bool isRequired() const;
    bool requiredIsSet() const;
    void unsetrequired();
    void setRequired(bool value);

    /// <summary>
    /// **参数解释：** 选择节点方式。 **取值范围：** IP。
    /// </summary>

    std::string getSelectionMode() const;
    bool selectionModeIsSet() const;
    void unsetselectionMode();
    void setSelectionMode(const std::string& value);

    /// <summary>
    /// **参数解释：** 通过上述方式选择的列表，长度不能超过20。
    /// </summary>

    std::map<std::string, std::string>& getTargets();
    bool targetsIsSet() const;
    void unsettargets();
    void setTargets(const std::map<std::string, std::string>& value);


protected:
    std::string affinityType_;
    bool affinityTypeIsSet_;
    bool required_;
    bool requiredIsSet_;
    std::string selectionMode_;
    bool selectionModeIsSet_;
    std::map<std::string, std::string> targets_;
    bool targetsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AffinityResponse_H_
