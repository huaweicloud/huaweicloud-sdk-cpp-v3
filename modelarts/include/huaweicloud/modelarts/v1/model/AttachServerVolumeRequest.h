
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AttachServerVolumeRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AttachServerVolumeRequest_H_


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
/// Lite Server服务器挂载磁盘ID
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AttachServerVolumeRequest
    : public ModelBase
{
public:
    AttachServerVolumeRequest();
    virtual ~AttachServerVolumeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachServerVolumeRequest members

    /// <summary>
    /// **参数解释**：待挂载磁盘的磁盘ID。 **约束限制**：不涉及。 **取值范围**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。 **默认取值**：不涉及。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


protected:
    std::string volumeId_;
    bool volumeIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AttachServerVolumeRequest_H_
