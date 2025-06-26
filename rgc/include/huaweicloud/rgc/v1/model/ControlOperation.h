
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ControlOperation_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ControlOperation_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 控制策略实施的情况。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ControlOperation
    : public ModelBase
{
public:
    ControlOperation();
    virtual ~ControlOperation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ControlOperation members

    /// <summary>
    /// 本次操作控制策略的ID。
    /// </summary>

    std::string getOperationControlStatusId() const;
    bool operationControlStatusIdIsSet() const;
    void unsetoperationControlStatusId();
    void setOperationControlStatusId(const std::string& value);

    /// <summary>
    /// 操作类型，启用控制策略或禁用控制策略。
    /// </summary>

    std::string getOperationType() const;
    bool operationTypeIsSet() const;
    void unsetoperationType();
    void setOperationType(const std::string& value);

    /// <summary>
    /// 控制策略实施的状态 SUCCEEDED | FAILED | IN_PROGRESS。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 控制策略实施失败的错误信息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 操作开始的时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 操作结束的时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string operationControlStatusId_;
    bool operationControlStatusIdIsSet_;
    std::string operationType_;
    bool operationTypeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ControlOperation_H_
