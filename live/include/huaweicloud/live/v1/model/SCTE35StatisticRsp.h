
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_SCTE35StatisticRsp_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_SCTE35StatisticRsp_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/live/v1/model/SCTE35InfoItem.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 获取SCTE35信号的响应体。
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  SCTE35StatisticRsp
    : public ModelBase
{
public:
    SCTE35StatisticRsp();
    virtual ~SCTE35StatisticRsp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SCTE35StatisticRsp members

    /// <summary>
    /// 查询到scet35信息的总个数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 详细的scte35信号的数组。
    /// </summary>

    std::vector<SCTE35InfoItem>& getScte35Info();
    bool scte35InfoIsSet() const;
    void unsetscte35Info();
    void setScte35Info(const std::vector<SCTE35InfoItem>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<SCTE35InfoItem> scte35Info_;
    bool scte35InfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_SCTE35StatisticRsp_H_
