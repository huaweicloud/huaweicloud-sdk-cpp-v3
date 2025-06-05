
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRecordsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRecordsRequest_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListRecordsRequest
    : public ModelBase
{
public:
    ListRecordsRequest();
    virtual ~ListRecordsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRecordsRequest members

    /// <summary>
    /// 构建工程项目ID，36位数字、小写字母组合。
    /// </summary>

    std::string getBuildProjectId() const;
    bool buildProjectIdIsSet() const;
    void unsetbuildProjectId();
    void setBuildProjectId(const std::string& value);

    /// <summary>
    /// 分页页码，表示从此页开始查询，大于等于0
    /// </summary>

    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);

    /// <summary>
    /// 每页显示的条目数量，小于等于100
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 需要搜索的触发类型列表
    /// </summary>

    std::vector<std::string>& getTriggers();
    bool triggersIsSet() const;
    void unsettriggers();
    void setTriggers(const std::vector<std::string>& value);

    /// <summary>
    /// 需要搜索的分支列表
    /// </summary>

    std::vector<std::string>& getBranches();
    bool branchesIsSet() const;
    void unsetbranches();
    void setBranches(const std::vector<std::string>& value);

    /// <summary>
    /// 需要搜索的标签列表
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 查询起止时间,格式：yyyy-MM-dd HH:mm:ss
    /// </summary>

    std::string getFromDate() const;
    bool fromDateIsSet() const;
    void unsetfromDate();
    void setFromDate(const std::string& value);

    /// <summary>
    /// 查询结束时间,格式：yyyy-MM-dd HH:mm:ss
    /// </summary>

    std::string getToDate() const;
    bool toDateIsSet() const;
    void unsettoDate();
    void setToDate(const std::string& value);


protected:
    std::string buildProjectId_;
    bool buildProjectIdIsSet_;
    int32_t page_;
    bool pageIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::vector<std::string> triggers_;
    bool triggersIsSet_;
    std::vector<std::string> branches_;
    bool branchesIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string fromDate_;
    bool fromDateIsSet_;
    std::string toDate_;
    bool toDateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListRecordsRequest& dereference_from_shared_ptr(std::shared_ptr<ListRecordsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListRecordsRequest_H_
