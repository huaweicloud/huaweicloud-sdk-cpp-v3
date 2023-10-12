
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_TagReq_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_TagReq_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 标签
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  TagReq
    : public ModelBase
{
public:
    TagReq();
    virtual ~TagReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagReq members

    /// <summary>
    /// 键。最大长度127个unicode字符。 key不能为空。(搜索时不对此参数做校验)
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 值列表。每个值最大长度255个unicode字符，如果values为空列表，则表示any_value。value之间为或的关系。
    /// </summary>

    std::vector<std::string>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<std::string>& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::vector<std::string> values_;
    bool valuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_TagReq_H_
