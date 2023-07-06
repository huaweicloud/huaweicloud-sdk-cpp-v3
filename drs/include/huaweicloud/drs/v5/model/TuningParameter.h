
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_TuningParameter_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_TuningParameter_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 调优参数。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  TuningParameter
    : public ModelBase
{
public:
    TuningParameter();
    virtual ~TuningParameter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TuningParameter members

    /// <summary>
    /// 参数名称。
    /// </summary>

    std::string getParamName() const;
    bool paramNameIsSet() const;
    void unsetparamName();
    void setParamName(const std::string& value);

    /// <summary>
    /// 参数取值。
    /// </summary>

    std::string getParamValue() const;
    bool paramValueIsSet() const;
    void unsetparamValue();
    void setParamValue(const std::string& value);

    /// <summary>
    /// 是否可用。
    /// </summary>

    bool isAvailability() const;
    bool availabilityIsSet() const;
    void unsetavailability();
    void setAvailability(bool value);


protected:
    std::string paramName_;
    bool paramNameIsSet_;
    std::string paramValue_;
    bool paramValueIsSet_;
    bool availability_;
    bool availabilityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_TuningParameter_H_
