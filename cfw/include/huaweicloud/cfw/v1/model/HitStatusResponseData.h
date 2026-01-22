
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_HitStatusResponseData_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_HitStatusResponseData_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/RuleHitStatusListVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  HitStatusResponseData
    : public ModelBase
{
public:
    HitStatusResponseData();
    virtual ~HitStatusResponseData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HitStatusResponseData members

    /// <summary>
    /// RuleHitStatusListVO
    /// </summary>

    std::vector<RuleHitStatusListVO>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<RuleHitStatusListVO>& value);


protected:
    std::vector<RuleHitStatusListVO> records_;
    bool recordsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_HitStatusResponseData_H_
