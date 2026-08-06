
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SubTaskCaseQuery_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SubTaskCaseQuery_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  SubTaskCaseQuery
    : public ModelBase
{
public:
    SubTaskCaseQuery();
    virtual ~SubTaskCaseQuery();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubTaskCaseQuery members

    /// <summary>
    /// 用例创建者
    /// </summary>

    std::string getCreateUser() const;
    bool createUserIsSet() const;
    void unsetcreateUser();
    void setCreateUser(const std::string& value);

    /// <summary>
    /// 用例结束时间
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getKeyWord() const;
    bool keyWordIsSet() const;
    void unsetkeyWord();
    void setKeyWord(const std::string& value);

    /// <summary>
    /// 执行机区域ID
    /// </summary>

    std::string getLocationId() const;
    bool locationIdIsSet() const;
    void unsetlocationId();
    void setLocationId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    bool isMore() const;
    bool moreIsSet() const;
    void unsetmore();
    void setMore(bool value);

    /// <summary>
    /// 分页时页码
    /// </summary>

    int32_t getPageNum() const;
    bool pageNumIsSet() const;
    void unsetpageNum();
    void setPageNum(int32_t value);

    /// <summary>
    /// 分页时每页大小
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 告警策略选择失败后重试时有值
    /// </summary>

    std::string getPid() const;
    bool pidIsSet() const;
    void unsetpid();
    void setPid(const std::string& value);

    /// <summary>
    /// cloudTest任务执行结果列表
    /// </summary>

    std::vector<int32_t>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(std::vector<int32_t> value);

    /// <summary>
    /// 排序字段
    /// </summary>

    std::string getSortBy() const;
    bool sortByIsSet() const;
    void unsetsortBy();
    void setSortBy(const std::string& value);

    /// <summary>
    /// 用例所处的阶段 0：前置， 1：测试用例 2：后置用例
    /// </summary>

    int32_t getStage() const;
    bool stageIsSet() const;
    void unsetstage();
    void setStage(int32_t value);

    /// <summary>
    /// 用例开始时间
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 子任务ID列表
    /// </summary>

    std::vector<std::string>& getSubtaskIds();
    bool subtaskIdsIsSet() const;
    void unsetsubtaskIds();
    void setSubtaskIds(const std::vector<std::string>& value);

    /// <summary>
    /// 子任务ID
    /// </summary>

    std::string getSubtaskId() const;
    bool subtaskIdIsSet() const;
    void unsetsubtaskId();
    void setSubtaskId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getSuiteType() const;
    bool suiteTypeIsSet() const;
    void unsetsuiteType();
    void setSuiteType(int32_t value);

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务ID列表
    /// </summary>

    std::vector<std::string>& getTaskIds();
    bool taskIdsIsSet() const;
    void unsettaskIds();
    void setTaskIds(const std::vector<std::string>& value);

    /// <summary>
    /// 任务类型
    /// </summary>

    std::string getTaskTypeId() const;
    bool taskTypeIdIsSet() const;
    void unsettaskTypeId();
    void setTaskTypeId(const std::string& value);

    /// <summary>
    /// 服务ID
    /// </summary>

    std::string getTestServiceId() const;
    bool testServiceIdIsSet() const;
    void unsettestServiceId();
    void setTestServiceId(const std::string& value);

    /// <summary>
    /// 用例ID
    /// </summary>

    std::string getTestcaseId() const;
    bool testcaseIdIsSet() const;
    void unsettestcaseId();
    void setTestcaseId(const std::string& value);


protected:
    std::string createUser_;
    bool createUserIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string keyWord_;
    bool keyWordIsSet_;
    std::string locationId_;
    bool locationIdIsSet_;
    bool more_;
    bool moreIsSet_;
    int32_t pageNum_;
    bool pageNumIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string pid_;
    bool pidIsSet_;
    std::vector<int32_t> results_;
    bool resultsIsSet_;
    std::string sortBy_;
    bool sortByIsSet_;
    int32_t stage_;
    bool stageIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::vector<std::string> subtaskIds_;
    bool subtaskIdsIsSet_;
    std::string subtaskId_;
    bool subtaskIdIsSet_;
    int32_t suiteType_;
    bool suiteTypeIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::vector<std::string> taskIds_;
    bool taskIdsIsSet_;
    std::string taskTypeId_;
    bool taskTypeIdIsSet_;
    std::string testServiceId_;
    bool testServiceIdIsSet_;
    std::string testcaseId_;
    bool testcaseIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SubTaskCaseQuery_H_
