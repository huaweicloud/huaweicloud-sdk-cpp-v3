
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListStatSummaryRequest_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListStatSummaryRequest_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ListStatSummaryRequest
    : public ModelBase
{
public:
    ListStatSummaryRequest();
    virtual ~ListStatSummaryRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListStatSummaryRequest members

    /// <summary>
    /// 开始时间。格式为yyyymmdd。必须是与时区无关的UTC时间。 
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间。格式为yyyymmdd。必须是与时区无关的UTC时间。 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 支持的参数类型 
    /// </summary>

    std::string getStatType() const;
    bool statTypeIsSet() const;
    void unsetstatType();
    void setStatType(const std::string& value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string statType_;
    bool statTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListStatSummaryRequest& dereference_from_shared_ptr(std::shared_ptr<ListStatSummaryRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListStatSummaryRequest_H_
