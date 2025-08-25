
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ChartValue_values_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ChartValue_values_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// values.yaml中的数据，数据结构以具体的模板为准
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ChartValue_values
    : public ModelBase
{
public:
    ChartValue_values();
    virtual ~ChartValue_values();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChartValue_values members

    /// <summary>
    /// 
    /// </summary>

    Object getBasic() const;
    bool basicIsSet() const;
    void unsetbasic();
    void setBasic(const Object& value);


protected:
    Object basic_;
    bool basicIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ChartValue_values_H_
