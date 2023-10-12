
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigWindowsLogInfoCreate_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigWindowsLogInfoCreate_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/AccessConfigTimeOffset.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 日志接入采集Windows事件日志
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  AccessConfigWindowsLogInfoCreate
    : public ModelBase
{
public:
    AccessConfigWindowsLogInfoCreate();
    virtual ~AccessConfigWindowsLogInfoCreate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessConfigWindowsLogInfoCreate members

    /// <summary>
    /// 采集Windows事件日志类型。Application：应用系统，System：系统，Security：安全，Setup：启动
    /// </summary>

    std::vector<std::string>& getCategorys();
    bool categorysIsSet() const;
    void unsetcategorys();
    void setCategorys(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    AccessConfigTimeOffset getTimeOffset() const;
    bool timeOffsetIsSet() const;
    void unsettimeOffset();
    void setTimeOffset(const AccessConfigTimeOffset& value);

    /// <summary>
    /// 事件等级。information：info，warning：告警，error：错误，critical：关键，verbose：冗长
    /// </summary>

    std::vector<std::string>& getEventLevel();
    bool eventLevelIsSet() const;
    void unseteventLevel();
    void setEventLevel(const std::vector<std::string>& value);


protected:
    std::vector<std::string> categorys_;
    bool categorysIsSet_;
    AccessConfigTimeOffset timeOffset_;
    bool timeOffsetIsSet_;
    std::vector<std::string> eventLevel_;
    bool eventLevelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigWindowsLogInfoCreate_H_
