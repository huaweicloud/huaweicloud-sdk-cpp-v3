
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DimensionListResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DimensionListResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  DimensionListResult
    : public ModelBase
{
public:
    DimensionListResult();
    virtual ~DimensionListResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DimensionListResult members

    /// <summary>
    /// **参数解释**: 统计数据名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**: 活跃会话数。 **取值范围**: 不涉及。
    /// </summary>

    std::string getActiveNum() const;
    bool activeNumIsSet() const;
    void unsetactiveNum();
    void setActiveNum(const std::string& value);

    /// <summary>
    /// **参数解释**: 总会话数。 **取值范围**: 不涉及。
    /// </summary>

    std::string getTotalNum() const;
    bool totalNumIsSet() const;
    void unsettotalNum();
    void setTotalNum(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string activeNum_;
    bool activeNumIsSet_;
    std::string totalNum_;
    bool totalNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DimensionListResult_H_
