
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryTaskAssignCasesInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryTaskAssignCasesInfo_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  QueryTaskAssignCasesInfo
    : public ModelBase
{
public:
    QueryTaskAssignCasesInfo();
    virtual ~QueryTaskAssignCasesInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryTaskAssignCasesInfo members

    /// <summary>
    /// 测试用例在任务中的阶段
    /// </summary>

    int32_t getStage() const;
    bool stageIsSet() const;
    void unsetstage();
    void setStage(int32_t value);

    /// <summary>
    /// 处理人过滤数组
    /// </summary>

    std::vector<std::string>& getOwners();
    bool ownersIsSet() const;
    void unsetowners();
    void setOwners(const std::vector<std::string>& value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 页数量
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 结果过滤
    /// </summary>

    std::vector<std::string>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<std::string>& value);

    /// <summary>
    /// 状态过滤
    /// </summary>

    std::vector<std::string>& getStatus();
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::vector<std::string>& value);

    /// <summary>
    /// 分支/迭代uri
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 任务版本过滤条件，影响关联任务的结果查询，查询当前任务版本下的用例最新结果
    /// </summary>

    std::string getReleaseDev() const;
    bool releaseDevIsSet() const;
    void unsetreleaseDev();
    void setReleaseDev(const std::string& value);

    /// <summary>
    /// 排序字段
    /// </summary>

    std::string getSortField() const;
    bool sortFieldIsSet() const;
    void unsetsortField();
    void setSortField(const std::string& value);

    /// <summary>
    /// 排序方法
    /// </summary>

    std::string getSortType() const;
    bool sortTypeIsSet() const;
    void unsetsortType();
    void setSortType(const std::string& value);

    /// <summary>
    /// 特性目录URI
    /// </summary>

    std::string getFeatureUri() const;
    bool featureUriIsSet() const;
    void unsetfeatureUri();
    void setFeatureUri(const std::string& value);

    /// <summary>
    /// 测试套结果uri
    /// </summary>

    std::string getTaskResultUri() const;
    bool taskResultUriIsSet() const;
    void unsettaskResultUri();
    void setTaskResultUri(const std::string& value);

    /// <summary>
    /// 用例等级ID集合
    /// </summary>

    std::vector<int32_t>& getRankIds();
    bool rankIdsIsSet() const;
    void unsetrankIds();
    void setRankIds(std::vector<int32_t> value);

    /// <summary>
    /// 关键字
    /// </summary>

    std::string getKeyWord() const;
    bool keyWordIsSet() const;
    void unsetkeyWord();
    void setKeyWord(const std::string& value);

    /// <summary>
    /// 需求id
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// 是否关联需求（null：不限，false：未关联，true：已关联）
    /// </summary>

    bool isAssociatedIssue() const;
    bool associatedIssueIsSet() const;
    void unsetassociatedIssue();
    void setAssociatedIssue(bool value);

    /// <summary>
    /// 是否全选所有页（null：不全选，false：不全选，true：全选），用于任务批量执行结果功能，只返回用例uri，不返回其他信息
    /// </summary>

    bool isSelectAllPages() const;
    bool selectAllPagesIsSet() const;
    void unsetselectAllPages();
    void setSelectAllPages(bool value);

    /// <summary>
    /// 用例是否可用
    /// </summary>

    bool isIsAvailable() const;
    bool isAvailableIsSet() const;
    void unsetisAvailable();
    void setIsAvailable(bool value);

    /// <summary>
    /// 用例脚本字段是否有值
    /// </summary>

    bool isIsScriptExist() const;
    bool isScriptExistIsSet() const;
    void unsetisScriptExist();
    void setIsScriptExist(bool value);


protected:
    int32_t stage_;
    bool stageIsSet_;
    std::vector<std::string> owners_;
    bool ownersIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::vector<std::string> results_;
    bool resultsIsSet_;
    std::vector<std::string> status_;
    bool statusIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string releaseDev_;
    bool releaseDevIsSet_;
    std::string sortField_;
    bool sortFieldIsSet_;
    std::string sortType_;
    bool sortTypeIsSet_;
    std::string featureUri_;
    bool featureUriIsSet_;
    std::string taskResultUri_;
    bool taskResultUriIsSet_;
    std::vector<int32_t> rankIds_;
    bool rankIdsIsSet_;
    std::string keyWord_;
    bool keyWordIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    bool associatedIssue_;
    bool associatedIssueIsSet_;
    bool selectAllPages_;
    bool selectAllPagesIsSet_;
    bool isAvailable_;
    bool isAvailableIsSet_;
    bool isScriptExist_;
    bool isScriptExistIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryTaskAssignCasesInfo_H_
