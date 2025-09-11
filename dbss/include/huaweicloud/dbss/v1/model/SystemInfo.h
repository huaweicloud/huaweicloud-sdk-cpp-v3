
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_SystemInfo_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_SystemInfo_H_


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
class HUAWEICLOUD_DBSS_V1_EXPORT  SystemInfo
    : public ModelBase
{
public:
    SystemInfo();
    virtual ~SystemInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SystemInfo members

    /// <summary>
    /// CPU使用量
    /// </summary>

    double getCpuUse() const;
    bool cpuUseIsSet() const;
    void unsetcpuUse();
    void setCpuUse(double value);

    /// <summary>
    /// 记录ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 内存使用量
    /// </summary>

    double getMemUse() const;
    bool memUseIsSet() const;
    void unsetmemUse();
    void setMemUse(double value);

    /// <summary>
    /// 记录时间
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);


protected:
    double cpuUse_;
    bool cpuUseIsSet_;
    std::string id_;
    bool idIsSet_;
    double memUse_;
    bool memUseIsSet_;
    std::string time_;
    bool timeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_SystemInfo_H_
