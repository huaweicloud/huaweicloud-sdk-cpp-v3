
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListFailureJobsRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListFailureJobsRequest_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ListFailureJobsRequest
    : public ModelBase
{
public:
    ListFailureJobsRequest();
    virtual ~ListFailureJobsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFailureJobsRequest members

    /// <summary>
    /// 失败任务状态。createFail：表示创建失败。deleteFail：表示删除失败。attachFail：表示挂载失败。detachFail：表示卸载失败。expandFail：表示扩容失败。resizeFail：表示变更规格失败。startFail：表示开启保护失败。stopFail：表示停止保护失败。reverseFail：表示切换失败。failoverFail：表示故障切换失败。reprotectFail : 表示重保护失败。
    /// </summary>

    std::string getFailureStatus() const;
    bool failureStatusIsSet() const;
    void unsetfailureStatus();
    void setFailureStatus(const std::string& value);

    /// <summary>
    /// 保护组资源名称。
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 保护组ID。
    /// </summary>

    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);

    /// <summary>
    /// 资源类型。server_groups：表示保护组。protected_instances：表示保护实例。replications：表示复制对。disaster_recovery_drills：表示容灾演练。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 每次请求返回结果个数限制。取值范围为[0,1000]的正整数，默认值为1000。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 每次请求开始的下标，即偏移量，默认值为0。offset必须为数字，不能为负数。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::string failureStatus_;
    bool failureStatusIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListFailureJobsRequest& dereference_from_shared_ptr(std::shared_ptr<ListFailureJobsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListFailureJobsRequest_H_
