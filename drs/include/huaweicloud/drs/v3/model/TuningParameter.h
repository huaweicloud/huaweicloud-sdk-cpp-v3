
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_TuningParameter_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_TuningParameter_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 调优参数
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  TuningParameter
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

    std::string getAvailability() const;
    bool availabilityIsSet() const;
    void unsetavailability();
    void setAvailability(const std::string& value);

    /// <summary>
    /// 参数范围。
    /// </summary>

    std::string getRange() const;
    bool rangeIsSet() const;
    void unsetrange();
    void setRange(const std::string& value);


protected:
    std::string paramName_;
    bool paramNameIsSet_;
    std::string paramValue_;
    bool paramValueIsSet_;
    std::string availability_;
    bool availabilityIsSet_;
    std::string range_;
    bool rangeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_TuningParameter_H_
