
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_DiffDetails_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_DiffDetails_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  DiffDetails
    : public ModelBase
{
public:
    DiffDetails();
    virtual ~DiffDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DiffDetails members

    /// <summary>
    /// 参数名称
    /// </summary>

    std::string getParameterName() const;
    bool parameterNameIsSet() const;
    void unsetparameterName();
    void setParameterName(const std::string& value);

    /// <summary>
    /// 比较参数模板的参数值。
    /// </summary>

    std::string getSourceValue() const;
    bool sourceValueIsSet() const;
    void unsetsourceValue();
    void setSourceValue(const std::string& value);

    /// <summary>
    /// 目标参数模板的参数值。
    /// </summary>

    std::string getTargetValue() const;
    bool targetValueIsSet() const;
    void unsettargetValue();
    void setTargetValue(const std::string& value);


protected:
    std::string parameterName_;
    bool parameterNameIsSet_;
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

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_DiffDetails_H_
