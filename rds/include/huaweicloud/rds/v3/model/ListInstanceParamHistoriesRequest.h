
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstanceParamHistoriesRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstanceParamHistoriesRequest_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  ListInstanceParamHistoriesRequest
    : public ModelBase
{
public:
    ListInstanceParamHistoriesRequest();
    virtual ~ListInstanceParamHistoriesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstanceParamHistoriesRequest members

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 分页参数
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 分页参数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 开始时间 默认为当前时间的前7天 格式如 2020-09-01T18:50:20Z
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间 默认为当前时间 格式如 2020-09-01T18:50:20Z
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 参数名称
    /// </summary>

    std::string getParamName() const;
    bool paramNameIsSet() const;
    void unsetparamName();
    void setParamName(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string paramName_;
    bool paramNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListInstanceParamHistoriesRequest& dereference_from_shared_ptr(std::shared_ptr<ListInstanceParamHistoriesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstanceParamHistoriesRequest_H_
