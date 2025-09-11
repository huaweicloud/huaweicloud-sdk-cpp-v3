
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_InjectionStatisticsBean_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_InjectionStatisticsBean_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  InjectionStatisticsBean
    : public ModelBase
{
public:
    InjectionStatisticsBean();
    virtual ~InjectionStatisticsBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InjectionStatisticsBean members

    /// <summary>
    /// 注入数量
    /// </summary>

    int64_t getInjectionNum() const;
    bool injectionNumIsSet() const;
    void unsetinjectionNum();
    void setInjectionNum(int64_t value);

    /// <summary>
    /// 周期
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);


protected:
    int64_t injectionNum_;
    bool injectionNumIsSet_;
    std::string period_;
    bool periodIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_InjectionStatisticsBean_H_
