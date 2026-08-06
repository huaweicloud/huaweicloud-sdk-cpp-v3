
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SubTaskQueryByPageParams_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SubTaskQueryByPageParams_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  SubTaskQueryByPageParams
    : public ModelBase
{
public:
    SubTaskQueryByPageParams();
    virtual ~SubTaskQueryByPageParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubTaskQueryByPageParams members

    /// <summary>
    /// 
    /// </summary>

    bool isMore() const;
    bool moreIsSet() const;
    void unsetmore();
    void setMore(bool value);

    /// <summary>
    /// 未设置发布版本
    /// </summary>

    bool isNotSetReleaseDev() const;
    bool notSetReleaseDevIsSet() const;
    void unsetnotSetReleaseDev();
    void setNotSetReleaseDev(bool value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPageNumber() const;
    bool pageNumberIsSet() const;
    void unsetpageNumber();
    void setPageNumber(int32_t value);

    /// <summary>
    /// 每页大小
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 父任务id
    /// </summary>

    std::string getParentSubTaskId() const;
    bool parentSubTaskIdIsSet() const;
    void unsetparentSubTaskId();
    void setParentSubTaskId(const std::string& value);

    /// <summary>
    /// 测试计划id
    /// </summary>

    std::string getPlanId() const;
    bool planIdIsSet() const;
    void unsetplanId();
    void setPlanId(const std::string& value);

    /// <summary>
    /// -| 发布的版本，空数组：代表所有未设置的； null或者无此字段，搜索所有版本 有内容：搜索所有版本
    /// </summary>

    std::vector<std::string>& getReleaseDev();
    bool releaseDevIsSet() const;
    void unsetreleaseDev();
    void setReleaseDev(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<int32_t>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(std::vector<int32_t> value);

    /// <summary>
    /// 任务执行第一次时间
    /// </summary>

    int64_t getStartTimeBegin() const;
    bool startTimeBeginIsSet() const;
    void unsetstartTimeBegin();
    void setStartTimeBegin(int64_t value);

    /// <summary>
    /// 任务执行最后一次时间
    /// </summary>

    int64_t getStartTimeEnd() const;
    bool startTimeEndIsSet() const;
    void unsetstartTimeEnd();
    void setStartTimeEnd(int64_t value);

    /// <summary>
    /// 状态
    /// </summary>

    int32_t getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(int32_t value);

    /// <summary>
    /// 子任务状态列表
    /// </summary>

    std::vector<int32_t>& getStates();
    bool statesIsSet() const;
    void unsetstates();
    void setStates(std::vector<int32_t> value);

    /// <summary>
    /// 子任务任务id
    /// </summary>

    std::string getSubTaskId() const;
    bool subTaskIdIsSet() const;
    void unsetsubTaskId();
    void setSubTaskId(const std::string& value);

    /// <summary>
    /// 测试套类型
    /// </summary>

    int32_t getSuiteType() const;
    bool suiteTypeIsSet() const;
    void unsetsuiteType();
    void setSuiteType(int32_t value);

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务类型，1&#x3D;拨测，2&#x3D;冒烟
    /// </summary>

    std::string getTaskTypeId() const;
    bool taskTypeIdIsSet() const;
    void unsettaskTypeId();
    void setTaskTypeId(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getTestServiceId() const;
    bool testServiceIdIsSet() const;
    void unsettestServiceId();
    void setTestServiceId(const std::string& value);


protected:
    bool more_;
    bool moreIsSet_;
    bool notSetReleaseDev_;
    bool notSetReleaseDevIsSet_;
    int32_t pageNumber_;
    bool pageNumberIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string parentSubTaskId_;
    bool parentSubTaskIdIsSet_;
    std::string planId_;
    bool planIdIsSet_;
    std::vector<std::string> releaseDev_;
    bool releaseDevIsSet_;
    std::vector<int32_t> results_;
    bool resultsIsSet_;
    int64_t startTimeBegin_;
    bool startTimeBeginIsSet_;
    int64_t startTimeEnd_;
    bool startTimeEndIsSet_;
    int32_t state_;
    bool stateIsSet_;
    std::vector<int32_t> states_;
    bool statesIsSet_;
    std::string subTaskId_;
    bool subTaskIdIsSet_;
    int32_t suiteType_;
    bool suiteTypeIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskTypeId_;
    bool taskTypeIdIsSet_;
    std::string testServiceId_;
    bool testServiceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SubTaskQueryByPageParams_H_
