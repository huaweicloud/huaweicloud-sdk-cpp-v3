
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryIssueTreeInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryIssueTreeInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/IssueListFilterInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  QueryIssueTreeInfo
    : public ModelBase
{
public:
    QueryIssueTreeInfo();
    virtual ~QueryIssueTreeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryIssueTreeInfo members

    /// <summary>
    /// 服务类型
    /// </summary>

    int32_t getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(int32_t value);

    /// <summary>
    /// 服务类型集合
    /// </summary>

    std::vector<int32_t>& getServiceTypes();
    bool serviceTypesIsSet() const;
    void unsetserviceTypes();
    void setServiceTypes(std::vector<int32_t> value);

    /// <summary>
    /// 父节点id
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPageNumber() const;
    bool pageNumberIsSet() const;
    void unsetpageNumber();
    void setPageNumber(int32_t value);

    /// <summary>
    /// 每页数量
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    IssueListFilterInfo getFilter() const;
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const IssueListFilterInfo& value);

    /// <summary>
    /// trackerId
    /// </summary>

    std::string getTrackerId() const;
    bool trackerIdIsSet() const;
    void unsettrackerId();
    void setTrackerId(const std::string& value);

    /// <summary>
    /// 模块id
    /// </summary>

    std::string getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetmoduleId();
    void setModuleId(const std::string& value);

    /// <summary>
    /// 任务udi
    /// </summary>

    std::string getTaskUri() const;
    bool taskUriIsSet() const;
    void unsettaskUri();
    void setTaskUri(const std::string& value);

    /// <summary>
    /// 是否统计子需求的用例数，默认true
    /// </summary>

    bool isIncludeSubIssue() const;
    bool includeSubIssueIsSet() const;
    void unsetincludeSubIssue();
    void setIncludeSubIssue(bool value);


protected:
    int32_t serviceType_;
    bool serviceTypeIsSet_;
    std::vector<int32_t> serviceTypes_;
    bool serviceTypesIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    int32_t pageNumber_;
    bool pageNumberIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    IssueListFilterInfo filter_;
    bool filterIsSet_;
    std::string trackerId_;
    bool trackerIdIsSet_;
    std::string moduleId_;
    bool moduleIdIsSet_;
    std::string taskUri_;
    bool taskUriIsSet_;
    bool includeSubIssue_;
    bool includeSubIssueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryIssueTreeInfo_H_
