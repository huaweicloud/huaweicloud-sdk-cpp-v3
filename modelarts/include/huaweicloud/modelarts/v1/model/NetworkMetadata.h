
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkMetadata_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkMetadata_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NetworkMetadataLabels.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/NetworkMetadataAnnotations.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NetworkMetadata
    : public ModelBase
{
public:
    NetworkMetadata();
    virtual ~NetworkMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NetworkMetadata members

    /// <summary>
    /// **参数解释**：网络资源的ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：网络的创建时间。例如\&quot;2025-11-01T03:49:41Z\&quot;。 **取值范围**：不涉及。
    /// </summary>

    std::string getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NetworkMetadataLabels getLabels() const;
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const NetworkMetadataLabels& value);

    /// <summary>
    /// 
    /// </summary>

    NetworkMetadataAnnotations getAnnotations() const;
    bool annotationsIsSet() const;
    void unsetannotations();
    void setAnnotations(const NetworkMetadataAnnotations& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string creationTimestamp_;
    bool creationTimestampIsSet_;
    NetworkMetadataLabels labels_;
    bool labelsIsSet_;
    NetworkMetadataAnnotations annotations_;
    bool annotationsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkMetadata_H_
