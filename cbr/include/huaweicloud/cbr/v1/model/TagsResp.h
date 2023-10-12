
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_TagsResp_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_TagsResp_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  TagsResp
    : public ModelBase
{
public:
    TagsResp();
    virtual ~TagsResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagsResp members

    /// <summary>
    /// 键。  key最大长度36个字符。  key不能为空字符串。  key只能由中文，字母，数字，“-”，“_”组成。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 值列表。  value最大长度43个字符。  value可以为空字符串。  key只能由中文，字母，数字，“-”，“_”组成。
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

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_TagsResp_H_
