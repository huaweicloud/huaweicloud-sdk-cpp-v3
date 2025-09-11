
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_DiskInfo_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_DiskInfo_H_


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
/// 磁盘使用情况
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  DiskInfo
    : public ModelBase
{
public:
    DiskInfo();
    virtual ~DiskInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DiskInfo members

    /// <summary>
    /// 数据盘可用量
    /// </summary>

    double getDataAvailable() const;
    bool dataAvailableIsSet() const;
    void unsetdataAvailable();
    void setDataAvailable(double value);

    /// <summary>
    /// 数据盘总容量
    /// </summary>

    double getDataTotal() const;
    bool dataTotalIsSet() const;
    void unsetdataTotal();
    void setDataTotal(double value);

    /// <summary>
    /// 数据盘使用百分比
    /// </summary>

    int32_t getDataUsePercent() const;
    bool dataUsePercentIsSet() const;
    void unsetdataUsePercent();
    void setDataUsePercent(int32_t value);

    /// <summary>
    /// 记录ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 临时目录可用量
    /// </summary>

    double getSwapAvailable() const;
    bool swapAvailableIsSet() const;
    void unsetswapAvailable();
    void setSwapAvailable(double value);

    /// <summary>
    /// 临时目录总容量
    /// </summary>

    double getSwapTotal() const;
    bool swapTotalIsSet() const;
    void unsetswapTotal();
    void setSwapTotal(double value);

    /// <summary>
    /// 临时目录使用百分比
    /// </summary>

    int32_t getSwapUsePercent() const;
    bool swapUsePercentIsSet() const;
    void unsetswapUsePercent();
    void setSwapUsePercent(int32_t value);

    /// <summary>
    /// 系统盘可用量
    /// </summary>

    double getSystemAvailable() const;
    bool systemAvailableIsSet() const;
    void unsetsystemAvailable();
    void setSystemAvailable(double value);

    /// <summary>
    /// 系统盘容量
    /// </summary>

    double getSystemTotal() const;
    bool systemTotalIsSet() const;
    void unsetsystemTotal();
    void setSystemTotal(double value);

    /// <summary>
    /// 系统盘使用百分比
    /// </summary>

    int32_t getSystemUsePercent() const;
    bool systemUsePercentIsSet() const;
    void unsetsystemUsePercent();
    void setSystemUsePercent(int32_t value);

    /// <summary>
    /// 记录时间
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);


protected:
    double dataAvailable_;
    bool dataAvailableIsSet_;
    double dataTotal_;
    bool dataTotalIsSet_;
    int32_t dataUsePercent_;
    bool dataUsePercentIsSet_;
    std::string id_;
    bool idIsSet_;
    double swapAvailable_;
    bool swapAvailableIsSet_;
    double swapTotal_;
    bool swapTotalIsSet_;
    int32_t swapUsePercent_;
    bool swapUsePercentIsSet_;
    double systemAvailable_;
    bool systemAvailableIsSet_;
    double systemTotal_;
    bool systemTotalIsSet_;
    int32_t systemUsePercent_;
    bool systemUsePercentIsSet_;
    std::string time_;
    bool timeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_DiskInfo_H_
