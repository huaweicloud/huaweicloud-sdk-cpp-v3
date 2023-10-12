
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDiffDetailsResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDiffDetailsResult_H_


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
/// 参数配置模板差异列表
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListDiffDetailsResult
    : public ModelBase
{
public:
    ListDiffDetailsResult();
    virtual ~ListDiffDetailsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDiffDetailsResult members

    /// <summary>
    /// 参数名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 比较参数组的参数值。
    /// </summary>

    std::string getSourceValue() const;
    bool sourceValueIsSet() const;
    void unsetsourceValue();
    void setSourceValue(const std::string& value);

    /// <summary>
    /// 目标参数组的参数值。
    /// </summary>

    std::string getTargetValue() const;
    bool targetValueIsSet() const;
    void unsettargetValue();
    void setTargetValue(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string sourceValue_;
    bool sourceValueIsSet_;
    std::string targetValue_;
    bool targetValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDiffDetailsResult_H_
