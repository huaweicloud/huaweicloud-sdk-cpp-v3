
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkMetadataAnnotations_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkMetadataAnnotations_H_


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
/// 网络资源metadata信息中的annotations字段信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NetworkMetadataAnnotations
    : public ModelBase
{
public:
    NetworkMetadataAnnotations();
    virtual ~NetworkMetadataAnnotations();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NetworkMetadataAnnotations members

    /// <summary>
    /// **参数解释**：网络的描述信息。 **取值范围**：不能包含字符!&lt;&gt;&#x3D;&amp;\&quot;&#39;。
    /// </summary>

    std::string getOsModelartsDescription() const;
    bool osModelartsDescriptionIsSet() const;
    void unsetosModelartsDescription();
    void setOsModelartsDescription(const std::string& value);


protected:
    std::string osModelartsDescription_;
    bool osModelartsDescriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkMetadataAnnotations_H_
