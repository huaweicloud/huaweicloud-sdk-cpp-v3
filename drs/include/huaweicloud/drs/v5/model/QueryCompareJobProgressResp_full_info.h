
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryCompareJobProgressResp_full_info_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryCompareJobProgressResp_full_info_H_


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
/// 行对比与内容对比会返回该字段，全量对比信息。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QueryCompareJobProgressResp_full_info
    : public ModelBase
{
public:
    QueryCompareJobProgressResp_full_info();
    virtual ~QueryCompareJobProgressResp_full_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryCompareJobProgressResp_full_info members

    /// <summary>
    /// 全量数据对比进度，单位为%。
    /// </summary>

    float getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(float value);

    /// <summary>
    /// 全量数据对比速率。
    /// </summary>

    std::string getSrcSpeed() const;
    bool srcSpeedIsSet() const;
    void unsetsrcSpeed();
    void setSrcSpeed(const std::string& value);

    /// <summary>
    /// 差异待复查行数。
    /// </summary>

    int32_t getRecheckEntities() const;
    bool recheckEntitiesIsSet() const;
    void unsetrecheckEntities();
    void setRecheckEntities(int32_t value);


protected:
    float progress_;
    bool progressIsSet_;
    std::string srcSpeed_;
    bool srcSpeedIsSet_;
    int32_t recheckEntities_;
    bool recheckEntitiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryCompareJobProgressResp_full_info_H_
