
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectWorkHoursRequestBody_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectWorkHoursRequestBody_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListProjectWorkHoursRequestBody
    : public ModelBase
{
public:
    ListProjectWorkHoursRequestBody();
    virtual ~ListProjectWorkHoursRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectWorkHoursRequestBody members

    /// <summary>
    /// 查询的项目id列表
    /// </summary>

    std::vector<std::string>& getProjectIds();
    bool projectIdsIsSet() const;
    void unsetprojectIds();
    void setProjectIds(const std::vector<std::string>& value);

    /// <summary>
    /// 查询的用户id列表
    /// </summary>

    std::vector<std::string>& getUserIds();
    bool userIdsIsSet() const;
    void unsetuserIds();
    void setUserIds(const std::vector<std::string>& value);

    /// <summary>
    /// 工时类型，以逗号分隔,21:研发设计,22:后端开发,23:前端开发(Web),24:前端开发(小程序),25:前端开发(App),26:测试验证,27:缺陷修复,28:UI设计,29:会议,30:公共事务,31:培训,32:研究,33:其它,34:调休请假
    /// </summary>

    std::string getWorkHoursTypes() const;
    bool workHoursTypesIsSet() const;
    void unsetworkHoursTypes();
    void setWorkHoursTypes(const std::string& value);

    /// <summary>
    /// 工时日期，以逗号分隔，年-月-日
    /// </summary>

    std::string getWorkHoursDates() const;
    bool workHoursDatesIsSet() const;
    void unsetworkHoursDates();
    void setWorkHoursDates(const std::string& value);

    /// <summary>
    /// 工时开始日期，年-月-日
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 工时结束日期，年-月-日
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 偏移量,offset是limit的整数倍，limit&#x3D;10,offset&#x3D;0,10,20...
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示数量，每页最多显示100条
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::vector<std::string> projectIds_;
    bool projectIdsIsSet_;
    std::vector<std::string> userIds_;
    bool userIdsIsSet_;
    std::string workHoursTypes_;
    bool workHoursTypesIsSet_;
    std::string workHoursDates_;
    bool workHoursDatesIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListProjectWorkHoursRequestBody_H_
