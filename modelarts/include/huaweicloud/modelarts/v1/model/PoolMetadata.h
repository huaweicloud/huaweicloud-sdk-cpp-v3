
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetadata_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetadata_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PoolMetaAnnotations.h>
#include <huaweicloud/modelarts/v1/model/PoolMetaLabels.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源池的metadata信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolMetadata
    : public ModelBase
{
public:
    PoolMetadata();
    virtual ~PoolMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolMetadata members

    /// <summary>
    /// **参数解释**：资源池的ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池的创建时间。例如\&quot;2025-11-01T03:49:41Z\&quot;。 **取值范围**：不涉及。
    /// </summary>

    std::string getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PoolMetaLabels getLabels() const;
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const PoolMetaLabels& value);

    /// <summary>
    /// 
    /// </summary>

    PoolMetaAnnotations getAnnotations() const;
    bool annotationsIsSet() const;
    void unsetannotations();
    void setAnnotations(const PoolMetaAnnotations& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string creationTimestamp_;
    bool creationTimestampIsSet_;
    PoolMetaLabels labels_;
    bool labelsIsSet_;
    PoolMetaAnnotations annotations_;
    bool annotationsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolMetadata_H_
