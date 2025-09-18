
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AddIssueWorkHoursRequestBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AddIssueWorkHoursRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  AddIssueWorkHoursRequestBody
    : public ModelBase
{
public:
    AddIssueWorkHoursRequestBody();
    virtual ~AddIssueWorkHoursRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddIssueWorkHoursRequestBody members

    /// <summary>
    /// 工时开始日期，年-月-日
    /// </summary>

    std::string getStartDate() const;
    bool startDateIsSet() const;
    void unsetstartDate();
    void setStartDate(const std::string& value);

    /// <summary>
    /// 工时结束日期，年-月-日
    /// </summary>

    std::string getDueDate() const;
    bool dueDateIsSet() const;
    void unsetdueDate();
    void setDueDate(const std::string& value);

    /// <summary>
    /// 工时总数（若工时日期范围包含多天，单日工时将设为“工时总数/天数”）
    /// </summary>

    double getWorkHours() const;
    bool workHoursIsSet() const;
    void unsetworkHours();
    void setWorkHours(double value);

    /// <summary>
    /// 工时类型id（项目预设工时类型id及名称对照：21:研发设计，22:后端开发，23:前端开发(Web)，24:前端开发(小程序)，25:前端开发(App)， 26:测试验证，27:缺陷修复，28:UI设计，29:会议，30:公共事务，31:培训，32:研究，33:其它，34:调休请假）
    /// </summary>

    int32_t getWorkHoursTypeId() const;
    bool workHoursTypeIdIsSet() const;
    void unsetworkHoursTypeId();
    void setWorkHoursTypeId(int32_t value);


protected:
    std::string startDate_;
    bool startDateIsSet_;
    std::string dueDate_;
    bool dueDateIsSet_;
    double workHours_;
    bool workHoursIsSet_;
    int32_t workHoursTypeId_;
    bool workHoursTypeIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AddIssueWorkHoursRequestBody_H_
