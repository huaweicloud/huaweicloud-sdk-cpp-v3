
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyWatermarkRule_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyWatermarkRule_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/WatermarkLocation.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ModifyWatermarkRule
    : public ModelBase
{
public:
    ModifyWatermarkRule();
    virtual ~ModifyWatermarkRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyWatermarkRule members

    /// <summary>
    /// 水印规则名称，如果不填说明不修改。
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WatermarkLocation getLocation() const;
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const WatermarkLocation& value);


protected:
    std::string ruleName_;
    bool ruleNameIsSet_;
    WatermarkLocation location_;
    bool locationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyWatermarkRule_H_
