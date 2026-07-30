
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowScheduleUpdate_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowScheduleUpdate_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
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
/// schedule update struct
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowScheduleUpdate
    : public ModelBase
{
public:
    WorkflowScheduleUpdate();
    virtual ~WorkflowScheduleUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowScheduleUpdate members

    /// <summary>
    /// 内容。
    /// </summary>

    std::map<std::string, Object>& getContent();
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::map<std::string, Object>& value);

    /// <summary>
    /// 使能标志。
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);


protected:
    std::map<std::string, Object> content_;
    bool contentIsSet_;
    bool enable_;
    bool enableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowScheduleUpdate_H_
