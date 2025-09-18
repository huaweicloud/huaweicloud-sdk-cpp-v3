
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowProjectWorkHoursResponseBody_work_hours_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowProjectWorkHoursResponseBody_work_hours_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowProjectWorkHoursResponseBody_work_hours
    : public ModelBase
{
public:
    ShowProjectWorkHoursResponseBody_work_hours();
    virtual ~ShowProjectWorkHoursResponseBody_work_hours();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProjectWorkHoursResponseBody_work_hours members

    /// <summary>
    /// 项目名称
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// 用户昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 用户id
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 工时日期
    /// </summary>

    std::string getWorkDate() const;
    bool workDateIsSet() const;
    void unsetworkDate();
    void setWorkDate(const std::string& value);

    /// <summary>
    /// 工时花费
    /// </summary>

    std::string getWorkHoursNum() const;
    bool workHoursNumIsSet() const;
    void unsetworkHoursNum();
    void setWorkHoursNum(const std::string& value);

    /// <summary>
    /// 工时内容
    /// </summary>

    std::string getSummary() const;
    bool summaryIsSet() const;
    void unsetsummary();
    void setSummary(const std::string& value);

    /// <summary>
    /// 工时类型
    /// </summary>

    std::string getWorkHoursTypeName() const;
    bool workHoursTypeNameIsSet() const;
    void unsetworkHoursTypeName();
    void setWorkHoursTypeName(const std::string& value);

    /// <summary>
    /// 工作项id
    /// </summary>

    int32_t getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(int32_t value);

    /// <summary>
    /// 工作项类型
    /// </summary>

    std::string getIssueType() const;
    bool issueTypeIsSet() const;
    void unsetissueType();
    void setIssueType(const std::string& value);

    /// <summary>
    /// 工作项标题
    /// </summary>

    std::string getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const std::string& value);

    /// <summary>
    /// 工作项创建时间
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 工作项结束时间
    /// </summary>

    std::string getClosedTime() const;
    bool closedTimeIsSet() const;
    void unsetclosedTime();
    void setClosedTime(const std::string& value);

    /// <summary>
    /// 工时创建时间
    /// </summary>

    std::string getWorkHoursCreatedTime() const;
    bool workHoursCreatedTimeIsSet() const;
    void unsetworkHoursCreatedTime();
    void setWorkHoursCreatedTime(const std::string& value);

    /// <summary>
    /// 工时更新时间
    /// </summary>

    std::string getWorkHoursUpdatedTime() const;
    bool workHoursUpdatedTimeIsSet() const;
    void unsetworkHoursUpdatedTime();
    void setWorkHoursUpdatedTime(const std::string& value);


protected:
    std::string projectName_;
    bool projectNameIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string workDate_;
    bool workDateIsSet_;
    std::string workHoursNum_;
    bool workHoursNumIsSet_;
    std::string summary_;
    bool summaryIsSet_;
    std::string workHoursTypeName_;
    bool workHoursTypeNameIsSet_;
    int32_t issueId_;
    bool issueIdIsSet_;
    std::string issueType_;
    bool issueTypeIsSet_;
    std::string subject_;
    bool subjectIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::string closedTime_;
    bool closedTimeIsSet_;
    std::string workHoursCreatedTime_;
    bool workHoursCreatedTimeIsSet_;
    std::string workHoursUpdatedTime_;
    bool workHoursUpdatedTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowProjectWorkHoursResponseBody_work_hours_H_
