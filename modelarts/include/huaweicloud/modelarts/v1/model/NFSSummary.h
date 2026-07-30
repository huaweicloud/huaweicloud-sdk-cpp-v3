
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NFSSummary_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NFSSummary_H_


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
/// sfsTurbo弹性文件系统输出。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NFSSummary
    : public ModelBase
{
public:
    NFSSummary();
    virtual ~NFSSummary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NFSSummary members

    /// <summary>
    /// **参数解释**：sfsTurbo弹性文件系统url。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getNfsPath() const;
    bool nfsPathIsSet() const;
    void unsetnfsPath();
    void setNfsPath(const std::string& value);


protected:
    std::string nfsPath_;
    bool nfsPathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NFSSummary_H_
