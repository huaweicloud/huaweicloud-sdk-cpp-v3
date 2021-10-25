
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ReverseProtectionGroupRequestParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ReverseProtectionGroupRequestParams_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 保护组切换请求参数数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ReverseProtectionGroupRequestParams
    : public ModelBase
{
public:
    ReverseProtectionGroupRequestParams();
    virtual ~ReverseProtectionGroupRequestParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ReverseProtectionGroupRequestParams members

    /// <summary>
    /// 切换方向。target：表示从创建保护组时指定的生产站点切换到创建保护组时指定的容灾站点。source：表示从创建保护组时指定的容灾站点切换到创建保护组时指定的生产站点。
    /// </summary>

    std::string getPriorityStation() const;
    bool priorityStationIsSet() const;
    void unsetpriorityStation();
    void setPriorityStation(const std::string& value);


protected:
    std::string priorityStation_;
    bool priorityStationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ReverseProtectionGroupRequestParams_H_
