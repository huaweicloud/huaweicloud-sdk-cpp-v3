
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListJobSchedulesRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListJobSchedulesRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListJobSchedulesRequest
    : public ModelBase
{
public:
    ListJobSchedulesRequest();
    virtual ~ListJobSchedulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListJobSchedulesRequest members

    /// <summary>
    /// 策略类型，snapshot:快照策略, sync:同步策略，默认查询所有类型
    /// </summary>

    std::string getScheduleType() const;
    bool scheduleTypeIsSet() const;
    void unsetscheduleType();
    void setScheduleType(const std::string& value);

    /// <summary>
    /// 策略id
    /// </summary>

    std::string getScheduleId() const;
    bool scheduleIdIsSet() const;
    void unsetscheduleId();
    void setScheduleId(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量。从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询），必须为数字，不能为负数。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询记录数。默认为10，不能为负数，最小值为1，最大值为200。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string scheduleType_;
    bool scheduleTypeIsSet_;
    std::string scheduleId_;
    bool scheduleIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListJobSchedulesRequest& dereference_from_shared_ptr(std::shared_ptr<ListJobSchedulesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListJobSchedulesRequest_H_
