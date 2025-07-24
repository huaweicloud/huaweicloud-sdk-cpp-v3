
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IteratorVersionsQueryInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IteratorVersionsQueryInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/IteratorListFilterInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  IteratorVersionsQueryInfo
    : public ModelBase
{
public:
    IteratorVersionsQueryInfo();
    virtual ~IteratorVersionsQueryInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IteratorVersionsQueryInfo members

    /// <summary>
    /// 迭代计划名称（支持模糊搜索）
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IteratorListFilterInfo getFilter() const;
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const IteratorListFilterInfo& value);

    /// <summary>
    /// 是否是我的
    /// </summary>

    bool isOwn() const;
    bool ownIsSet() const;
    void unsetown();
    void setOwn(bool value);

    /// <summary>
    /// 分支URI
    /// </summary>

    std::string getBranchUri() const;
    bool branchUriIsSet() const;
    void unsetbranchUri();
    void setBranchUri(const std::string& value);

    /// <summary>
    /// 迭代计划URI
    /// </summary>

    std::string getIteratorUri() const;
    bool iteratorUriIsSet() const;
    void unsetiteratorUri();
    void setIteratorUri(const std::string& value);

    /// <summary>
    /// 迭代计划责任人集合
    /// </summary>

    std::vector<std::string>& getOwnerIds();
    bool ownerIdsIsSet() const;
    void unsetownerIds();
    void setOwnerIds(const std::vector<std::string>& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 迭代计划所处节点
    /// </summary>

    std::string getCurrentStage() const;
    bool currentStageIsSet() const;
    void unsetcurrentStage();
    void setCurrentStage(const std::string& value);

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


protected:
    std::string name_;
    bool nameIsSet_;
    IteratorListFilterInfo filter_;
    bool filterIsSet_;
    bool own_;
    bool ownIsSet_;
    std::string branchUri_;
    bool branchUriIsSet_;
    std::string iteratorUri_;
    bool iteratorUriIsSet_;
    std::vector<std::string> ownerIds_;
    bool ownerIdsIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string currentStage_;
    bool currentStageIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IteratorVersionsQueryInfo_H_
