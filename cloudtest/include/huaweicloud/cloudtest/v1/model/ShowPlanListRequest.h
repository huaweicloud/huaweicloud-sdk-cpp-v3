
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowPlanListRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowPlanListRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowPlanListRequest
    : public ModelBase
{
public:
    ShowPlanListRequest();
    virtual ~ShowPlanListRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPlanListRequest members

    /// <summary>
    /// 项目id，项目唯一标识，固定长度32位字符
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 起始偏移量，表示从此偏移量开始查询， offset大于等于0
    /// </summary>

    int64_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int64_t value);

    /// <summary>
    /// 每页显示的条目数量,最大支持200条
    /// </summary>

    int64_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int64_t value);

    /// <summary>
    /// 模糊查询使用(针对测试计划名称)
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 测试计划所处阶段（create,design,execute,report）
    /// </summary>

    std::string getCurrentStage() const;
    bool currentStageIsSet() const;
    void unsetcurrentStage();
    void setCurrentStage(const std::string& value);

    /// <summary>
    /// 分支Uri，默认master
    /// </summary>

    std::string getBranchUri() const;
    bool branchUriIsSet() const;
    void unsetbranchUri();
    void setBranchUri(const std::string& value);

    /// <summary>
    /// 是否查询所有版本下测试计划，默认为false。若值为true, 查询所有版本下测试计划; 若为false, 查询branch_uri指定分支下的测试计划, branch_uri为空时默认为master
    /// </summary>

    bool isQueryAllVersion() const;
    bool queryAllVersionIsSet() const;
    void unsetqueryAllVersion();
    void setQueryAllVersion(bool value);

    /// <summary>
    /// 测试计划关联的迭代。迭代id以逗号间隔
    /// </summary>

    std::string getFixVersionIds() const;
    bool fixVersionIdsIsSet() const;
    void unsetfixVersionIds();
    void setFixVersionIds(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int64_t offset_;
    bool offsetIsSet_;
    int64_t limit_;
    bool limitIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string currentStage_;
    bool currentStageIsSet_;
    std::string branchUri_;
    bool branchUriIsSet_;
    bool queryAllVersion_;
    bool queryAllVersionIsSet_;
    std::string fixVersionIds_;
    bool fixVersionIdsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowPlanListRequest& dereference_from_shared_ptr(std::shared_ptr<ShowPlanListRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowPlanListRequest_H_
