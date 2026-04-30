
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAuditLogRequest_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAuditLogRequest_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  ShowAuditLogRequest
    : public ModelBase
{
public:
    ShowAuditLogRequest();
    virtual ~ShowAuditLogRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAuditLogRequest members

    /// <summary>
    /// 指定查询返回记录条数，默认值10
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 索引位置，从offset指定的下一条数据开始查询默认值为0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 开始时间
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 结束时间
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAuditLogRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAuditLogRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_ShowAuditLogRequest_H_
