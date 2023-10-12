
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_Tags_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_Tags_H_


#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 镜像标签
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  Tags
    : public ModelBase
{
public:
    Tags();
    virtual ~Tags();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Tags members

    /// <summary>
    /// 标签的键。最大长度127个unicode字符，key不能为空。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 标签的值列表。每个值最大长度255个unicode字符，如果values为空列表，则标签的值可以是任意值。值列表中的值之间为或的关系。
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

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_Tags_H_
