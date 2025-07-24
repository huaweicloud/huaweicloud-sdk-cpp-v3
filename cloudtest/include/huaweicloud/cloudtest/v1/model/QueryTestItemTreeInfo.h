
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryTestItemTreeInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryTestItemTreeInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  QueryTestItemTreeInfo
    : public ModelBase
{
public:
    QueryTestItemTreeInfo();
    virtual ~QueryTestItemTreeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryTestItemTreeInfo members

    /// <summary>
    /// 责任人
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 阶段
    /// </summary>

    std::string getStage() const;
    bool stageIsSet() const;
    void unsetstage();
    void setStage(const std::string& value);

    /// <summary>
    /// 活动
    /// </summary>

    std::string getActivity() const;
    bool activityIsSet() const;
    void unsetactivity();
    void setActivity(const std::string& value);

    /// <summary>
    /// 版本URI
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 任务uri
    /// </summary>

    std::string getTaskUri() const;
    bool taskUriIsSet() const;
    void unsettaskUri();
    void setTaskUri(const std::string& value);

    /// <summary>
    /// 用例服务类型
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// 是否包含用例数
    /// </summary>

    bool isContainTotal() const;
    bool containTotalIsSet() const;
    void unsetcontainTotal();
    void setContainTotal(bool value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 排序类型
    /// </summary>

    std::string getSortType() const;
    bool sortTypeIsSet() const;
    void unsetsortType();
    void setSortType(const std::string& value);

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


protected:
    std::string owner_;
    bool ownerIsSet_;
    std::string stage_;
    bool stageIsSet_;
    std::string activity_;
    bool activityIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::string taskUri_;
    bool taskUriIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    bool containTotal_;
    bool containTotalIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string sortType_;
    bool sortTypeIsSet_;
    int32_t pageNumber_;
    bool pageNumberIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_QueryTestItemTreeInfo_H_
