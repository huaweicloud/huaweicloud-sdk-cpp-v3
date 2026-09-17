
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Tracker_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Tracker_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项类型
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  Tracker
    : public ModelBase
{
public:
    Tracker();
    virtual ~Tracker();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Tracker members

    /// <summary>
    /// **参数解释：** 类型名称。 **取值范围：** - Task。 - Bug。 - Epic。 - Feature。 - Story。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 类型id。 **取值范围：** 2（任务/Task） 3（缺陷/Bug） 5（Epic） 6（Feature） 7（Story）
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_Tracker_H_
