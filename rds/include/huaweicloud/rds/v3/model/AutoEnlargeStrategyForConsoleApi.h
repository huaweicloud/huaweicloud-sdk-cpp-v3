
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_AutoEnlargeStrategyForConsoleApi_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_AutoEnlargeStrategyForConsoleApi_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自动扩容策略
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  AutoEnlargeStrategyForConsoleApi
    : public ModelBase
{
public:
    AutoEnlargeStrategyForConsoleApi();
    virtual ~AutoEnlargeStrategyForConsoleApi();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutoEnlargeStrategyForConsoleApi members

    /// <summary>
    /// 是否开启自动扩容。
    /// </summary>

    bool isOption() const;
    bool optionIsSet() const;
    void unsetoption();
    void setOption(bool value);

    /// <summary>
    /// 扩容上限，单位GB。“option”为true时，该参数必填。
    /// </summary>

    int64_t getLimitSize() const;
    bool limitSizeIsSet() const;
    void unsetlimitSize();
    void setLimitSize(int64_t value);

    /// <summary>
    /// 可用存储空间百分比，小于等于此值或者为10GB时触发扩容。“option”为true时，该参数必填。
    /// </summary>

    int64_t getTriggerAvailablePercent() const;
    bool triggerAvailablePercentIsSet() const;
    void unsettriggerAvailablePercent();
    void setTriggerAvailablePercent(int64_t value);

    /// <summary>
    /// 每次自动扩容的步长，单位为百分比，即每次自动扩容当前存储空间的百分比。取值范围为5%~50%。
    /// </summary>

    int64_t getStepPercent() const;
    bool stepPercentIsSet() const;
    void unsetstepPercent();
    void setStepPercent(int64_t value);


protected:
    bool option_;
    bool optionIsSet_;
    int64_t limitSize_;
    bool limitSizeIsSet_;
    int64_t triggerAvailablePercent_;
    bool triggerAvailablePercentIsSet_;
    int64_t stepPercent_;
    bool stepPercentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_AutoEnlargeStrategyForConsoleApi_H_
