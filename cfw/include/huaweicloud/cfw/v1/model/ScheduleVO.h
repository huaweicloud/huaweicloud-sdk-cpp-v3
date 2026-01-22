
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ScheduleVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ScheduleVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/ScheduleVO_absolute.h>
#include <huaweicloud/cfw/v1/model/ScheduleVO_periodic.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ScheduleVO
    : public ModelBase
{
public:
    ScheduleVO();
    virtual ~ScheduleVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScheduleVO members

    /// <summary>
    /// **参数解释**： 时间表ID **取值范围**： 不涉及
    /// </summary>

    std::string getScheduleId() const;
    bool scheduleIdIsSet() const;
    void unsetscheduleId();
    void setScheduleId(const std::string& value);

    /// <summary>
    /// **参数解释**： 时间表名称 **取值范围**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 时间表描述 **取值范围**： 不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 引用次数 **取值范围**： 不涉及
    /// </summary>

    int32_t getRefCount() const;
    bool refCountIsSet() const;
    void unsetrefCount();
    void setRefCount(int32_t value);

    /// <summary>
    /// **参数解释**： 周期计划 **取值范围**： 不涉及
    /// </summary>

    std::vector<ScheduleVO_periodic>& getPeriodic();
    bool periodicIsSet() const;
    void unsetperiodic();
    void setPeriodic(const std::vector<ScheduleVO_periodic>& value);

    /// <summary>
    /// 
    /// </summary>

    ScheduleVO_absolute getAbsolute() const;
    bool absoluteIsSet() const;
    void unsetabsolute();
    void setAbsolute(const ScheduleVO_absolute& value);


protected:
    std::string scheduleId_;
    bool scheduleIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t refCount_;
    bool refCountIsSet_;
    std::vector<ScheduleVO_periodic> periodic_;
    bool periodicIsSet_;
    ScheduleVO_absolute absolute_;
    bool absoluteIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ScheduleVO_H_
