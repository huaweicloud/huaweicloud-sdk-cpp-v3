
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AwParamBasicValue_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AwParamBasicValue_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AwParamBasicValue
    : public ModelBase
{
public:
    AwParamBasicValue();
    virtual ~AwParamBasicValue();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AwParamBasicValue members

    /// <summary>
    /// 参数默认值，用例有效
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 参数值范围，逻辑用例有效
    /// </summary>

    std::string getValueRange() const;
    bool valueRangeIsSet() const;
    void unsetvalueRange();
    void setValueRange(const std::string& value);


protected:
    std::string value_;
    bool valueIsSet_;
    std::string valueRange_;
    bool valueRangeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AwParamBasicValue_H_
