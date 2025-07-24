
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PackageUsage_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PackageUsage_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 套餐用量信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  PackageUsage
    : public ModelBase
{
public:
    PackageUsage();
    virtual ~PackageUsage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PackageUsage members

    /// <summary>
    /// 套餐类型
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 套餐用量
    /// </summary>

    int32_t getUsedPercent() const;
    bool usedPercentIsSet() const;
    void unsetusedPercent();
    void setUsedPercent(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t usedPercent_;
    bool usedPercentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PackageUsage_H_
