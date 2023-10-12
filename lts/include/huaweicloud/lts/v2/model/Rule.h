
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_Rule_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_Rule_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  Rule
    : public ModelBase
{
public:
    Rule();
    virtual ~Rule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Rule members

    /// <summary>
    /// 内置系统模板类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 系统iton模板名称。
    /// </summary>

    std::string getParam() const;
    bool paramIsSet() const;
    void unsetparam();
    void setParam(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string param_;
    bool paramIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_Rule_H_
