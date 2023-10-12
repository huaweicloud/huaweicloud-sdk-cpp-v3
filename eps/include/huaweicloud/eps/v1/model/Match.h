
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_Match_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_Match_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 匹配字段
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  Match
    : public ModelBase
{
public:
    Match();
    virtual ~Match();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Match members

    /// <summary>
    /// 键。有matches参数时，该字段为必填，固定为resource_name。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 值。即资源名称，有matches参数时，该字段为必填，且默认为模糊搜索，如”message.com”。每个值最大长度255个字符。
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

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_Match_H_
