
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateTopicAttributeRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateTopicAttributeRequestBody_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  UpdateTopicAttributeRequestBody
    : public ModelBase
{
public:
    UpdateTopicAttributeRequestBody();
    virtual ~UpdateTopicAttributeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTopicAttributeRequestBody members

    /// <summary>
    /// 1. 当请求参数name为access_policy时，value为Topic属性值，最大支持30KB。  2. 当请求参数name为introduction时，value为topic简介，最大长度120B。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateTopicAttributeRequestBody_H_
