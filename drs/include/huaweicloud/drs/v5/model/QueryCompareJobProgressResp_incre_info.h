
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryCompareJobProgressResp_incre_info_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryCompareJobProgressResp_incre_info_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 动态内容对比会返回该字段，增量对比信息。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QueryCompareJobProgressResp_incre_info
    : public ModelBase
{
public:
    QueryCompareJobProgressResp_incre_info();
    virtual ~QueryCompareJobProgressResp_incre_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryCompareJobProgressResp_incre_info members

    /// <summary>
    /// 增量对比时延，若时延为0表示所有增量数据都已对比完成。
    /// </summary>

    float getDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(float value);

    /// <summary>
    /// 增量数据对比速率。
    /// </summary>

    std::string getSrcSpeed() const;
    bool srcSpeedIsSet() const;
    void unsetsrcSpeed();
    void setSrcSpeed(const std::string& value);

    /// <summary>
    /// 每秒对比行数。
    /// </summary>

    int32_t getRps() const;
    bool rpsIsSet() const;
    void unsetrps();
    void setRps(int32_t value);

    /// <summary>
    /// 增量位点。
    /// </summary>

    std::string getLogPoint() const;
    bool logPointIsSet() const;
    void unsetlogPoint();
    void setLogPoint(const std::string& value);

    /// <summary>
    /// 差异待复查行数。
    /// </summary>

    int32_t getRecheckEntities() const;
    bool recheckEntitiesIsSet() const;
    void unsetrecheckEntities();
    void setRecheckEntities(int32_t value);


protected:
    float delay_;
    bool delayIsSet_;
    std::string srcSpeed_;
    bool srcSpeedIsSet_;
    int32_t rps_;
    bool rpsIsSet_;
    std::string logPoint_;
    bool logPointIsSet_;
    int32_t recheckEntities_;
    bool recheckEntitiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryCompareJobProgressResp_incre_info_H_
