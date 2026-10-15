
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListAsyncJobsRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListAsyncJobsRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ListAsyncJobsRequest
    : public ModelBase
{
public:
    ListAsyncJobsRequest();
    virtual ~ListAsyncJobsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAsyncJobsRequest members

    /// <summary>
    /// **参数解释**：  请求语言类型。  **约束限制**：  不涉及。  **取值范围**：  - en-us：英文 - zh-cn：中文  **默认取值**：  en-us
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**：  批量异步创建的任务ID，用于按任务ID筛选查询结果。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getAsyncJobId() const;
    bool asyncJobIdIsSet() const;
    void unsetasyncJobId();
    void setAsyncJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：  批量异步创建的任务状态，用于按任务状态筛选查询结果。  **约束限制**：  不涉及。  **取值范围**：  - ASYNC_JOB_VALIDATING：批量异步任务参数校验中 - ASYNC_JOB_VALIDATE_FAILED：批量异步任务参数校验失败 - AUTO_PARAM_VALIDATE_SUCCESS：批量异步任务参数校验成功 - COMMIT_SUCCESS：批量异步任务提交成功  **默认取值**：  不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  批量异步创建任务的租户名，用于按租户名筛选查询结果。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// **参数解释**：  批量异步创建任务的用户名，用于按用户名筛选查询结果。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**：  偏移量，表示查询该偏移量后面的记录，用于分页查询。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**：  查询返回记录的数量限制，用于分页查询时控制每页返回的数据条数。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**：  返回结果按该关键字排序，指定批量异步任务列表的排序依据。  **约束限制**：  不涉及。  **取值范围**：  - create_time：按创建时间排序  **默认取值**：  create_time
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// **参数解释**：  排序方向，指定返回结果按升序或降序排列。  **约束限制**：  不涉及。  **取值范围**：  - desc：降序 - asc：升序  **默认取值**：  desc
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string asyncJobId_;
    bool asyncJobIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAsyncJobsRequest& dereference_from_shared_ptr(std::shared_ptr<ListAsyncJobsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListAsyncJobsRequest_H_
