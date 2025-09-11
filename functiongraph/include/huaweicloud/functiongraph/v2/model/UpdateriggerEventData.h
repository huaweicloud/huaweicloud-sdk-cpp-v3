
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateriggerEventData_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateriggerEventData_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  UpdateriggerEventData
    : public ModelBase
{
public:
    UpdateriggerEventData();
    virtual ~UpdateriggerEventData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateriggerEventData members

    /// <summary>
    /// 串行处理数据
    /// </summary>

    bool isIsSerial() const;
    bool isSerialIsSet() const;
    void unsetisSerial();
    void setIsSerial(bool value);

    /// <summary>
    /// 最大字节数
    /// </summary>

    int32_t getMaxFetchBytes() const;
    bool maxFetchBytesIsSet() const;
    void unsetmaxFetchBytes();
    void setMaxFetchBytes(int32_t value);

    /// <summary>
    /// 拉取周期
    /// </summary>

    int32_t getPollingInterval() const;
    bool pollingIntervalIsSet() const;
    void unsetpollingInterval();
    void setPollingInterval(int32_t value);

    /// <summary>
    /// 拉取周期单位
    /// </summary>

    std::string getPollingUnit() const;
    bool pollingUnitIsSet() const;
    void unsetpollingUnit();
    void setPollingUnit(const std::string& value);


protected:
    bool isSerial_;
    bool isSerialIsSet_;
    int32_t maxFetchBytes_;
    bool maxFetchBytesIsSet_;
    int32_t pollingInterval_;
    bool pollingIntervalIsSet_;
    std::string pollingUnit_;
    bool pollingUnitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_UpdateriggerEventData_H_
