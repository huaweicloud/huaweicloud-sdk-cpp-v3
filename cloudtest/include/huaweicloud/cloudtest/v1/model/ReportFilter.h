
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ReportFilter_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ReportFilter_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 过滤条件
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ReportFilter
    : public ModelBase
{
public:
    ReportFilter();
    virtual ~ReportFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReportFilter members

    /// <summary>
    /// 创建人
    /// </summary>

    std::string getCreatorIds() const;
    bool creatorIdsIsSet() const;
    void unsetcreatorIds();
    void setCreatorIds(const std::string& value);

    /// <summary>
    /// 所属人
    /// </summary>

    std::string getOwnerIds() const;
    bool ownerIdsIsSet() const;
    void unsetownerIds();
    void setOwnerIds(const std::string& value);

    /// <summary>
    /// 级别
    /// </summary>

    std::string getRanks() const;
    bool ranksIsSet() const;
    void unsetranks();
    void setRanks(const std::string& value);

    /// <summary>
    /// releaseId
    /// </summary>

    std::string getReleaseIds() const;
    bool releaseIdsIsSet() const;
    void unsetreleaseIds();
    void setReleaseIds(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 级别
    /// </summary>

    std::string getModuleIds() const;
    bool moduleIdsIsSet() const;
    void unsetmoduleIds();
    void setModuleIds(const std::string& value);

    /// <summary>
    /// 结果
    /// </summary>

    std::string getResults() const;
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::string& value);

    /// <summary>
    /// 标签
    /// </summary>

    std::string getLabelIds() const;
    bool labelIdsIsSet() const;
    void unsetlabelIds();
    void setLabelIds(const std::string& value);

    /// <summary>
    /// 开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 是否关联需求
    /// </summary>

    std::string getIsAssociateIssue() const;
    bool isAssociateIssueIsSet() const;
    void unsetisAssociateIssue();
    void setIsAssociateIssue(const std::string& value);


protected:
    std::string creatorIds_;
    bool creatorIdsIsSet_;
    std::string ownerIds_;
    bool ownerIdsIsSet_;
    std::string ranks_;
    bool ranksIsSet_;
    std::string releaseIds_;
    bool releaseIdsIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string moduleIds_;
    bool moduleIdsIsSet_;
    std::string results_;
    bool resultsIsSet_;
    std::string labelIds_;
    bool labelIdsIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string isAssociateIssue_;
    bool isAssociateIssueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ReportFilter_H_
