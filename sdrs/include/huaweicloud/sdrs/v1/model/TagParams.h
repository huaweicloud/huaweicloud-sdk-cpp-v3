
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_TagParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_TagParams_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 值为列表的tag结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  TagParams
    : public ModelBase
{
public:
    TagParams();
    virtual ~TagParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagParams members

    /// <summary>
    /// 键。最大长度127个unicode字符。 key不能为空。key不能为空或者空字符串，不能为空格，使用之前先trim 前后半角空格。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 值列表。每个值最大长度255个unicode字符，使用之前先trim 前后半角空格。\\*为系统保留字符，如果value是以\\*开头表示按照\\*后面的值全模糊匹配。不能只传入“\\*”。如果values为空列表，则表示any_value（查询任意value）。value之间为或的关系。
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

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_TagParams_H_
