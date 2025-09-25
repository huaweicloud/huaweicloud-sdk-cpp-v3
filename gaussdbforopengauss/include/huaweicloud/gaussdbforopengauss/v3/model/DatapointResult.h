
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DatapointResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DatapointResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  DatapointResult
    : public ModelBase
{
public:
    DatapointResult();
    virtual ~DatapointResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatapointResult members

    /// <summary>
    /// **参数解释**: 指标项名，实例指标用实例ID、节点指标用节点名称、组件指标用组件名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDatapointName() const;
    bool datapointNameIsSet() const;
    void unsetdatapointName();
    void setDatapointName(const std::string& value);

    /// <summary>
    /// **参数解释**: 指标值集合。
    /// </summary>

    std::vector<std::string>& getDatapointValues();
    bool datapointValuesIsSet() const;
    void unsetdatapointValues();
    void setDatapointValues(const std::vector<std::string>& value);


protected:
    std::string datapointName_;
    bool datapointNameIsSet_;
    std::vector<std::string> datapointValues_;
    bool datapointValuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DatapointResult_H_
