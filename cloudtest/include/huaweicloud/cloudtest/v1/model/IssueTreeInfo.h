
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssueTreeInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssueTreeInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/IssueListPiFilterInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询迭代的需求树Body
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  IssueTreeInfo
    : public ModelBase
{
public:
    IssueTreeInfo();
    virtual ~IssueTreeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueTreeInfo members

    /// <summary>
    /// 过滤条件：处理人
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 需求ID
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 每页展示条数
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 关键字
    /// </summary>

    std::string getKeyWord() const;
    bool keyWordIsSet() const;
    void unsetkeyWord();
    void setKeyWord(const std::string& value);

    /// <summary>
    /// 过滤条件：迭代ID
    /// </summary>

    std::string getIterationId() const;
    bool iterationIdIsSet() const;
    void unsetiterationId();
    void setIterationId(const std::string& value);

    /// <summary>
    /// 过滤条件：重要程度ID
    /// </summary>

    std::string getSeverityId() const;
    bool severityIdIsSet() const;
    void unsetseverityId();
    void setSeverityId(const std::string& value);

    /// <summary>
    /// 过滤条件：状态ID
    /// </summary>

    std::string getStatusId() const;
    bool statusIdIsSet() const;
    void unsetstatusId();
    void setStatusId(const std::string& value);

    /// <summary>
    /// 过滤条件：模块ID
    /// </summary>

    std::string getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetmoduleId();
    void setModuleId(const std::string& value);

    /// <summary>
    /// 过滤条件：状态ID多个条件，每个条件取或，-2代表搜索未设置
    /// </summary>

    std::string getStatusIds() const;
    bool statusIdsIsSet() const;
    void unsetstatusIds();
    void setStatusIds(const std::string& value);

    /// <summary>
    /// 过滤条件：模块ID多个，每个条件取或，-2代表搜索未设置
    /// </summary>

    std::string getModuleIds() const;
    bool moduleIdsIsSet() const;
    void unsetmoduleIds();
    void setModuleIds(const std::string& value);

    /// <summary>
    /// 迭代、pi过滤条件
    /// </summary>

    std::vector<IssueListPiFilterInfo>& getPiFilter();
    bool piFilterIsSet() const;
    void unsetpiFilter();
    void setPiFilter(const std::vector<IssueListPiFilterInfo>& value);

    /// <summary>
    /// 状态名称列表
    /// </summary>

    std::vector<std::string>& getStatusNames();
    bool statusNamesIsSet() const;
    void unsetstatusNames();
    void setStatusNames(const std::vector<std::string>& value);


protected:
    std::string owner_;
    bool ownerIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string keyWord_;
    bool keyWordIsSet_;
    std::string iterationId_;
    bool iterationIdIsSet_;
    std::string severityId_;
    bool severityIdIsSet_;
    std::string statusId_;
    bool statusIdIsSet_;
    std::string moduleId_;
    bool moduleIdIsSet_;
    std::string statusIds_;
    bool statusIdsIsSet_;
    std::string moduleIds_;
    bool moduleIdsIsSet_;
    std::vector<IssueListPiFilterInfo> piFilter_;
    bool piFilterIsSet_;
    std::vector<std::string> statusNames_;
    bool statusNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssueTreeInfo_H_
