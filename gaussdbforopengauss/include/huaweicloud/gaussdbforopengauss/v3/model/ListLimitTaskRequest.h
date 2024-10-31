
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListLimitTaskRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListLimitTaskRequest_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListLimitTaskRequest
    : public ModelBase
{
public:
    ListLimitTaskRequest();
    virtual ~ListLimitTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLimitTaskRequest members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 限流任务范围，目前支持SQL,SESSION。
    /// </summary>

    std::string getTaskScope() const;
    bool taskScopeIsSet() const;
    void unsettaskScope();
    void setTaskScope(const std::string& value);

    /// <summary>
    /// 限流类型，支持SQL_ID、SQL_TYPE、SESSION_ACTIVE_MAX_COUNT类型。
    /// </summary>

    std::string getLimitType() const;
    bool limitTypeIsSet() const;
    void unsetlimitType();
    void setLimitType(const std::string& value);

    /// <summary>
    /// 限流类型值，支持模糊匹配。
    /// </summary>

    std::string getLimitTypeValue() const;
    bool limitTypeValueIsSet() const;
    void unsetlimitTypeValue();
    void setLimitTypeValue(const std::string& value);

    /// <summary>
    /// 限流任务名，支持模糊匹配。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// sql模板，支持模糊匹配。
    /// </summary>

    std::string getSqlModel() const;
    bool sqlModelIsSet() const;
    void unsetsqlModel();
    void setSqlModel(const std::string& value);

    /// <summary>
    /// 规则名。
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 限流任务开始时间，格式为yyyy-mm-ddThh:mm:ssZ,当前时间指UTC时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 限流任务结束时间，格式为yyyy-mm-ddThh:mm:ssZ,当前时间指UTC时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量。从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询），必须为数字，不能为负数。  取值范围：0 - 10000
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询记录数。默认为10，不能为负数，最小值为1，最大值为100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string taskScope_;
    bool taskScopeIsSet_;
    std::string limitType_;
    bool limitTypeIsSet_;
    std::string limitTypeValue_;
    bool limitTypeValueIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::string sqlModel_;
    bool sqlModelIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListLimitTaskRequest& dereference_from_shared_ptr(std::shared_ptr<ListLimitTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListLimitTaskRequest_H_
