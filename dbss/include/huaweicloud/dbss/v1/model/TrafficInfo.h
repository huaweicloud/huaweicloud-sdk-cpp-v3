
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_TrafficInfo_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_TrafficInfo_H_


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
class HUAWEICLOUD_DBSS_V1_EXPORT  TrafficInfo
    : public ModelBase
{
public:
    TrafficInfo();
    virtual ~TrafficInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrafficInfo members

    /// <summary>
    /// 记录ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 每秒钟接收字节数
    /// </summary>

    double getRxmegabytes() const;
    bool rxmegabytesIsSet() const;
    void unsetrxmegabytes();
    void setRxmegabytes(double value);

    /// <summary>
    /// 记录时间
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 每秒钟发送字节数
    /// </summary>

    double getTxmegabytes() const;
    bool txmegabytesIsSet() const;
    void unsettxmegabytes();
    void setTxmegabytes(double value);


protected:
    std::string id_;
    bool idIsSet_;
    double rxmegabytes_;
    bool rxmegabytesIsSet_;
    std::string time_;
    bool timeIsSet_;
    double txmegabytes_;
    bool txmegabytesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_TrafficInfo_H_
