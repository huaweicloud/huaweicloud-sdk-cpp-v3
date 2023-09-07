
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchResourceTag_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchResourceTag_H_

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
/// 标签信息体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  BatchResourceTag
    : public ModelBase
{
public:
    BatchResourceTag();
    virtual ~BatchResourceTag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchResourceTag members

    /// <summary>
    /// 标签键。 - 长度为1-128个unicode字符。 - 可以包含任何语种字母、数字、空格和_.:&#x3D;+-@，但首尾不能含有空格，不能以_sys_开头。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 标签值，删除标签时非必填。 - 最大长度255个unicode字符。 - 可以包含任何语种字母、数字、空格和_.:&#x3D;+-@。
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

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchResourceTag_H_
