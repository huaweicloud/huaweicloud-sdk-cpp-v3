
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListAllAppRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListAllAppRequestBody_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  ListAllAppRequestBody
    : public ModelBase
{
public:
    ListAllAppRequestBody();
    virtual ~ListAllAppRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAllAppRequestBody members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 分页页码， 表示从此页开始查询， page大于等于1
    /// </summary>

    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);

    /// <summary>
    /// 每页显示的条目数量，size小于等于100
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 排序字段的名称，当前仅支持name和startTime
    /// </summary>

    std::string getSortName() const;
    bool sortNameIsSet() const;
    void unsetsortName();
    void setSortName(const std::string& value);

    /// <summary>
    /// 排序顺序，正序（ASC）或者逆序（DESC)
    /// </summary>

    std::string getSortBy() const;
    bool sortByIsSet() const;
    void unsetsortBy();
    void setSortBy(const std::string& value);

    /// <summary>
    /// 应用状态列表，支持查询以下状态： abort: 部署中止 failed: 部署失败 not_started: 取消执行 pending: 排队中 running: 正在部署 succeeded: 部署成功 timeout: 部署超时 not_executed: 未执行 
    /// </summary>

    std::vector<std::string>& getStates();
    bool statesIsSet() const;
    void unsetstates();
    void setStates(const std::vector<std::string>& value);

    /// <summary>
    /// 应用的分组id，传入no_grouped为查询未分组的应用
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t page_;
    bool pageIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string sortName_;
    bool sortNameIsSet_;
    std::string sortBy_;
    bool sortByIsSet_;
    std::vector<std::string> states_;
    bool statesIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_ListAllAppRequestBody_H_
