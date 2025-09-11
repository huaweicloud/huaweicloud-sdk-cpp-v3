
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_CountStatisticsBean_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_CountStatisticsBean_H_


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
class HUAWEICLOUD_DBSS_V1_EXPORT  CountStatisticsBean
    : public ModelBase
{
public:
    CountStatisticsBean();
    virtual ~CountStatisticsBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CountStatisticsBean members

    /// <summary>
    /// 周期
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// SQL数量
    /// </summary>

    int64_t getSqlNum() const;
    bool sqlNumIsSet() const;
    void unsetsqlNum();
    void setSqlNum(int64_t value);


protected:
    std::string period_;
    bool periodIsSet_;
    int64_t sqlNum_;
    bool sqlNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_CountStatisticsBean_H_
