
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ScheduleInfoDTO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ScheduleInfoDTO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/ScheduleInfoDTO_absolute.h>
#include <huaweicloud/cfw/v1/model/ScheduleInfoDTO_periodic.h>
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
class HUAWEICLOUD_CFW_V1_EXPORT  ScheduleInfoDTO
    : public ModelBase
{
public:
    ScheduleInfoDTO();
    virtual ~ScheduleInfoDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScheduleInfoDTO members

    /// <summary>
    /// **参数解释**： 防护对象ID，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)获得，通过返回值中的data.records.protect_objects.object_id（.表示各对象之间层级的区分）获得，注意type为0的为互联网边界防护对象id，type为1的为VPC边界防护对象id。 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 时间表名称 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 时间表描述 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 周期计划 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<ScheduleInfoDTO_periodic>& getPeriodic();
    bool periodicIsSet() const;
    void unsetperiodic();
    void setPeriodic(const std::vector<ScheduleInfoDTO_periodic>& value);

    /// <summary>
    /// 
    /// </summary>

    ScheduleInfoDTO_absolute getAbsolute() const;
    bool absoluteIsSet() const;
    void unsetabsolute();
    void setAbsolute(const ScheduleInfoDTO_absolute& value);


protected:
    std::string objectId_;
    bool objectIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<ScheduleInfoDTO_periodic> periodic_;
    bool periodicIsSet_;
    ScheduleInfoDTO_absolute absolute_;
    bool absoluteIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ScheduleInfoDTO_H_
