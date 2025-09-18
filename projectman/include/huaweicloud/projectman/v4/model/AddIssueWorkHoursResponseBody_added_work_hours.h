
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AddIssueWorkHoursResponseBody_added_work_hours_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AddIssueWorkHoursResponseBody_added_work_hours_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  AddIssueWorkHoursResponseBody_added_work_hours
    : public ModelBase
{
public:
    AddIssueWorkHoursResponseBody_added_work_hours();
    virtual ~AddIssueWorkHoursResponseBody_added_work_hours();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddIssueWorkHoursResponseBody_added_work_hours members

    /// <summary>
    /// 工时id
    /// </summary>

    std::string getWorkHoursId() const;
    bool workHoursIdIsSet() const;
    void unsetworkHoursId();
    void setWorkHoursId(const std::string& value);

    /// <summary>
    /// 工作项id
    /// </summary>

    int32_t getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(int32_t value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 用户昵称
    /// </summary>

    std::string getUserNickName() const;
    bool userNickNameIsSet() const;
    void unsetuserNickName();
    void setUserNickName(const std::string& value);

    /// <summary>
    /// 工时日期
    /// </summary>

    std::string getWorkDate() const;
    bool workDateIsSet() const;
    void unsetworkDate();
    void setWorkDate(const std::string& value);

    /// <summary>
    /// 工时数
    /// </summary>

    std::string getWorkHours() const;
    bool workHoursIsSet() const;
    void unsetworkHours();
    void setWorkHours(const std::string& value);

    /// <summary>
    /// 工时类型名称
    /// </summary>

    std::string getWorkHoursTypeName() const;
    bool workHoursTypeNameIsSet() const;
    void unsetworkHoursTypeName();
    void setWorkHoursTypeName(const std::string& value);


protected:
    std::string workHoursId_;
    bool workHoursIdIsSet_;
    int32_t issueId_;
    bool issueIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string userNickName_;
    bool userNickNameIsSet_;
    std::string workDate_;
    bool workDateIsSet_;
    std::string workHours_;
    bool workHoursIsSet_;
    std::string workHoursTypeName_;
    bool workHoursTypeNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AddIssueWorkHoursResponseBody_added_work_hours_H_
