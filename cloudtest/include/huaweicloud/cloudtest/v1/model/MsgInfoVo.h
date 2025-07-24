
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MsgInfoVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MsgInfoVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  MsgInfoVo
    : public ModelBase
{
public:
    MsgInfoVo();
    virtual ~MsgInfoVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MsgInfoVo members

    /// <summary>
    /// 告警渠道
    /// </summary>

    std::string getAlertChannels() const;
    bool alertChannelsIsSet() const;
    void unsetalertChannels();
    void setAlertChannels(const std::string& value);

    /// <summary>
    /// 告警分组
    /// </summary>

    std::string getAlertGroups() const;
    bool alertGroupsIsSet() const;
    void unsetalertGroups();
    void setAlertGroups(const std::string& value);

    /// <summary>
    /// 告警级别
    /// </summary>

    int32_t getAlertLevel() const;
    bool alertLevelIsSet() const;
    void unsetalertLevel();
    void setAlertLevel(int32_t value);

    /// <summary>
    /// 总告警次数
    /// </summary>

    int32_t getAlertNum() const;
    bool alertNumIsSet() const;
    void unsetalertNum();
    void setAlertNum(int32_t value);

    /// <summary>
    /// 告警时间
    /// </summary>

    utility::datetime getAlertTime() const;
    bool alertTimeIsSet() const;
    void unsetalertTime();
    void setAlertTime(const utility::datetime& value);

    /// <summary>
    /// 告警类型
    /// </summary>

    std::string getAlertType() const;
    bool alertTypeIsSet() const;
    void unsetalertType();
    void setAlertType(const std::string& value);

    /// <summary>
    /// 告警内容
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// MsgInfo的id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 链接
    /// </summary>

    std::string getLink() const;
    bool linkIsSet() const;
    void unsetlink();
    void setLink(const std::string& value);

    /// <summary>
    /// 执行机区域
    /// </summary>

    std::string getLocationNames() const;
    bool locationNamesIsSet() const;
    void unsetlocationNames();
    void setLocationNames(const std::string& value);

    /// <summary>
    /// 发送告警类型
    /// </summary>

    std::string getSendAlertType() const;
    bool sendAlertTypeIsSet() const;
    void unsetsendAlertType();
    void setSendAlertType(const std::string& value);

    /// <summary>
    /// 子任务用例id
    /// </summary>

    std::string getSubTaskCaseId() const;
    bool subTaskCaseIdIsSet() const;
    void unsetsubTaskCaseId();
    void setSubTaskCaseId(const std::string& value);

    /// <summary>
    /// 子任务用例开始时间
    /// </summary>

    utility::datetime getSubTaskCaseStartTime() const;
    bool subTaskCaseStartTimeIsSet() const;
    void unsetsubTaskCaseStartTime();
    void setSubTaskCaseStartTime(const utility::datetime& value);

    /// <summary>
    /// 子任务id
    /// </summary>

    std::string getSubTaskId() const;
    bool subTaskIdIsSet() const;
    void unsetsubTaskId();
    void setSubTaskId(const std::string& value);

    /// <summary>
    /// 子任务开始时间
    /// </summary>

    utility::datetime getSubTaskStartTime() const;
    bool subTaskStartTimeIsSet() const;
    void unsetsubTaskStartTime();
    void setSubTaskStartTime(const utility::datetime& value);

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务名
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// 用例id
    /// </summary>

    std::string getTestCaseId() const;
    bool testCaseIdIsSet() const;
    void unsettestCaseId();
    void setTestCaseId(const std::string& value);

    /// <summary>
    /// 用例名称
    /// </summary>

    std::string getTestCaseName() const;
    bool testCaseNameIsSet() const;
    void unsettestCaseName();
    void setTestCaseName(const std::string& value);

    /// <summary>
    /// 测试套类型
    /// </summary>

    int32_t getTestSuiteType() const;
    bool testSuiteTypeIsSet() const;
    void unsettestSuiteType();
    void setTestSuiteType(int32_t value);


protected:
    std::string alertChannels_;
    bool alertChannelsIsSet_;
    std::string alertGroups_;
    bool alertGroupsIsSet_;
    int32_t alertLevel_;
    bool alertLevelIsSet_;
    int32_t alertNum_;
    bool alertNumIsSet_;
    utility::datetime alertTime_;
    bool alertTimeIsSet_;
    std::string alertType_;
    bool alertTypeIsSet_;
    std::string content_;
    bool contentIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string link_;
    bool linkIsSet_;
    std::string locationNames_;
    bool locationNamesIsSet_;
    std::string sendAlertType_;
    bool sendAlertTypeIsSet_;
    std::string subTaskCaseId_;
    bool subTaskCaseIdIsSet_;
    utility::datetime subTaskCaseStartTime_;
    bool subTaskCaseStartTimeIsSet_;
    std::string subTaskId_;
    bool subTaskIdIsSet_;
    utility::datetime subTaskStartTime_;
    bool subTaskStartTimeIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::string testCaseId_;
    bool testCaseIdIsSet_;
    std::string testCaseName_;
    bool testCaseNameIsSet_;
    int32_t testSuiteType_;
    bool testSuiteTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MsgInfoVo_H_
