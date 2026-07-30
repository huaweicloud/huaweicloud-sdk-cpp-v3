
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerTaskLimit_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerTaskLimit_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 服务任务限制信息。 **约束限制：** 不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerTaskLimit
    : public ModelBase
{
public:
    ServerTaskLimit();
    virtual ~ServerTaskLimit();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerTaskLimit members

    /// <summary>
    /// **参数解释：** 单个服务任务限制总数。 **取值范围：** [0, 10000]。
    /// </summary>

    int32_t getMaxTask() const;
    bool maxTaskIsSet() const;
    void unsetmaxTask();
    void setMaxTask(int32_t value);


protected:
    int32_t maxTask_;
    bool maxTaskIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerTaskLimit_H_
