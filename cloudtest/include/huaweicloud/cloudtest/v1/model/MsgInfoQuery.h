
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MsgInfoQuery_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MsgInfoQuery_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  MsgInfoQuery
    : public ModelBase
{
public:
    MsgInfoQuery();
    virtual ~MsgInfoQuery();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MsgInfoQuery members

    /// <summary>
    /// 告警类型
    /// </summary>

    std::vector<std::string>& getAlertTypes();
    bool alertTypesIsSet() const;
    void unsetalertTypes();
    void setAlertTypes(const std::vector<std::string>& value);

    /// <summary>
    /// 用例id
    /// </summary>

    std::string getCaseId() const;
    bool caseIdIsSet() const;
    void unsetcaseId();
    void setCaseId(const std::string& value);

    /// <summary>
    /// 用例名
    /// </summary>

    std::string getCaseName() const;
    bool caseNameIsSet() const;
    void unsetcaseName();
    void setCaseName(const std::string& value);

    /// <summary>
    /// 结束时间
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPageNum() const;
    bool pageNumIsSet() const;
    void unsetpageNum();
    void setPageNum(int32_t value);

    /// <summary>
    /// 分页大小
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 发送类型
    /// </summary>

    std::string getSendAlertType() const;
    bool sendAlertTypeIsSet() const;
    void unsetsendAlertType();
    void setSendAlertType(const std::string& value);

    /// <summary>
    /// 开始时间
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

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


protected:
    std::vector<std::string> alertTypes_;
    bool alertTypesIsSet_;
    std::string caseId_;
    bool caseIdIsSet_;
    std::string caseName_;
    bool caseNameIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    int32_t pageNum_;
    bool pageNumIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string sendAlertType_;
    bool sendAlertTypeIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MsgInfoQuery_H_
