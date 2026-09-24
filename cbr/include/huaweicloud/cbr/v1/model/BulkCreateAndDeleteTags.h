
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BulkCreateAndDeleteTags_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BulkCreateAndDeleteTags_H_


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
class HUAWEICLOUD_CBR_V1_EXPORT  BulkCreateAndDeleteTags
    : public ModelBase
{
public:
    BulkCreateAndDeleteTags();
    virtual ~BulkCreateAndDeleteTags();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BulkCreateAndDeleteTags members

    /// <summary>
    /// 键。 key最大长度为36个字符。 key不能为空字符串。 key前后空格会被丢弃。 key不能包含非打印字符ASCII(0-31)，“&#x3D;”,“*”,“&lt;”,“&gt;”,“\\”,“,”,“|”,“/”。 [key只能由中文，字母，数字，“-”，“_”组成。](tag:hws,hws_hk,fcs_vm,ctc)   [key只能由字母，数字，“_”，“-”组成。](tag:dt,ocb,tlf,sbc,g42,hcso_dt,tm) 创建时如果请求体中存在重复key则报错。 创建时，不允许重复key，如果数据库存在就覆盖。 删除时，允许重复key。 删除时，如果删除的标签不存在，默认处理成功,删除时不对标签字符集范围做校验。 删除时tags结构体不能缺失，key不能为空，或者空字符串。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 值。 添加标签时value值必选，删除标签时value值可选。 value最大长度为43个字符。 value可以为空字符串。 value前后的空格会被丢弃。 value不能包含非打印字符ASCII(0-31)，“&#x3D;”,“*”,“&lt;”,“&gt;”,“\\”,“,”,“|”,“/”。 [value只能由中文，字母，数字，“-”，“_”，“.”组成。](tag:hws,hws_hk,fcs_vm,ctc) [value只能由字母，数字，“_”，“-”组成。](tag:dt,ocb,tlf,sbc,g42,hcso_dt,tm)
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

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BulkCreateAndDeleteTags_H_
