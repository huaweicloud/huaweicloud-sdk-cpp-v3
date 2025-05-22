
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DualActiveRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DualActiveRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 参数解释 搭建双活的目标实例信息。 约束限制 不涉及。 取值范围 不涉及。 默认取值 不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  DualActiveRequestBody
    : public ModelBase
{
public:
    DualActiveRequestBody();
    virtual ~DualActiveRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DualActiveRequestBody members

    /// <summary>
    /// 参数解释 搭建双活目标实例所在的region。 约束限制 不涉及。 取值范围 不涉及。 默认取值 不涉及。
    /// </summary>

    std::string getDestinationRegion() const;
    bool destinationRegionIsSet() const;
    void unsetdestinationRegion();
    void setDestinationRegion(const std::string& value);

    /// <summary>
    /// 参数解释 搭建双活目标实例ID。 约束限制 不涉及。 取值范围 不涉及。 默认取值 不涉及。
    /// </summary>

    std::string getDestinationInstanceId() const;
    bool destinationInstanceIdIsSet() const;
    void unsetdestinationInstanceId();
    void setDestinationInstanceId(const std::string& value);


protected:
    std::string destinationRegion_;
    bool destinationRegionIsSet_;
    std::string destinationInstanceId_;
    bool destinationInstanceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DualActiveRequestBody_H_
