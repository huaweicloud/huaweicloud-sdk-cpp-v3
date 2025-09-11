
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CronConfig_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CronConfig_H_


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
/// 定时配置
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  CronConfig
    : public ModelBase
{
public:
    CronConfig();
    virtual ~CronConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CronConfig members

    /// <summary>
    /// 定时配置名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 定时表达式
    /// </summary>

    std::string getCron() const;
    bool cronIsSet() const;
    void unsetcron();
    void setCron(const std::string& value);

    /// <summary>
    /// 拉起预留实例个数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 开始时间戳
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 失效时间戳
    /// </summary>

    int64_t getExpiredTime() const;
    bool expiredTimeIsSet() const;
    void unsetexpiredTime();
    void setExpiredTime(int64_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string cron_;
    bool cronIsSet_;
    int32_t count_;
    bool countIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t expiredTime_;
    bool expiredTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CronConfig_H_
