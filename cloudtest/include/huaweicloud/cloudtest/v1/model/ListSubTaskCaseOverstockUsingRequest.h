
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListSubTaskCaseOverstockUsingRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListSubTaskCaseOverstockUsingRequest_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListSubTaskCaseOverstockUsingRequest
    : public ModelBase
{
public:
    ListSubTaskCaseOverstockUsingRequest();
    virtual ~ListSubTaskCaseOverstockUsingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSubTaskCaseOverstockUsingRequest members

    /// <summary>
    /// 服务id
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// 数据开始时间
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 数据结束时间
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 执行机类型
    /// </summary>

    std::string getExecutorType() const;
    bool executorTypeIsSet() const;
    void unsetexecutorType();
    void setExecutorType(const std::string& value);

    /// <summary>
    /// 执行机标签
    /// </summary>

    std::string getLabel() const;
    bool labelIsSet() const;
    void unsetlabel();
    void setLabel(const std::string& value);

    /// <summary>
    /// 执行机所属区域id
    /// </summary>

    std::string getLocationId() const;
    bool locationIdIsSet() const;
    void unsetlocationId();
    void setLocationId(const std::string& value);

    /// <summary>
    /// 分页当前页码
    /// </summary>

    int32_t getPageNum() const;
    bool pageNumIsSet() const;
    void unsetpageNum();
    void setPageNum(int32_t value);

    /// <summary>
    /// 分页大小(分页参数只要有一个为空即不做分页)
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string executorType_;
    bool executorTypeIsSet_;
    std::string label_;
    bool labelIsSet_;
    std::string locationId_;
    bool locationIdIsSet_;
    int32_t pageNum_;
    bool pageNumIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSubTaskCaseOverstockUsingRequest& dereference_from_shared_ptr(std::shared_ptr<ListSubTaskCaseOverstockUsingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListSubTaskCaseOverstockUsingRequest_H_
