
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeMetadata_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeMetadata_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/NodeVOAnnotations.h>
#include <huaweicloud/modelarts/v1/model/NodeLabels.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：节点metadata信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeMetadata
    : public ModelBase
{
public:
    NodeMetadata();
    virtual ~NodeMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeMetadata members

    /// <summary>
    /// **参数解释**：节点名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：创建时间。 **取值范围**：不涉及。
    /// </summary>

    std::string getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeLabels getLabels() const;
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const NodeLabels& value);

    /// <summary>
    /// 
    /// </summary>

    NodeVOAnnotations getAnnotations() const;
    bool annotationsIsSet() const;
    void unsetannotations();
    void setAnnotations(const NodeVOAnnotations& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string creationTimestamp_;
    bool creationTimestampIsSet_;
    NodeLabels labels_;
    bool labelsIsSet_;
    NodeVOAnnotations annotations_;
    bool annotationsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeMetadata_H_
