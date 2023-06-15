
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_AreaDetail_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_AreaDetail_H_

#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v2/model/AreaTimeValue.h>
#include <huaweicloud/live/v2/model/TimeValue.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V2_EXPORT  AreaDetail
    : public ModelBase
{
public:
    AreaDetail();
    virtual ~AreaDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AreaDetail members

    /// <summary>
    /// 各个计费大区名称，例如CN
    /// </summary>

    std::string getArea() const;
    bool areaIsSet() const;
    void unsetarea();
    void setArea(const std::string& value);

    /// <summary>
    /// 时间戳及相应时间的指标数值
    /// </summary>

    std::vector<TimeValue>& getSummary();
    bool summaryIsSet() const;
    void unsetsummary();
    void setSummary(const std::vector<TimeValue>& value);

    /// <summary>
    /// 各个大区下的具体省份、区域、国家的时间戳及相应时间的指标数值
    /// </summary>

    std::vector<AreaTimeValue>& getDetail();
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(const std::vector<AreaTimeValue>& value);


protected:
    std::string area_;
    bool areaIsSet_;
    std::vector<TimeValue> summary_;
    bool summaryIsSet_;
    std::vector<AreaTimeValue> detail_;
    bool detailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_AreaDetail_H_
