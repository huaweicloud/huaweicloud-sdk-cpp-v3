
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BindRulesTags_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BindRulesTags_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自动绑定规则标签
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  BindRulesTags
    : public ModelBase
{
public:
    BindRulesTags();
    virtual ~BindRulesTags();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BindRulesTags members

    /// <summary>
    /// key不能包含非打印字符ASCII(0-31)，“&#x3D;”,“*”,“&lt;”,“&gt;”,“\\\\”,“,”,“|”,“/”。 [key只能由中文，字母，数字，“-”，“_”组成。](tag:hws,hws_hk,fcs_vm,ctc)   [key只能由字母，数字，“_”，“-”组成。](tag:dt,ocb,tlf,sbc,g42,hcso_dt)
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// value不能包含非打印字符ASCII(0-31)，“&#x3D;”,“*”,“&lt;”,“&gt;”,“\\”,“,”,“|”,“/”。  [value只能由中文，字母，数字，“-”，“_”，“.”组成。](tag:hws,hws_hk,fcs_vm,ctc) [value只能由字母，数字，“_”，“-”组成。](tag:dt,ocb,tlf,sbc,g42,hcso_dt)
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BindRulesTags_H_
