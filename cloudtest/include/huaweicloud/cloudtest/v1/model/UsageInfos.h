
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UsageInfos_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UsageInfos_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/UsageInfos.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源已用容量对象
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  UsageInfos
    : public ModelBase
{
public:
    UsageInfos();
    virtual ~UsageInfos();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UsageInfos members

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 资源标识
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 资源总量
    /// </summary>

    std::string getAmount() const;
    bool amountIsSet() const;
    void unsetamount();
    void setAmount(const std::string& value);

    /// <summary>
    /// 已消耗用量
    /// </summary>

    std::string getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(const std::string& value);

    /// <summary>
    /// 资源已用容量百分比,例如80% 值为80
    /// </summary>

    int32_t getUsedPercent() const;
    bool usedPercentIsSet() const;
    void unsetusedPercent();
    void setUsedPercent(int32_t value);

    /// <summary>
    /// 版本超限信息
    /// </summary>

    std::vector<UsageInfos>& getUsageInfo();
    bool usageInfoIsSet() const;
    void unsetusageInfo();
    void setUsageInfo(const std::vector<UsageInfos>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string amount_;
    bool amountIsSet_;
    std::string used_;
    bool usedIsSet_;
    int32_t usedPercent_;
    bool usedPercentIsSet_;
    std::vector<UsageInfos>* usageInfo_;
    bool usageInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UsageInfos_H_
