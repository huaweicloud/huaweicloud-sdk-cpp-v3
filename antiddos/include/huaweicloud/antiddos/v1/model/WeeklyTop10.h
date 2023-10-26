
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_WeeklyTop10_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_WeeklyTop10_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// WeeklyTop10
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  WeeklyTop10
    : public ModelBase
{
public:
    WeeklyTop10();
    virtual ~WeeklyTop10();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WeeklyTop10 members

    /// <summary>
    /// 弹性IP地址
    /// </summary>

    std::string getFloatingIpAddress() const;
    bool floatingIpAddressIsSet() const;
    void unsetfloatingIpAddress();
    void setFloatingIpAddress(const std::string& value);

    /// <summary>
    /// DDoS拦截次数，包括清洗和黑洞
    /// </summary>

    int32_t getTimes() const;
    bool timesIsSet() const;
    void unsettimes();
    void setTimes(int32_t value);


protected:
    std::string floatingIpAddress_;
    bool floatingIpAddressIsSet_;
    int32_t times_;
    bool timesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_WeeklyTop10_H_
