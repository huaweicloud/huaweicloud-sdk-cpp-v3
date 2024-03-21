
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_TimeshiftRequestArgs_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_TimeshiftRequestArgs_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 时移相关配置参数
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  TimeshiftRequestArgs
    : public ModelBase
{
public:
    TimeshiftRequestArgs();
    virtual ~TimeshiftRequestArgs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TimeshiftRequestArgs members

    /// <summary>
    /// 时移时长字段名
    /// </summary>

    std::string getBackTime() const;
    bool backTimeIsSet() const;
    void unsetbackTime();
    void setBackTime(const std::string& value);

    /// <summary>
    /// 单位
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);


protected:
    std::string backTime_;
    bool backTimeIsSet_;
    std::string unit_;
    bool unitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_TimeshiftRequestArgs_H_
