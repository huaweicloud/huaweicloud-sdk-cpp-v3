
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RemoteObsResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RemoteObsResp_H_


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
/// 数据实际输出到OBS。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  RemoteObsResp
    : public ModelBase
{
public:
    RemoteObsResp();
    virtual ~RemoteObsResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RemoteObsResp members

    /// <summary>
    /// **参数解释**：数据实际输出到OBS的路径。 **取值范围**：不涉及。
    /// </summary>

    std::string getObsUrl() const;
    bool obsUrlIsSet() const;
    void unsetobsUrl();
    void setObsUrl(const std::string& value);


protected:
    std::string obsUrl_;
    bool obsUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RemoteObsResp_H_
