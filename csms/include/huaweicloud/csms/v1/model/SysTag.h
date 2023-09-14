
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_SysTag_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_SysTag_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  SysTag
    : public ModelBase
{
public:
    SysTag();
    virtual ~SysTag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SysTag members

    /// <summary>
    /// 标签键。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 标签值。
    /// </summary>

    std::string getValues() const;
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string values_;
    bool valuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_SysTag_H_
