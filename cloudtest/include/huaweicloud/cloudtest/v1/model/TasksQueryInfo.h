
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TasksQueryInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TasksQueryInfo_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TasksQueryInfo
    : public ModelBase
{
public:
    TasksQueryInfo();
    virtual ~TasksQueryInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TasksQueryInfo members

    /// <summary>
    /// 测试任务URI集合
    /// </summary>

    std::vector<std::string>& getUris();
    bool urisIsSet() const;
    void unseturis();
    void setUris(const std::vector<std::string>& value);

    /// <summary>
    /// 关键字查询，任务名或编号
    /// </summary>

    std::string getKeyword() const;
    bool keywordIsSet() const;
    void unsetkeyword();
    void setKeyword(const std::string& value);

    /// <summary>
    /// 标签集合
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 是否是我的
    /// </summary>

    bool isOwn() const;
    bool ownIsSet() const;
    void unsetown();
    void setOwn(bool value);

    /// <summary>
    /// 服务类型
    /// </summary>

    int32_t getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(int32_t value);

    /// <summary>
    /// 发布版本号集合
    /// </summary>

    std::vector<std::string>& getReleaseDevList();
    bool releaseDevListIsSet() const;
    void unsetreleaseDevList();
    void setReleaseDevList(const std::vector<std::string>& value);

    /// <summary>
    /// 结果Code集合
    /// </summary>

    std::vector<std::string>& getResultCodes();
    bool resultCodesIsSet() const;
    void unsetresultCodes();
    void setResultCodes(const std::vector<std::string>& value);

    /// <summary>
    /// 状态Code集合
    /// </summary>

    std::vector<std::string>& getStatusCodes();
    bool statusCodesIsSet() const;
    void unsetstatusCodes();
    void setStatusCodes(const std::vector<std::string>& value);

    /// <summary>
    /// 责任人ID集合
    /// </summary>

    std::vector<std::string>& getOwnerIds();
    bool ownerIdsIsSet() const;
    void unsetownerIds();
    void setOwnerIds(const std::vector<std::string>& value);

    /// <summary>
    /// 执行者ID集合
    /// </summary>

    std::vector<std::string>& getExecutorIds();
    bool executorIdsIsSet() const;
    void unsetexecutorIds();
    void setExecutorIds(const std::vector<std::string>& value);

    /// <summary>
    /// 创建者ID集合
    /// </summary>

    std::vector<std::string>& getCreatorIds();
    bool creatorIdsIsSet() const;
    void unsetcreatorIds();
    void setCreatorIds(const std::vector<std::string>& value);

    /// <summary>
    /// 排序字段
    /// </summary>

    std::string getSortField() const;
    bool sortFieldIsSet() const;
    void unsetsortField();
    void setSortField(const std::string& value);

    /// <summary>
    /// 排序方式
    /// </summary>

    std::string getSortType() const;
    bool sortTypeIsSet() const;
    void unsetsortType();
    void setSortType(const std::string& value);

    /// <summary>
    /// 当前页数
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 每页条数
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 是否轮询查询
    /// </summary>

    bool isIsPollingQuery() const;
    bool isPollingQueryIsSet() const;
    void unsetisPollingQuery();
    void setIsPollingQuery(bool value);

    /// <summary>
    /// 是否获取关联用例列表
    /// </summary>

    bool isIsQueryAssociatedCaseList() const;
    bool isQueryAssociatedCaseListIsSet() const;
    void unsetisQueryAssociatedCaseList();
    void setIsQueryAssociatedCaseList(bool value);

    /// <summary>
    /// 计划开始时间过滤起始时间戳
    /// </summary>

    int64_t getPlanStartStartTimestamp() const;
    bool planStartStartTimestampIsSet() const;
    void unsetplanStartStartTimestamp();
    void setPlanStartStartTimestamp(int64_t value);

    /// <summary>
    /// 计划开始时间过滤结束时间戳
    /// </summary>

    int64_t getPlanStartEndTimestamp() const;
    bool planStartEndTimestampIsSet() const;
    void unsetplanStartEndTimestamp();
    void setPlanStartEndTimestamp(int64_t value);

    /// <summary>
    /// 计划结束时间过滤起始时间戳
    /// </summary>

    int64_t getPlanEndStartTimestamp() const;
    bool planEndStartTimestampIsSet() const;
    void unsetplanEndStartTimestamp();
    void setPlanEndStartTimestamp(int64_t value);

    /// <summary>
    /// 计划结束时间过滤结束时间戳
    /// </summary>

    int64_t getPlanEndEndTimestamp() const;
    bool planEndEndTimestampIsSet() const;
    void unsetplanEndEndTimestamp();
    void setPlanEndEndTimestamp(int64_t value);

    /// <summary>
    /// 测试套超期状态过滤，超期状态值分别为：无状态(null)、未超期(0)、即将超期(1)、已超期(2)、延期完成(3)、按期完成(4)
    /// </summary>

    std::vector<int32_t>& getExpirationStatusList();
    bool expirationStatusListIsSet() const;
    void unsetexpirationStatusList();
    void setExpirationStatusList(std::vector<int32_t> value);


protected:
    std::vector<std::string> uris_;
    bool urisIsSet_;
    std::string keyword_;
    bool keywordIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    bool own_;
    bool ownIsSet_;
    int32_t serviceType_;
    bool serviceTypeIsSet_;
    std::vector<std::string> releaseDevList_;
    bool releaseDevListIsSet_;
    std::vector<std::string> resultCodes_;
    bool resultCodesIsSet_;
    std::vector<std::string> statusCodes_;
    bool statusCodesIsSet_;
    std::vector<std::string> ownerIds_;
    bool ownerIdsIsSet_;
    std::vector<std::string> executorIds_;
    bool executorIdsIsSet_;
    std::vector<std::string> creatorIds_;
    bool creatorIdsIsSet_;
    std::string sortField_;
    bool sortFieldIsSet_;
    std::string sortType_;
    bool sortTypeIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    bool isPollingQuery_;
    bool isPollingQueryIsSet_;
    bool isQueryAssociatedCaseList_;
    bool isQueryAssociatedCaseListIsSet_;
    int64_t planStartStartTimestamp_;
    bool planStartStartTimestampIsSet_;
    int64_t planStartEndTimestamp_;
    bool planStartEndTimestampIsSet_;
    int64_t planEndStartTimestamp_;
    bool planEndStartTimestampIsSet_;
    int64_t planEndEndTimestamp_;
    bool planEndEndTimestampIsSet_;
    std::vector<int32_t> expirationStatusList_;
    bool expirationStatusListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TasksQueryInfo_H_
