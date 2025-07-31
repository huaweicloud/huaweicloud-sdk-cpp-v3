
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryCompareJobProgressResp_global_info_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryCompareJobProgressResp_global_info_H_


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
/// 全局对比信息。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QueryCompareJobProgressResp_global_info
    : public ModelBase
{
public:
    QueryCompareJobProgressResp_global_info();
    virtual ~QueryCompareJobProgressResp_global_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryCompareJobProgressResp_global_info members

    /// <summary>
    /// 全局对比速率。
    /// </summary>

    std::string getSrcSpeed() const;
    bool srcSpeedIsSet() const;
    void unsetsrcSpeed();
    void setSrcSpeed(const std::string& value);


protected:
    std::string srcSpeed_;
    bool srcSpeedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryCompareJobProgressResp_global_info_H_
