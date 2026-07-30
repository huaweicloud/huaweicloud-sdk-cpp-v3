
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ObsModelResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ObsModelResp_H_


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
/// **参数解释**：自定义训练作业产物obs输出信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ObsModelResp
    : public ModelBase
{
public:
    ObsModelResp();
    virtual ~ObsModelResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObsModelResp members

    /// <summary>
    /// **参数解释**：自定义训练作业产物保存的OBS地址，如：“obs://example/path”。 **取值范围**：不涉及。
    /// </summary>

    std::string getObsPath() const;
    bool obsPathIsSet() const;
    void unsetobsPath();
    void setObsPath(const std::string& value);

    /// <summary>
    /// **参数解释**：自定义训练作业产物保存的宿主机的路径，如：“/example/path”。 **取值范围**：不涉及。
    /// </summary>

    std::string getLocalPath() const;
    bool localPathIsSet() const;
    void unsetlocalPath();
    void setLocalPath(const std::string& value);


protected:
    std::string obsPath_;
    bool obsPathIsSet_;
    std::string localPath_;
    bool localPathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ObsModelResp_H_
