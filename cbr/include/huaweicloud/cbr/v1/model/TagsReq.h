
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_TagsReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_TagsReq_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_CBR_V1_EXPORT  TagsReq
    : public ModelBase
{
public:
    TagsReq();
    virtual ~TagsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagsReq members

    /// <summary>
    /// 键。  最大长度127个unicode字符。  不允许为空字符串。  前后的空格会被丢弃。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 值列表。  values中最多包含10个value。  每个value最大长度255个unicode字符。前后的空格会被丢弃。  values中value不允许重复。  values中多个value之间是\&quot;或\&quot;的关系。  values允许为空列表，value允许为空字符串。  values如果为空列表，表示任意值。  \\*为系统保留字符，如果value是以\\*开头表示按照\\*后面的值全模糊匹配，不能只传入“\\*”。
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

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_TagsReq_H_
