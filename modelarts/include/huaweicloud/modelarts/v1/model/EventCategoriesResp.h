
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EventCategoriesResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EventCategoriesResp_H_


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
/// 事件类型
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  EventCategoriesResp
    : public ModelBase
{
public:
    EventCategoriesResp();
    virtual ~EventCategoriesResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EventCategoriesResp members

    /// <summary>
    /// **参数解释**：事件类型id。 **取值范围**：枚举值如下： - JobStarted：作业开始 - JobCompleted：作业结束 - JobFailed：作业失败 - JobTerminated：作业终止 - JobRestarted：作业重启 - JobHanged：作业疑似卡死 - JobPreempted：作业抢占
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：事件类型名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：事件类型描述。 **取值范围**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：是否通知。 **取值范围**： - true：通知 - false：不通知
    /// </summary>

    bool isNotification() const;
    bool notificationIsSet() const;
    void unsetnotification();
    void setNotification(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool notification_;
    bool notificationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EventCategoriesResp_H_
