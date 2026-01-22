
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ReportProfileVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ReportProfileVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CFW_V1_EXPORT  ReportProfileVO
    : public ModelBase
{
public:
    ReportProfileVO();
    virtual ~ReportProfileVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReportProfileVO members

    /// <summary>
    /// **参数解释**： 模板ID **取值范围**： 不涉及
    /// </summary>

    std::string getProfileId() const;
    bool profileIdIsSet() const;
    void unsetprofileId();
    void setProfileId(const std::string& value);

    /// <summary>
    /// **参数解释**： 模板名称 **取值范围**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 模板类型 **取值范围**： daily 日报 weekly 周报 custom 自定义报告
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**： 启用状态 **取值范围**： 不涉及
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// **参数解释**： 最新的报告的ID **取值范围**： 不涉及
    /// </summary>

    std::string getReportId() const;
    bool reportIdIsSet() const;
    void unsetreportId();
    void setReportId(const std::string& value);

    /// <summary>
    /// **参数解释**： 最新的报告的生成时间，毫秒级时间戳 **取值范围**： 不涉及
    /// </summary>

    int64_t getLastTime() const;
    bool lastTimeIsSet() const;
    void unsetlastTime();
    void setLastTime(int64_t value);


protected:
    std::string profileId_;
    bool profileIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string category_;
    bool categoryIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::string reportId_;
    bool reportIdIsSet_;
    int64_t lastTime_;
    bool lastTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ReportProfileVO_H_
